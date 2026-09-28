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

uint func_0201f824(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  uVar4 = param_1 >> 0x17 & 0xff;
  if (uVar4 == 0 || uVar4 == 0xff) {
    uVar8 = (param_1 ^ param_2) & 0x80000000;
    if (uVar4 != 0) {
      if ((param_1 & 0x7fffff) != 0) {
        return 0x7fffffff;
      }
      uVar4 = param_2 >> 0x17 & 0xff;
      if ((uVar4 != 0) && (0xfe < uVar4)) {
        if ((param_2 & 0x7fffff) != 0) {
          return 0x7fffffff;
        }
        return 0x7fffffff;
      }
LAB_0201fb88:
      return uVar8 | 0x7f800000;
    }
    iVar6 = param_1 << 9;
    if (iVar6 == 0) {
      uVar4 = param_2 >> 0x17 & 0xff;
      if (uVar4 == 0) {
        if (param_2 * 0x200 != 0) {
          return uVar8;
        }
        return 0x7fffffff;
      }
      if (uVar4 < 0xff) {
        return uVar8;
      }
      if (param_2 * 0x200 == 0) {
        return uVar8;
      }
      return 0x7fffffff;
    }
    uVar4 = -LZCOUNT(iVar6);
    uVar3 = (uint)(iVar6 << LZCOUNT(iVar6)) >> 8;
    uVar5 = param_2 >> 0x17 & 0xff;
    if (uVar5 == 0) {
      iVar6 = param_2 << 9;
      if (iVar6 == 0) goto LAB_0201fb88;
      uVar5 = -LZCOUNT(iVar6);
      uVar8 = (uint)(iVar6 << LZCOUNT(iVar6)) >> 8;
    }
    else {
      if (uVar5 == 0xff) goto LAB_0201fa44;
      uVar8 = param_2 & 0xffffff | 0x800000;
      param_2 = param_2 | 0x800000;
    }
  }
  else {
    uVar5 = param_2 >> 0x17 & 0xff;
    if (uVar5 == 0 || uVar5 == 0xff) {
      uVar8 = (param_1 ^ param_2) & 0x80000000;
      if (uVar5 != 0) {
LAB_0201fa44:
        if ((param_2 & 0x7fffff) != 0) {
          return 0x7fffffff;
        }
        return uVar8;
      }
      iVar6 = param_2 << 9;
      if (iVar6 == 0) goto LAB_0201fb88;
      uVar5 = -LZCOUNT(iVar6);
      uVar8 = (uint)(iVar6 << LZCOUNT(iVar6)) >> 8;
      uVar3 = param_1 & 0xffffff | 0x800000;
      param_1 = param_1 | 0x800000;
    }
    else {
      uVar3 = param_1 & 0xffffff | 0x800000;
      uVar8 = param_2 & 0xffffff | 0x800000;
      param_1 = param_1 | 0x800000;
      param_2 = param_2 | 0x800000;
    }
  }
  if (uVar3 < uVar8) {
    uVar3 = uVar3 << 1;
    uVar4 = uVar4 - 1;
  }
  uVar2 = (uint)*(byte *)((uVar8 >> 0xf) + 0x201f7d8);
  uVar2 = uVar2 * (uVar2 * ((int)-uVar8 >> 1) + 0x80000000 >> 6) >> 0xe;
  iVar6 = uVar4 - uVar5;
  lVar1 = (ulonglong)(uVar2 * 0x4000 + (uVar2 * (-uVar8 * uVar2 >> 0xc) >> 0xf)) * (ulonglong)uVar3;
  uVar2 = (uint)lVar1;
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar5 = uVar4;
  if ((int)(param_1 ^ param_2) < 0) {
    uVar5 = uVar4 | 0x80000000;
  }
  iVar7 = iVar6 + 0x7e;
  if (-1 < iVar7) {
    if (0xfd < iVar7) {
      if ((uVar5 & 0x80000000) == 0) {
        uVar4 = 0x7f800000;
      }
      else {
        uVar4 = 0xff800000;
      }
      return uVar4;
    }
    uVar5 = uVar5 + iVar7 * 0x800000;
    if (uVar2 >> 0x1c != 7) {
      return uVar5 - ((int)uVar2 >> 0x1f);
    }
    if ((int)(uVar8 * (uVar4 * 2 + 1) + uVar3 * -0x1000000) < 0) {
      uVar5 = uVar5 + 1;
    }
    return uVar5;
  }
  uVar5 = uVar5 & 0x80000000;
  if (iVar6 == -0x96) {
    if (uVar3 != uVar8) {
      uVar5 = uVar5 + 1;
    }
    return uVar5;
  }
  if (-1 < iVar6 + 0x96) {
    iVar6 = uVar3 << (iVar6 + 0x95U & 0xff);
    uVar4 = uVar4 >> (-iVar7 & 0xffU);
    uVar5 = uVar5 | uVar4;
    iVar7 = uVar8 * uVar4;
    if (iVar7 - iVar6 == 0) {
      return uVar5;
    }
    iVar7 = iVar7 + uVar8;
    if (iVar7 != iVar6) {
      if (iVar7 - iVar6 < 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        iVar7 = iVar7 - uVar8;
      }
      iVar7 = uVar8 + iVar7 * 2;
      uVar4 = uVar5 & 1;
      if (iVar7 + iVar6 * -2 < 0) {
        uVar5 = uVar5 + 1;
      }
      if (iVar7 == iVar6 * 2) {
        uVar5 = uVar5 + uVar4;
      }
      return uVar5;
    }
    return uVar5 + 1;
  }
  return uVar5;
}
