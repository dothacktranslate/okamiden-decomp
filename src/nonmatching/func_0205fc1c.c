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

void func_0205fc1c(int *param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;

  uVar8 = (int)param_2 >> 0xc;
  piVar6 = (int *)(param_4 + param_3[1]);
  uVar3 = *param_3;
  if (*(ushort *)(param_4 + 4) - 1 == uVar8) {
    if ((uVar3 & 0xc0000000) != 0) {
      if ((uVar3 & 0x40000000) == 0) {
        uVar8 = (uVar8 & 3) + (uVar8 >> 2);
      }
      else {
        uVar8 = (uVar8 & 1) + (uVar8 >> 1);
      }
    }
    if ((*(uint *)(param_4 + 8) & 2) == 0) {
      if ((uVar3 & 0x20000000) == 0) {
        iVar5 = piVar6[uVar8];
      }
      else {
        iVar5 = (int)*(short *)((int)piVar6 + uVar8 * 2);
      }
      *param_1 = iVar5;
      return;
    }
    if ((uVar3 & 0x20000000) == 0) {
      iVar5 = piVar6[uVar8];
      iVar2 = *piVar6;
    }
    else {
      iVar5 = (int)*(short *)((int)piVar6 + uVar8 * 2);
      iVar2 = (int)(short)*piVar6;
    }
    *param_1 = iVar5 + ((int)((param_2 & ((unsigned int)0x0205fd64)) * (iVar2 - iVar5)) >> 0xc);
    return;
  }
  if ((uVar3 & 0xc0000000) != 0) {
    uVar1 = (uVar3 & ((unsigned int)0x0205fd68)) >> 0x10;
    if ((uVar3 & 0x40000000) == 0) {
      if (uVar8 < uVar1) {
        uVar8 = uVar8 >> 2;
        param_2 = param_2 & ((unsigned int)0x0205fd6c);
        iVar5 = 4;
        iVar2 = 2;
        goto LAB_0205fd28;
      }
      uVar8 = (uVar8 & 3) + (uVar8 >> 2);
    }
    else {
      if (uVar8 < uVar1) {
        uVar8 = uVar8 >> 1;
        param_2 = param_2 & ((unsigned int)0x0205fd68) >> 0x10;
        iVar5 = 2;
        iVar2 = 1;
        goto LAB_0205fd28;
      }
      uVar8 = (uVar3 & ((unsigned int)0x0205fd68)) >> 0x11;
    }
  }
  iVar5 = 1;
  param_2 = param_2 & ((unsigned int)0x0205fd64);
  iVar2 = 0;
LAB_0205fd28:
  if ((uVar3 & 0x20000000) == 0) {
    iVar7 = piVar6[uVar8];
    iVar4 = (piVar6 + uVar8)[1];
  }
  else {
    iVar7 = (int)*(short *)((int)piVar6 + uVar8 * 2);
    iVar4 = (int)*(short *)((int)piVar6 + uVar8 * 2 + 2);
  }
  *param_1 = iVar7 * iVar5 + ((int)(param_2 * (iVar4 - iVar7)) >> 0xc) >> iVar2;
  return;
}
