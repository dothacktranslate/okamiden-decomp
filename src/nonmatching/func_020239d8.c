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

void func_020239d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = ((unsigned int)0x02023a38);
  uVar3 = 0;
  *(undefined4 *)(0x14 + param_1) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x38) = 5;
  *(short *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 5;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  do {
    iVar2 = param_1 + uVar3 * 2;
    *(short *)(iVar2 + 0x26) = (short)uVar1;
    uVar3 = uVar3 + 1 & 0xffff;
    *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(iVar2 + 0x26);
  } while (uVar3 < 7);
  return;
}
