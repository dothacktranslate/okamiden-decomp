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

uint func_0201f0ac(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  if (param_1 < 0x7f800000) {
    uVar6 = param_1 >> 0x17;
    if (uVar6 == 0) {
      if (param_1 == 0) {
        return 0;
      }
      uVar6 = 9 - LZCOUNT(param_1);
      uVar1 = (param_1 << LZCOUNT(param_1)) >> 8;
    }
    else {
      uVar1 = param_1 & 0x807fffff | 0x800000;
    }
    iVar5 = (int)uVar6 >> 1;
    if (!(bool)((byte)uVar6 & 1)) {
      iVar5 = iVar5 + -1;
      uVar1 = uVar1 << 1;
    }
    iVar2 = uVar1 << 1;
    uVar1 = 0;
    iVar3 = 0;
    uVar6 = 0x1000000;
    do {
      iVar4 = iVar3 + uVar6;
      if (iVar4 <= iVar2) {
        iVar3 = iVar4 + uVar6;
        iVar2 = iVar2 - iVar4;
        uVar1 = uVar1 + uVar6;
      }
      iVar2 = iVar2 * 2;
      uVar6 = uVar6 >> 1;
    } while (uVar6 != 0);
    if (iVar2 == 0) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return (uVar1 >> 1) + (uint)((byte)uVar1 & 1) + 0x1f800000 + iVar5 * 0x800000;
  }
  if (param_1 == 0x7f800000) {
    return 0x7f800000;
  }
  if (((param_1 & 0x80000000) != 0) && ((param_1 & 0x7fffffff) == 0)) {
    return param_1;
  }
  param_1 = param_1 | ((unsigned int)0x0201f188);
  (*(unsigned int *)0x0201f18c) = 0x21;
  return param_1;
}
