
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

extern int func_02000c60();
extern int func_02000e18();
extern int func_02002af4();
extern int func_02002b30();
extern int func_02002c10();
extern int func_02003188();
extern int func_02009930();
extern int func_0201e9d4();
extern int func_0205e0c0();

void func_0203e814(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0 [20];
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [36];

  func_02000c60(auStack_38);
  if (*(int *)(param_1 + 100) + *(int *)(param_1 + 0x6c) != 0) {
    local_44 = 0;
    local_3c = 0;
    local_40 = 0x1000;
    func_02002b30(&local_44,param_1 + 100,auStack_50);
    func_02002c10(auStack_50,auStack_50);
    func_02002af4(param_1 + 100,&local_44);
    iVar2 = func_02003188();
    func_02000e18(auStack_38,auStack_50,(int)*(short *)(((unsigned int)0x0203ea28) + (iVar2 >> 4) * 4),
                 (int)*(short *)(((unsigned int)0x0203ea28) + ((iVar2 >> 4) * 2 + 1) * 2));
  }
  piVar5 = local_b0 + 8;
  iVar2 = 6;
  piVar6 = ((unsigned int)0x0203ea2c);
  do {
    iVar3 = *piVar6;
    iVar4 = piVar6[1];
    piVar6 = piVar6 + 2;
    *piVar5 = iVar3;
    piVar5[1] = iVar4;
    piVar5 = piVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_b0[0] = (*(unsigned int *)0x0203ea30);
  local_b0[1] = ((unsigned int *)0x0203ea30)[1];
  local_b0[2] = ((unsigned int *)0x0203ea30)[2];
  local_b0[7] = ((unsigned int *)0x0203ea30)[7];
  local_b0[3] = *(int *)(param_1 + 0x44) + -0x1000;
  local_b0[4] = *(int *)(param_1 + 0x40) + -0x1000;
  iVar2 = *(int *)(param_1 + 0x7c);
  iVar3 = (int)*(short *)(param_1 + 0x10);
  local_b0[5] = local_b0[3];
  local_b0[6] = local_b0[4];
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xc) & 0x80000) != 0)) {
    if ((*(uint *)(iVar2 + 0xc) & 0x200000) == 0) {
      sVar1 = func_0201e9d4(iVar3 * *(short *)(iVar2 + 0xe0),0x1f);
      iVar3 = (int)sVar1;
    }
    else {
      iVar3 = 0;
    }
  }
  if (0 < iVar3) {
    func_0205e0c0(0x11,0,0);
    local_c0 = 3;
    func_0205e0c0(0x10,&local_c0,1);
    func_0205e0c0(0x15,0,0);
    local_c4 = 2;
    func_0205e0c0(0x10,&local_c4,1);
    func_02009930(param_1 + 0x58,&local_60,0xc);
    func_0205e0c0(local_60,&local_5c,2);
    piVar5 = ((unsigned int)0x0203ea40);
    local_5c = ((unsigned int)0x0203ea34);
    iVar2 = iVar3 >> 0x1f;
    local_60 = ((unsigned int)0x0203ea38);
    local_58 = 0;
    local_54 = (((uint)(iVar3 * 0x8000000 + iVar2) >> 0x1b | iVar2 << 5) - iVar2) * 0x10000 |
               ((unsigned int)0x0203ea3c) | (uint)*(ushort *)((*(unsigned int *)0x0203ea40) + 0x34) << 0x18;
    func_0205e0c0(((unsigned int)0x0203ea38),&local_5c,3);
    iVar2 = *piVar5;
    *(short *)(iVar2 + 0x34) = *(short *)(iVar2 + 0x34) + 1;
    if (0x28 < *(ushort *)(iVar2 + 0x34)) {
      *(undefined2 *)(iVar2 + 0x34) = 0x15;
    }
    iVar2 = 0;
    local_5c = 0;
    local_c8 = 1;
    func_0205e0c0(0x40,&local_c8);
    func_0205e0c0(0x15,0,0);
    func_0205e0c0(0x1c,param_1 + 0x24,3);
    func_0205e0c0(0x1a,auStack_38,9);
    do {
      func_0205e0c0(0x11,0,0);
      local_60 = (local_b0[iVar2 * 2] << 8) >> 0x10 & 0xffffU |
                 ((local_b0[iVar2 * 2 + 1] << 8) >> 0x10) << 0x10;
      local_b4 = *(undefined4 *)(param_1 + 0x78);
      local_bc = *(undefined4 *)(param_1 + 0x70);
      local_b8 = 0x1000;
      func_0205e0c0(0x1b,&local_bc,3);
      func_0205e0c0(0x1c,local_b0 + iVar2 * 3 + 8,3);
      func_0205e0c0(((unsigned int)0x0203ea44),&local_60,2);
      local_cc = 1;
      func_0205e0c0(0x12,&local_cc,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    func_0205e0c0(0x41,0,0);
    local_d0 = 1;
    func_0205e0c0(0x12,&local_d0,1);
  }
  return;
}
