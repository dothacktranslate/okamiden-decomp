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

extern int func_02006980();
extern int func_02008c24();
extern int func_0200c040();
extern int func_0200c45c();
extern int func_0200c480();
extern int func_0200e478();
extern int func_0200e564();
extern int func_0200e87c();
extern int func_02012e3c();
extern int func_02012f88();

void func_0200e884(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  func_02012e3c();
  puVar1 = ((unsigned int)0x0200e9b0);
  (*(unsigned int *)0x0200e9b0) = param_1;
  uVar3 = func_02006980();
  iVar2 = ((unsigned int)0x0200e9b4);
  puVar1[1] = uVar3;
  func_0200c45c(iVar2);
  func_0200c480(iVar2,((unsigned int)0x0200e9b8),3);
  iVar4 = func_02008c24();
  if (iVar4 == 1) {
    iVar5 = func_02012f88();
    iVar6 = func_02012f88();
    iVar4 = ((unsigned int)0x0200e9c0);
    func_0200e564(iVar2,((unsigned int)0x0200e9bc));
    iVar5 = *(int *)(iVar5 + 0x40);
    if (iVar5 != -1 && iVar5 != 0) {
      iVar4 = *(int *)(iVar6 + 0x48);
    }
    if (((iVar5 != -1 && iVar5 != 0) && iVar4 != -1) && iVar4 != 0) {
      func_0200e478(iVar2);
    }
  }
  else {
    func_0200e87c(iVar2);
  }
  iVar2 = ((unsigned int)0x0200e9b4);
  if ((*(uint *)(((unsigned int)0x0200e9b4) + 0x14) & 2) == 0) {
    func_0200e564(((unsigned int)0x0200e9b4),((unsigned int)0x0200e9c8),0xffffffff);
    func_0200e478(iVar2,0,0,0,0,0,((unsigned int)0x0200e9cc),((unsigned int)0x0200e9d0));
  }
  func_0200c040(((unsigned int)0x0200e9d4));
  return;
}
