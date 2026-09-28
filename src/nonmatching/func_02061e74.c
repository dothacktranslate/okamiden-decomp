typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef signed char sbyte;
typedef unsigned char byte;

typedef long long longlong;
typedef unsigned long long ulonglong;

typedef int bool;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

typedef int code();

extern int LZCOUNT();

#define CONCAT11(a,b) \
    ((((unsigned int)(a) & 0xffU) << 8) | \
     ((unsigned int)(b) & 0xffU))

#define CONCAT12(a,b) \
    ((((unsigned int)(a) & 0xffU) << 16) | \
     ((unsigned int)(b) & 0xffffU))

#define CONCAT13(a,b) \
    ((((unsigned int)(a) & 0xffU) << 24) | \
     ((unsigned int)(b) & 0xffffffU))

#define CONCAT14(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 32) | \
     ((unsigned long long)(b) & 0xffffffffULL))

#define CONCAT15(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 40) | \
     ((unsigned long long)(b) & 0xffffffffffULL))

#define CONCAT16(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 48) | \
     ((unsigned long long)(b) & 0xffffffffffffULL))

#define CONCAT17(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 56) | \
     ((unsigned long long)(b) & 0xffffffffffffffULL))

#define CONCAT21(a,b) \
    ((((unsigned int)(a) & 0xffffU) << 8) | \
     ((unsigned int)(b) & 0xffU))

#define CONCAT22(a,b) \
    ((((unsigned int)(a) & 0xffffU) << 16) | \
     ((unsigned int)(b) & 0xffffU))

#define CONCAT31(a,b) \
    ((((unsigned int)(a) & 0xffffffU) << 8) | \
     ((unsigned int)(b) & 0xffU))

#define CONCAT44(a,b) \
    ((((unsigned long long)(a)) << 32) | \
     ((unsigned int)(b)))

#define CARRY4(a,b) \
    ((uint)(a) > (uint)(0xffffffffU - (uint)(b)))

#define SCARRY4(a,b) \
    ((((int)(a) < 0) == ((int)(b) < 0)) && \
     (((int)((uint)(a) + (uint)(b)) < 0) != \
      ((int)(a) < 0)))

#define SBORROW4(a,b) \
    ((((int)(a) < 0) != ((int)(b) < 0)) && \
     (((int)((uint)(a) - (uint)(b)) < 0) != \
      ((int)(a) < 0)))

extern int func_020098b4();

void func_02061e74(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;

  piVar4 = ((unsigned int)0x0206206c);
  bVar1 = *(byte *)(param_3 + 1);
  uVar10 = (uint)bVar1;
  bVar2 = *(byte *)(param_3 + 2);
  uVar7 = (uint)bVar2;
  if ((param_4 & 4) == 0) {
    uVar13 = *param_2;
    uVar12 = param_2[1];
    uVar11 = param_2[2];
    param_1[1] = uVar13;
    param_1[2] = uVar12;
    param_1[3] = uVar11;
    iVar5 = ((unsigned int)0x02062070);
    if ((*(uint *)(*piVar4 + (uint)(bVar2 >> 5) * 4 + 0xc4) & 1 << (uVar7 & 0x1f)) != 0) {
      func_020098b4(param_2,uVar10 * 0x18 + ((unsigned int)0x02062070),0x18,((unsigned int)0x02062070),param_4);
      *(uint *)(*piVar4 + 0xc4 + (uint)(bVar1 >> 5) * 4) =
           *(uint *)(*piVar4 + 0xc4 + (uint)(bVar1 >> 5) * 4) & ~(1 << (uVar10 & 0x1f));
      *param_1 = *param_1 | 0x18;
      return;
    }
    iVar14 = uVar7 * 0x18;
    iVar8 = *piVar4 + 0xc4;
    *(uint *)(iVar8 + (uint)(bVar1 >> 5) * 4) =
         *(uint *)(iVar8 + (uint)(bVar1 >> 5) * 4) & ~(1 << (uVar10 & 0x1f));
    iVar9 = uVar10 * 0x18;
    lVar3 = (longlong)(int)uVar13 * (longlong)*(int *)(iVar5 + iVar14);
    *(uint *)(iVar5 + iVar9) = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    iVar8 = ((unsigned int)0x02062078);
    lVar3 = (longlong)(int)uVar12 * (longlong)*(int *)(((unsigned int)0x02062074) + iVar14);
    *(uint *)(((unsigned int)0x02062074) + iVar9) = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    iVar6 = ((unsigned int)0x0206207c);
    lVar3 = (longlong)(int)uVar11 * (longlong)*(int *)(iVar8 + iVar14);
    *(uint *)(iVar8 + iVar9) = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    iVar8 = ((unsigned int)0x02062080);
    lVar3 = (longlong)(int)param_2[3] * (longlong)*(int *)(iVar6 + iVar14);
    *(uint *)(iVar6 + iVar9) = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    uVar7 = param_2[5];
    lVar3 = (longlong)(int)param_2[4] * (longlong)*(int *)(iVar8 + iVar14);
    *(uint *)(iVar8 + iVar9) = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    lVar3 = (longlong)(int)uVar7 * (longlong)*(int *)(((unsigned int)0x02062084) + iVar14);
    *(uint *)(((unsigned int)0x02062084) + iVar9) = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    func_020098b4(iVar5 + iVar14,param_1 + 4,0x18,iVar9,param_4);
    return;
  }
  *param_1 = *param_1 | 1;
  iVar5 = ((unsigned int)0x02062070);
  iVar8 = *piVar4;
  if ((*(uint *)(iVar8 + (uint)(bVar2 >> 5) * 4 + 0xc4) & 1 << (uVar7 & 0x1f)) != 0) {
    *(uint *)(iVar8 + 0xc4 + (uint)(bVar1 >> 5) * 4) =
         *(uint *)(iVar8 + 0xc4 + (uint)(bVar1 >> 5) * 4) | 1 << (uVar10 & 0x1f);
    *param_1 = *param_1 | 0x18;
    return;
  }
  func_020098b4(((unsigned int)0x02062070) + uVar7 * 0x18,uVar10 * 0x18 + ((unsigned int)0x02062070),0x18,iVar8,param_4);
  func_020098b4(iVar5 + uVar7 * 0x18,param_1 + 4,0x18);
  return;
}
