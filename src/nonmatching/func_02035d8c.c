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

extern int func_020028c0();

void func_02035d8c(uint *param_1,int param_2,uint *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;

  if ((*param_1 & 1) != 0) {
    return;
  }
  iVar5 = param_2 + -1;
  if (param_4 == 1) {
    iVar5 = param_2 + 1;
  }
  uVar2 = func_020028c0(param_1[param_2 * 8 + 1] - param_1[iVar5 * 8 + 1],param_1[iVar5 * 8 + 7]);
  uVar3 = func_020028c0(param_1[param_2 * 8 + 2] - param_1[iVar5 * 8 + 2],param_1[iVar5 * 8 + 7]);
  uVar4 = func_020028c0(param_1[param_2 * 8 + 3] - param_1[iVar5 * 8 + 3],param_1[iVar5 * 8 + 7]);
  lVar1 = (ulonglong)uVar2 * 0x3000 + 0x800;
  uVar2 = ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000) - param_1[iVar5 * 8 + 4]
  ;
  *param_3 = uVar2 * 0x800 + 0x800 >> 0xc |
             ((((int)uVar2 >> 0x1f) << 0xb | uVar2 >> 0x15) + (uint)(0xfffff7ff < uVar2 * 0x800)) *
             0x100000;
  lVar1 = (ulonglong)uVar3 * 0x3000 + 0x800;
  uVar2 = ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000) - param_1[iVar5 * 8 + 5]
  ;
  param_3[1] = uVar2 * 0x800 + 0x800 >> 0xc |
               ((((int)uVar2 >> 0x1f) << 0xb | uVar2 >> 0x15) + (uint)(0xfffff7ff < uVar2 * 0x800))
               * 0x100000;
  lVar1 = (ulonglong)uVar4 * 0x3000 + 0x800;
  uVar2 = ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000) - param_1[iVar5 * 8 + 6]
  ;
  param_3[2] = uVar2 * 0x800 + 0x800 >> 0xc |
               ((((int)uVar2 >> 0x1f) << 0xb | uVar2 >> 0x15) + (uint)(0xfffff7ff < uVar2 * 0x800))
               * 0x100000;
  return;
}
