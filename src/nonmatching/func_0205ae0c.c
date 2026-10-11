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

void func_0205ae0c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = *param_1;
  if (iVar4 == 0) {
    *param_1 = param_2;
    return;
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
    if (*(byte *)(iVar4 + 0x18) <= *(byte *)(param_2 + 0x18)) {
      *(int *)(iVar4 + 0x10) = param_2;
      return;
    }
    iVar2 = *(int *)(param_2 + 0x10);
    iVar3 = param_2;
    while (iVar2 != 0) {
      iVar3 = *(int *)(iVar3 + 0x10);
      iVar2 = *(int *)(iVar3 + 0x10);
    }
    *(int *)(iVar3 + 0x10) = iVar4;
    *param_1 = param_2;
    return;
  }
  iVar3 = *(int *)(iVar4 + 0x10);
  do {
    iVar2 = iVar3;
    if (*(byte *)(param_2 + 0x18) <= *(byte *)(iVar2 + 0x18)) {
      iVar1 = *(int *)(param_2 + 0x10);
      iVar3 = param_2;
      while (iVar1 != 0) {
        iVar3 = *(int *)(iVar3 + 0x10);
        iVar1 = *(int *)(iVar3 + 0x10);
      }
      *(int *)(iVar4 + 0x10) = param_2;
      *(int *)(iVar3 + 0x10) = iVar2;
      return;
    }
    iVar3 = *(int *)(iVar2 + 0x10);
    iVar4 = iVar2;
  } while (*(int *)(iVar2 + 0x10) != 0);
  *(int *)(iVar2 + 0x10) = param_2;
  return;
}
