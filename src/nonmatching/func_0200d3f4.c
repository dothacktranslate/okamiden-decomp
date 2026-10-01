
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

static unsigned int stack0xffffffec;


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

extern int func_0200d2cc();

void func_0200d3f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  byte abStack_20 [4];
  undefined4 local_1c;
  undefined4 local_18;

  pbVar5 = abStack_20;
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  local_1c = *(undefined4 *)(param_1 + 8);
  local_18 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = func_0200d2cc(&local_1c,abStack_20,1);
  if (iVar2 != 0) {
    return;
  }
  uVar3 = abStack_20[0] & 0x7f;
  bVar6 = (abStack_20[0] & 0x7f) == 0;
  puVar4[4] = uVar3;
  if (bVar6) {
    pbVar5 = &stack0xffffffec;
  }
  puVar4[3] = (int)(uint)abStack_20[0] >> 7;
  if (!bVar6) {
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar2 = func_0200d2cc(&local_1c,puVar4 + 5);
      if (iVar2 != 0) {
        return;
      }
      *(undefined1 *)((int)puVar4 + puVar4[4] + 0x14) = 0;
    }
    else {
      *(uint *)(pbVar5 + 8) = *(int *)(pbVar5 + 8) + uVar3;
    }
    iVar2 = 0;
    if (puVar4[3] == 0) {
      *puVar4 = *(undefined4 *)(param_1 + 8);
      puVar4[1] = (uint)*(ushort *)(param_1 + 0x26);
      *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
    }
    else {
      iVar2 = func_0200d2cc(pbVar5 + 4,pbVar5 + 2,2);
      uVar1 = ((unsigned int)0x0200d51c);
      if (iVar2 == 0) {
        *puVar4 = *(undefined4 *)(param_1 + 8);
        *(ushort *)(puVar4 + 1) = *(ushort *)(pbVar5 + 2) & (ushort)uVar1;
        *(undefined2 *)((int)puVar4 + 6) = 0;
        puVar4[2] = 0;
      }
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(pbVar5 + 8);
    }
    return;
  }
  return;
}
