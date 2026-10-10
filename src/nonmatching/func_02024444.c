#pragma thumb on

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

extern int func_02022f48();
extern int func_02046868();
extern int func_02046ae8();
extern int func_0204c654();

undefined4 func_02024444(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = ((unsigned int)0x020244b0);
  iVar2 = func_02022f48((*(unsigned int *)0x020244b0) + 0xf0,0,0,0);
  if ((iVar2 == 1) &&
     ((*(uint *)(*(int *)(*(int *)(*(int *)*piVar1 + 0x5c) + 0x30) + 0x14) & 2) == 0)) {
    return 1;
  }
  func_02046ae8(*(undefined4 *)(0x10 + param_1),((unsigned int)0xffffd8ee),((unsigned int)0x020244b8));
  func_02046868(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_2 + 0x8c));
  uVar3 = func_0204c654(*(undefined4 *)(param_1 + 0x10),1);
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + (uint)*(byte *)(param_2 + 0xa0);
  }
  return uVar3;
}
