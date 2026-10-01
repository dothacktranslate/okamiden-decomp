
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

void func_02011bbc(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_70 [8];
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;

  local_68 = (uint)*(ushort *)(param_3 + 2);
  if ((uint)*(ushort *)(param_3 + 2) < (uint)*(ushort *)(param_4 + 2)) {
    local_68 = (uint)*(ushort *)(param_4 + 2);
  }
  iVar4 = local_68 * local_68;
  iVar13 = *(int *)(*(int *)(param_4 + 0xc) + param_8 * 4);
  local_54 = param_9 + iVar4 * 4;
  local_58 = param_9 + iVar4 * 8;
  local_60 = *(int *)(*(int *)(param_3 + 0xc) + param_8 * 4);
  local_5c = param_9 + iVar4 * 0xc;
  local_50 = param_5;
  iVar4 = *(int *)(*(int *)(param_3 + 8) + param_8 * 4);
  iVar11 = *(int *)(param_4 + 0x18);
  local_64 = *(int *)(param_3 + 4) + iVar4 * 4;
  iVar3 = *(int *)(*(int *)(param_4 + 8) + param_8 * 4);
  iVar6 = *(int *)(param_3 + 0x18) + iVar4 * 2;
  psVar5 = (short *)(*(int *)(param_4 + 4) + iVar3 * 4);
  bVar16 = iVar13 != 0;
  iVar2 = *(int *)(*(int *)(param_4 + 0x1c) + param_8 * 4);
  iVar4 = *(int *)(*(int *)(param_3 + 0x1c) + param_8 * 4);
  if (bVar16) {
    param_8 = local_60;
  }
  *param_2 = 0x1000;
  iVar11 = iVar11 + iVar3 * 2;
  piVar14 = (int *)auStack_70;
  if (!bVar16 || param_8 == 0) {
    piVar14 = (int *)&stack0xffffffdc;
  }
  *param_1 = 0;
  if (bVar16 && param_8 != 0) {
    iVar7 = piVar14[0x1d];
    iVar3 = iVar4 - iVar7;
    iVar8 = iVar4;
    if (iVar4 <= iVar7) {
      iVar3 = iVar2 - iVar7;
      iVar8 = iVar2;
    }
    if (iVar8 != iVar7 && iVar3 < 0 == SBORROW4(iVar8,iVar7)) {
      iVar8 = iVar4 * piVar14[0x1e];
      bVar16 = SBORROW4(iVar8,iVar2);
      iVar3 = iVar8 - iVar2;
      if (iVar2 <= iVar8) {
        iVar2 = iVar2 * piVar14[0x1e];
        bVar16 = SBORROW4(iVar2,iVar4);
        iVar3 = iVar2 - iVar4;
      }
      if (iVar3 < 0 != bVar16) {
        return;
      }
    }
    if ((iVar13 == 1) || (piVar14[4] == 1)) {
      iVar4 = 0;
      if (0 < piVar14[4]) {
        iVar2 = piVar14[2];
        do {
          iVar3 = 0;
          if (0 < iVar13) {
            iVar11 = piVar14[5];
            do {
              *(undefined4 *)(iVar11 + iVar4 * (iVar2 + 1) * 4 + iVar3 * 4) = 0x80;
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar13);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < piVar14[4]);
      }
    }
    else {
      iVar2 = 1;
      iVar4 = (int)(((uint)*(ushort *)(iVar11 + 2) - (uint)*(ushort *)(iVar6 + 2)) * 0x10000) >>
              0x10;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      *(int *)piVar14[5] = (int)((0x8000 - iVar4) + ((uint)(0x8000 - iVar4 >> 6) >> 0x19)) >> 7;
      uVar1 = *(ushort *)(iVar11 + 2);
      piVar14[1] = piVar14[4] + -1;
      iVar4 = (int)(((uint)uVar1 - (uint)*(ushort *)(iVar6 + (piVar14[4] + -1) * 2)) * 0x10000) >>
              0x10;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      iVar8 = piVar14[4] * (piVar14[2] + 1);
      *(int *)(piVar14[5] + iVar8 * 4) =
           (int)((0x8000 - iVar4) + ((uint)(0x8000 - iVar4 >> 6) >> 0x19)) >> 7;
      iVar3 = iVar13 + -1;
      iVar4 = (int)(((uint)*(ushort *)(iVar11 + iVar3 * 2) - (uint)*(ushort *)(iVar6 + 2)) * 0x10000
                   ) >> 0x10;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      *(int *)(piVar14[5] + iVar13 * 4) =
           (int)((0x8000 - iVar4) + ((uint)(0x8000 - iVar4 >> 6) >> 0x19)) >> 7;
      iVar4 = (int)(((uint)*(ushort *)(iVar11 + iVar3 * 2) -
                    (uint)*(ushort *)(iVar6 + piVar14[1] * 2)) * 0x10000) >> 0x10;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      iVar7 = piVar14[4];
      *(int *)(piVar14[5] + iVar8 * 4 + iVar13 * 4) =
           (int)((0x8000 - iVar4) + ((uint)(0x8000 - iVar4 >> 6) >> 0x19)) >> 7;
      if (1 < iVar7) {
        iVar4 = piVar14[2];
        iVar7 = piVar14[5];
        do {
          iVar12 = (int)(((uint)*(ushort *)(iVar11 + 2) - (uint)*(ushort *)(iVar6 + iVar2 * 2)) *
                        0x10000) >> 0x10;
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          iVar9 = iVar2 * (iVar4 + 1);
          *(int *)(piVar14[5] + iVar9 * 4) =
               (int)((0x8000 - iVar12) + ((uint)(0x8000 - iVar12 >> 6) >> 0x19)) >> 7;
          iVar12 = iVar2 * 2;
          iVar2 = iVar2 + 1;
          iVar12 = (int)(((uint)*(ushort *)(iVar11 + iVar3 * 2) - (uint)*(ushort *)(iVar6 + iVar12))
                        * 0x10000) >> 0x10;
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          *(int *)(iVar7 + iVar13 * 4 + iVar9 * 4) =
               (int)((0x8000 - iVar12) + ((uint)(0x8000 - iVar12 >> 6) >> 0x19)) >> 7;
        } while (iVar2 < piVar14[4]);
      }
      iVar4 = 1;
      if (1 < iVar13) {
        iVar2 = piVar14[1];
        iVar3 = piVar14[5];
        do {
          iVar7 = (int)(((uint)*(ushort *)(iVar11 + iVar4 * 2) - (uint)*(ushort *)(iVar6 + 2)) *
                       0x10000) >> 0x10;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          *(int *)(piVar14[5] + iVar4 * 4) =
               (int)((0x8000 - iVar7) + ((uint)(0x8000 - iVar7 >> 6) >> 0x19)) >> 7;
          iVar7 = (int)(((uint)*(ushort *)(iVar11 + iVar4 * 2) -
                        (uint)*(ushort *)(iVar6 + iVar2 * 2)) * 0x10000) >> 0x10;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          *(int *)(iVar3 + iVar8 * 4 + iVar4 * 4) =
               (int)((0x8000 - iVar7) + ((uint)(0x8000 - iVar7 >> 6) >> 0x19)) >> 7;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar13);
      }
      iVar4 = 1;
      if (1 < piVar14[4]) {
        iVar2 = piVar14[2];
        do {
          iVar3 = 1;
          if (1 < iVar13) {
            iVar8 = piVar14[5];
            do {
              iVar7 = (int)(((uint)*(ushort *)(iVar11 + iVar3 * 2) -
                            (uint)*(ushort *)(iVar6 + iVar4 * 2)) * 0x10000) >> 0x10;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              *(int *)(iVar8 + iVar4 * (iVar2 + 1) * 4 + iVar3 * 4) =
                   (int)((0x8000 - iVar7) + ((uint)(0x8000 - iVar7 >> 6) >> 0x19)) >> 7;
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar13);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < piVar14[4]);
      }
    }
    iVar4 = (int)*(short *)piVar14[3] - (int)*psVar5;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar2 = (int)((short *)piVar14[3])[1] - (int)psVar5[1];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar3 = 1;
    *(int *)piVar14[7] = *(int *)piVar14[5] * (piVar14[8] * 2 - (iVar4 + iVar2)) * 2;
    *(undefined4 *)piVar14[0x20] = 1;
    if (1 < piVar14[4]) {
      iVar4 = piVar14[2];
      do {
        iVar2 = (int)*(short *)(piVar14[3] + iVar3 * 4) - (int)*psVar5;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        iVar11 = (int)*(short *)(piVar14[3] + iVar3 * 4 + 2) - (int)psVar5[1];
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        iVar12 = (iVar3 + -1) * piVar14[2];
        iVar7 = iVar3 * piVar14[2];
        iVar8 = iVar3 * (iVar4 + 1);
        iVar3 = iVar3 + 1;
        iVar6 = piVar14[4];
        *(int *)(piVar14[7] + iVar7 * 4) =
             (piVar14[8] * 2 - (iVar2 + iVar11)) *
             (*(int *)(piVar14[5] + iVar8 * 4) + *(int *)(piVar14[5] + iVar3 * (iVar4 + 1) * 4 + 4))
             + *(int *)(piVar14[7] + iVar12 * 4);
        *(int *)(piVar14[0x20] + iVar7 * 4) = *(int *)(piVar14[0x20] + iVar12 * 4) + 1;
        *(undefined4 *)(piVar14[6] + iVar7 * 4) = 2;
      } while (iVar3 < iVar6);
    }
    iVar4 = 1;
    if (1 < iVar13) {
      iVar2 = piVar14[2];
      iVar3 = piVar14[5];
      do {
        iVar11 = (int)*(short *)piVar14[3] - (int)psVar5[iVar4 * 2];
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        iVar6 = (int)*(short *)(piVar14[3] + 2) - (int)psVar5[iVar4 * 2 + 1];
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        iVar8 = piVar14[0x20];
        *(int *)(piVar14[7] + iVar4 * 4) =
             (*(int *)(piVar14[5] + iVar4 * 4) + *(int *)(iVar3 + (iVar2 + 1) * 4 + iVar4 * 4 + 4))
             * (piVar14[8] * 2 - (iVar11 + iVar6)) + *(int *)(piVar14[7] + iVar4 * 4 + -4);
        *(int *)(piVar14[0x20] + iVar4 * 4) = *(int *)(iVar8 + iVar4 * 4 + -4) + 1;
        *(undefined4 *)(piVar14[6] + iVar4 * 4) = 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar13);
    }
    *piVar14 = 1;
    if (1 < piVar14[4]) {
      do {
        iVar4 = 1;
        if (1 < iVar13) {
          iVar3 = (*piVar14 + -1) * piVar14[2];
          iVar2 = *piVar14 * piVar14[2];
          piVar14[0xb] = piVar14[5] + *piVar14 * (piVar14[2] + 1) * 4;
          piVar14[0xc] = piVar14[5] + (*piVar14 + 1) * (piVar14[2] + 1) * 4;
          iVar11 = piVar14[7] + iVar3 * 4;
          iVar3 = piVar14[0x20] + iVar3 * 4;
          piVar14[0x12] = piVar14[7] + iVar2 * 4;
          piVar14[0xe] = piVar14[0x20] + iVar2 * 4;
          piVar14[0x11] = piVar14[6] + iVar2 * 4;
          piVar14[9] = *piVar14 << 2;
          piVar14[10] = piVar14[3] + *piVar14 * 4;
          do {
            iVar2 = (int)*(short *)(piVar14[3] + piVar14[9]) - (int)psVar5[iVar4 * 2];
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            iVar6 = (int)*(short *)(piVar14[10] + 2) - (int)psVar5[iVar4 * 2 + 1];
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            iVar12 = (piVar14[8] * 2 - (iVar2 + iVar6)) *
                     (*(int *)(piVar14[0xb] + iVar4 * 4) + *(int *)(piVar14[0xc] + iVar4 * 4 + 4));
            iVar2 = iVar12 + *(int *)(iVar11 + iVar4 * 4 + -4);
            iVar9 = *(int *)(iVar3 + iVar4 * 4 + -4) + 1;
            iVar15 = iVar12 + *(int *)(piVar14[0x12] + iVar4 * 4 + -4);
            iVar6 = *(int *)(piVar14[0xe] + iVar4 * 4 + -4);
            piVar14[0xf] = iVar15 * iVar9;
            iVar6 = iVar6 + 1;
            iVar8 = iVar2 * iVar6;
            piVar14[0xd] = iVar6;
            iVar6 = piVar14[0xf];
            iVar7 = *(int *)(iVar11 + iVar4 * 4);
            piVar14[0x10] = *(int *)(iVar3 + iVar4 * 4) + 1;
            iVar12 = iVar12 + iVar7;
            if (iVar8 < iVar6) {
              iVar9 = piVar14[0xd];
            }
            if (iVar8 < iVar6) {
              iVar2 = iVar15;
            }
            iVar7 = iVar12 * iVar9;
            iVar15 = iVar2 * piVar14[0x10];
            uVar10 = (uint)(iVar8 < iVar6);
            bVar16 = iVar7 - iVar15 != 0;
            if (bVar16 && iVar15 <= iVar7) {
              iVar2 = iVar12;
            }
            *(int *)(piVar14[0x12] + iVar4 * 4) = iVar2;
            if (bVar16 && iVar15 <= iVar7) {
              iVar9 = piVar14[0x10];
            }
            if (bVar16 && iVar15 <= iVar7) {
              uVar10 = 2;
            }
            *(int *)(piVar14[0xe] + iVar4 * 4) = iVar9;
            *(uint *)(piVar14[0x11] + iVar4 * 4) = uVar10;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar13);
        }
        iVar4 = *piVar14;
        *piVar14 = iVar4 + 1;
      } while (iVar4 + 1 < piVar14[4]);
    }
    iVar4 = piVar14[4];
    iVar2 = piVar14[2];
    iVar3 = piVar14[0x20];
    *param_1 = *(undefined4 *)(piVar14[7] + (iVar4 + -1) * iVar2 * 4 + (iVar13 + -1) * 4);
    *param_2 = *(int *)(iVar3 + (iVar4 + -1) * iVar2 * 4 + (iVar13 + -1) * 4) << 0xc;
    return;
  }
  return;
}
