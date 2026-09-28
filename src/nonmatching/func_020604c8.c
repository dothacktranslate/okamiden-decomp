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

extern int func_02002c10();
extern int func_02060800();

void func_020604c8(int *param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;

  uVar2 = (int)param_2 >> 0xc;
  iVar8 = param_4 + param_3[1];
  iVar5 = *(int *)(param_4 + 0xc);
  iVar9 = *(int *)(param_4 + 0x10);
  uVar4 = *param_3;
  iStack_28 = param_4;
  if (*(ushort *)(param_4 + 4) - 1 == uVar2) {
    if ((uVar4 & 0xc0000000) != 0) {
      if ((uVar4 & 0x40000000) == 0) {
        uVar2 = (uVar2 & 3) + (uVar2 >> 2);
      }
      else {
        uVar2 = (uVar2 & 1) + (uVar2 >> 1);
      }
    }
    if ((*(uint *)(param_4 + 8) & 2) == 0) {
      iVar5 = func_02060800(param_1,param_4 + iVar5,param_4 + iVar9,
                           *(undefined2 *)(iVar8 + uVar2 * 2));
      if (iVar5 == 0) {
        func_02002c10(param_1 + 6,param_1 + 6);
        return;
      }
      param_1[6] = param_1[1] * param_1[5] - param_1[2] * param_1[4] >> 0xc;
      param_1[7] = param_1[2] * param_1[3] - *param_1 * param_1[5] >> 0xc;
      param_1[8] = *param_1 * param_1[4] - param_1[1] * param_1[3] >> 0xc;
      return;
    }
    iVar6 = 0;
  }
  else if ((uVar4 & 0xc0000000) == 0) {
    iVar6 = uVar2 + 1;
  }
  else {
    uVar1 = (uVar4 & ((unsigned int)0x020607f4)) >> 0x10;
    if ((uVar4 & 0x40000000) == 0) {
      if (uVar2 < uVar1) {
        uVar2 = uVar2 >> 2;
        iVar6 = uVar2 + 1;
        param_2 = param_2 & ((unsigned int)0x020607f8);
        iVar7 = 4;
        goto LAB_02060634;
      }
      uVar2 = (uVar2 & 3) + (uVar2 >> 2);
      iVar6 = uVar2 + 1;
    }
    else {
      if (uVar2 < uVar1) {
        uVar2 = uVar2 >> 1;
        iVar6 = uVar2 + 1;
        param_2 = param_2 & ((unsigned int)0x020607f4) >> 0x10;
        iVar7 = 2;
        goto LAB_02060634;
      }
      uVar2 = (uVar4 & ((unsigned int)0x020607f4)) >> 0x11;
      iVar6 = uVar2 + 1;
    }
  }
  iVar7 = 1;
  param_2 = param_2 & ((unsigned int)0x020607fc);
LAB_02060634:
  iVar3 = func_02060800(&local_4c,param_4 + iVar5,param_4 + iVar9,*(undefined2 *)(iVar8 + uVar2 * 2))
  ;
  iVar5 = func_02060800(&local_70,param_4 + iVar5,param_4 + iVar9,*(undefined2 *)(iVar8 + iVar6 * 2))
  ;
  *param_1 = local_4c * iVar7 + ((int)(param_2 * (local_70 - local_4c)) >> 0xc);
  param_1[1] = local_48 * iVar7 + ((int)(param_2 * (local_6c - local_48)) >> 0xc);
  param_1[2] = local_44 * iVar7 + ((int)(param_2 * (local_68 - local_44)) >> 0xc);
  param_1[3] = local_40 * iVar7 + ((int)(param_2 * (local_64 - local_40)) >> 0xc);
  param_1[4] = local_3c * iVar7 + ((int)(param_2 * (local_60 - local_3c)) >> 0xc);
  param_1[5] = local_38 * iVar7 + ((int)(param_2 * (local_5c - local_38)) >> 0xc);
  func_02002c10(param_1,param_1);
  func_02002c10(param_1 + 3,param_1 + 3);
  if (iVar3 != 0 || iVar5 != 0) {
    param_1[6] = param_1[1] * param_1[5] - param_1[2] * param_1[4] >> 0xc;
    param_1[7] = param_1[2] * param_1[3] - *param_1 * param_1[5] >> 0xc;
    param_1[8] = *param_1 * param_1[4] - param_1[1] * param_1[3] >> 0xc;
    return;
  }
  param_1[6] = local_34 * iVar7 + ((int)(param_2 * (local_58 - local_34)) >> 0xc);
  param_1[7] = local_30 * iVar7 + ((int)(param_2 * (local_54 - local_30)) >> 0xc);
  param_1[8] = local_2c * iVar7 + ((int)(param_2 * (local_50 - local_2c)) >> 0xc);
  func_02002c10(param_1 + 6,param_1 + 6);
  return;
}
