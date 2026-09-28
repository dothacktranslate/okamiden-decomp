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

extern int func_02007430();

uint func_02007a78(undefined4 param_1)

{
  uint uVar1;

  switch(param_1) {
  case 0:
    return ((unsigned int)0x02007b38);
  case 1:
    return 0;
  case 2:
    break;
  case 3:
    return 0x2000000;
  case 4:
    if (((unsigned int)0x02007b44) != 0) {
      if (((unsigned int)0x02007b44) < 0) {
        uVar1 = ((unsigned int)0x02007b4c) - ((unsigned int)0x02007b44);
      }
      else {
        uVar1 = ((((unsigned int)0x02007b40) + 0x3f80) - ((unsigned int)0x02007b48)) - ((unsigned int)0x02007b44);
      }
      return uVar1;
    }
    uVar1 = ((unsigned int)0x02007b40);
    if (((unsigned int)0x02007b40) < ((unsigned int)0x02007b4c)) {
      uVar1 = ((unsigned int)0x02007b4c);
    }
    return uVar1;
  case 5:
    return ((unsigned int)0x02007b50);
  case 6:
    return ((unsigned int)0x02007b54);
  default:
    return 0;
  }
  if (*(int *)(((unsigned int)0x02007b3c) + 4) != 0) {
    uVar1 = func_02007430(*(int *)(((unsigned int)0x02007b3c) + 4));
    if ((uVar1 & 0xf) == 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x2700000;
    }
    return uVar1;
  }
  return 0;
}
