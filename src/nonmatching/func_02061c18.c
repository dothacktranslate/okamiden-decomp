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

void func_02061c18(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  bVar3 = (*param_1 & 8) != 0;
  uVar2 = *param_1;
  if (bVar3) {
    uVar2 = ((unsigned int)0x02061d44);
  }
  uVar1 = uVar2;
  if (!bVar3) {
    uVar2 = ((unsigned int)0x02061d48);
    uVar1 = local_58;
  }
  local_58 = uVar1;
  if (!bVar3) {
    local_58 = uVar2;
  }
  local_54 = 3;
  local_10 = 2;
  local_18 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_44 = 0;
  local_48 = 0;
  local_14 = 0x1000;
  (**(code **)(((unsigned int)0x02061d4c) + (*param_1 & 7) * 4))(&local_50,param_1);
  uVar2 = param_1[0xc];
  if (uVar2 != 0x1000) {
    local_50 = (uint)((longlong)(int)uVar2 * (longlong)(int)local_50) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)local_50) >> 0x20) << 0x14;
    local_4c = (uint)((longlong)(int)uVar2 * (longlong)(int)local_4c) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)local_4c) >> 0x20) << 0x14;
    local_20 = (uint)((longlong)(int)uVar2 * (longlong)(int)local_20) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)local_20) >> 0x20) << 0x14;
  }
  uVar2 = param_1[0xd];
  if (uVar2 != 0x1000) {
    local_40 = (uint)((longlong)(int)uVar2 * (longlong)(int)local_40) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)local_40) >> 0x20) << 0x14;
    local_3c = (uint)((longlong)(int)uVar2 * (longlong)(int)local_3c) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)local_3c) >> 0x20) << 0x14;
    local_1c = (uint)((longlong)(int)uVar2 * (longlong)(int)local_1c) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)local_1c) >> 0x20) << 0x14;
  }
  func_0205e0c0(local_58,&local_54,0x12);
  return;
}
