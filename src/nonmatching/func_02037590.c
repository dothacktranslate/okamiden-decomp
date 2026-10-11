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

extern int func_02037328();
extern int func_02066f44();
extern int func_02066f6c();
extern int func_02067028();
extern int func_0206705c();

int func_02037590(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(param_1 + 0x614);
  iVar3 = 0;
  iVar2 = param_2;
  iVar1 = param_3;
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x618);
    iVar2 = 0;
    iVar1 = iVar3;
  }
  if ((iVar4 != 0 && iVar1 != 0) && -1 < iVar3) {
    do {
      if (param_2 == *(int *)(iVar4 + iVar2 * 4)) {
        param_3 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar3 = func_02037328(param_1,param_4);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x5f4) == 0) {
      func_0206705c(iVar3 + 0x2c);
      if (param_5 == 0) {
        func_02066f44(iVar3 + 0x2c,param_2,0);
      }
      else {
        func_02066f6c(iVar3 + 0x2c,0xffffffff,0xffffffff,param_2,0,0,0,((unsigned int)0x020376d8),0);
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x10;
      }
      if (-1 < param_3) {
        func_02067028(iVar3 + 0x2c,param_3,4);
      }
    }
    else {
      *(int *)(iVar3 + 0x2c) = param_2;
      if (param_5 != 0) {
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x10;
      }
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x100;
    }
    *(int *)(iVar3 + 0x10) = param_2;
    *(int *)(iVar3 + 0x18) = param_3;
    if (param_6 != (int *)0x0) {
      *(int **)(iVar3 + 0x28) = param_6;
      *param_6 = iVar3;
    }
    *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
    return iVar3;
  }
  return 0;
}
