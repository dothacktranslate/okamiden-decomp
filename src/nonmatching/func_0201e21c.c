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

bool func_0201e21c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  byte in_Q;

  if (((0xffdfffff < param_2 * 2) && ((param_2 * 2 != 0xffe00000 || (param_1 != 0)))) ||
     ((0xffdfffff < param_4 * 2 && (((param_4 & 0x7fffffff) != 0x7ff00000 || (param_3 != 0)))))) {
    return false;
  }
  if (-1 < (int)(param_4 | param_2)) {
    bVar2 = param_4 <= param_2;
    if (param_2 == param_4) {
      bVar2 = param_3 <= param_1;
    }
    return !bVar2;
  }
  bVar2 = param_1 == 0;
  bVar1 = ((param_4 | param_2) & 0x7fffffff) == 0;
  if (((bVar2 && bVar1) && param_3 == 0) &&
     (param_1 = 0, (((byte)(((bVar2 && bVar1) && param_3 == 0) << 3 | in_Q) & 0x1f) >> 3 & 1) != 0))
  {
    return false;
  }
  bVar2 = param_2 <= param_4;
  if (param_4 == param_2) {
    bVar2 = param_1 <= param_3;
  }
  return !bVar2;
}
