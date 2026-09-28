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
extern int func_020464e8();
extern int func_0204661c();
extern int func_02046654();
extern int func_02046770();
extern int func_02046898();
extern int func_020468f0();
extern int func_02046a48();
extern int func_02046a74();
extern int func_02046ae8();
extern int func_02046b84();
extern int func_02046d44();
extern int func_02047028();
extern int func_020472dc();
extern int func_02047714();
extern int func_02047988();

undefined4 func_0204ecf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  uVar2 = func_02047988(param_1,1,0,param_4,param_4);
  func_02046204(param_1,1);
  iVar4 = ((unsigned int)0x0204ef50);
  func_02046ae8(param_1,((unsigned int)0x0204ef50),((unsigned int)0x0204ef54));
  func_02046ae8(param_1,2,uVar2);
  iVar3 = func_0204661c(param_1,0xffffffff);
  if (iVar3 != 0) {
    iVar4 = func_02046770(param_1,0xffffffff);
    if (iVar4 == ((unsigned int)0x0204ef58)) {
      func_02047714(param_1,((unsigned int)0x0204ef5c),uVar2);
    }
    return 1;
  }
  func_02046ae8(param_1,iVar4 + -1,((unsigned int)0x0204ef60));
  iVar4 = func_02046444(param_1,0xffffffff);
  if (iVar4 != 5) {
    func_02047714(param_1,((unsigned int)0x0204ef64));
  }
  func_02046898(param_1,((unsigned int)0x0204ef68),0);
  uVar1 = ((unsigned int)0x0204ef6c);
  iVar4 = 1;
  while( true ) {
    func_02046b84(param_1,0xfffffffe,iVar4);
    iVar3 = func_02046444(param_1,0xffffffff);
    if (iVar3 == 0) {
      uVar5 = func_02046654(param_1,0xfffffffe,0);
      func_02047714(param_1,uVar1,uVar2,uVar5);
    }
    func_020468f0(param_1,uVar2);
    func_02047028(param_1,1,1);
    iVar3 = func_02046444(param_1,0xffffffff);
    if (iVar3 == 6) break;
    iVar3 = func_020464e8(param_1,0xffffffff);
    if (iVar3 == 0) {
      func_02046204(param_1,0xfffffffe);
    }
    else {
      func_020472dc(param_1,2);
    }
    iVar4 = iVar4 + 1;
  }
  func_02046a74(param_1,((unsigned int)0x0204ef58));
  func_02046d44(param_1,2,uVar2);
  func_020468f0(param_1,uVar2);
  func_02047028(param_1,1,1);
  iVar4 = func_02046444(param_1,0xffffffff);
  if (iVar4 != 0) {
    func_02046d44(param_1,2,uVar2);
  }
  func_02046ae8(param_1,2,uVar2);
  iVar4 = func_02046770(param_1,0xffffffff);
  if (iVar4 == ((unsigned int)0x0204ef58)) {
    func_02046a48(param_1,1);
    func_02046414(param_1,0xffffffff);
    func_02046d44(param_1,2,uVar2);
  }
  return 1;
}
