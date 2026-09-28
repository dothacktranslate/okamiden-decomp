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

uint func_0201f5a0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (-1 < (int)(param_1 ^ param_2)) {
    if (param_1 < param_2) {
      uVar5 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar5;
      param_2 = param_2 + uVar5;
    }
    uVar5 = param_1 >> 0x17;
    uVar1 = param_1 << 8 | 0x80000000;
    if ((uVar5 & 0xff) == 0 || (uVar5 & 0xff) == 0xff) {
      uVar3 = 0x80000000;
      if (uVar5 < 0x100) {
        uVar3 = 0;
      }
      if ((uVar5 & 0xff) != 0) {
        if ((param_1 & 0x7fffff) != 0) {
          return 0x7fffffff;
        }
        uVar5 = param_2 >> 0x17 & 0xff;
        if ((uVar5 != 0) && (0xfe < uVar5)) {
          if ((param_2 & 0x7fffff) != 0) {
            return 0x7fffffff;
          }
          return 0x7fffffff;
        }
        goto LAB_0201f7fc;
      }
      if ((param_1 & 0x7fffff) == 0) {
        uVar3 = param_2 >> 0x17 & 0xff;
        if (uVar3 == 0) {
          if (param_2 * 0x200 == 0) {
            return 0;
          }
          return param_2;
        }
        if (uVar3 < 0xff) {
          return param_2;
        }
        if (param_2 * 0x200 != 0) {
          return 0x7fffffff;
        }
        goto LAB_0201f7fc;
      }
      uVar1 = (param_1 & 0x7fffff) << 8;
      uVar5 = 1;
      uVar2 = param_2 << 8;
      uVar6 = param_2 >> 0x17 & 0xff;
      if (uVar6 != 0) {
        if (uVar6 != 0xff) {
          uVar2 = uVar2 | 0x80000000;
          uVar5 = uVar3 >> 0x17 | 1;
          uVar6 = uVar6 | uVar3 >> 0x17;
          goto LAB_0201f5e4;
        }
        goto LAB_0201f720;
      }
    }
    else {
      uVar6 = param_2 >> 0x17;
      uVar2 = param_2 << 8 | 0x80000000;
      if ((uVar6 & 0xff) != 0) goto LAB_0201f5e4;
      if (uVar6 < 0x100) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x80000000;
      }
      uVar5 = uVar5 & 0xff;
      if ((uVar6 & 0xff) != 0) {
LAB_0201f720:
        uVar3 = uVar3 ^ 0x80000000;
        if ((uVar2 & 0x7fffffff) != 0) {
          return 0x7fffffff;
        }
LAB_0201f7fc:
        return uVar3 | 0x7f800000;
      }
    }
    if ((uVar2 & 0x7fffffff) == 0) {
      if (-1 < (int)uVar1) {
        uVar5 = uVar5 - 1;
      }
      return uVar3 | (uVar1 & 0x7fffffff) >> 8 | uVar5 << 0x17;
    }
    uVar2 = uVar2 & 0x7fffffff;
    uVar6 = uVar3 >> 0x17 | 1;
    uVar5 = uVar5 | uVar3 >> 0x17;
LAB_0201f5e4:
    uVar6 = uVar5 - uVar6;
    if (uVar6 == 0) {
      iVar4 = uVar1 - uVar2;
      if (iVar4 == 0) {
        return 0;
      }
      uVar3 = (uVar5 & 0x100) << 0x17;
      uVar1 = iVar4 << LZCOUNT(iVar4);
      iVar4 = (uVar5 & 0xfffffeff) - LZCOUNT(iVar4);
      if (0 < iVar4) {
        return uVar3 | (uVar1 & 0x7fffffff) >> 8 | iVar4 * 0x800000;
      }
      return uVar3 | uVar1 >> (9U - iVar4 & 0xff);
    }
    uVar3 = uVar2 >> (uVar6 & 0xff);
    if (uVar2 << (0x20 - uVar6 & 0xff) != 0) {
      uVar3 = uVar3 | 1;
    }
    uVar1 = uVar1 - uVar3;
    if ((int)uVar1 < 0) {
      uVar3 = (uVar1 & 0x7fffffff) >> 8;
      uVar5 = uVar3 | uVar5 << 0x17;
      if ((uVar1 & 0x80) != 0) {
        if ((uVar1 & 0x7f) != 0 || (uVar3 & 1) != 0) {
          uVar5 = uVar5 + 1;
        }
        return uVar5;
      }
      return uVar5;
    }
    uVar2 = (uVar5 & 0x100) << 0x17;
    uVar3 = uVar1 << LZCOUNT(uVar1);
    iVar4 = (uVar5 & 0xfffffeff) - LZCOUNT(uVar1);
    if (iVar4 < 1) {
      return uVar2 | uVar3 >> (9U - iVar4 & 0xff);
    }
    uVar5 = (uVar3 & 0x7fffffff) >> 8;
    uVar1 = uVar2 | uVar5 | iVar4 * 0x800000;
    if ((uVar3 & 0xff) != 0) {
      if ((uVar3 & 0x80) != 0) {
        if ((uVar3 & 0x7f) != 0 || (uVar5 & 1) != 0) {
          uVar1 = uVar1 + 1;
        }
        return uVar1;
      }
      return uVar1;
    }
    return uVar1;
  }
  param_2 = param_2 ^ 0x80000000;
  iVar4 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar4;
    param_2 = param_2 + iVar4;
  }
  uVar5 = param_1 >> 0x17;
  uVar1 = param_1 << 8 | 0x80000000;
  if ((uVar5 & 0xff) == 0 || (uVar5 & 0xff) == 0xff) {
    uVar3 = 0x80000000;
    if (uVar5 < 0x100) {
      uVar3 = 0;
    }
    if ((uVar5 & 0xff) == 0) {
      if ((param_1 & 0x7fffff) == 0) {
        uVar5 = param_2 >> 0x17 & 0xff;
        if ((uVar5 == 0) || (uVar5 < 0xff)) {
          return param_2;
        }
        if ((param_2 & 0x7fffff) != 0) {
          return 0x7fffffff;
        }
        goto LAB_0201f578;
      }
      uVar5 = 1;
      uVar1 = (param_1 & 0x7fffff) << 8;
      uVar2 = param_2 << 8;
      uVar6 = param_2 >> 0x17 & 0xff;
      if (uVar6 == 0) goto LAB_0201f4d0;
      if (uVar6 != 0xff) {
        uVar2 = uVar2 | 0x80000000;
        uVar5 = uVar3 >> 0x17 | 1;
        uVar6 = uVar6 | uVar3 >> 0x17;
        goto LAB_0201f3b0;
      }
      goto LAB_0201f468;
    }
    if ((param_1 & 0x7fffff) != 0) {
      return 0x7fffffff;
    }
    uVar2 = param_2 & 0x7fffff;
    uVar5 = param_2 >> 0x17 & 0xff;
    if ((uVar5 == 0) || (uVar5 < 0xff)) goto LAB_0201f578;
  }
  else {
    uVar6 = param_2 >> 0x17;
    uVar2 = param_2 << 8 | 0x80000000;
    if ((uVar6 & 0xff) != 0) goto LAB_0201f3b0;
    if (uVar5 < 0x100) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x80000000;
    }
    uVar5 = uVar5 & 0xff;
    if ((uVar6 & 0xff) == 0) {
LAB_0201f4d0:
      if ((uVar2 & 0x7fffffff) == 0) {
        if (-1 < (int)uVar1) {
          uVar5 = uVar5 - 1;
        }
        return uVar3 | (uVar1 & 0x7fffffff) >> 8 | uVar5 << 0x17;
      }
      uVar2 = uVar2 & 0x7fffffff;
      uVar5 = uVar5 | uVar3 >> 0x17;
      uVar6 = uVar3 >> 0x17 | 1;
      if (-1 < (int)uVar1) {
        uVar5 = uVar1 + uVar2;
        if (CARRY4(uVar1,uVar2)) {
          uVar5 = uVar5 >> 1 | 0x80000000;
          uVar6 = uVar6 + 1;
        }
        if (-1 < (int)uVar5) {
          uVar6 = uVar6 - 1;
        }
        uVar1 = (uVar5 & 0x7fffffff) >> 8;
        uVar3 = uVar1 | uVar6 << 0x17;
        if ((uVar5 & 0xff) != 0) {
          if ((uVar5 & 0xff) != 0) {
            if ((uVar1 & 1) != 0) {
              uVar3 = uVar3 + 1;
            }
            return uVar3;
          }
          return uVar3;
        }
        return uVar3;
      }
LAB_0201f3b0:
      uVar6 = uVar5 - uVar6;
      if ((uVar6 != 0) &&
         (iVar4 = uVar2 << (0x20 - uVar6 & 0xff), uVar2 = uVar2 >> (uVar6 & 0xff), iVar4 != 0)) {
        uVar2 = uVar2 | 1;
      }
      uVar3 = uVar1 + uVar2;
      if (CARRY4(uVar1,uVar2)) {
        uVar3 = uVar3 & 1 | uVar3 >> 1;
        uVar5 = uVar5 + 1;
        if ((uVar5 & 0xff) == 0xff) {
          if (uVar5 < 0x100) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0x80000000;
          }
          return uVar5 | 0x7f800000;
        }
      }
      uVar1 = (uVar3 & 0x7fffffff) >> 8;
      uVar5 = uVar1 | uVar5 << 0x17;
      if ((uVar3 & 0x80) != 0) {
        if ((uVar3 & 0x7f) != 0 || (uVar1 & 1) != 0) {
          uVar5 = uVar5 + 1;
        }
        return uVar5;
      }
      return uVar5;
    }
LAB_0201f468:
    uVar2 = uVar2 & 0x7fffffff;
  }
  if (uVar2 != 0) {
    return 0x7fffffff;
  }
LAB_0201f578:
  return uVar3 | 0x7f800000;
}
