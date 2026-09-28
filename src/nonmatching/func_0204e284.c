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

extern int func_0204e148();

void func_0204e284(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(iVar2 + 0x54) * 10;
  if (iVar3 == 0) {
    iVar3 = 0x7ffffffe;
  }
  *(int *)(iVar2 + 0x4c) =
       *(int *)(iVar2 + 0x4c) + (*(int *)(iVar2 + 0x44) - *(int *)(iVar2 + 0x40));
  do {
    iVar1 = func_0204e148(param_1);
    iVar3 = iVar3 - iVar1;
    if (*(char *)(iVar2 + 0x15) == '\0') break;
  } while (0 < iVar3);
  if (*(char *)(iVar2 + 0x15) == '\0') {
    *(uint *)(iVar2 + 0x40) =
         (uint)((ulonglong)((unsigned int)0x0204e328) * (ulonglong)*(uint *)(iVar2 + 0x48) >> 0x25) *
         *(int *)(iVar2 + 0x50);
    return;
  }
  if (*(uint *)(iVar2 + 0x4c) < 0x400) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x44) + 0x400;
  }
  else {
    *(uint *)(iVar2 + 0x4c) = *(uint *)(iVar2 + 0x4c) - 0x400;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x44);
  }
  return;
}
