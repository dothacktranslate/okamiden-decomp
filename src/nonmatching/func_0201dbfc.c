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

ulonglong func_0201dbfc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;

  uVar12 = param_2 ^ param_4;
  uVar13 = uVar12 & 0x80000000;
  uVar9 = param_2 >> 0x14;
  param_2 = param_2 << 0xb;
  uVar4 = param_1 >> 0x15;
  uVar5 = param_2 | uVar4;
  param_1 = param_1 << 0xb;
  uVar6 = param_1;
  if (uVar9 * 0x200000 == 0 || uVar9 * 0x200000 == -0x200000) {
    if ((uVar9 & 0xfffff7ff) != 0) {
      if (param_1 != 0 || ((param_2 & 0x7fffffff) != 0 || uVar4 != 0)) {
        return 0x7fffffffffffffff;
      }
      iVar10 = (param_4 >> 0x14) * 0x200000;
      if (iVar10 == 0) {
        if ((param_4 << 0xb == 0 && param_3 >> 0x15 == 0) && param_3 << 0xb == 0) {
          return 0x7fffffffffffffff;
        }
      }
      else if ((iVar10 == -0x200000) &&
              (param_3 << 0xb != 0 || ((param_4 << 0xb & 0x7fffffff) != 0 || param_3 >> 0x15 != 0)))
      {
        return 0x7fffffffffffffff;
      }
      goto LAB_0201ded8;
    }
    if (param_1 == 0 && ((param_2 & 0x7fffffff) == 0 && uVar4 == 0)) {
      iVar10 = (param_4 >> 0x14) * 0x200000;
      if ((iVar10 != 0) && (iVar10 == -0x200000)) {
        if ((param_3 & 0x1fffff) != 0 || ((param_4 & 0xfffff) != 0 || param_3 >> 0x15 != 0)) {
          return 0x7fffffffffffffff;
        }
        return 0x7fffffffffffffff;
      }
      goto LAB_0201df4c;
    }
    uVar9 = 1;
    if (uVar5 == 0) {
      uVar9 = 0xffffffe1;
      uVar6 = 0;
      uVar5 = param_1;
      if (-1 < (int)param_1) goto LAB_0201dd84;
    }
    else {
LAB_0201dd84:
      uVar4 = 0x20 - LZCOUNT(uVar5);
      param_1 = uVar5 << LZCOUNT(uVar5) | uVar6 >> (uVar4 & 0xff);
      uVar4 = 0x20 - uVar4;
      uVar6 = uVar6 << (uVar4 & 0xff);
      uVar9 = uVar9 - uVar4;
    }
    uVar7 = param_4 << 0xb | param_3 >> 0x15;
    uVar4 = param_3 << 0xb;
    iVar10 = (param_4 >> 0x14) * 0x200000;
    if (iVar10 != 0 && iVar10 != -0x200000) {
      param_3 = uVar7 | 0x80000000;
      uVar8 = param_4 >> 0x14 & 0xfffff7ff;
      goto LAB_0201dc50;
    }
  }
  else {
    uVar9 = uVar9 & 0xfffff7ff;
    uVar7 = param_4 << 0xb | param_3 >> 0x15;
    uVar4 = param_3 << 0xb;
    iVar10 = (param_4 >> 0x14) * 0x200000;
    param_1 = uVar5 | 0x80000000;
    if (iVar10 != 0 && iVar10 != -0x200000) {
      param_3 = uVar7 | 0x80000000;
      uVar8 = param_4 >> 0x14 & 0xfffff7ff;
      goto LAB_0201dc50;
    }
  }
  param_3 = param_3 << 0xb;
  if ((param_4 >> 0x14 & 0xfffff7ff) != 0) {
    if (param_3 != 0 || (uVar7 & 0x7fffffff) != 0) {
      return 0x7fffffffffffffff;
    }
LAB_0201ded8:
    return (ulonglong)(uVar13 | ((unsigned int)0x0201df5c)) << 0x20;
  }
  if (param_3 == 0 && (uVar7 & 0x7fffffff) == 0) {
LAB_0201df4c:
    return ((ulonglong)uVar12 & 0x80000000) << 0x20;
  }
  uVar8 = 1;
  uVar4 = param_3;
  if (uVar7 == 0) {
    uVar8 = 0xffffffe1;
    uVar4 = 0;
    uVar7 = param_3;
    if ((int)param_3 < 0) goto LAB_0201dc50;
  }
  uVar5 = 0x20 - LZCOUNT(uVar7);
  param_3 = uVar7 << LZCOUNT(uVar7) | uVar4 >> (uVar5 & 0xff);
  uVar5 = 0x20 - uVar5;
  uVar4 = uVar4 << (uVar5 & 0xff);
  uVar8 = uVar8 - uVar5;
LAB_0201dc50:
  iVar10 = uVar8 + uVar9;
  lVar2 = (ulonglong)param_3 * (ulonglong)uVar6 + ((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20);
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar1 = (ulonglong)uVar4 * (ulonglong)param_1;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar3 = (ulonglong)param_3 * (ulonglong)param_1 +
          (ulonglong)
          CONCAT14(CARRY4(uVar9,uVar5) ||
                   CARRY4(uVar9 + uVar5,(uint)CARRY4((uint)lVar1,(uint)lVar2)),
                   (int)((ulonglong)(lVar2 + lVar1) >> 0x20));
  uVar9 = (uint)lVar3;
  uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
  if ((int)(lVar2 + lVar1) != 0 || (int)((ulonglong)uVar4 * (ulonglong)uVar6) != 0) {
    uVar9 = uVar9 | 1;
  }
  if (-1 < lVar3) {
    iVar10 = iVar10 + -1;
    bVar14 = CARRY4(uVar9,uVar9);
    uVar9 = uVar9 * 2;
    uVar5 = uVar5 * 2 + (uint)bVar14;
  }
  iVar11 = iVar10 + -0x3fe;
  if ((iVar11 < 0) || (iVar11 == 0)) {
    if (iVar11 == -0x34) {
      return CONCAT44(uVar12,(uint)(uVar9 != 0 || (uVar5 & 0x7fffffff) != 0)) & 0x80000000ffffffff;
    }
    if (iVar10 + -0x3ca < 0) {
      return ((ulonglong)uVar12 & 0x80000000) << 0x20;
    }
    uVar12 = iVar10 - 0x3ca;
    uVar4 = uVar9;
    uVar6 = uVar5;
    if (0x1f < (int)uVar12) {
      uVar4 = 0;
      uVar12 = iVar10 - 0x3ea;
      uVar6 = uVar9;
    }
    uVar6 = uVar6 << (uVar12 & 0xff) | uVar4 >> (0x20 - uVar12 & 0xff);
    if (uVar4 << (uVar12 & 0xff) != 0) {
      uVar6 = uVar6 | 1;
    }
    uVar12 = -iVar11 + 0xc;
    uVar4 = uVar5;
    if (0x1f < (int)uVar12) {
      uVar4 = 0;
      uVar12 = -iVar11 - 0x14;
      uVar9 = uVar5;
    }
    uVar9 = uVar9 >> (uVar12 & 0xff) | uVar4 << (0x20 - uVar12 & 0xff);
    uVar13 = uVar13 | uVar4 >> (uVar12 & 0xff);
    if (uVar6 == 0) {
      return CONCAT44(uVar13,uVar9);
    }
    if ((uVar6 & 0x80000000) == 0) {
      return CONCAT44(uVar13,uVar9);
    }
    if ((uVar6 & 0x7fffffff) == 0 && (uVar9 & 1) == 0) {
      return CONCAT44(uVar13,uVar9);
    }
    return CONCAT44(uVar13 + (0xfffffffe < uVar9),uVar9 + 1);
  }
  if (iVar11 * 0x100000 + 0x100000 < 0) {
    return (ulonglong)(uVar13 | ((unsigned int)0x0201df5c)) << 0x20;
  }
  uVar4 = uVar9 >> 0xb | uVar5 << 0x15;
  uVar6 = uVar13 | (uVar5 & 0x7fffffff) >> 0xb | iVar11 * 0x100000;
  if (uVar9 << 0x15 == 0) {
    return CONCAT44(uVar6,uVar4);
  }
  if ((uVar9 << 0x15 & 0x80000000) == 0) {
    return CONCAT44(uVar6,uVar4);
  }
  if ((uVar9 & 0x3ff) == 0 && (uVar9 >> 0xb & 1) == 0) {
    return CONCAT44(uVar6,uVar4);
  }
  return CONCAT44(uVar6 + (0xfffffffe < uVar4),uVar4 + 1);
}
