#pragma thumb on

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

extern int func_0203d430();
extern int func_0203d4bc();
extern int func_0203d4ec();
extern int func_0203d520();
extern int func_0203d9e8();
extern int func_0203d9f8();
extern int func_0203da08();

void func_0203da18(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;

  bVar1 = true;
  if ((*(uint *)(param_1 + 0x18) & 0x80) == 0) {
    for (piVar5 = *(int **)(param_1 + 0x10); piVar5 != (int *)(param_1 + 0x10);
        piVar5 = (int *)*piVar5) {
      if ((piVar5[0xb] & 1U) == 0) {
        func_0203d9e8(param_1);
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          iVar3 = func_0203d430(piVar5 + -1);
        }
        else {
          iVar3 = func_0203d4bc(piVar5 + -1);
        }
        if (iVar3 == 0) {
          bVar1 = false;
        }
      }
    }
    if (bVar1) {
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar2 = 0x80;
LAB_0203da96:
      *(uint *)(param_1 + 0x18) = uVar2 | uVar4;
    }
  }
  else if ((*(uint *)(param_1 + 0x18) & 0x100) == 0) {
    for (piVar5 = *(int **)(param_1 + 0x10); piVar5 != (int *)(param_1 + 0x10);
        piVar5 = (int *)*piVar5) {
      func_0203d9e8(param_1,piVar5 + -1);
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar2 = 0x100;
    goto LAB_0203da96;
  }
  if ((*(uint *)(param_1 + 0x18) & 8) == 0) {
    for (piVar5 = *(int **)(param_1 + 0x10); piVar5 != (int *)(param_1 + 0x10);
        piVar5 = (int *)*piVar5) {
      iVar3 = func_0203d4ec(piVar5 + -1);
      if (iVar3 == 0) {
        return;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar2 = 8;
  }
  else {
    if ((*(uint *)(param_1 + 0x18) & 0x20) != 0) goto LAB_0203dae8;
    for (piVar5 = *(int **)(param_1 + 0x10); piVar5 != (int *)(param_1 + 0x10);
        piVar5 = (int *)*piVar5) {
      func_0203d9f8(param_1,piVar5 + -1);
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar2 = 0x20;
  }
  *(uint *)(param_1 + 0x18) = uVar2 | uVar4;
LAB_0203dae8:
  if ((*(uint *)(param_1 + 0x18) & 0x10) == 0) {
    piVar5 = *(int **)(param_1 + 0x10);
    while( true ) {
      if (piVar5 == (int *)(param_1 + 0x10)) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
        return;
      }
      iVar3 = func_0203d520(piVar5 + -1);
      if (iVar3 == 0) break;
      piVar5 = (int *)*piVar5;
    }
  }
  else if ((*(uint *)(param_1 + 0x18) & 0x40) == 0) {
    for (piVar5 = *(int **)(param_1 + 0x10); piVar5 != (int *)(param_1 + 0x10);
        piVar5 = (int *)*piVar5) {
      func_0203da08(param_1,piVar5 + -1);
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40;
  }
  return;
}
