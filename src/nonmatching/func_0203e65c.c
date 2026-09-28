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

void func_0203e65c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84 [3];
  int local_78 [4];
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;

  iVar2 = 0;
  uStack_18 = param_4;
  func_0205e0c0(0x11,0,0);
  local_8c = 2;
  func_0205e0c0(0x10,&local_8c,1);
  local_88 = ((unsigned int)0x0203e794);
  local_84[0] = *(ushort *)(param_1 + 0x14) | 0x8000;
  local_84[1] = 0;
  iVar1 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
  local_84[2] = (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar1) >> 0x1b | iVar1 << 5) -
                iVar1) * 0x10000 | ((unsigned int)0x0203e798) | 0x15000000;
  func_0205e0c0(((unsigned int)0x0203e794),local_84,3);
  local_88 = 0;
  local_84[0] = 0;
  local_78[0] = *(int *)(param_1 + 0x30);
  local_68 = *(int *)(param_1 + 0x34);
  local_2c = *(int *)(param_1 + 0x60);
  local_78[1] = local_68 + local_2c;
  local_78[2] = *(undefined4 *)(param_1 + 0x38);
  local_60 = *(undefined4 *)(param_1 + 0x3c);
  local_50 = *(int *)(param_1 + 0x40);
  local_5c = local_50 + local_2c;
  local_58 = *(undefined4 *)(param_1 + 0x44);
  local_48 = *(undefined4 *)(param_1 + 0x48);
  local_38 = *(int *)(param_1 + 0x4c);
  local_44 = local_38 + local_2c;
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_30 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(int *)(param_1 + 0x58);
  local_2c = local_20 + local_2c;
  local_28 = *(undefined4 *)(param_1 + 0x5c);
  local_90 = 3;
  local_78[3] = local_78[0];
  local_64 = local_78[2];
  local_54 = local_60;
  local_4c = local_58;
  local_3c = local_48;
  local_34 = local_40;
  local_24 = local_30;
  local_1c = local_28;
  func_0205e0c0(0x40,&local_90,1);
  func_0205e0c0(0x15,0,0);
  do {
    func_0205e0c0(0x11,0,0);
    func_0205e0c0(0x1c,param_1 + 0x24,3);
    iVar1 = iVar2 >> 0x1f;
    func_0205e0c0(0x1c,local_78 +
                      (((uint)(iVar2 * 0x20000000 + iVar1) >> 0x1d | iVar1 << 3) - iVar1) * 3,3);
    func_0205e0c0(0x23,&local_88,2);
    local_94 = 1;
    func_0205e0c0(0x12,&local_94,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  func_0205e0c0(0x41,0,0);
  local_98 = 1;
  func_0205e0c0(0x12,&local_98,1);
  return;
}
