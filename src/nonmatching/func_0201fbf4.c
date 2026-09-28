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

ulonglong func_0201fbf4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;

  uVar5 = param_2 ^ param_4;
  uVar9 = ((unsigned int)0x02020134) & param_2 >> 0x13;
  if (uVar9 == 0 || uVar9 == ((unsigned int)0x02020134)) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) goto LAB_02020124;
      uVar9 = param_4 & 0x7fffffff;
      uVar5 = ((unsigned int)0x02020134) * 0x80000;
      if (uVar9 != uVar5 && uVar9 < uVar5 || uVar9 == uVar5 && param_3 == 0) {
        return CONCAT44(param_2 ^ param_4,param_1) & 0x80000000ffffffff;
      }
    }
    else {
      if (uVar9 != ((unsigned int)0x02020134)) {
        iVar10 = param_2 << 0xc;
        if (iVar10 == 0) {
          iVar10 = LZCOUNT(param_1);
          param_1 = param_1 << iVar10;
          param_2 = param_1 >> 0xb;
          param_1 = param_1 << 0x15;
          uVar9 = (-0x14 - iVar10) * 2 | uVar5 >> 0x1f;
        }
        else {
          iVar12 = uVar9 - LZCOUNT(iVar10);
          uVar9 = iVar12 + 0x1f;
          param_2 = (uint)(iVar10 << LZCOUNT(iVar10)) >> 0xb | param_1 >> (uVar9 & 0xff);
          param_1 = param_1 << (0x20 - uVar9 & 0xff);
          uVar9 = iVar12 * 2 | uVar5 >> 0x1f;
        }
        goto LAB_0201fc18;
      }
      if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
        if ((param_4 & 0x7fffffff) < ((unsigned int)0x02020134) << 0x13) {
          return CONCAT44(param_4 & 0x80000000 ^ param_2,param_1);
        }
        if (param_3 == 0 && (param_4 & 0xfffff) == 0) goto LAB_02020124;
      }
      else {
        if ((param_2 & 0x80000) == 0) goto LAB_02020124;
        uVar9 = param_4 & 0x7fffffff;
        uVar5 = ((unsigned int)0x02020134) * 0x80000;
        if (uVar9 != uVar5 && uVar9 < uVar5 || uVar9 == uVar5 && param_3 == 0) {
          return CONCAT44(param_2,param_1);
        }
      }
    }
LAB_0202010c:
    if ((param_4 & 0x80000) != 0) {
      return CONCAT44(param_4,param_3);
    }
LAB_02020124:
    return CONCAT44(param_2,param_1) | 0x7ff8000000000000;
  }
  param_2 = param_2 & ~(((unsigned int)0x02020134) << 0x14) | 0x100000;
  uVar9 = uVar9 - ((int)uVar5 >> 0x1f);
LAB_0201fc18:
  uVar5 = ((unsigned int)0x02020134) & param_4 >> 0x13;
  if (uVar5 == 0 || uVar5 == ((unsigned int)0x02020134)) {
    if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
      return (ulonglong)(uVar9 << 0x1f | ((unsigned int)0x02020134) << 0x13) << 0x20;
    }
    if (uVar5 == ((unsigned int)0x02020134)) {
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
        return (ulonglong)(uVar9 << 0x1f) << 0x20;
      }
      goto LAB_0202010c;
    }
    iVar10 = param_4 << 0xc;
    if (iVar10 == 0) {
      iVar10 = LZCOUNT(param_3);
      param_3 = param_3 << iVar10;
      uVar4 = param_3 >> 0xb;
      param_3 = param_3 << 0x15;
      uVar5 = (-0x14 - iVar10) * 2;
    }
    else {
      iVar12 = uVar5 - LZCOUNT(iVar10);
      uVar5 = iVar12 + 0x1f;
      uVar4 = (uint)(iVar10 << LZCOUNT(iVar10)) >> 0xb | param_3 >> (uVar5 & 0xff);
      param_3 = param_3 << (0x20 - uVar5 & 0xff);
      uVar5 = iVar12 * 2;
    }
  }
  else {
    uVar4 = param_4 & ~(((unsigned int)0x02020134) << 0x14) | 0x100000;
  }
  iVar10 = uVar9 - uVar5;
  bVar13 = uVar4 <= param_2;
  if (param_2 == uVar4) {
    bVar13 = param_3 <= param_1;
  }
  if (!bVar13) {
    bVar13 = CARRY4(param_1,param_1);
    param_1 = param_1 * 2;
    param_2 = param_2 * 2 + (uint)bVar13;
    iVar10 = iVar10 + -2;
  }
  uVar5 = (uint)*(byte *)((uVar4 >> 0xc) + 0x201fc2c);
  uVar9 = -param_3;
  iVar12 = uVar4 + (param_3 != 0);
  iVar3 = -iVar12;
  uVar5 = (uVar5 * iVar3 + 0x20000000 >> 7) * uVar5 >> 0xd;
  uVar5 = uVar5 * 0x4000 + (uVar5 * (uVar5 * (iVar12 * -0x400 | uVar9 >> 0x16) >> 0x10) >> 0x10);
  uVar6 = (uint)((ulonglong)(param_2 << 10 | param_1 >> 0x16) * (ulonglong)uVar5 >> 0x20);
  uVar2 = (ulonglong)uVar5 *
          (ulonglong)
          (((uint)((ulonglong)uVar9 * (ulonglong)uVar6) >> 0x1a |
           (iVar3 * uVar6 + (int)((ulonglong)uVar9 * (ulonglong)uVar6 >> 0x20)) * 0x40) +
          param_1 * 4);
  uVar5 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar5 + uVar6 * 0x1000000;
  uVar5 = (uVar6 >> 8) + (uint)CARRY4(uVar5,uVar6 * 0x1000000);
  if (0x7ff < iVar10) {
    return (ulonglong)(iVar10 << 0x1f | 0x7ff00000) << 0x20;
  }
  uVar6 = iVar10 + 0x7fc;
  if (-1 < (int)uVar6) {
    iVar10 = (uVar5 | iVar10 << 0x1f) + (uVar6 & 0xfffffffe) * 0x80000;
    if (((uVar2 & 0x80000000) == 0) &&
       (uVar6 = uVar4 * 2 | 1,
       -1 < (int)(uVar6 * -(iVar3 + (uint)(uVar9 != 0)) +
                  (int)((ulonglong)param_3 * (ulonglong)uVar6 +
                        ((ulonglong)(param_3 * (uVar5 * 2 - ((int)uVar4 >> 0x1f))) << 0x20) >> 0x20)
                 + param_1 * -0x200000))) {
      return CONCAT44(iVar10,uVar4);
    }
    return CONCAT44(iVar10 + (uint)(0xfffffffe < uVar4),uVar4 + 1);
  }
  uVar6 = ~((int)uVar6 >> 1);
  if (0x34 < (int)uVar6) {
    return (ulonglong)(uint)(iVar10 << 0x1f) << 0x20;
  }
  if (uVar6 == 0x34) {
    return CONCAT44(iVar10 << 0x1f,
                    (uint)(param_2 != -(iVar3 + (uint)(uVar9 != 0)) || param_1 != param_3));
  }
  if ((int)uVar6 < 0x14) {
    uVar11 = param_1 << (0x13 - uVar6 & 0xff);
    uVar6 = 0x14 - (0x13 - uVar6);
    uVar7 = 0x20 - uVar6;
    uVar4 = uVar4 >> (uVar6 & 0xff) | uVar5 << (uVar7 & 0xff);
    uVar5 = uVar5 >> (0x20 - uVar7 & 0xff);
    uVar7 = uVar5 | iVar10 << 0x1f;
    param_1 = 0;
  }
  else {
    uVar7 = iVar10 << 0x1f;
    uVar8 = 0x20 - (0x33 - uVar6);
    uVar11 = param_2 << (0x33 - uVar6 & 0xff) | param_1 >> (uVar8 & 0xff);
    uVar8 = 0x20 - uVar8;
    param_1 = param_1 << (uVar8 & 0xff);
    uVar4 = (uVar4 >> 0x15 | uVar5 * 0x800) >> (0x1f - uVar8 & 0xff);
    uVar5 = 0;
  }
  lVar1 = (ulonglong)uVar4 * (ulonglong)param_3 + ((ulonglong)(param_3 * uVar5) << 0x20);
  uVar6 = (uint)lVar1;
  iVar10 = -(iVar3 + (uint)(uVar9 != 0));
  uVar5 = uVar4 * iVar10 + (int)((ulonglong)lVar1 >> 0x20);
  if (uVar5 == uVar11 && uVar6 == param_1) {
    return CONCAT44(uVar7,uVar4);
  }
  uVar9 = uVar6 + param_3;
  uVar5 = uVar5 + iVar10 + (uint)CARRY4(uVar6,param_3);
  if ((int)(uVar5 - uVar11) < 0) {
LAB_0201ff60:
    bVar13 = 0xfffffffe < uVar4;
    uVar4 = uVar4 + 1;
    uVar7 = uVar7 + bVar13;
  }
  else {
    if (uVar5 == uVar11) {
      if (uVar9 == param_1) goto LAB_0201ff50;
      if (uVar9 < param_1) goto LAB_0201ff60;
    }
    bVar13 = uVar9 < param_3;
    uVar9 = uVar9 - param_3;
    uVar5 = uVar5 - (iVar10 + (uint)bVar13);
  }
  uVar6 = uVar9 * 2 + param_3;
  iVar10 = uVar5 * 2 + (uint)CARRY4(uVar9,uVar9) + iVar10 + (uint)CARRY4(uVar9 * 2,param_3);
  iVar12 = uVar11 * 2 + (uint)CARRY4(param_1,param_1);
  if (-1 < iVar10 - iVar12) {
    if (iVar10 != iVar12) {
      return CONCAT44(uVar7,uVar4);
    }
    if (param_1 * 2 <= uVar6) {
      if (uVar6 != param_1 * 2) {
        return CONCAT44(uVar7,uVar4);
      }
      if ((uVar4 & 1) == 0) {
        return CONCAT44(uVar7,uVar4);
      }
    }
  }
LAB_0201ff50:
  return CONCAT44(uVar7 + (0xfffffffe < uVar4),uVar4 + 1);
}
