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

extern int func_02001ddc();
extern int func_02001f48();
extern int func_02001f6c();
extern int func_0203a28c();

void func_0203a2cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_54 [64];
  undefined4 uStack_14;

  iVar1 = ((unsigned int)0x0203a360);
  iVar2 = *(int *)(param_1 + ((unsigned int)0x0203a360));
  *(undefined4 *)(iVar2 + ((unsigned int)0x0203a360) + -0x9c) = 4;
  *(undefined4 *)(iVar2 + iVar1 + -0x90) = 0x400;
  *(undefined4 *)(iVar2 + iVar1 + -0xb0) = 0;
  *(undefined4 *)(iVar2 + iVar1 + -0xac) = 1;
  *(undefined4 *)(iVar2 + iVar1 + -0xa8) = *(undefined4 *)(iVar2 + iVar1 + -0x9c);
  *(undefined2 *)(iVar2 + iVar1 + -0x98) = 0;
  *(undefined4 *)(*(int *)(param_1 + iVar1) + iVar1 + -0xa0) = 0x180;
  uStack_14 = param_4;
  func_02001f48(param_1 + 0x38,(int)*(short *)(((unsigned int)0x0203a364) + 0x14),
               (int)*(short *)(((unsigned int)0x0203a364) + 0x16));
  func_02001ddc(param_1 + 0x38,param_1 + 0x38,((unsigned int)0x0203a368),0x1000,0x1000);
  func_02001f48(auStack_54,(int)*(short *)(((unsigned int)0x0203a36c) + 0x28),(int)*(short *)(((unsigned int)0x0203a36c) + 0x2a))
  ;
  func_02001f6c(auStack_54,param_1 + 0x38,param_1 + 0x38);
  func_0203a28c(param_1,0);
  return;
}
