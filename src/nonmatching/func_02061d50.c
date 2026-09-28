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

void func_02061d50(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 uStack_14;

  bVar5 = false;
  uVar4 = *param_1 & 0x18;
  uStack_14 = param_4;
  if (uVar4 == 0) {
    func_0205e0c0(0x1b,param_1 + 7,3);
  }
  if (((*param_1 & 4) == 0) && (bVar5 = uVar4 != 0, !bVar5)) {
    local_1c = (uint)((longlong)(int)param_1[0x14] * (longlong)(int)param_1[5]) >> 0xc |
               (int)((ulonglong)((longlong)(int)param_1[0x14] * (longlong)(int)param_1[5]) >> 0x20)
               << 0x14;
    local_20 = (uint)((longlong)(int)param_1[0x13] * (longlong)(int)param_1[4]) >> 0xc |
               (int)((ulonglong)((longlong)(int)param_1[0x13] * (longlong)(int)param_1[4]) >> 0x20)
               << 0x14;
    local_18 = (uint)((longlong)(int)param_1[0x15] * (longlong)(int)param_1[6]) >> 0xc |
               (int)((ulonglong)((longlong)(int)param_1[0x15] * (longlong)(int)param_1[6]) >> 0x20)
               << 0x14;
    func_0205e0c0(0x1c,&local_20,3);
  }
  if ((*param_1 & 2) == 0) {
    puVar2 = param_1 + 10;
    if (bVar5) {
      uVar1 = 0x19;
      uVar3 = 0xc;
    }
    else {
      uVar1 = 0x1a;
      uVar3 = 9;
    }
  }
  else {
    if (!bVar5) goto LAB_02061e34;
    puVar2 = param_1 + 0x13;
    uVar1 = 0x1c;
    uVar3 = 3;
  }
  func_0205e0c0(uVar1,puVar2,uVar3);
LAB_02061e34:
  if (uVar4 == 0) {
    func_0205e0c0(0x1b,param_1 + 4,3);
  }
  if ((*param_1 & 1) == 0) {
    func_0205e0c0(0x1b,param_1 + 1,3);
    return;
  }
  return;
}
