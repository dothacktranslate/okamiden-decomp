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

extern int func_02006370();
extern int func_020063f8();
extern int func_0200653c();
extern int func_02008b6c();
extern int func_02008b80();
extern int func_020093b8();
extern int func_02009530();
extern int func_02009670();

void func_02009584(int param_1,int param_2,int param_3,code *param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  puVar2 = ((unsigned int)0x02009668);
  piVar1 = ((unsigned int)0x02009664);
  if (param_3 != 0) {
    do {
    } while ((*(unsigned int *)0x02009664) != 0);
    do {
    } while ((((*(unsigned int *)0x02009668) & 0x7000000) >> 0x18 & 2) == 0);
    (*(unsigned int *)0x02009664) = 1;
    piVar1[1] = param_1;
    piVar1[2] = param_2;
    piVar1[3] = param_3;
    piVar1[4] = (int)param_4;
    piVar1[5] = param_5;
    func_02009530(param_1,param_2,param_3,0,param_4);
    func_020093b8(param_1);
    uVar4 = func_02008b6c();
    piVar1[6] = *puVar2 >> 0x1e;
    iVar5 = func_020063f8(0x200000);
    piVar1[7] = iVar5;
    uVar3 = ((unsigned int)0x0200966c);
    *puVar2 = *puVar2 & 0x3fffffff | 0x40000000;
    func_02006370(0x200000,uVar3);
    func_0200653c(0x200000);
    func_02009670();
    func_02008b80(uVar4);
    return;
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(param_5);
    return;
  }
  return;
}
