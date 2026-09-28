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

int * func_0203de6c(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = ((unsigned int)0x0203e0ec);
  switch(param_2) {
  case 0:
    if (param_1 != (int *)0x0) {
      *param_1 = ((unsigned int)0x0203e0ec);
      param_1[1] = 0;
      param_1[2] = 0;
      (**(code **)(*param_1 + 8))();
      *param_1 = ((unsigned int)0x0203e0f0);
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  default:
    return (int *)0x0;
  case 2:
    if (param_1 != (int *)0x0) {
      *param_1 = ((unsigned int)0x0203e0ec);
      param_1[1] = 0;
      param_1[2] = 0;
      (**(code **)(*param_1 + 8))();
      *param_1 = ((unsigned int)0x0203e0f4);
      (**(code **)(*param_1 + 8))();
    }
    break;
  case 3:
    if (param_1 != (int *)0x0) {
      *param_1 = ((unsigned int)0x0203e0ec);
      param_1[1] = 0;
      param_1[2] = 0;
      (**(code **)(*param_1 + 8))();
      *param_1 = ((unsigned int)0x0203e0f8);
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 4:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e0fc);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 5:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e100);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 6:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e104);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 7:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e108);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 8:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e10c);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 9:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e110);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 10:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e114);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 0xb:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e118);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 0xc:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e11c);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  case 0xd:
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = iVar1;
      (**(code **)(*param_1 + 8))();
      param_1[3] = -0x80000000;
      iVar1 = ((unsigned int)0x0203e120);
      param_1[0xc] = 0;
      *param_1 = iVar1;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*param_1 + 8))();
    }
    return param_1;
  }
  return param_1;
}
