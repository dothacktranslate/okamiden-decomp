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

extern int func_02002a94();
extern int func_02002ac4();
extern int func_02002c10();
extern int func_02002e50();
extern int func_0201e9b4();

void func_02040518(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 auStack_20 [12];

  iVar3 = *(int *)(param_1 + 100);
  iVar2 = (param_3 + 1) * 0xc;
  *(int *)(param_1 + 0x6c) = param_3;
  iVar1 = iVar3 + iVar2;
  local_34 = *(undefined4 *)(iVar1 + 8);
  local_38 = *(undefined4 *)(iVar1 + 4);
  local_3c = *(undefined4 *)(iVar3 + iVar2);
  param_3 = param_3 * 0xc;
  iVar1 = iVar3 + param_3;
  local_50 = *(undefined4 *)(iVar1 + 8);
  local_54 = *(undefined4 *)(iVar1 + 4);
  local_58 = *(undefined4 *)(iVar3 + param_3);
  local_6c = *(undefined4 *)(iVar1 + 8);
  local_70 = *(undefined4 *)(iVar1 + 4);
  local_74 = *(undefined4 *)(iVar3 + param_3);
  func_02002ac4(&local_3c,&local_58,&local_30);
  local_90 = local_30;
  local_8c = local_2c;
  local_88 = local_28;
  func_02002c10(&local_90,&local_90);
  iVar2 = local_88;
  iVar1 = local_8c;
  iVar3 = param_2 >> 0x1f;
  local_80 = local_8c;
  local_7c = local_88;
  local_84 = local_90;
  func_0201e9b4(local_90,local_90 >> 0x1f,param_2,iVar3);
  func_0201e9b4(iVar1,iVar1 >> 0x1f,param_2,iVar3);
  func_0201e9b4(iVar2,iVar2 >> 0x1f,param_2,iVar3);
  local_a8 = local_80;
  local_ac = local_84;
  local_a4 = local_7c;
  func_02002a94(&local_ac,&local_74,&local_a0);
  *(undefined4 *)(param_1 + 0x74) = local_a0;
  *(undefined4 *)(param_1 + 0x78) = local_9c;
  *(undefined4 *)(param_1 + 0x7c) = local_98;
  if ((-1 < param_4) && (-1 < param_5)) {
    *(int *)(param_1 + 0x70) = param_5;
    if ((*(int *)(param_1 + 0x6c) + 1 <= param_5 + -1) && (param_5 < *(int *)(param_1 + 0x68))) {
      func_02002ac4(*(int *)(param_1 + 100) + (param_5 + -1) * 0xc,
                   *(int *)(param_1 + 100) + param_5 * 0xc,auStack_20);
      func_02002c10(auStack_20,auStack_20);
      func_02002e50(param_4,auStack_20,*(int *)(param_1 + 100) + *(int *)(param_1 + 0x70) * 0xc,
                   param_1 + 0x80);
      return;
    }
    iVar1 = *(int *)(param_1 + 100) + param_5 * 0xc;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 100) + param_5 * 0xc);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar1 + 8);
  }
  return;
}
