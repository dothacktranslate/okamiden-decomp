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

extern int func_02002e50();
extern int func_0203337c();

void func_02033504(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = param_8;
  uVar1 = param_7;
  if (((param_5 < 0) || (0x1000 < param_5)) && ((param_6 < 0 || (0x1000 < param_6)))) {
    if (0xfff < param_5) {
      param_5 = 0x1000;
    }
    if (param_5 < 1) {
      param_5 = 0;
    }
    uVar3 = param_4;
    func_02002e50(param_5,param_2,param_1,param_7);
    func_0203337c(param_3,param_4,uVar1,uVar2,1,&param_6,param_1,param_2,uVar3);
    if ((param_6 < 0) || (0x1000 < param_6)) {
      if (0xfff < param_6) {
        param_6 = 0x1000;
      }
      if (param_6 < 1) {
        param_6 = 0;
      }
      func_02002e50(param_6,param_4,param_3,uVar2);
      func_0203337c(param_1,param_2,uVar2,uVar1,0,&param_5,param_1,param_2,uVar3);
      func_0203337c(param_3,param_4,uVar1,uVar2,0,&param_6);
      return;
    }
  }
  else {
    if ((param_5 < 0) || (0x1000 < param_5)) {
      if (0xfff < param_5) {
        param_5 = 0x1000;
      }
      if (param_5 < 1) {
        param_5 = 0;
      }
      func_02002e50(param_5,param_2,param_1,param_7);
      func_0203337c(param_3,param_4,uVar1,uVar2,0,&param_6);
      return;
    }
    if ((param_6 < 0) || (0x1000 < param_6)) {
      if (0xfff < param_6) {
        param_6 = 0x1000;
      }
      if (param_6 < 1) {
        param_6 = 0;
      }
      func_02002e50(param_6,param_4,param_3,param_8);
      func_0203337c(param_1,param_2,uVar2,uVar1,0,&param_5);
    }
  }
  return;
}
