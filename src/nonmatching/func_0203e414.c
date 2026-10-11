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

extern int func_0205e0c0();

void func_0203e414(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30 [4];
  int local_20;
  int local_1c;
  undefined4 uStack_18;

  local_48[0] = *(int *)(param_1 + 0x24);
  local_1c = *(int *)(param_1 + 0x30);
  local_60[0] = local_48[0] + local_1c;
  local_60[1] = *(int *)(param_1 + 0x28);
  local_60[2] = *(int *)(param_1 + 0x2c);
  local_60[3] = local_48[0] - local_1c;
  local_48[1] = local_60[1] + local_1c;
  local_38 = local_60[1] - local_1c;
  local_30[2] = local_60[2] + local_1c;
  local_1c = local_60[2] - local_1c;
  iVar2 = 0;
  local_50 = local_60[1];
  local_4c = local_60[2];
  local_48[2] = local_60[2];
  local_48[3] = local_48[0];
  local_34 = local_60[2];
  local_30[0] = local_48[0];
  local_30[1] = local_60[1];
  local_30[3] = local_48[0];
  local_20 = local_60[1];
  uStack_18 = param_4;
  func_0205e0c0(0x11,0,0);
  local_98 = 2;
  func_0205e0c0(0x10,&local_98,1);
  local_6c = ((unsigned int)0x0203e5d8);
  local_64 = ((unsigned int)0x0203e5e0) | 0x15000000;
  local_70 = ((unsigned int)0x0203e5dc);
  local_68 = 0;
  func_0205e0c0(((unsigned int)0x0203e5dc),&local_6c,3);
  local_70 = 0;
  local_9c = 0;
  func_0205e0c0(0x40,&local_9c,1);
  iVar3 = 0;
  do {
    func_0205e0c0(0x15,0,0);
    iVar1 = iVar2 >> 0x1f;
    iVar1 = ((uint)(iVar2 * -0x80000000 + iVar1) >> 0x1f | iVar1 << 1) - iVar1;
    local_7c = local_60[iVar1 * 3];
    local_78 = local_60[iVar1 * 3 + 1];
    local_74 = local_60[iVar1 * 3 + 2];
    func_0205e0c0(0x1c,&local_7c,3);
    func_0205e0c0(0x24,&local_70,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  func_0205e0c0(0x41,0,0);
  local_6c = ((unsigned int)0x0203e5e4);
  local_70 = ((unsigned int)0x0203e5dc);
  func_0205e0c0(((unsigned int)0x0203e5dc),&local_6c,3);
  local_a0 = 0;
  func_0205e0c0(0x40,&local_a0,1);
  local_70 = 0;
  iVar2 = 0;
  do {
    func_0205e0c0(0x15,0,0);
    iVar1 = iVar3 >> 0x1f;
    iVar1 = ((uint)(iVar3 * -0x80000000 + iVar1) >> 0x1f | iVar1 << 1) - iVar1;
    local_88 = local_48[iVar1 * 3];
    local_84 = local_48[iVar1 * 3 + 1];
    local_80 = local_48[iVar1 * 3 + 2];
    func_0205e0c0(0x1c,&local_88,3);
    func_0205e0c0(0x24,&local_70,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  func_0205e0c0(0x41,0,0);
  local_6c = 0xfc00;
  local_70 = ((unsigned int)0x0203e5dc);
  func_0205e0c0(((unsigned int)0x0203e5dc),&local_6c,3);
  local_a4 = 0;
  func_0205e0c0(0x40,&local_a4,1);
  local_70 = 0;
  do {
    func_0205e0c0(0x15,0,0);
    iVar3 = iVar2 >> 0x1f;
    iVar3 = ((uint)(iVar2 * -0x80000000 + iVar3) >> 0x1f | iVar3 << 1) - iVar3;
    local_94 = local_30[iVar3 * 3];
    local_90 = local_30[iVar3 * 3 + 1];
    local_8c = local_30[iVar3 * 3 + 2];
    func_0205e0c0(0x1c,&local_94,3);
    func_0205e0c0(0x24,&local_70,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  func_0205e0c0(0x41,0,0);
  local_a8 = 1;
  func_0205e0c0(0x12,&local_a8,1);
  return;
}
