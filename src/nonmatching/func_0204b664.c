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

extern int func_0204a6a8();
extern int func_0204b4e4();

undefined4 func_0204b664(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;

  uVar1 = (*(int **)(param_2 + 4))[1];
  bVar5 = uVar1 != 6;
  if (!bVar5) {
    uVar1 = (uint)*(byte *)(**(int **)(param_2 + 4) + 6);
  }
  if ((bVar5 || uVar1 != 0) || (*(int *)(param_2 + 0x14) < 1)) {
    uVar1 = (*(int **)(param_2 + -0x14))[1];
    bVar5 = uVar1 == 6;
    if (bVar5) {
      uVar1 = (uint)*(byte *)(**(int **)(param_2 + -0x14) + 6);
    }
    if (bVar5 && uVar1 == 0) {
      iVar2 = func_0204a6a8(param_1,param_2 + -0x18);
      uVar4 = *(uint *)(*(int *)(*(int *)(**(int **)(param_2 + -0x14) + 0x10) + 0xc) + iVar2 * 4);
      uVar1 = uVar4 & 0x3f;
      if ((uVar1 == 0x1c || uVar1 == 0x1d) || uVar1 == 0x21) {
        uVar3 = func_0204b4e4(param_1,param_2 + -0x18,uVar4 >> 6 & 0xff,param_3);
        return uVar3;
      }
      return 0;
    }
  }
  return 0;
}
