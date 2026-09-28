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

extern int func_02007820();
extern int func_02008b6c();
extern int func_02008b80();
extern int func_0200a82c();
extern int func_0200ad8c();
extern int func_0200b5ac();

undefined4 func_0200a9ec(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = func_02008b6c();
  iVar1 = ((unsigned int)0x0200ab7c);
  if (*(int *)(((unsigned int)0x0200ab7c) + 8) == 0) {
    func_02008b80();
    return 1;
  }
  if (7 < *(int *)(((unsigned int)0x0200ab7c) + 0x1c)) {
    if ((param_1 & 1) == 0) {
      func_02008b80();
      return 0;
    }
    do {
      func_0200a82c(1);
    } while (7 < *(int *)(iVar1 + 0x1c));
    if (*(int *)(iVar1 + 8) == 0) {
      func_02008b80(uVar3);
      return 1;
    }
  }
  uVar2 = ((unsigned int)0x0200ab80);
  func_02007820(((unsigned int)0x0200ab80),0x1800);
  iVar4 = func_0200b5ac(7,*(undefined4 *)(iVar1 + 8),0);
  if (iVar4 < 0) {
    if ((param_1 & 1) == 0) {
      func_02008b80(uVar3);
      return 0;
    }
    while ((7 < *(int *)(iVar1 + 0x1c) ||
           (iVar4 = func_0200b5ac(7,*(undefined4 *)(iVar1 + 8),0), iVar4 < 0))) {
      func_02008b80(uVar3);
      func_0200a82c(0);
      uVar3 = func_02008b6c();
      func_02007820(uVar2,0x1800);
      if (*(int *)(iVar1 + 8) == 0) {
        func_02008b80(uVar3);
        return 1;
      }
    }
  }
  iVar4 = *(int *)(iVar1 + 0x18) + 1;
  *(undefined4 *)(((unsigned int)0x0200ab84) + *(int *)(iVar1 + 0x18) * 4) = *(undefined4 *)(iVar1 + 8);
  *(int *)(iVar1 + 0x18) = iVar4;
  if (8 < iVar4) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  func_02008b80(uVar3);
  if ((param_1 & 2) != 0) {
    func_0200ad8c();
  }
  return 1;
}
