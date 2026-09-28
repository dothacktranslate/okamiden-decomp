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

extern int func_02002964();
extern int func_020029f4();

void func_02062238(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;

  iVar11 = (uint)*(ushort *)(param_2 + 0x2c) << 0xc;
  iVar13 = (uint)*(ushort *)(param_2 + 0x2e) << 0xc;
  func_020029f4(iVar13,iVar11,(uint)*(ushort *)(param_2 + 0x2c),param_4,param_4);
  lVar1 = (longlong)*(int *)(param_2 + 0x18) * (longlong)(int)*(short *)(param_2 + 0x22);
  uVar10 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)*(int *)(param_2 + 0x18) * (longlong)(int)*(short *)(param_2 + 0x20);
  uVar9 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)*(int *)(param_2 + 0x1c) * (longlong)(int)*(short *)(param_2 + 0x22);
  lVar2 = (longlong)*(int *)(param_2 + 0x1c) * (longlong)(int)*(short *)(param_2 + 0x20);
  uVar8 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  uVar7 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  *param_1 = uVar10;
  param_1[5] = uVar8;
  iVar4 = func_02002964();
  param_1[1] = (int)(uVar7 * iVar4) >> 0xc;
  func_020029f4(iVar11,iVar13);
  uVar6 = (uint)*(ushort *)(param_2 + 0x2c);
  uVar5 = (uint)*(ushort *)(param_2 + 0x2e);
  iVar11 = *(int *)(param_2 + 0x28) * uVar5 + uVar5 * -0x800;
  lVar2 = (longlong)(int)uVar9 * (longlong)iVar11;
  uVar12 = (uint)lVar2;
  iVar13 = uVar6 * -0x800 - *(int *)(param_2 + 0x24) * uVar6;
  lVar1 = (longlong)iVar13 * (longlong)(int)uVar7 + (longlong)(int)uVar8 * (longlong)iVar11;
  lVar3 = (longlong)(int)uVar10 * (longlong)iVar13;
  uVar7 = (uint)lVar3;
  param_1[0xc] = (uVar7 - uVar12 >> 8 |
                 ((int)((ulonglong)lVar3 >> 0x20) -
                 ((int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar7 < uVar12))) * 0x1000000) +
                 uVar6 * 0x8000;
  param_1[0xd] = ((uint)lVar1 >> 8 | (int)((ulonglong)lVar1 >> 0x20) << 0x18) + uVar5 * 0x8000;
  iVar11 = func_02002964();
  param_1[4] = (int)(-uVar9 * iVar11) >> 0xc;
  return;
}
