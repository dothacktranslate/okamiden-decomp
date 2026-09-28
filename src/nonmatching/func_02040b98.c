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

extern int func_02009930();
extern int func_0205e0c0();

void func_02040b98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78 [9];
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 uStack_18;

  local_50 = 0;
  uStack_44 = 0;
  local_38 = 0;
  uStack_2c = 0;
  local_40 = *(int *)(param_1 + 100);
  local_78[8] = -local_40;
  local_54 = *(int *)(param_1 + 0x68);
  local_48 = -local_54;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[7] = 0;
  local_78[3] = *(undefined4 *)(param_1 + 0x44);
  local_78[4] = *(undefined4 *)(param_1 + 0x40);
  if (0 < *(short *)(param_1 + 0x10)) {
    local_78[5] = local_78[3];
    local_78[6] = local_78[4];
    local_4c = local_78[8];
    local_3c = local_48;
    local_34 = local_40;
    local_30 = local_54;
    uStack_18 = param_4;
    func_0205e0c0(0x11,0,0);
    local_7c = 3;
    func_0205e0c0(0x10,&local_7c,1);
    func_0205e0c0(0x15,0,0);
    local_80 = 2;
    func_0205e0c0(0x10,&local_80,1);
    if (*(int *)(param_1 + 0x38) != 0) {
      func_02009930(param_1 + 0x58,&local_28,0xc);
      func_0205e0c0(local_28,&local_24,2);
    }
    local_24 = ((unsigned int)0x02040d4c);
    iVar2 = 0;
    local_28 = ((unsigned int)0x02040d50);
    local_20 = 0;
    iVar1 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
    local_1c = ((unsigned int)0x02040d54) |
               (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar1) >> 0x1b | iVar1 << 5) -
               iVar1) * 0x10000;
    func_0205e0c0(((unsigned int)0x02040d50),&local_24,3);
    local_84 = 1;
    func_0205e0c0(0x40,&local_84);
    func_0205e0c0(0x15,0,0);
    func_0205e0c0(0x1c,param_1 + 0x24,3);
    func_0205e0c0(0x18,((unsigned int)0x02040d58),0x10);
    if (*(int *)(param_1 + 0x38) == 0) {
      local_24 = 0;
      local_28 = 0;
      do {
        func_0205e0c0(0x11,0,0);
        func_0205e0c0(0x1c,local_78 + iVar2 * 3 + 8,3);
        func_0205e0c0(0x24,&local_28,1);
        local_8c = 1;
        func_0205e0c0(0x12,&local_8c,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    else {
      local_20 = 0;
      local_24 = 0;
      do {
        func_0205e0c0(0x11,0,0);
        func_0205e0c0(0x1c,local_78 + iVar2 * 3 + 8,3);
        local_28 = (local_78[iVar2 * 2] << 8) >> 0x10 & 0xffffU |
                   ((local_78[iVar2 * 2 + 1] << 8) >> 0x10) << 0x10;
        func_0205e0c0(((unsigned int)0x02040d5c),&local_28,3);
        local_88 = 1;
        func_0205e0c0(0x12,&local_88,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    func_0205e0c0(0x41,0,0);
    local_90 = 1;
    func_0205e0c0(0x12,&local_90);
  }
  return;
}
