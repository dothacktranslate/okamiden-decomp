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

void func_020600c4(int *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
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
  int local_28;
  int local_24;
  int iStack_20;

  uVar7 = *param_3;
  uVar3 = param_2 >> 0xc;
  iVar6 = param_4 + param_3[1];
  iVar5 = *(int *)(param_4 + 0xc);
  iVar4 = *(int *)(param_4 + 0x10);
  iStack_20 = param_4;
  if ((uVar7 & 0xc0000000) != 0) {
    uVar1 = uVar7 & ((unsigned int)0x020604c4);
    if ((uVar7 & 0x40000000) == 0) {
      if ((uVar3 & 3) == 0) {
        uVar3 = uVar3 >> 2;
      }
      else {
        if (uVar3 <= uVar1 >> 0x10) {
          if ((uVar3 & 1) != 0) {
            if ((uVar3 & 2) == 0) {
              uVar7 = uVar3 >> 2;
              uVar3 = uVar7 + 1;
            }
            else {
              uVar3 = uVar3 >> 2;
              uVar7 = uVar3 + 1;
            }
            iVar2 = func_02060800(param_1,param_4 + iVar5,param_4 + iVar4,
                                 *(undefined2 *)(iVar6 + uVar7 * 2));
            iVar4 = func_02060800(&local_44,param_4 + iVar5,param_4 + iVar4,
                                 *(undefined2 *)(iVar6 + uVar3 * 2));
            *param_1 = local_44 + *param_1 * 3;
            param_1[1] = local_40 + param_1[1] * 3;
            param_1[2] = local_3c + param_1[2] * 3;
            param_1[3] = local_38 + param_1[3] * 3;
            param_1[4] = local_34 + param_1[4] * 3;
            param_1[5] = local_30 + param_1[5] * 3;
            func_02002c10(param_1,param_1);
            func_02002c10(param_1 + 3,param_1 + 3);
            if (iVar2 != 0 || iVar4 != 0) {
              param_1[6] = param_1[1] * param_1[5] - param_1[2] * param_1[4] >> 0xc;
              param_1[7] = param_1[2] * param_1[3] - *param_1 * param_1[5] >> 0xc;
              param_1[8] = *param_1 * param_1[4] - param_1[1] * param_1[3] >> 0xc;
              return;
            }
            param_1[6] = local_2c + param_1[6] * 3;
            param_1[7] = local_28 + param_1[7] * 3;
            param_1[8] = local_24 + param_1[8] * 3;
            func_02002c10(param_1 + 6,param_1 + 6);
            return;
          }
          uVar3 = uVar3 >> 2;
          goto LAB_020602e4;
        }
        uVar3 = (uVar3 & 3) + (uVar1 >> 0x12);
      }
    }
    else if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 >> 1;
    }
    else {
      if (uVar3 <= uVar1 >> 0x10) {
        uVar3 = uVar3 >> 1;
LAB_020602e4:
        iVar2 = func_02060800(param_1,param_4 + iVar5,param_4 + iVar4,
                             *(undefined2 *)(iVar6 + uVar3 * 2));
        iVar4 = func_02060800(&local_68,param_4 + iVar5,param_4 + iVar4,
                             *(undefined2 *)(iVar6 + uVar3 * 2 + 2));
        *param_1 = *param_1 + local_68;
        param_1[1] = param_1[1] + local_64;
        param_1[2] = param_1[2] + local_60;
        param_1[3] = param_1[3] + local_5c;
        param_1[4] = param_1[4] + local_58;
        param_1[5] = param_1[5] + local_54;
        func_02002c10(param_1,param_1);
        func_02002c10(param_1 + 3,param_1 + 3);
        if (iVar2 != 0 || iVar4 != 0) {
          param_1[6] = param_1[1] * param_1[5] - param_1[2] * param_1[4] >> 0xc;
          param_1[7] = param_1[2] * param_1[3] - *param_1 * param_1[5] >> 0xc;
          param_1[8] = *param_1 * param_1[4] - param_1[1] * param_1[3] >> 0xc;
          return;
        }
        param_1[6] = param_1[6] + local_50;
        param_1[7] = param_1[7] + local_4c;
        param_1[8] = param_1[8] + local_48;
        func_02002c10(param_1 + 6,param_1 + 6);
        return;
      }
      uVar3 = (uVar1 >> 0x11) + 1;
    }
  }
  iVar4 = func_02060800(param_1,param_4 + iVar5,param_4 + iVar4,*(undefined2 *)(iVar6 + uVar3 * 2));
  if (iVar4 == 0) {
    func_02002c10(param_1 + 6,param_1 + 6);
    return;
  }
  param_1[6] = param_1[1] * param_1[5] - param_1[2] * param_1[4] >> 0xc;
  param_1[7] = param_1[2] * param_1[3] - *param_1 * param_1[5] >> 0xc;
  param_1[8] = *param_1 * param_1[4] - param_1[1] * param_1[3] >> 0xc;
  return;
}
