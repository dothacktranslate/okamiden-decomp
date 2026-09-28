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

void func_02061654(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;

  bVar1 = *(byte *)(param_3 + 3);
  if ((param_4 & 4) == 0) {
    uVar9 = param_2[1];
    uVar7 = param_2[2];
    param_1[1] = *param_2;
    param_1[2] = uVar9;
    param_1[3] = uVar7;
    iVar5 = ((unsigned int)0x02061790);
    if ((bVar1 & 2) != 0) {
      bVar2 = *(byte *)(param_3 + 1);
      iVar3 = (short)(ushort)bVar2 * 0x18;
      uVar7 = param_2[3];
      *(uint *)((*(unsigned int *)0x0206178c) + 0xc4 + (uint)(bVar2 >> 5) * 4) =
           *(uint *)((*(unsigned int *)0x0206178c) + 0xc4 + (uint)(bVar2 >> 5) * 4) & ~(1 << (bVar2 & 0x1f));
      iVar6 = ((unsigned int)0x02061794);
      uVar9 = param_2[4];
      *(uint *)(iVar5 + iVar3) = uVar7;
      iVar5 = ((unsigned int)0x02061798);
      uVar7 = param_2[5];
      *(uint *)(iVar6 + iVar3) = uVar9;
      *(uint *)(iVar5 + iVar3) = uVar7;
    }
  }
  else {
    *param_1 = *param_1 | 1;
    if ((bVar1 & 2) != 0) {
      uVar7 = (uint)(*(byte *)(param_3 + 1) >> 5);
      *(uint *)((*(unsigned int *)0x0206178c) + 0xc4 + uVar7 * 4) =
           *(uint *)((*(unsigned int *)0x0206178c) + 0xc4 + uVar7 * 4) | 1 << (*(byte *)(param_3 + 1) & 0x1f);
    }
  }
  piVar4 = ((unsigned int)0x0206178c);
  if ((bVar1 & 1) != 0) {
    uVar7 = *param_1;
    bVar1 = *(byte *)(param_3 + 2);
    *param_1 = uVar7 | 0x20;
    if ((*(uint *)(*piVar4 + (uint)(bVar1 >> 5) * 4 + 0xc4) & 1 << (bVar1 & 0x1f)) == 0) {
      puVar8 = (uint *)((uint)bVar1 * 0x18 + ((unsigned int)0x02061790));
      uVar7 = puVar8[1];
      uVar9 = puVar8[2];
      param_1[4] = *puVar8;
      param_1[5] = uVar7;
      param_1[6] = uVar9;
    }
    else {
      *param_1 = uVar7 | 0x28;
    }
  }
  *param_1 = *param_1 | 0x10;
  return;
}
