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

extern int func_0202aeb4();
extern int func_0202af00();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x0209e1c4();
extern int func_0x020a0d5c();
extern int func_0x020a0d78();
extern int func_0x020a0d94();
extern int func_0x020a0db4();
extern int func_0x020a69ec();
extern int func_0x020a7270();

undefined4 func_0202a788(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_1c [4];
  undefined1 auStack_18 [4];

  piVar4 = (int *)(*(unsigned int *)0x0202a8e4);
  iVar5 = *(int *)(*piVar4 + 0x5c);
  uVar2 = func_020465d8(param_1,2);
  iVar3 = func_020465d8(param_1,1);
  switch(iVar3 - ((unsigned int)0x0202a8e8)) {
  case 0:
    iVar3 = func_0x020a69ec(*(undefined4 *)(iVar5 + 0x38),*(int *)(iVar5 + 0x54) + 0x18,auStack_18,1
                           );
    uVar2 = (uint)(iVar3 != 0);
    goto LAB_0202a8d8;
  case 1:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 == 0) {
      func_0x020a0db4(iVar5 + 0x88,9);
      uVar2 = 0xffffffff;
    }
    else if (uVar2 == 0) {
      func_0x020a0d78(iVar5 + 0x88,0x90);
      piVar4[0x17] = piVar4[0x17] & 0xffffff6f;
      piVar4[0xf] = piVar4[0xf] & 0xffffff6f;
      func_0x020a0d94(iVar5 + 0x88,9);
      func_0x0209e1c4(1);
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xffffffef;
      uVar2 = 1;
    }
    else {
      iVar3 = func_0x0209e1c4(0);
      if (iVar3 == 0) {
        uVar2 = 0xffffffff;
      }
    }
    goto LAB_0202a8d8;
  case 2:
    sVar1 = func_020465d8(param_1,3);
    if (sVar1 == 0) {
      func_0x020a0d5c(iVar5 + 0x88,0x10);
    }
    else {
      func_0x020a0d78(iVar5 + 0x88,0x10);
    }
    break;
  case 3:
    sVar1 = func_020465d8(param_1,3);
    if (sVar1 != 0) {
      func_0202aeb4(1);
    }
    else {
      func_0202aeb4(0);
    }
    func_0202af00(sVar1 != 0);
    break;
  case 4:
    local_1c[0] = 1;
    sVar1 = func_020465d8(param_1,3);
    local_1c[0] = sVar1 != 0;
    func_0x020a7270(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202a8e4) + 0x5c) + 0x38),((unsigned int)0x0202a8ec),
                    local_1c);
    break;
  default:
    goto switchD_0202a7c4_default;
  }
  uVar2 = 0xffffffff;
LAB_0202a8d8:
  func_02046868(param_1,uVar2);
switchD_0202a7c4_default:
  return 1;
}
