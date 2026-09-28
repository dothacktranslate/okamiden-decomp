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

extern int func_020098e4();

void func_02058c90(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int unaff_r4;
  uint uVar6;
  uint *puVar7;
  uint uVar8;

  if (param_4 == 8) {
    unaff_r4 = param_5;
  }
  if (param_4 == 8 && unaff_r4 == 8) {
    func_020098e4(param_6,param_1,param_7 << 3,param_4,param_4);
    return;
  }
  if (param_7 == 4) {
    uVar6 = 0x20 - (param_2 * 4 + param_4 * 4);
    uVar1 = (0xffffffffU >> (param_2 * 4 & 0xffU)) << (uVar6 + param_2 * 4 & 0xff);
    puVar3 = (uint *)(param_1 + param_3 * 4);
    puVar7 = puVar3;
    if (puVar3 + param_5 <= puVar3) {
      return;
    }
    do {
      puVar4 = puVar7 + 1;
      *puVar7 = param_6 & uVar1 >> (uVar6 & 0xff) | *puVar7 & ~(uVar1 >> (uVar6 & 0xff));
      puVar7 = puVar4;
    } while (puVar4 < puVar3 + param_5);
    return;
  }
  uVar1 = param_2 * 8;
  iVar2 = -(uVar1 + param_4 * 8);
  uVar5 = iVar2 + 0x40;
  uVar6 = 0xffffffff >> (uVar1 & 0xff);
  if (uVar5 < 0x20) {
    uVar6 = uVar6 << (uVar1 & 0xff);
  }
  else {
    uVar8 = iVar2 + 0x20;
    uVar6 = (uVar6 << (uVar1 + uVar8 & 0xff)) >> (uVar8 & 0xff);
  }
  uVar8 = -1 << (uVar5 & 0xff);
  if (uVar1 < 0x20) {
    uVar8 = uVar8 >> (uVar5 & 0xff);
  }
  else {
    uVar8 = (uVar8 >> ((uVar1 - 0x20) + uVar5 & 0xff)) << (uVar1 - 0x20 & 0xff);
  }
  puVar7 = (uint *)(param_1 + param_3 * 8);
  puVar3 = puVar7 + param_5 * 2;
  if (puVar3 <= puVar7) {
    return;
  }
  do {
    *puVar7 = param_6 & uVar6 | *puVar7 & ~uVar6;
    puVar7[1] = param_6 & uVar8 | puVar7[1] & ~uVar8;
    puVar7 = puVar7 + 2;
  } while (puVar7 < puVar3);
  return;
}
