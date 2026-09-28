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

uint func_020168c4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = (param_1 >> 1 | param_2 << 0x1f) & ((unsigned int)0x0201694c);
  uVar4 = param_1 - uVar2;
  param_2 = param_2 - ((((unsigned int)0x0201694c) & param_2 >> 1) + (uint)(param_1 < uVar2));
  uVar1 = uVar4 & ((unsigned int)0x02016950);
  uVar2 = (uVar4 >> 2 | param_2 * 0x40000000) & ((unsigned int)0x02016950);
  uVar4 = uVar1 + uVar2;
  uVar1 = (param_2 & ((unsigned int)0x02016950)) + (((unsigned int)0x02016950) & param_2 >> 2) + (uint)CARRY4(uVar1,uVar2);
  uVar2 = uVar4 >> 4 | uVar1 * 0x10000000;
  uVar3 = uVar4 + uVar2 & ((unsigned int)0x02016954);
  uVar4 = uVar1 + (uVar1 >> 4) + (uint)CARRY4(uVar4,uVar2) & ((unsigned int)0x02016954);
  uVar2 = uVar3 >> 8 | uVar4 << 0x18;
  uVar1 = uVar3 + uVar2;
  uVar4 = uVar4 + (uVar4 >> 8) + (uint)CARRY4(uVar3,uVar2);
  uVar2 = uVar1 >> 0x10 | uVar4 * 0x10000;
  return uVar1 + uVar2 + uVar4 + (uVar4 >> 0x10) + (uint)CARRY4(uVar1,uVar2) & 0xff;
}
