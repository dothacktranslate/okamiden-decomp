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

extern int func_02046204();
extern int func_02046414();
extern int func_02046444();
extern int func_02046464();
extern int func_020464e8();
extern int func_0204661c();
extern int func_02046898();
extern int func_02046ac0();
extern int func_02047028();
extern int func_02047714();
extern int func_020480b8();
extern int func_020510d8();
extern int func_0205117c();
extern int func_02051534();

void func_02051650(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = func_02046444(uVar3,3,param_3,param_4,param_4);
  switch(uVar1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto LAB_020516a0;
  case 4:
LAB_020516a0:
    func_02051534(param_1,param_2,param_3,param_4);
    return;
  case 5:
    func_020510d8(param_1,0,param_3,param_4);
    func_02046ac0(uVar3,3);
    break;
  case 6:
    func_02046414(uVar3,3);
    uVar1 = func_0205117c(param_1,param_3,param_4);
    func_02047028(uVar3,uVar1,1);
  }
  iVar2 = func_0204661c(uVar3,0xffffffff);
  if (iVar2 == 0) {
    func_02046204(uVar3,0xfffffffe);
    func_02046898(uVar3,param_3,param_4 - param_3);
  }
  else {
    iVar2 = func_020464e8(uVar3,0xffffffff);
    if (iVar2 == 0) {
      uVar1 = func_02046444(uVar3,0xffffffff);
      uVar1 = func_02046464(uVar3,uVar1);
      func_02047714(uVar3,((unsigned int)0x02051784),uVar1);
    }
  }
  func_020480b8(param_2);
  return;
}
