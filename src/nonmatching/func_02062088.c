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

void func_02062088(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_48 = ((unsigned int)0x02062234);
  if ((*param_1 & 8) != 0) {
    local_48 = ((unsigned int)0x02062230);
  }
  local_40 = *param_1;
  local_44 = 3;
  local_10 = 2;
  local_14 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  if ((local_40 & 4) == 0) {
    if ((local_40 & 1) == 0) {
      local_40 = param_1[6];
      local_30 = param_1[7];
      local_1c = (uint)(ushort)param_1[0xb] *
                 -((uint)((longlong)(int)local_40 * (longlong)(int)param_1[9]) >> 8 |
                  (int)((ulonglong)((longlong)(int)local_40 * (longlong)(int)param_1[9]) >> 0x20) <<
                  0x18);
      local_18 = (uint)*(ushort *)((int)param_1 + 0x2e) *
                 -((uint)((longlong)(int)local_30 * (longlong)(int)param_1[10]) >> 8 |
                  (int)((ulonglong)((longlong)(int)local_30 * (longlong)(int)param_1[10]) >> 0x20)
                  << 0x18);
    }
    else {
      local_1c = param_1[9] * -0x10 * (uint)(ushort)param_1[0xb];
      local_18 = param_1[10] * -0x10 * (uint)*(ushort *)((int)param_1 + 0x2e);
      local_40 = 0x1000;
      local_30 = 0x1000;
    }
  }
  else {
    bVar2 = (local_40 & 1) != 0;
    if (bVar2) {
      local_40 = 0x1000;
    }
    local_1c = 0;
    local_18 = 0;
    local_30 = local_40;
    if (!bVar2) {
      local_40 = param_1[6];
      local_30 = param_1[7];
    }
  }
  uVar1 = param_1[0xc];
  if (uVar1 != 0x1000) {
    local_40 = (uint)((longlong)(int)uVar1 * (longlong)(int)local_40) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar1 * (longlong)(int)local_40) >> 0x20) << 0x14;
    local_1c = (uint)((longlong)(int)uVar1 * (longlong)(int)local_1c) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar1 * (longlong)(int)local_1c) >> 0x20) << 0x14;
  }
  uVar1 = param_1[0xd];
  if (uVar1 != 0x1000) {
    local_30 = (uint)((longlong)(int)uVar1 * (longlong)(int)local_30) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar1 * (longlong)(int)local_30) >> 0x20) << 0x14;
    local_18 = (uint)((longlong)(int)uVar1 * (longlong)(int)local_18) >> 0xc |
               (int)((ulonglong)((longlong)(int)uVar1 * (longlong)(int)local_18) >> 0x20) << 0x14;
  }
  func_0205e0c0(local_48,&local_44,0xe);
  return;
}
