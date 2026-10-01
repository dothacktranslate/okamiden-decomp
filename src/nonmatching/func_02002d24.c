
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

void func_02002d24(short *param_1,undefined2 *param_2)

{
  short sVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  puVar3 = ((unsigned int)0x02002e44);
  sVar1 = param_1[2];
  uVar9 = (int)param_1[1] * (int)param_1[1];
  uVar6 = (int)*param_1 * (int)*param_1;
  (*(unsigned int *)0x02002e44) = 2;
  *(undefined4 *)(puVar3 + 8) = 0;
  uVar8 = (int)sVar1 * (int)sVar1;
  uVar7 = uVar6 + uVar9 + uVar8;
  *(undefined4 *)(puVar3 + 10) = 0x1000000;
  iVar4 = ((int)uVar9 >> 0x1f) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar6,uVar9) +
          ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar6 + uVar9,uVar8);
  *(uint *)(puVar3 + 0xc) = uVar7;
  *(int *)(puVar3 + 0xe) = iVar4;
  puVar3[0x18] = 1;
  *(uint *)(puVar3 + 0x1c) = uVar7 * 4;
  *(uint *)(puVar3 + 0x1e) = iVar4 * 4 | uVar7 >> 0x1e;
  do {
  } while ((puVar3[0x18] & 0x8000) != 0);
  uVar9 = (*(unsigned int *)0x02002e48);
  do {
  } while ((((unsigned int *)0x02002e48)[-0xd] & 0x8000) != 0);
  uVar8 = (uint)*param_1;
  uVar6 = (uint)param_1[1];
  uVar2 = (ulonglong)uVar9 * (ulonglong)(*(unsigned int *)0x02002e4c);
  iVar5 = (int)uVar2;
  uVar7 = (uint)param_1[2];
  iVar4 = ((unsigned int *)0x02002e4c)[1] * uVar9 + (*(unsigned int *)0x02002e4c) * ((int)uVar9 >> 0x1f) + (int)(uVar2 >> 0x20);
  *param_2 = (short)((int)(iVar4 * uVar8 +
                           iVar5 * ((int)uVar8 >> 0x1f) +
                           (int)((ulonglong)uVar8 * (uVar2 & 0xffffffff) >> 0x20) + 0x1000) >> 0xd);
  param_2[1] = (short)((int)(iVar4 * uVar6 +
                             iVar5 * ((int)uVar6 >> 0x1f) +
                             (int)((ulonglong)uVar6 * (uVar2 & 0xffffffff) >> 0x20) + 0x1000) >> 0xd
                      );
  param_2[2] = (short)((int)(iVar4 * uVar7 +
                             iVar5 * ((int)uVar7 >> 0x1f) +
                             (int)((ulonglong)uVar7 * (uVar2 & 0xffffffff) >> 0x20) + 0x1000) >> 0xd
                      );
  return;
}
