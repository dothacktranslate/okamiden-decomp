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

uint func_0201f190(uint param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;

  uVar6 = (param_1 ^ param_2) & 0x80000000;
  uVar7 = param_1 >> 0x17 & 0xff;
  if (uVar7 == 0 || uVar7 == 0xff) {
    if (uVar7 == 0) {
      if ((param_1 & 0x7fffff) == 0) {
        uVar7 = param_2 >> 0x17 & 0xff;
        if (uVar7 == 0) {
          return uVar6;
        }
        if (uVar7 < 0xff) {
          return uVar6;
        }
        if ((param_2 & 0x7fffff) != 0) {
          return 0x7fffffff;
        }
        return 0x7fffffff;
      }
      iVar5 = (param_1 & 0x7fffff) << 8;
      iVar9 = LZCOUNT(iVar5);
      uVar3 = iVar5 << iVar9;
      uVar7 = 1 - iVar9;
      uVar8 = param_2 >> 0x17 & 0xff;
      if (uVar8 == 0) goto LAB_0201f2bc;
      if (uVar8 != 0xff) {
        uVar4 = param_2 << 8 | 0x80000000;
        goto LAB_0201f1c4;
      }
      goto LAB_0201f254;
    }
    if ((param_1 & 0x7fffff) != 0) {
      return 0x7fffffff;
    }
    uVar7 = param_2 * 0x200;
    uVar3 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0) {
      if (uVar7 == 0) {
        return 0x7fffffff;
      }
      goto LAB_0201f328;
    }
    if (uVar3 < 0xff) goto LAB_0201f328;
  }
  else {
    uVar3 = param_1 << 8 | 0x80000000;
    uVar8 = param_2 >> 0x17 & 0xff;
    if (uVar8 != 0 && uVar8 != 0xff) {
      uVar4 = param_2 << 8 | 0x80000000;
      goto LAB_0201f1c4;
    }
    if (uVar8 == 0) {
LAB_0201f2bc:
      if ((param_2 << 8 & 0x7fffffff) == 0) {
        return uVar6;
      }
      uVar4 = param_2 << 8 & 0x7fffffff;
      iVar5 = LZCOUNT(uVar4);
      uVar4 = uVar4 << iVar5;
      uVar8 = 1 - iVar5;
LAB_0201f1c4:
      iVar9 = uVar7 + uVar8;
      lVar1 = (ulonglong)uVar4 * (ulonglong)uVar3;
      iVar5 = (int)lVar1;
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      if (-1 < lVar1) {
        uVar7 = uVar7 * 2;
        iVar9 = iVar9 + -1;
      }
      iVar10 = iVar9 + -0x7f;
      if (iVar10 < 0) {
        if (iVar10 == -0x18) {
          if ((uVar7 & 0x7fffffff) != 0) {
            uVar6 = uVar6 + 1;
          }
          return uVar6;
        }
        if (iVar9 + -0x67 < 0) {
          return uVar6;
        }
        if (iVar5 != 0) {
          uVar7 = uVar7 | 1;
        }
        uVar3 = (uVar7 >> 8) >> (-iVar10 & 0xffU);
        uVar6 = uVar6 | uVar3;
        uVar7 = uVar7 << (iVar9 - 0x67U & 0xff);
        if (uVar7 != 0) {
          if ((uVar7 & 0x80000000) != 0) {
            if ((uVar7 & 0x7fffffff) != 0 || (uVar3 & 1) != 0) {
              uVar6 = uVar6 + 1;
            }
            return uVar6;
          }
          return uVar6;
        }
        return uVar6;
      }
      if (0xfd < iVar10) {
        return uVar6 | 0x7f800000;
      }
      uVar6 = (uVar6 | uVar7 >> 8) + iVar10 * 0x800000;
      if ((uVar7 & 0x80) != 0) {
        bVar2 = (uVar7 & 0x7f) == 0;
        bVar11 = iVar5 == 0 && bVar2;
        if (iVar5 == 0 && bVar2) {
          bVar11 = (uVar6 & 1) == 0;
        }
        if (!bVar11) {
          uVar6 = uVar6 + 1;
        }
        return uVar6;
      }
      return uVar6;
    }
LAB_0201f254:
    uVar7 = param_2 & 0x7fffff;
  }
  if (uVar7 != 0) {
    return 0x7fffffff;
  }
LAB_0201f328:
  return uVar6 | 0x7f800000;
}
