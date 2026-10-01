
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

void func_020154e8(int param_1,int param_2,uint param_3,code *param_4,int *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int local_28;

  piVar13 = (int *)&stack0xffffffdc;
  if (1 < param_2) {
    if (param_5 == (int *)0x0) {
      iVar4 = 0x20 - LZCOUNT(param_2);
      param_5 = (int *)((int)piVar13 + iVar4 * -8);
      piVar13 = &local_28 + iVar4 * -2;
      (&local_28)[iVar4 * -2] = iVar4 * 8;
    }
    *param_5 = param_1;
    param_5[1] = (param_2 + -1) * param_3 + param_1;
    *(int *)((int)piVar13 + -4) = 0x20 - LZCOUNT(param_3);
    piVar9 = param_5 + 2;
    while (piVar9 != param_5) {
      puVar12 = (undefined4 *)piVar9[-1];
      piVar10 = piVar9 + -2;
      puVar11 = (undefined4 *)*piVar10;
      if ((int)puVar12 - (int)puVar11 == param_3) {
        iVar4 = (*param_4)(puVar11,puVar12);
        piVar9 = piVar10;
        if (0 < iVar4) {
          uVar3 = param_3;
          if ((param_3 & 3) == 0) {
            do {
              uVar3 = uVar3 - 4;
              uVar1 = *puVar12;
              *puVar12 = *puVar11;
              puVar12 = puVar12 + 1;
              *puVar11 = uVar1;
              puVar11 = puVar11 + 1;
            } while (uVar3 != 0);
          }
          else {
            do {
              uVar3 = uVar3 - 1;
              uVar2 = *(undefined1 *)puVar12;
              *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              *(undefined1 *)puVar11 = uVar2;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            } while (uVar3 != 0);
          }
        }
      }
      else {
        puVar5 = (undefined4 *)
                 (((uint)((int)puVar12 - (int)puVar11) >> (*(uint *)((int)piVar13 + -4) & 0xff)) *
                  param_3 + (int)puVar11);
        uVar3 = param_3;
        puVar6 = puVar11;
        if ((param_3 & 3) == 0) {
          do {
            uVar3 = uVar3 - 4;
            uVar1 = *puVar6;
            *puVar6 = *puVar5;
            puVar6 = puVar6 + 1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
          } while (uVar3 != 0);
        }
        else {
          do {
            uVar3 = uVar3 - 1;
            uVar2 = *(undefined1 *)puVar6;
            *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            *(undefined1 *)puVar5 = uVar2;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (uVar3 != 0);
        }
        puVar6 = (undefined4 *)((int)puVar11 + param_3);
        puVar5 = puVar12;
        do {
          while (((int)puVar6 < (int)puVar12 && (iVar4 = (*param_4)(puVar6,puVar11), iVar4 < 0))) {
            puVar6 = (undefined4 *)((int)puVar6 + param_3);
          }
          while (iVar4 = (*param_4)(puVar5,puVar11), 0 < iVar4) {
            puVar5 = (undefined4 *)((int)puVar5 - param_3);
          }
          if ((int)puVar5 <= (int)puVar6) break;
          uVar3 = param_3;
          puVar8 = puVar6;
          puVar7 = puVar5;
          if ((param_3 & 3) == 0) {
            do {
              uVar3 = uVar3 - 4;
              uVar1 = *puVar7;
              *puVar7 = *puVar8;
              puVar7 = puVar7 + 1;
              *puVar8 = uVar1;
              puVar8 = puVar8 + 1;
            } while (uVar3 != 0);
          }
          else {
            do {
              uVar3 = uVar3 - 1;
              uVar2 = *(undefined1 *)puVar7;
              *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              *(undefined1 *)puVar8 = uVar2;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            } while (uVar3 != 0);
          }
          puVar6 = (undefined4 *)((int)puVar6 + param_3);
          puVar5 = (undefined4 *)((int)puVar5 - param_3);
        } while ((int)puVar6 <= (int)puVar5);
        uVar3 = param_3;
        puVar6 = puVar11;
        puVar8 = puVar5;
        if ((param_3 & 3) == 0) {
          do {
            uVar3 = uVar3 - 4;
            uVar1 = *puVar8;
            *puVar8 = *puVar6;
            puVar8 = puVar8 + 1;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          } while (uVar3 != 0);
        }
        else {
          do {
            uVar3 = uVar3 - 1;
            uVar2 = *(undefined1 *)puVar8;
            *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            *(undefined1 *)puVar6 = uVar2;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          } while (uVar3 != 0);
        }
        if ((int)puVar12 - (int)puVar5 < (int)puVar5 - (int)puVar11) {
          if ((int)puVar11 < (int)((int)puVar5 - param_3)) {
            *piVar10 = (int)puVar11;
            piVar9[-1] = (int)puVar5 - param_3;
            piVar10 = piVar9;
          }
          piVar9 = piVar10;
          if ((int)((int)puVar5 + param_3) < (int)puVar12) {
            *piVar10 = (int)((int)puVar5 + param_3);
            piVar10[1] = (int)puVar12;
            piVar9 = piVar10 + 2;
          }
        }
        else {
          if ((int)((int)puVar5 + param_3) < (int)puVar12) {
            *piVar10 = (int)((int)puVar5 + param_3);
            piVar9[-1] = (int)puVar12;
            piVar10 = piVar9;
          }
          piVar9 = piVar10;
          if ((int)puVar11 < (int)((int)puVar5 - param_3)) {
            *piVar10 = (int)puVar11;
            piVar10[1] = (int)puVar5 - param_3;
            piVar9 = piVar10 + 2;
          }
        }
      }
    }
  }
  return;
}
