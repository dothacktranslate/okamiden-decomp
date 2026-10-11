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

extern int func_020461e8();
extern int func_02046204();
extern int func_02046414();
extern int func_02046444();
extern int func_02046ae8();
extern int func_02046d44();
extern int func_02047714();
extern int func_02047988();
extern int func_02047e18();
extern int func_0204ef70();
extern int func_0204f008();
extern int func_0204f064();

undefined4 func_0204f0f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar1 = func_02047988(param_1,1,0,param_4,param_4);
  iVar2 = func_020461e8(param_1);
  iVar4 = ((unsigned int)0x0204f220);
  func_02046ae8(param_1,((unsigned int)0x0204f220),((unsigned int)0x0204f224));
  func_02046ae8(param_1,iVar2 + 1,uVar1);
  iVar3 = func_02046444(param_1,iVar4 >> 0xe);
  if (iVar3 != 5) {
    func_02046204(param_1,iVar4 >> 0xd);
    iVar3 = func_02047e18(param_1,iVar4 + -2,uVar1,1);
    if (iVar3 != 0) {
      uVar1 = func_02047714(param_1,((unsigned int)0x0204f228),uVar1);
      return uVar1;
    }
    func_02046414(param_1,iVar4 >> 0xe);
    func_02046d44(param_1,iVar2 + 1,uVar1);
  }
  func_02046ae8(param_1,0xffffffff,((unsigned int)0x0204f22c));
  iVar4 = func_02046444(param_1,0xffffffff);
  if (iVar4 == 0) {
    func_02046204(param_1,0xfffffffe);
    func_0204f064(param_1,uVar1);
  }
  else {
    func_02046204(param_1,0xfffffffe);
  }
  func_02046414(param_1,0xffffffff);
  func_0204ef70(param_1);
  func_0204f008(param_1,iVar2);
  return 0;
}
