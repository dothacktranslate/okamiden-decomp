
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

static unsigned int stack0xffffffdc;


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

extern int func_02058dc0();

void func_02058ff4(int *param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,
                 int *param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined1 auStack_50 [44];

  uVar9 = (uint)*(byte *)(*param_6 + 1);
  iVar1 = (int)((uint)*(byte *)(param_1 + 3) * 0x40) >> 3;
  piVar17 = (int *)auStack_50;
  if (uVar9 == 0) {
    piVar17 = (int *)&stack0xffffffdc;
  }
  uVar5 = (uint)*(byte *)(*(int *)(*param_2 + 8) + 1);
  if (uVar9 == 0) {
    return;
  }
  if ((int)(param_3 + uVar9) < 0) {
    return;
  }
  iVar7 = param_4 + uVar5;
  if (iVar7 < 0) {
    return;
  }
  uVar10 = 0;
  if (0 < (int)param_3) {
    uVar10 = param_3 >> 3;
  }
  uVar11 = 0;
  uVar13 = param_3 + uVar9 + 7;
  if (0 < (int)param_4) {
    uVar11 = param_4 >> 3;
  }
  uVar8 = iVar7 + 7;
  uVar14 = uVar13 >> 3;
  if ((uint)param_1[1] <= uVar13 >> 3) {
    uVar14 = param_1[1];
  }
  uVar13 = uVar8 >> 3;
  if ((uint)param_1[2] <= uVar8 >> 3) {
    uVar13 = param_1[2];
  }
  iVar7 = uVar14 - uVar10;
  if (iVar7 < 0) {
    piVar17 = (int *)((int)piVar17 + 0x2c);
  }
  if (iVar7 < 0) {
    return;
  }
  if ((int)(uVar13 - uVar11) < 0) {
    return;
  }
  iVar15 = param_1[4];
  iVar16 = iVar1 * (iVar15 * uVar11 + uVar10) + *param_1;
  iVar12 = *(int *)(piVar17[0x15] + 4);
  piVar17[5] = uVar9;
  if (-1 < (int)param_3) {
    param_3 = param_3 & 7;
  }
  piVar17[2] = iVar12;
  iVar12 = *param_2;
  piVar17[10] = piVar17[0x14] + -1;
  piVar17[6] = uVar5;
  bVar2 = *(byte *)(param_1 + 3);
  bVar3 = *(byte *)(*(int *)(iVar12 + 8) + 6);
  if (-1 < (int)param_4) {
    param_4 = param_4 & 7;
  }
  iVar6 = param_4 + (uVar13 - uVar11) * -8;
  piVar17[8] = (uint)bVar3;
  piVar17[9] = (uint)bVar2;
  pbVar4 = *(byte **)(iVar12 + 8);
  *piVar17 = iVar6;
  piVar17[7] = (int)(short)(ushort)bVar3 * (int)(short)(ushort)*pbVar4;
  if ((int)param_4 <= iVar6) {
    return;
  }
  do {
    piVar17[4] = param_4;
    for (uVar9 = param_3; (int)(param_3 + iVar7 * -8) < (int)uVar9; uVar9 = uVar9 - 8) {
      piVar17[1] = iVar16;
      piVar17[3] = uVar9;
      func_02058dc0(piVar17 + 1);
      iVar16 = iVar16 + iVar1;
    }
    param_4 = param_4 - 8;
    iVar16 = iVar16 + iVar1 * (iVar15 - iVar7);
  } while (*piVar17 < (int)param_4);
  return;
}
