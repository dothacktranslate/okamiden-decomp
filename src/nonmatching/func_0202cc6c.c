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

extern int func_02018ba4();
extern int func_0202b250();
extern int func_0x0209113c();
extern int func_0x020a0e38();

undefined4 func_0202cc6c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_58 [64];
  undefined4 uStack_18;

  uStack_18 = param_4;
  uVar1 = func_0202b250();
  if (param_2 < 8000) {
    uVar3 = ((unsigned int)0x0202cd2c);
    uVar4 = ((unsigned int)0x0202cd28);
    if (param_2 < ((unsigned int)0x0202cd28)) {
      if (param_2 < ((unsigned int)0x0202cd30)) {
        if (param_2 < ((unsigned int)0x0202cd3c)) {
          if (param_2 < 4000) {
            if (param_2 < ((unsigned int)0x0202cd30) >> 1) {
              if (param_2 < 2000) {
                if (param_2 < 1000) {
                  uVar3 = ((unsigned int)0x0202cd58);
                  uVar4 = ((unsigned int)0x0202cd30);
                  if (param_2 != 0) goto LAB_0202cd14;
                }
                else {
                  iVar2 = func_0x0209113c(*(undefined4 *)
                                           (*(int *)(*(int *)(*(unsigned int *)0x0202cd50) + 0x5c) + 0x34));
                  uVar3 = ((unsigned int)0x0202cd54);
                  uVar4 = param_2 + iVar2 + -0x3e9;
                }
                goto LAB_0202cd10;
              }
              uVar3 = ((unsigned int)0x0202cd4c);
              uVar4 = 2000;
            }
            else {
              uVar3 = ((unsigned int)0x0202cd48);
              uVar4 = ((unsigned int)0x0202cd30) >> 1;
            }
          }
          else {
            uVar3 = ((unsigned int)0x0202cd44);
            uVar4 = 4000;
          }
          goto LAB_0202cce0;
        }
        uVar3 = ((unsigned int)0x0202cd40);
        uVar4 = param_2 - ((unsigned int)0x0202cd3c);
      }
      else {
        uVar3 = ((unsigned int)0x0202cd38);
        uVar4 = *(uint *)(*(int *)(param_1 + ((unsigned int)0x0202cd34)) + 0xc);
      }
    }
    else {
LAB_0202cce0:
      uVar4 = param_2 - uVar4;
    }
  }
  else {
    uVar3 = ((unsigned int)0x0202cd24);
    uVar4 = param_2 - 8000;
  }
LAB_0202cd10:
  func_02018ba4(auStack_58,uVar3,uVar4);
LAB_0202cd14:
  func_0x020a0e38(uVar1,auStack_58,param_2);
  return 1;
}
