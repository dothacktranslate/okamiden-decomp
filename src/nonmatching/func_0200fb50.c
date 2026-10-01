
#ifndef OKAMIDEN_GHIDRA_RECOVERY_HELPERS
#define OKAMIDEN_GHIDRA_RECOVERY_HELPERS

#ifndef SUB42
#define SUB42(x,o) \
    ((unsigned short)( \
        ((unsigned int)(x)) >> \
        ((unsigned int)(o) * 8U)))
#endif

#ifndef SUB43
#define SUB43(x,o) \
    ((((unsigned int)(x)) >> \
      ((unsigned int)(o) * 8U)) & \
     0x00ffffffU)
#endif

#endif


#ifndef OKAMIDEN_DS_REGISTER_COMPAT
#define OKAMIDEN_DS_REGISTER_COMPAT

#define _REG_A_DISPCNT \
    (*(volatile unsigned int *)0x04000000)

#define _REG_A_DISPSTAT \
    (*(volatile unsigned short *)0x04000004)

#define _REG_VCOUNT \
    (*(volatile unsigned short *)0x04000006)

#define _REG_A_MASTER_BRIGHT \
    (*(volatile unsigned short *)0x0400006c)

#define REG_B_DISPCNT \
    (*(volatile unsigned int *)0x04001000)

#define _REG_B_DISPCNT \
    (*(volatile unsigned int *)0x04001000)

#define VRAMCNT_E \
    (*(volatile unsigned char *)0x04000244)

#define _IPCFIFORECV \
    (*(volatile unsigned int *)0x04100000)

#define _D_ENGINE_A \
    (*(volatile unsigned char *)0x04000000)

/*
 * DMA_CHANNEL_0_to_3 is deliberately byte-sized here:
 * existing Ghidra output takes its address and adds byte
 * offsets before casting back to uint *.
 */
#define DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned char *)0x040000b0)

#define _DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned int *)0x040000b0)

#endif


#ifndef OKAMIDEN_GHIDRA_ODD_TYPES
#define OKAMIDEN_GHIDRA_ODD_TYPES

typedef unsigned int undefined3;
typedef int int3;

#endif


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

extern int func_02006510();
extern int func_0200656c();
extern int func_0200830c();
extern int func_02008b6c();
extern int func_02008b80();
extern int func_02008be8();
extern int func_02008c24();
extern int func_02008e98();
extern int func_0200f46c();
extern int func_0200f704();
extern int func_0200f874();
extern int func_0200f924();
extern int func_0200f9c4();
extern int func_0200fa30();
extern int func_0200fabc();
extern int func_0200fe3c();
extern int func_02010078();
extern int func_02010178();
extern int func_02014674();

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0200fb50(ushort param_1,ushort param_2,ushort param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  ushort uVar17;
  int local_2c;
  int local_28;

  bVar3 = false;
  func_02010178(*(undefined4 *)(((unsigned int)0x0200fe28) + 0x10));
  uVar1 = (*(unsigned int *)0x0200fe2c);
  (*(unsigned int *)0x0200fe2c) = 0;
  uVar9 = func_02008b6c();
  uVar10 = func_0200656c(((unsigned int)0x0200fe30));
  iVar11 = func_0200830c();
  if (iVar11 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 8;
  }
  func_02006510(uVar12 | 0x40000);
  func_02008b80(uVar9);
  uVar2 = (*(unsigned int *)0x0200fe2c);
  (*(unsigned int *)0x0200fe2c) = 1;
  if (((param_1 & 8) != 0) && (sVar8 = func_02008c24(uVar2), (ushort)(sVar8 - 2U) < 2)) {
    param_1 = param_1 & 0xfff7;
  }
  if (((param_1 & 0x10) != 0) && (iVar11 = func_02014674(), iVar11 == 0)) {
    param_1 = param_1 & 0xffef;
  }
  uVar6 = _REG_B_DISPCNT;
  uVar12 = _REG_A_DISPCNT;
  iVar11 = func_02010078();
  iVar13 = func_0200fa30(&local_28,&local_2c);
  uVar5 = ((unsigned int)0x0200fe34);
  while (iVar13 != 0) {
    func_02008be8(uVar5);
    iVar13 = func_0200fa30(&local_28,&local_2c);
  }
  iVar13 = func_0200f924(2,0);
  uVar5 = ((unsigned int)0x0200fe34);
  while (iVar13 != 0) {
    func_02008be8(uVar5);
    iVar13 = func_0200f924(2,0);
  }
  func_0200f46c();
  _REG_A_DISPCNT = _REG_A_DISPCNT & 0xfffcffff;
  _REG_B_DISPCNT = _REG_B_DISPCNT & 0xfffeffff;
  func_0200f46c();
  func_0200f46c();
  func_0200fabc();
  uVar16 = 0;
  *(undefined4 *)(((unsigned int)0x0200fe28) + 0xc) = 0;
  if (local_2c != 0) {
    uVar16 = 0x80;
  }
  uVar17 = 0x40;
  if (local_28 == 0) {
    uVar17 = 0;
  }
  func_02006510(0x40000);
  func_0200f704(param_1 | uVar17 | uVar16,param_2 | param_3);
  iVar13 = ((unsigned int)0x0200fe28);
  iVar14 = *(int *)(((unsigned int)0x0200fe28) + 0xc);
  while (iVar14 == 0) {
    func_02008e98();
    iVar14 = *(int *)(iVar13 + 0xc);
  }
  iVar13 = func_0200830c();
  if (iVar13 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 8;
  }
  func_02006510(uVar15 | 0x40000);
  if (((param_1 & 8) != 0) && (((*(unsigned int *)0x0200fe38) & 0x100000) != 0)) {
    bVar3 = true;
  }
  uVar15 = _REG_A_DISPCNT;
  uVar7 = _REG_B_DISPCNT;
  if (!bVar3) {
    uVar15 = uVar12;
    uVar7 = uVar6;
    if (iVar11 == 1) {
      do {
        iVar11 = func_0200fe3c(1,1,1,1);
      } while (iVar11 != 1);
    }
    else {
      iVar11 = func_0200f874(1);
      uVar5 = ((unsigned int)0x0200fe34);
      while (iVar11 != 0) {
        func_02008be8(uVar5);
        iVar11 = func_0200f874(1);
      }
    }
  }
  _REG_B_DISPCNT = uVar7;
  _REG_A_DISPCNT = uVar15;
  func_02008be8(0x360000);
  puVar4 = ((unsigned int)0x0200fe2c);
  (*(unsigned int *)0x0200fe2c) = 0;
  func_02006510(uVar10);
  func_02008b80(uVar9);
  uVar2 = *puVar4;
  *puVar4 = uVar1;
  if (bVar3) {
    func_0200f9c4(uVar2);
  }
  func_02010178(*(undefined4 *)(((unsigned int)0x0200fe28) + 0x18));
  return;
}
