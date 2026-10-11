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

void func_02062834(uint *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;

  iVar8 = (uint)*(ushort *)(param_2 + 0x2c) << 0xc;
  iVar1 = (uint)*(ushort *)(param_2 + 0x2e) << 0xc;
  func_020029f4(iVar1,iVar8);
  sVar3 = *(short *)(param_2 + 0x22);
  iVar7 = *(int *)(param_2 + 0x18);
  uVar12 = *(uint *)(param_2 + 0x1c);
  lVar4 = (longlong)iVar7 * (longlong)(int)sVar3;
  *param_1 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
  lVar4 = (longlong)(int)uVar12 * (longlong)(int)sVar3;
  uVar10 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
  iVar14 = (int)*(short *)(param_2 + 0x20);
  param_1[5] = uVar10;
  lVar4 = (longlong)iVar7 * (longlong)iVar14;
  uVar11 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
  iVar7 = func_02002964();
  param_1[1] = (int)(((uint)((longlong)(int)uVar12 * (longlong)iVar14) >> 0xc |
                     (int)((ulonglong)((longlong)(int)uVar12 * (longlong)iVar14) >> 0x20) << 0x14) *
                    iVar7) >> 0xc;
  func_020029f4(iVar8,iVar1);
  uVar2 = *(ushort *)(param_2 + 0x2c);
  lVar4 = (longlong)*(int *)(param_2 + 0x24) * (longlong)iVar14;
  uVar9 = (uint)lVar4;
  uVar13 = *(uint *)(param_2 + 0x18);
  lVar5 = (longlong)*(int *)(param_2 + 0x28) * (longlong)(int)*(short *)(param_2 + 0x22);
  uVar15 = (uint)lVar5;
  iVar8 = (int)((ulonglong)lVar4 >> 0x20) -
          ((int)((ulonglong)lVar5 >> 0x20) + (uint)(uVar9 < uVar15));
  uVar9 = uVar9 - uVar15 >> 0xc | iVar8 * 0x100000;
  uVar6 = (longlong)(int)*(short *)(param_2 + 0x22) * (longlong)*(int *)(param_2 + 0x24) +
          (longlong)*(int *)(param_2 + 0x28) * (longlong)iVar14 >> 0xc;
  lVar4 = (ulonglong)uVar12 * (ulonglong)uVar9;
  param_1[0xd] = -(uint)*(ushort *)(param_2 + 0x2e) *
                 (uVar10 + ((uint)lVar4 >> 0xc |
                           ((iVar8 >> 0xc) * uVar12 +
                           uVar9 * ((int)uVar12 >> 0x1f) + (int)((ulonglong)lVar4 >> 0x20)) *
                           0x100000) + -0x1000) * 0x10;
  lVar4 = (ulonglong)uVar13 * (uVar6 & 0xffffffff);
  param_1[0xc] = (uint)uVar2 *
                 (uVar11 - ((uint)lVar4 >> 0xc |
                           ((int)(uVar6 >> 0x20) * uVar13 +
                           (int)uVar6 * ((int)uVar13 >> 0x1f) + (int)((ulonglong)lVar4 >> 0x20)) *
                           0x100000)) * 0x10;
  iVar8 = func_02002964();
  param_1[4] = (int)(-uVar11 * iVar8) >> 0xc;
  return;
}
