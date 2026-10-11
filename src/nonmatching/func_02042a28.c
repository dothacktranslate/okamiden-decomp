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

extern int func_02001c28();
extern int func_0201ebe0();
extern int func_0203bc28();
extern int func_0203c034();
extern int func_0203c114();
extern int func_0203c3bc();
extern int func_020429b0();
extern int func_02042bc4();

int func_02042a28(uint *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar5;
  int iVar6;

  if (((*param_1 & 8) != 0) || (*param_2 != 3)) {
    return -1;
  }
  iVar1 = param_2[1];
  uVar2 = (*(unsigned int *)0x02042bbc);
  iVar3 = func_0203c3bc(uVar2,iVar1);
  if ((iVar3 == 0) || (iVar4 = func_0203bc28(), iVar4 == 0)) {
    param_2[5] = param_2[5] | 0x40;
  }
  iVar4 = func_020429b0(param_1,param_3);
  if (iVar4 != -1) {
    if (param_3 == 0) {
      func_0201ebe0(iVar4,param_1[2]);
      iVar6 = extraout_r1_00;
    }
    else {
      uVar5 = param_1[2];
      func_0201ebe0(iVar4,uVar5);
      iVar6 = uVar5 + extraout_r1;
    }
    if (iVar6 < 0) {
      return -1;
    }
    if ((param_2[5] & 0x40U) != 0) {
      if ((param_2[5] & 0x20U) == 0) {
        return -1;
      }
      iVar1 = func_0203c114(uVar2,iVar1);
      if (iVar1 == 0) {
        return -1;
      }
      if (iVar3 != 0) {
        func_0203c034();
      }
    }
    iVar3 = iVar6 * 0xbc;
    *(undefined4 *)(param_1[1] + iVar3 + 8) = 2;
    *(int *)(param_1[1] + iVar3 + 0x78) = param_2[1];
    *(int *)(param_1[1] + iVar3 + 0x7c) = iVar4;
    *(int *)(param_1[1] + iVar3 + 0x80) = param_2[3];
    *(undefined4 *)(param_1[1] + iVar3 + 0xac) = 0;
    iVar1 = param_1[1] + iVar3;
    *(undefined4 *)(param_1[1] + iVar3 + 0x98) = *(undefined4 *)(((unsigned int)0x02042bc0) + 0xc);
    *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(((unsigned int)0x02042bc0) + 0x10);
    *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(((unsigned int)0x02042bc0) + 0x14);
    *(int *)(param_1[1] + iVar3 + 0x84) = param_2[5];
    *(undefined4 *)(param_1[1] + iVar3 + 0xb4) = 0;
    *(undefined4 *)(param_1[1] + iVar3 + 0x88) = 0;
    *(int *)(param_1[1] + iVar3 + 0xb0) = param_2[4];
    *(undefined4 *)(param_1[1] + iVar3 + 0xa4) = 0;
    *(undefined4 *)(param_1[1] + iVar3 + 0xa8) = 0;
    iVar1 = param_1[1] + iVar3;
    *(undefined4 *)(param_1[1] + iVar3 + 0x8c) = 0x1000;
    *(undefined4 *)(iVar1 + 0x90) = 0x1000;
    *(undefined4 *)(iVar1 + 0x94) = 0x1000;
    *(undefined4 *)(param_1[1] + iVar3 + 0xb8) = 0;
    func_02001c28(param_1[1] + iVar3 + 0xc);
    if (((*(uint *)(param_1[1] + iVar3 + 0x84) & 0x40) == 0) &&
       (iVar1 = func_02042bc4(param_1,iVar6), iVar1 == 0)) {
      return -1;
    }
    return iVar4;
  }
  return -1;
}
