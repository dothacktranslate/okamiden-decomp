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
extern int func_0204661c();
extern int func_02046a48();
extern int func_02046b4c();
extern int func_02046bc4();
extern int func_02046c1c();
extern int func_02046dac();
extern int func_02046eb0();
extern int func_0204737c();
extern int func_02047550();

undefined4 func_020491b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  func_02046204(param_1,1);
  iVar3 = 0;
  func_0204737c(param_1,0);
  iVar1 = func_0204661c(param_1,1);
  if (iVar1 != 0) {
    iVar1 = func_02046444(param_1,1);
    if (iVar1 == 1) {
      func_02046bc4(param_1,0,0);
      func_02046414(param_1,0xffffffff);
      func_02046a48(param_1,1);
      func_02046dac(param_1,((unsigned int)0x020492ac));
    }
    else {
      iVar2 = func_02046c1c(param_1,1);
      iVar1 = ((unsigned int)0x020492ac);
      if (iVar2 != 0) {
        func_02046b4c(param_1,((unsigned int)0x020492ac));
        iVar3 = func_0204661c(param_1,iVar1 >> 0xe);
        func_02046204(param_1,iVar1 >> 0xd);
      }
      if (iVar3 == 0) {
        func_02047550(param_1,1,((unsigned int)0x020492b0));
      }
      func_02046c1c(param_1,1);
    }
    func_02046eb0(param_1,2);
    return 1;
  }
  return 1;
}
