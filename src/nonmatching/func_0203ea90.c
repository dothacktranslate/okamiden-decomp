
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

extern int func_02009930();
extern int func_0205e0c0();

void func_0203ea90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78 [20];
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 uStack_18;

  piVar4 = local_78 + 8;
  iVar3 = 6;
  piVar5 = ((unsigned int)0x0203ec00);
  uStack_18 = param_4;
  do {
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    piVar5 = piVar5 + 2;
    *piVar4 = iVar1;
    piVar4[1] = iVar2;
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_78[0] = (*(unsigned int *)0x0203ec04);
  local_78[1] = ((unsigned int *)0x0203ec04)[1];
  local_78[2] = ((unsigned int *)0x0203ec04)[2];
  local_78[7] = ((unsigned int *)0x0203ec04)[7];
  local_78[3] = *(int *)(param_1 + 0x44) + -0x1000;
  local_78[4] = *(int *)(param_1 + 0x40) + -0x1000;
  iVar3 = (int)*(short *)(param_1 + 0x10);
  if (0 < iVar3) {
    iVar2 = 0;
    local_78[5] = local_78[3];
    local_78[6] = local_78[4];
    func_0205e0c0(0x11,0,0,((unsigned int)0x0203ec04) + 8);
    local_88 = 3;
    func_0205e0c0(0x10,&local_88,1);
    func_0205e0c0(0x15,0,0);
    local_8c = 2;
    func_0205e0c0(0x10,&local_8c,1);
    func_02009930(param_1 + 0x58,&local_28,0xc);
    func_0205e0c0(local_28,&local_24,2);
    local_28 = ((unsigned int)0x0203ec08);
    local_24 = ((unsigned int)0x0203ec0c);
    iVar1 = iVar3 >> 0x1f;
    local_1c = (((uint)(iVar3 * 0x8000000 + iVar1) >> 0x1b | iVar1 << 5) - iVar1) * 0x10000 |
               ((unsigned int)0x0203ec10);
    local_20 = 0;
    func_0205e0c0(((unsigned int)0x0203ec08),&local_24,3);
    local_90 = 1;
    local_24 = 0;
    func_0205e0c0(0x40,&local_90,1);
    func_0205e0c0(0x15,0,0);
    func_0205e0c0(0x1c,param_1 + 0x24,3);
    func_0205e0c0(0x18,((unsigned int)0x0203ec14),0x10);
    do {
      func_0205e0c0(0x11,0,0);
      local_28 = (local_78[iVar2 * 2] << 8) >> 0x10 & 0xffffU |
                 ((local_78[iVar2 * 2 + 1] << 8) >> 0x10) << 0x10;
      local_84 = *(undefined4 *)(param_1 + 100);
      local_80 = local_84;
      local_7c = local_84;
      func_0205e0c0(0x1b,&local_84,3);
      func_0205e0c0(0x1c,local_78 + iVar2 * 3 + 8,3);
      func_0205e0c0(((unsigned int)0x0203ec18),&local_28,2);
      local_94 = 1;
      func_0205e0c0(0x12,&local_94,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    func_0205e0c0(0x41,0,0);
    local_98 = 1;
    func_0205e0c0(0x12,&local_98,1);
  }
  return;
}
