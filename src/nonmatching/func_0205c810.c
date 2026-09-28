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

void func_0205c810(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint unaff_r5;
  int iVar3;

  if ((param_1[2] & 0x200U) == 0) {
    bVar1 = *(byte *)(*param_1 + 1);
    if (param_1[5] != 0) {
      unaff_r5 = (uint)*(byte *)((int)param_1 + 0x8e);
    }
    if (param_1[5] == 0) {
      unaff_r5 = 0;
    }
    *(byte *)(param_1 + 0x2b) = bVar1;
    param_1[2] = param_1[2] | 4;
    param_1[0x2e] = (int)(param_1 + 0x61);
    if (unaff_r5 == 1) {
      param_1[2] = param_1[2] & 0xffffffbf;
      (*(code *)param_1[5])(param_1);
      if (param_1[5] != 0) {
        unaff_r5 = (uint)*(byte *)((int)param_1 + 0x8e);
      }
      if (param_1[5] == 0) {
        unaff_r5 = 0;
      }
      uVar2 = param_1[2] & 0x40;
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      iVar3 = param_1[1];
      if (((*(int *)(iVar3 + 0x18) == 0) ||
          ((*(uint *)(iVar3 + (uint)(bVar1 >> 5) * 4 + 0x4c) & 1 << (bVar1 & 0x1f)) == 0)) ||
         (iVar3 = (**(code **)(iVar3 + 0x1c))(param_1[0x2e],*(int *)(iVar3 + 0x18),(uint)bVar1),
         iVar3 == 0)) {
        *(uint *)param_1[0x2e] = *(byte *)(*param_1 + 2) & 1;
      }
    }
    if (unaff_r5 == 2) {
      param_1[2] = param_1[2] & 0xffffffbf;
      (*(code *)param_1[5])(param_1);
      if (param_1[5] != 0) {
        unaff_r5 = (uint)*(byte *)((int)param_1 + 0x8e);
      }
      if (param_1[5] == 0) {
        unaff_r5 = 0;
      }
      uVar2 = param_1[2] & 0x40;
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      if (*(int *)param_1[0x2e] == 0) {
        param_1[2] = param_1[2] & 0xfffffffe;
      }
      else {
        param_1[2] = param_1[2] | 1;
      }
    }
    if (unaff_r5 == 3) {
      param_1[2] = param_1[2] & 0xffffffbf;
      (*(code *)param_1[5])(param_1);
    }
  }
  *param_1 = *param_1 + 3;
  return;
}
