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

void func_02000e18(int *param_1,int *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;

  iVar10 = 0x1000 - param_4;
  iVar5 = *param_2;
  uVar8 = param_2[1];
  uVar1 = (longlong)iVar10 * (longlong)iVar5;
  iVar13 = (int)(uVar1 >> 0x20);
  lVar2 = (uVar1 & 0xffffffff) * (ulonglong)uVar8;
  uVar7 = param_2[2];
  lVar3 = (uVar1 & 0xffffffff) * (ulonglong)uVar7;
  uVar6 = (uint)((longlong)param_3 * (longlong)iVar5) >> 0xc |
          (int)((ulonglong)((longlong)param_3 * (longlong)iVar5) >> 0x20) << 0x14;
  uVar12 = (uint)lVar2 >> 0x18 |
           (((int)uVar8 >> 0x1f) * (int)uVar1 + uVar8 * iVar13 + (int)((ulonglong)lVar2 >> 0x20)) *
           0x100;
  uVar4 = (uint)lVar3 >> 0x18 |
          (((int)uVar7 >> 0x1f) * (int)uVar1 + uVar7 * iVar13 + (int)((ulonglong)lVar3 >> 0x20)) *
          0x100;
  lVar2 = (longlong)iVar5 * (longlong)iVar5 * (longlong)iVar10;
  *param_1 = ((uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100) + param_4;
  lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar8 * (longlong)iVar10;
  param_1[4] = ((uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100) + param_4;
  lVar2 = (longlong)(int)uVar7 * (longlong)(int)uVar7 * (longlong)iVar10;
  param_1[8] = ((uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100) + param_4;
  uVar9 = (uint)((longlong)param_3 * (longlong)(int)uVar8) >> 0xc |
          (int)((ulonglong)((longlong)param_3 * (longlong)(int)uVar8) >> 0x20) << 0x14;
  uVar11 = (uint)((longlong)param_3 * (longlong)(int)uVar7) >> 0xc |
           (int)((ulonglong)((longlong)param_3 * (longlong)(int)uVar7) >> 0x20) << 0x14;
  param_1[3] = uVar12 - uVar11;
  param_1[2] = uVar4 - uVar9;
  param_1[6] = uVar4 + uVar9;
  lVar2 = (longlong)iVar10 * (longlong)(int)uVar8 * (longlong)(int)uVar7;
  uVar4 = (uint)lVar2 >> 0x18 | (int)((ulonglong)lVar2 >> 0x20) * 0x100;
  param_1[1] = uVar12 + uVar11;
  param_1[5] = uVar4 + uVar6;
  param_1[7] = uVar4 - uVar6;
  return;
}
