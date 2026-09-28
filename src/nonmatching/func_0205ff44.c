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

void func_0205ff44(int *param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;

  uVar10 = (int)param_2 >> 0xc;
  iVar9 = param_4 + param_3[1];
  uVar3 = *param_3;
  if (*(ushort *)(param_4 + 4) - 1 == uVar10) {
    if ((uVar3 & 0xc0000000) != 0) {
      if ((uVar3 & 0x40000000) == 0) {
        uVar10 = (uVar10 & 3) + (uVar10 >> 2);
      }
      else {
        uVar10 = (uVar10 & 1) + (uVar10 >> 1);
      }
    }
    if ((*(uint *)(param_4 + 8) & 2) == 0) {
      if ((uVar3 & 0x20000000) == 0) {
        piVar2 = (int *)(iVar9 + uVar10 * 8);
        iVar9 = *piVar2;
        iVar5 = piVar2[1];
      }
      else {
        iVar5 = (int)*(short *)(iVar9 + uVar10 * 4 + 2);
        iVar9 = (int)*(short *)(iVar9 + uVar10 * 4);
      }
      *param_1 = iVar9;
      param_1[1] = iVar5;
      return;
    }
    iVar5 = 0;
  }
  else if ((uVar3 & 0xc0000000) == 0) {
    iVar5 = uVar10 + 1;
  }
  else {
    uVar1 = (uVar3 & ((unsigned int)0x020600b8)) >> 0x10;
    if ((uVar3 & 0x40000000) == 0) {
      if (uVar10 < uVar1) {
        uVar10 = uVar10 >> 2;
        iVar5 = uVar10 + 1;
        param_2 = param_2 & ((unsigned int)0x020600bc);
        iVar6 = 4;
        iVar7 = 2;
        goto LAB_02060048;
      }
      uVar10 = (uVar10 & 3) + (uVar10 >> 2);
      iVar5 = uVar10 + 1;
    }
    else {
      if (uVar10 < uVar1) {
        uVar10 = uVar10 >> 1;
        iVar5 = uVar10 + 1;
        param_2 = param_2 & ((unsigned int)0x020600b8) >> 0x10;
        iVar6 = 2;
        iVar7 = 1;
        goto LAB_02060048;
      }
      uVar10 = (uVar3 & ((unsigned int)0x020600b8)) >> 0x11;
      iVar5 = uVar10 + 1;
    }
  }
  iVar6 = 1;
  param_2 = param_2 & ((unsigned int)0x020600c0);
  iVar7 = 0;
LAB_02060048:
  if ((uVar3 & 0x20000000) == 0) {
    piVar2 = (int *)(iVar9 + uVar10 * 8);
    iVar4 = *piVar2;
    iVar11 = piVar2[1];
    iVar8 = *(int *)(iVar9 + iVar5 * 8);
    iVar9 = *(int *)(iVar9 + iVar5 * 8 + 4);
  }
  else {
    iVar11 = (int)*(short *)(iVar9 + uVar10 * 4 + 2);
    iVar4 = (int)*(short *)(iVar9 + uVar10 * 4);
    iVar8 = (int)*(short *)(iVar9 + iVar5 * 4);
    iVar9 = (int)*(short *)(iVar9 + iVar5 * 4 + 2);
  }
  *param_1 = iVar4 * iVar6 + ((int)(param_2 * (iVar8 - iVar4)) >> 0xc) >> iVar7;
  param_1[1] = iVar11 * iVar6 + ((int)(param_2 * (iVar9 - iVar11)) >> 0xc) >> iVar7;
  return;
}
