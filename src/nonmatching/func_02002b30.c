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

void func_02002b30(int *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;

  lVar1 = (longlong)param_1[1] * (longlong)param_2[2];
  uVar13 = (uint)lVar1;
  lVar2 = (longlong)param_1[2] * (longlong)param_2[1];
  uVar7 = (uint)lVar2;
  uVar8 = uVar13 - uVar7;
  lVar3 = (longlong)param_1[2] * (longlong)*param_2;
  uVar14 = (uint)lVar3;
  lVar4 = (longlong)*param_1 * (longlong)param_2[2];
  uVar11 = (uint)lVar4;
  uVar12 = uVar14 - uVar11;
  lVar5 = (longlong)*param_1 * (longlong)param_2[1];
  uVar15 = (uint)lVar5;
  lVar6 = (longlong)param_1[1] * (longlong)*param_2;
  uVar9 = (uint)lVar6;
  uVar10 = uVar15 - uVar9;
  *param_3 = uVar8 + 0x800 >> 0xc |
             (((int)((ulonglong)lVar1 >> 0x20) -
              ((int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar13 < uVar7))) +
             (uint)(0xfffff7ff < uVar8)) * 0x100000;
  param_3[1] = uVar12 + 0x800 >> 0xc |
               (((int)((ulonglong)lVar3 >> 0x20) -
                ((int)((ulonglong)lVar4 >> 0x20) + (uint)(uVar14 < uVar11))) +
               (uint)(0xfffff7ff < uVar12)) * 0x100000;
  param_3[2] = uVar10 + 0x800 >> 0xc |
               (((int)((ulonglong)lVar5 >> 0x20) -
                ((int)((ulonglong)lVar6 >> 0x20) + (uint)(uVar15 < uVar9))) +
               (uint)(0xfffff7ff < uVar10)) * 0x100000;
  return;
}
