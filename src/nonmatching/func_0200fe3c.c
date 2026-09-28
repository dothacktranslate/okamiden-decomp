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

extern int func_02008be8();
extern int func_0200f46c();
extern int func_0200f810();
extern int func_0200f874();
extern int func_0200fa00();

undefined4 func_0200fe3c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  uVar1 = ((unsigned int)0x02010028);
  if (param_1 == 0) {
    iVar3 = func_0200fa00(0);
    while (iVar3 != 0) {
      func_02008be8(uVar1);
      iVar3 = func_0200fa00(0);
    }
    if ((uint)((*(unsigned int *)0x0201002c) - *(int *)(((unsigned int)0x02010030) + 8)) < 3) {
      func_0200f46c();
      func_0200f46c();
    }
    iVar3 = ((unsigned int)0x02010030);
    piVar2 = ((unsigned int)0x0201002c);
    (*(unsigned int *)0x02010034) = (*(unsigned int *)0x02010034) & (ushort)((unsigned int)0x02010038);
    *(int *)(iVar3 + 4) = *piVar2;
    if (param_2 != 0) {
      if (param_4 == 0) {
        iVar3 = func_0200f810(param_2,0,0);
        while (iVar3 != 0) {
          func_02008be8(uVar1);
          iVar3 = func_0200f810(param_2,0,0);
        }
      }
      else {
        iVar3 = func_0200f874(param_2);
        while (iVar3 != 0) {
          func_02008be8(uVar1);
          iVar3 = func_0200f874(param_2);
        }
      }
    }
  }
  else if (param_1 == 1) {
    if ((param_3 == 0) && ((uint)((*(unsigned int *)0x0201002c) - *(int *)(((unsigned int)0x02010030) + 4)) < 8)) {
      return 0;
    }
    if (param_2 != 0) {
      if (param_4 == 0) {
        iVar3 = func_0200f810(param_2,0,0,0,0);
        while (iVar3 != 0) {
          func_02008be8(uVar1);
          iVar3 = func_0200f810(param_2,0,0);
        }
      }
      else {
        iVar3 = func_0200f874(param_2);
        while (iVar3 != 0) {
          func_02008be8(uVar1);
          iVar3 = func_0200f874(param_2);
        }
      }
    }
    iVar3 = ((unsigned int)0x02010030);
    (*(unsigned int *)0x02010034) = (*(unsigned int *)0x02010034) | 1;
    iVar4 = func_0200fa00(*(undefined4 *)(iVar3 + 0x14));
    while (iVar4 != 0) {
      func_02008be8(uVar1);
      iVar4 = func_0200fa00(*(undefined4 *)(iVar3 + 0x14));
    }
  }
  return 1;
}
