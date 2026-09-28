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

undefined4 func_020637a8(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;

  uVar5 = 0;
  piVar4 = (int *)*param_1;
  while (piVar1 = piVar4, piVar1 != (int *)0x0) {
    piVar4 = (int *)piVar1[3];
    if (*piVar1 == param_3[1]) {
      uVar5 = 1;
      param_3[1] = *piVar1 + piVar1[1];
      iVar3 = piVar1[2];
      iVar2 = piVar1[3];
      if (iVar3 == 0) {
        *param_1 = iVar2;
      }
      else {
        *(int *)(iVar3 + 0xc) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = iVar3;
      }
      if (*param_2 != 0) {
        *(int **)(*param_2 + 8) = piVar1;
      }
      piVar1[3] = *param_2;
      piVar1[2] = 0;
      *param_2 = (int)piVar1;
    }
    if (*param_3 == *piVar1 + piVar1[1]) {
      *param_3 = *piVar1;
      iVar3 = piVar1[2];
      iVar2 = piVar1[3];
      if (iVar3 == 0) {
        *param_1 = iVar2;
      }
      else {
        *(int *)(iVar3 + 0xc) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = iVar3;
      }
      uVar5 = 1;
      if (*param_2 != 0) {
        *(int **)(*param_2 + 8) = piVar1;
      }
      piVar1[3] = *param_2;
      piVar1[2] = 0;
      *param_2 = (int)piVar1;
    }
  }
  return uVar5;
}
