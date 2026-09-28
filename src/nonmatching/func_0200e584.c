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

extern int func_020099f0();
extern int func_0200c8e0();
extern int func_0200c9e0();
extern int func_0200cafc();
extern int func_0200cbc0();
extern int func_0200e6c4();
extern int func_0200e758();

uint func_0200e584(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_64 [72];

  if ((param_2 != 0) && (iVar1 = func_0200e758(), iVar1 != 0)) {
    func_0200e6c4(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x10) + 0x3fU & 0xffffffe0;
  if (uVar3 <= param_3) {
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    func_0200c8e0(auStack_64);
    iVar2 = func_0200c9e0(auStack_64,param_1,*(int *)(iVar1 + 4),
                         *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8),0xffffffff);
    if (iVar2 != 0) {
      iVar2 = func_0200cbc0(auStack_64,uVar4,*(undefined4 *)(iVar1 + 8));
      if (iVar2 < 0) {
        func_020099f0(uVar4,0,*(undefined4 *)(iVar1 + 8));
      }
      func_0200cafc(auStack_64);
    }
    *(uint *)(iVar1 + 4) = uVar4;
    iVar5 = uVar4 + *(int *)(iVar1 + 8);
    iVar2 = func_0200c9e0(auStack_64,param_1,*(int *)(iVar1 + 0xc),
                         *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x10),0xffffffff);
    if (iVar2 != 0) {
      iVar2 = func_0200cbc0(auStack_64,iVar5,*(undefined4 *)(iVar1 + 0x10));
      if (iVar2 < 0) {
        func_020099f0(iVar5,0,*(undefined4 *)(iVar1 + 0x10));
      }
      func_0200cafc(auStack_64);
    }
    *(int *)(iVar1 + 0xc) = iVar5;
    *(int *)(iVar1 + 0x1c) = param_2;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
  }
  return uVar3;
}
