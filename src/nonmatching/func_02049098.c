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

extern int func_02046414();
extern int func_02046444();
extern int func_02046464();
extern int func_0204661c();
extern int func_02046654();
extern int func_020467bc();
extern int func_02046898();
extern int func_020468f0();
extern int func_02046960();
extern int func_02047958();
extern int func_02047b4c();

undefined4 func_02049098(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  func_02047958(param_1,1);
  iVar1 = func_02047b4c(param_1,1,((unsigned int)0x0204919c));
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = func_02046444(param_1,1);
  switch(uVar2) {
  case 0:
    func_02046898(param_1,((unsigned int)0x020491a8),3);
    break;
  case 1:
    iVar1 = func_0204661c(param_1,1);
    uVar2 = ((unsigned int)0x020491a0);
    if (iVar1 == 0) {
      uVar2 = ((unsigned int)0x020491a4);
    }
    goto LAB_02049134;
  case 2:
  default:
    uVar2 = func_02046444(param_1,1);
    uVar2 = func_02046464(param_1,uVar2);
    uVar3 = func_020467bc(param_1,1);
    func_02046960(param_1,((unsigned int)0x020491ac),uVar2,uVar3);
    break;
  case 3:
    uVar2 = func_02046654(param_1,1,0);
LAB_02049134:
    func_020468f0(param_1,uVar2);
    break;
  case 4:
    func_02046414(param_1,1);
  }
  return 1;
}
