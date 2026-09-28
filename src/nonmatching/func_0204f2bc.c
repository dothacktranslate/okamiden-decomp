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
extern int func_0204630c();
extern int func_02046414();
extern int func_02046898();
extern int func_020469a8();
extern int func_02046bc4();
extern int func_02046d44();
extern int func_02046e2c();
extern int func_020477f0();
extern int func_02047bc4();
extern int func_02047e18();
extern int func_0204f2b8();

undefined4 func_0204f2bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  func_020477f0(param_1,((unsigned int)0x0204f44c));
  iVar3 = 0;
  func_020469a8(param_1,((unsigned int)0x0204f450),0);
  func_02046d44(param_1,0xfffffffe,((unsigned int)0x0204f454));
  func_02047bc4(param_1,((unsigned int)0x0204f458),((unsigned int)0x0204f45c));
  func_02046414(param_1,0xffffffff);
  func_0204630c(param_1,((unsigned int)0x0204f460));
  func_02046bc4(param_1,0,4);
  iVar1 = ((unsigned int)0x0204f468);
  iVar2 = *(int *)(((unsigned int)0x0204f464) + 4);
  while (iVar2 != 0) {
    func_020469a8(param_1,*(undefined4 *)(iVar1 + iVar3 * 4),0);
    func_02046e2c(param_1,0xfffffffe,iVar3 + 1);
    iVar3 = iVar3 + 1;
    iVar2 = *(int *)(iVar1 + iVar3 * 4);
  }
  func_02046d44(param_1,0xfffffffe,((unsigned int)0x0204f46c));
  func_0204f2b8(param_1,((unsigned int)0x0204f470),((unsigned int)0x0204f474),((unsigned int)0x0204f478));
  func_0204f2b8(param_1,((unsigned int)0x0204f47c),((unsigned int)0x0204f480),((unsigned int)0x0204f484));
  func_02046898(param_1,((unsigned int)0x0204f488),9);
  func_02046d44(param_1,0xfffffffe,((unsigned int)0x0204f48c));
  iVar3 = ((unsigned int)0x0204f490);
  func_02047e18(param_1,((unsigned int)0x0204f490),((unsigned int)0x0204f494),2);
  func_02046d44(param_1,0xfffffffe,((unsigned int)0x0204f498));
  func_02046bc4(param_1,0,0);
  func_02046d44(param_1,0xfffffffe,((unsigned int)0x0204f49c));
  func_02046414(param_1,iVar3 + -2);
  func_02047bc4(param_1,0,((unsigned int)0x0204f4a0));
  func_02046204(param_1,0xfffffffe);
  return 1;
}
