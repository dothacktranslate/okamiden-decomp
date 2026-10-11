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

uint func_0201df60(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar2 = param_2 & 0x80000000;
  uVar3 = param_2 >> 0x14 & 0xfffff7ff;
  if (uVar3 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return uVar2;
    }
  }
  else {
    if (0xffdfffff < (param_2 >> 0x14) << 0x15) {
      if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
        return uVar2 | 0x7f800000;
      }
      return 0x7fffffff;
    }
    iVar4 = uVar3 - 0x380;
    if (0x37f < uVar3 && iVar4 != 0) {
      if (0xfe < iVar4) {
        return uVar2 | 0x7f800000;
      }
      uVar2 = uVar2 | (param_2 & 0xfffff) << 3 | param_1 >> 0x1d | iVar4 * 0x800000;
      if (param_1 << 3 == 0) {
        return uVar2;
      }
      if ((param_1 << 3 & 0x80000000) == 0) {
        return uVar2;
      }
      if ((param_1 & 0xfffffff) != 0 || (param_1 >> 0x1d & 1) != 0) {
        uVar2 = uVar2 + 1;
      }
      return uVar2;
    }
    if (iVar4 == -0x17) {
      if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
        uVar2 = uVar2 + 1;
      }
      return uVar2;
    }
    if (-1 < (int)(uVar3 - 0x369)) {
      uVar3 = (param_2 << 0xb | 0x80000000) >> 8 | param_1 >> 0x1d;
      uVar1 = uVar3 >> (1U - iVar4 & 0xff);
      uVar2 = uVar2 | uVar1;
      uVar3 = uVar3 << (0x20 - (1U - iVar4) & 0xff);
      if ((param_1 & 0x1fffffff) != 0) {
        uVar3 = uVar3 | 1;
      }
      if (uVar3 == 0) {
        return uVar2;
      }
      if ((uVar3 & 0x80000000) == 0) {
        return uVar2;
      }
      if ((uVar3 & 0x7fffffff) != 0 || (uVar1 & 1) != 0) {
        uVar2 = uVar2 + 1;
      }
      return uVar2;
    }
  }
  return uVar2;
}
