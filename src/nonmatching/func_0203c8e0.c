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

extern int func_0201e9d4();
extern int func_0203c8c4();

void func_0203c8e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;

  piVar2 = (int *)(*(int *)(0xac + param_1) + param_2 * 0xc);
  iVar1 = (uint)*(ushort *)(*(int *)(0x1c + param_3) + 4) * 0x1000;
  if (param_5 >= iVar1) {
    param_5 = iVar1;
  }
  if (0x1000 < param_5) {
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_4 + 0x18) = 0x1000;
    *piVar2 = param_3;
    piVar2[1] = param_4;
    iVar1 = func_0201e9d4(0x1000,(int)(param_5 + ((uint)(param_5 >> 0xb) >> 0x14)) >> 0xc);
    piVar2[2] = iVar1;
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x1000;
  *(undefined4 *)(param_4 + 0x18) = 0x1000;
  piVar2[2] = 0;
  func_0203c8c4(param_1,param_4);
  return;
}
