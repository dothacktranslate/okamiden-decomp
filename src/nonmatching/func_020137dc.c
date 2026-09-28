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

extern int func_020099f0();

void func_020137dc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  iVar6 = (*(unsigned int *)0x02013b00);
  func_020099f0(iVar6 + 0x18,0,0x48,param_4,param_4);
  uVar3 = ((unsigned int)0x02013b04);
  *(uint *)(iVar6 + 4) = param_1;
  *(undefined4 *)(iVar6 + 0x58) = uVar3;
  if (param_1 == 0) {
    return;
  }
  uVar4 = 1 << ((int)param_1 >> 8 & 0xffU);
  uVar5 = param_1 & 0xff;
  *(uint *)(iVar6 + 0x18) = uVar4;
  *(undefined1 *)(iVar6 + 0x54) = 0xff;
  uVar2 = (int)param_1 >> 0x10 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 != 2) {
      if ((uVar5 == 3) && (uVar4 == 0x2000 || uVar4 == 0x8000)) {
        *(uint *)(iVar6 + 0x24) = uVar4;
        *(uint *)(iVar6 + 0x1c) = uVar4;
        *(undefined4 *)(iVar6 + 0x28) = 2;
        *(undefined1 *)(iVar6 + 0x54) = 0;
        *(uint *)(iVar6 + 0x58) = *(uint *)(iVar6 + 0x58) | 0x4340;
        return;
      }
      goto LAB_02013ae0;
    }
    if (uVar4 < 0x100001) {
      if (uVar4 < 0x100000) {
        if (uVar4 < 0x40001) {
          if (uVar4 != 0x40000) goto LAB_02013ae0;
        }
        else if (uVar4 != 0x80000) goto LAB_02013ae0;
      }
      *(undefined4 *)(iVar6 + 0x30) = 0x19;
      *(undefined4 *)(iVar6 + 0x34) = 300;
      uVar3 = ((unsigned int)0x02013b08);
      *(undefined4 *)(iVar6 + 0x50) = 300;
      *(undefined4 *)(iVar6 + 0x40) = uVar3;
      uVar4 = *(uint *)(iVar6 + 0x58) | 0x480;
    }
    else if (uVar4 < 0x400001) {
      if (uVar4 < 0x400000) {
        if (uVar4 != 0x200000) goto LAB_02013ae0;
        *(undefined4 *)(iVar6 + 0x30) = 0x17;
        *(undefined4 *)(iVar6 + 0x34) = 300;
        *(undefined4 *)(iVar6 + 0x40) = 500;
        uVar3 = ((unsigned int)0x02013b0c);
        *(undefined4 *)(iVar6 + 0x44) = 5000;
        uVar1 = ((unsigned int)0x02013b10);
        *(undefined4 *)(iVar6 + 0x38) = uVar3;
        *(undefined4 *)(iVar6 + 0x3c) = uVar1;
        *(undefined1 *)(iVar6 + 0x54) = 0;
        uVar4 = *(uint *)(iVar6 + 0x58) | 0x5480;
      }
      else {
        *(undefined4 *)(iVar6 + 0x40) = 600;
        *(undefined4 *)(iVar6 + 0x44) = 3000;
        *(undefined4 *)(iVar6 + 0x48) = 0x46;
        uVar3 = ((unsigned int)0x02013b14);
        *(undefined4 *)(iVar6 + 0x4c) = 0x96;
        uVar1 = ((unsigned int)0x02013b18);
        *(undefined4 *)(iVar6 + 0x38) = uVar3;
        *(undefined4 *)(iVar6 + 0x3c) = uVar1;
        *(undefined1 *)(iVar6 + 0x54) = 0;
        *(undefined4 *)(iVar6 + 0x20) = 0x1000;
        uVar4 = *(uint *)(iVar6 + 0x58) | 0xd000;
      }
    }
    else {
      if (uVar4 != 0x800000) goto LAB_02013ae0;
      if (uVar2 == 0) {
        *(undefined4 *)(iVar6 + 0x40) = 1000;
        uVar3 = ((unsigned int)0x02013b1c);
        *(undefined4 *)(iVar6 + 0x44) = 3000;
        uVar1 = ((unsigned int)0x02013b20);
        *(undefined4 *)(iVar6 + 0x38) = uVar3;
        *(undefined4 *)(iVar6 + 0x3c) = uVar1;
        *(undefined1 *)(iVar6 + 0x54) = 0;
      }
      else {
        if (uVar2 != 1) goto LAB_02013a70;
        *(undefined4 *)(iVar6 + 0x40) = 1000;
        uVar3 = ((unsigned int)0x02013b1c);
        *(undefined4 *)(iVar6 + 0x44) = 3000;
        uVar1 = ((unsigned int)0x02013b20);
        *(undefined4 *)(iVar6 + 0x38) = uVar3;
        *(undefined4 *)(iVar6 + 0x3c) = uVar1;
        *(undefined1 *)(iVar6 + 0x54) = 0x84;
      }
      uVar4 = *(uint *)(iVar6 + 0x58) | 0x5000;
    }
    *(uint *)(iVar6 + 0x58) = uVar4;
LAB_02013a70:
    *(undefined4 *)(iVar6 + 0x1c) = 0x10000;
    *(undefined4 *)(iVar6 + 0x24) = 0x100;
    *(undefined4 *)(iVar6 + 0x28) = 3;
    *(undefined4 *)(iVar6 + 0x2c) = 5;
    *(uint *)(iVar6 + 0x58) = *(uint *)(iVar6 + 0x58) | 0xb40;
    return;
  }
  if (uVar4 < 0x2001) {
    if (uVar4 < 0x2000) {
      if (uVar4 != 0x200) goto LAB_02013ae0;
      *(undefined4 *)(iVar6 + 0x24) = 0x10;
      *(undefined4 *)(iVar6 + 0x28) = 1;
      *(undefined4 *)(iVar6 + 0x2c) = 5;
      *(undefined1 *)(iVar6 + 0x54) = 0xf0;
      goto LAB_020138e0;
    }
    *(undefined4 *)(iVar6 + 0x24) = 0x20;
    uVar3 = 2;
LAB_020138d0:
    *(undefined4 *)(iVar6 + 0x28) = uVar3;
    uVar3 = 5;
  }
  else {
    if (0x10000 < uVar4) {
      if (uVar4 != 0x20000) goto LAB_02013ae0;
      *(undefined4 *)(iVar6 + 0x24) = 0x100;
      uVar3 = 3;
      goto LAB_020138d0;
    }
    if (uVar4 != 0x10000) {
LAB_02013ae0:
      *(undefined4 *)(iVar6 + 4) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(undefined4 *)(*(unsigned int *)0x02013b00) = 3;
      return;
    }
    *(undefined4 *)(iVar6 + 0x24) = 0x80;
    *(undefined4 *)(iVar6 + 0x28) = 2;
    uVar3 = 10;
  }
  *(undefined4 *)(iVar6 + 0x2c) = uVar3;
  *(undefined1 *)(iVar6 + 0x54) = 0;
LAB_020138e0:
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + 0x24);
  *(uint *)(iVar6 + 0x58) = *(uint *)(iVar6 + 0x58) | 0x4340;
  return;
}
