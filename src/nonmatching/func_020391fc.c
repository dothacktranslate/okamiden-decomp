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

extern int func_02006064();
extern int func_02006074();
extern int func_020392d0();
extern int func_02062edc();
extern int func_02062f5c();
extern int func_0206314c();
extern int func_020632bc();
extern int func_02063ba0();
extern int func_02063ce8();
extern int func_02063f08();
extern int func_02064074();

undefined4 func_020391fc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
    func_02062f5c();
    func_020632bc();
  }
  else {
    func_02063ce8();
    func_02064074();
  }
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  iVar1 = func_02006064();
  iVar2 = func_02006074();
  if ((iVar1 != 0) && (iVar2 != 0)) {
    switch(iVar1) {
    default:
      iVar1 = 2;
      break;
    case 1:
    case 2:
    case 4:
    case 8:
      iVar1 = 1;
      break;
    case 7:
    case 0xb:
    case 0xd:
    case 0xe:
      iVar1 = 3;
      break;
    case 0xf:
      iVar1 = 4;
    }
    if (param_2 == 0) {
      func_02062edc(iVar1,1);
    }
    else {
      func_02063ba0(iVar1 << 0x11,param_3,*(undefined4 *)(param_1 + 0x28),
                   *(undefined4 *)(param_1 + 0x2c),1);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
    }
    uVar3 = func_020392d0(param_1,iVar2);
    if (param_2 == 0) {
      func_0206314c(uVar3,1);
    }
    else {
      func_02063f08(uVar3,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
    }
    return 1;
  }
  return 0;
}
