
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

bool func_02012998(int param_1,int *param_2,int param_3,int param_4,int *param_5,int param_6,
                 undefined2 *param_7)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  uint local_60;
  uint local_5c;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;

  local_60 = 0;
  iVar22 = *param_5;
  iVar10 = param_5[1];
  local_38 = 0;
  local_3c = 0;
  puVar11 = param_7 + param_3;
  do {
    iVar12 = local_3c + 3;
    bVar24 = SBORROW4(iVar12,param_3);
    iVar1 = iVar12 - param_3;
    bVar23 = iVar12 == param_3;
    if (iVar12 <= param_3) {
      bVar24 = SBORROW4(local_38,param_4);
      iVar1 = local_38 - param_4;
      bVar23 = local_38 == param_4;
    }
    if (!bVar23 && iVar1 < 0 == bVar24) {
LAB_02012d4c:
      iVar10 = 0;
      *param_2 = local_3c;
      if (0 < local_3c + -1) {
        do {
          iVar22 = iVar10 + 1;
          if (iVar22 < local_3c) {
            do {
              iVar1 = iVar22 * 2;
              uVar2 = *(ushort *)(param_1 + iVar1);
              uVar3 = *(ushort *)(param_1 + iVar10 * 2);
              iVar22 = iVar22 + 1;
              if (uVar2 < uVar3) {
                *(ushort *)(param_1 + iVar10 * 2) = uVar2;
                *(ushort *)(param_1 + iVar1) = uVar3;
              }
            } while (iVar22 < local_3c);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_3c + -1);
      }
      return 0 < *param_2;
    }
    for (; (uVar13 = local_60, (int)local_60 < iVar10 && (*(short *)(iVar22 + local_60 * 4) == -1));
        local_60 = local_60 + 1 & 0xffff) {
    }
    if (iVar10 <= (int)local_60) goto LAB_02012d4c;
    for (; ((int)local_60 < iVar10 && (*(short *)(iVar22 + local_60 * 4) != -1));
        local_60 = local_60 + 1 & 0xffff) {
    }
    if ((int)local_60 < iVar10) {
      *(short *)(param_1 + local_3c * 2) = (short)local_60;
    }
    else {
      *(short *)(param_1 + local_3c * 2) = (short)((unsigned int)0x02012dc4);
    }
    uVar8 = (undefined2)uVar13;
    *(undefined2 *)(param_1 + (local_3c + 1) * 2) = uVar8;
    uVar9 = (undefined2)((local_60 - 1) * 0x10000 >> 0x10);
    *(undefined2 *)(param_1 + (local_3c + 1) * 2 + 2) = uVar9;
    local_3c = local_3c + 3;
    local_38 = local_38 + 1;
    if (param_3 <= local_3c) goto LAB_02012d4c;
    if (2 < (int)(local_60 - uVar13)) {
      *param_7 = uVar8;
      local_2c = 1;
      *puVar11 = uVar9;
      local_34 = 1;
      local_30 = 0;
      do {
        uVar2 = param_7[local_30];
        uVar13 = (uint)uVar2;
        uVar3 = puVar11[local_30];
        uVar19 = (uint)uVar3;
        local_30 = local_30 + 1;
        if (param_3 <= local_30) {
          local_30 = 0;
        }
        iVar1 = local_2c + -1;
        if (1 < (int)(uVar19 - uVar13)) {
          sVar4 = *(short *)(iVar22 + uVar13 * 4);
          sVar5 = *(short *)(iVar22 + uVar19 * 4);
          sVar6 = *(short *)(iVar22 + uVar19 * 4 + 2);
          sVar7 = *(short *)(iVar22 + uVar13 * 4 + 2);
          iVar15 = (int)sVar5 - (int)sVar4;
          iVar21 = (int)sVar6 - (int)sVar7;
          iVar12 = -1;
          local_5c = 0xffff;
          (*(unsigned short *)((unsigned char *)&local_5c + 0)) = 0xffff;
          uVar13 = uVar13 + 1;
          iVar14 = iVar12;
          iVar16 = iVar12;
          if (uVar13 < uVar19) {
            do {
              iVar20 = (int)*(short *)(iVar22 + uVar13 * 4);
              iVar17 = (int)*(short *)(iVar22 + uVar13 * 4 + 2);
              if ((iVar12 != iVar20) || (iVar14 != iVar17)) {
                iVar18 = (iVar20 * iVar21 - iVar17 * iVar15) -
                         ((int)sVar4 * (int)sVar6 - (int)sVar5 * (int)sVar7);
                if (iVar18 < 0) {
                  iVar18 = -iVar18;
                }
                iVar12 = iVar20;
                iVar14 = iVar17;
                if (iVar16 < iVar18) {
                  local_5c = uVar13 & 0xffff;
                  iVar16 = iVar18;
                }
              }
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar19);
          }
          if (param_6 * param_6 * (iVar15 * iVar15 + iVar21 * iVar21) <= iVar16 * iVar16) {
            *(undefined2 *)(param_1 + local_3c * 2) = (undefined2)local_5c;
            local_3c = local_3c + 1;
            param_7[local_34] = (undefined2)local_5c;
            puVar11[local_34] = uVar3;
            local_34 = local_34 + 1;
            if (param_3 <= local_34) {
              local_34 = 0;
            }
            param_7[local_34] = uVar2;
            puVar11[local_34] = (undefined2)local_5c;
            local_34 = local_34 + 1;
            if (param_3 <= local_34) {
              local_34 = 0;
            }
            iVar1 = local_2c + 1;
            if (param_3 <= local_3c) break;
          }
        }
        local_2c = iVar1;
      } while (0 < local_2c);
    }
  } while( true );
}
