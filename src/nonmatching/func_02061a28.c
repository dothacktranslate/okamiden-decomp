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

void func_02061a28(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  iVar6 = (uint)*(ushort *)(param_2 + 0x2c) << 0xc;
  iVar1 = (uint)*(ushort *)(param_2 + 0x2e) << 0xc;
  func_020029f4(iVar1,iVar6,(uint)*(ushort *)(param_2 + 0x2c),param_4,param_4);
  lVar3 = (longlong)*(int *)(param_2 + 0x18) * (longlong)(int)*(short *)(param_2 + 0x20);
  uVar10 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
  lVar3 = (longlong)*(int *)(param_2 + 0x18) * (longlong)(int)*(short *)(param_2 + 0x22);
  uVar9 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
  lVar3 = (longlong)*(int *)(param_2 + 0x1c) * (longlong)(int)*(short *)(param_2 + 0x20);
  lVar4 = (longlong)*(int *)(param_2 + 0x1c) * (longlong)(int)*(short *)(param_2 + 0x22);
  uVar8 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
  uVar7 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
  *param_1 = uVar9;
  param_1[5] = uVar7;
  iVar5 = func_02002964();
  param_1[1] = (int)(-uVar8 * iVar5) >> 0xc;
  func_020029f4(iVar6,iVar1);
  uVar2 = *(ushort *)(param_2 + 0x2e);
  param_1[0xc] = (uint)*(ushort *)(param_2 + 0x2c) * (*(int *)(param_2 + 0x18) - (uVar10 + uVar9)) *
                 8;
  param_1[0xd] = (uint)uVar2 * (((uVar8 - uVar7) - *(int *)(param_2 + 0x1c)) + 0x2000) * 8;
  iVar6 = func_02002964();
  param_1[4] = (int)(uVar10 * iVar6) >> 0xc;
  return;
}
