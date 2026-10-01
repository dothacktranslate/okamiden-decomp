
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

extern int func_02016008();
extern int func_0201b838();
extern int func_0201d848();
extern int func_0201e0e0();
extern int func_0201e21c();
extern int func_0201e344();
extern int func_0201e61c();
extern int func_0201f5a0();

/* WARNING: Removing unreachable block (ram,0x02019d2c) */
/* WARNING: Removing unreachable block (ram,0x02019684) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 func_02019558(int param_1,code *param_2,undefined4 param_3,int *param_4,uint *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  short *psVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  int iVar14;
  byte *pbVar15;
  byte bVar16;
  char *pcVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  short *psVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int unaff_r10;
  byte *pbVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  bool bVar30;
  bool bVar31;
  undefined1 uVar32;
  bool bVar33;
  undefined8 uVar34;
  uint local_c8;
  int local_c0;
  byte *local_bc;
  int local_b8;
  int local_b0;
  int local_a4;
  byte local_98 [13];
  byte local_8b [17];
  byte local_7a [42];
  short local_50 [2];
  byte local_4c;
  byte bStack_4b;
  short local_4a [17];
  int *piStack_28;

  uVar19 = 0;
  local_a4 = 0;
  uVar21 = 1;
  iVar10 = 4;
  psVar6 = local_50;
  piStack_28 = param_4;
  do {
    psVar23 = psVar6;
    *psVar23 = 0;
    psVar23[1] = 0;
    psVar23[2] = 0;
    psVar23[3] = 0;
    iVar10 = iVar10 + -1;
    psVar6 = psVar23 + 4;
  } while (iVar10 != 0);
  bVar3 = false;
  psVar23[4] = 0;
  psVar23[5] = 0;
  psVar23[6] = 0;
  *param_5 = 0;
  bVar4 = false;
  local_b0 = 0;
  sVar9 = 0;
  local_b8 = 0;
  local_c0 = 0;
  bVar31 = false;
  local_c8 = 0;
  iVar10 = 1;
  uVar11 = (*param_2)(param_3);
  iVar24 = 4;
  pbVar15 = local_8b + 8;
  pbVar27 = ((unsigned int)0x0201a448);
  do {
    bVar7 = *pbVar27;
    pbVar12 = pbVar27 + 1;
    pbVar27 = pbVar27 + 2;
    iVar24 = iVar24 + -1;
    pbVar15[1] = *pbVar12;
    pbVar12 = pbVar15 + 2;
    *pbVar15 = bVar7;
    pbVar15 = pbVar12;
  } while (iVar24 != 0);
  *pbVar12 = *pbVar27;
  uVar32 = ((unsigned int *)0x0201a44c)[1];
  uVar28 = ((unsigned int *)0x0201a44c)[2];
  uVar29 = (*(unsigned int *)0x0201a44c);
  uVar1 = ((unsigned int *)0x0201a44c)[3];
  uVar2 = ((unsigned int *)0x0201a44c)[4];
LAB_02019fec:
  iVar24 = ((unsigned int)0x0201a454);
  if (((param_1 < iVar10) || (uVar11 == 0xffffffff)) || ((uVar21 & 0x1800) != 0)) goto LAB_0201a008;
  if (uVar21 < 0x101) {
    if (uVar21 < 0x100) {
      if (uVar21 < 0x21) {
        if (uVar21 < 0x20) {
          switch(uVar21) {
          case 0:
            goto LAB_02019fec;
          case 1:
            if (uVar11 < 0x80) {
              uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 0x100;
            }
            else {
              uVar8 = 0;
            }
            if (uVar8 == 0) {
              uVar20 = uVar11;
              if (uVar11 < 0x80) {
                uVar20 = (uint)*(byte *)(((unsigned int)0x0201a454) + uVar11);
              }
              if ((int)uVar20 < 0x4a) {
                if (0x48 < (int)uVar20) {
                  iVar10 = iVar10 + 1;
                  uVar11 = (*param_2)(param_3);
                  uVar21 = 0x4000;
                  goto LAB_02019fec;
                }
                if (((int)uVar20 < 0x2e) && (0x2a < (int)uVar20)) {
                  if (uVar20 != 0x2b) {
                    if (uVar20 != 0x2d) goto LAB_02019810;
                    bVar3 = true;
                  }
                  iVar10 = iVar10 + 1;
                  uVar11 = (*param_2)(param_3);
                  local_b8 = 1;
                  goto LAB_02019fec;
                }
              }
              else if (uVar20 == 0x4e) {
                iVar10 = iVar10 + 1;
                uVar11 = (*param_2)(param_3);
                uVar21 = 0x2000;
                goto LAB_02019fec;
              }
LAB_02019810:
              uVar21 = 2;
              goto LAB_02019fec;
            }
            uVar11 = (*param_2)(param_3);
            local_a4 = local_a4 + 1;
            goto LAB_02019fec;
          case 2:
            if (uVar11 != 0x2e) {
              if (uVar11 < 0x80) {
                uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
              }
              else {
                uVar8 = 0;
              }
              if (uVar8 == 0) {
                uVar21 = 0x1000;
              }
              else if (uVar11 == 0x30) {
                iVar10 = iVar10 + 1;
                uVar11 = (*param_2)(param_3);
                uVar21 = uVar11;
                if ((-1 < (int)uVar11) && ((int)uVar11 < 0x80)) {
                  uVar21 = (uint)*(byte *)(((unsigned int)0x0201a454) + uVar11);
                }
                if (uVar21 == 0x58) {
                  uVar21 = 0x8000;
                  uVar19 = 1;
                }
                else {
                  uVar21 = 4;
                }
              }
              else {
                uVar21 = 8;
              }
              goto LAB_02019fec;
            }
            uVar21 = 0x10;
            break;
          case 3:
            goto LAB_02019fec;
          case 4:
            if (uVar11 != 0x30) {
              uVar21 = 8;
              goto LAB_02019fec;
            }
            break;
          case 5:
            goto LAB_02019fec;
          case 6:
            goto LAB_02019fec;
          case 7:
            goto LAB_02019fec;
          case 8:
            if (uVar11 < 0x80) {
              uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
            }
            else {
              uVar8 = 0;
            }
            if (uVar8 == 0) {
              if (uVar11 != 0x2e) {
                uVar21 = 0x40;
                goto LAB_02019fec;
              }
              uVar21 = 0x20;
            }
            else {
              uVar20 = (uint)local_4c;
              if (uVar20 < 0x14) {
                local_4c = local_4c + 1;
                *(char *)((int)local_4a + (uVar20 - 1)) = (char)uVar11;
              }
              else {
                sVar9 = sVar9 + 1;
              }
            }
            break;
          default:
            if (uVar21 == 0x10) {
              if (uVar11 < 0x80) {
                uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
              }
              else {
                uVar8 = 0;
              }
              if (uVar8 == 0) {
                uVar21 = 0x1000;
              }
              else {
                uVar21 = 0x20;
              }
            }
            goto LAB_02019fec;
          }
        }
        else {
          if (uVar11 < 0x80) {
            uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
          }
          else {
            uVar8 = 0;
          }
          if (uVar8 == 0) {
            uVar21 = 0x40;
            goto LAB_02019fec;
          }
          uVar20 = (uint)local_4c;
          if (uVar20 < 0x14) {
            if (uVar11 != 0x30 || uVar20 != 0) {
              local_4c = local_4c + 1;
              *(char *)((int)local_4a + (uVar20 - 1)) = (char)uVar11;
            }
            sVar9 = sVar9 + -1;
          }
        }
      }
      else {
        if (0x40 < uVar21) {
          if (uVar21 == 0x80) {
            if (uVar11 == 0x2b) {
              iVar10 = iVar10 + 1;
              uVar11 = (*param_2)(param_3);
            }
            else if (uVar11 == 0x2d) {
              iVar10 = iVar10 + 1;
              uVar11 = (*param_2)(param_3);
              bVar4 = true;
            }
            uVar21 = 0x100;
          }
          goto LAB_02019fec;
        }
        if (uVar21 != 0x40) goto LAB_02019fec;
        uVar21 = uVar11;
        if (uVar11 < 0x80) {
          uVar21 = (uint)*(byte *)(((unsigned int)0x0201a454) + uVar11);
        }
        if (uVar21 != 0x45) {
          uVar21 = 0x800;
          goto LAB_02019fec;
        }
        uVar21 = 0x80;
      }
    }
    else {
      if (uVar11 < 0x80) {
        uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
      }
      else {
        uVar8 = 0;
      }
      if (uVar8 == 0) {
        uVar21 = 0x1000;
        goto LAB_02019fec;
      }
      if (uVar11 != 0x30) {
        uVar21 = 0x400;
        goto LAB_02019fec;
      }
      uVar21 = 0x200;
    }
  }
  else if (uVar21 < 0x2001) {
    if (0x1fff < uVar21) {
      local_98[8] = uVar29;
      local_98[10] = uVar28;
      local_98[9] = uVar32;
      iVar22 = 1;
      local_98[0xc] = uVar2;
      iVar25 = 0;
      pbVar15 = local_7a;
      local_98[0xb] = uVar1;
      iVar14 = 8;
      do {
        *pbVar15 = 0;
        pbVar15[1] = 0;
        pbVar15[2] = 0;
        pbVar15[3] = 0;
        pbVar15 = pbVar15 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      for (; iVar14 = ((unsigned int)0x0201a450), iVar22 < 4; iVar22 = iVar22 + 1) {
        uVar21 = uVar11;
        if (uVar11 < 0x80) {
          uVar21 = (uint)*(byte *)(iVar24 + uVar11);
        }
        if (local_98[iVar22 + 8] != uVar21) break;
        iVar10 = iVar10 + 1;
        uVar11 = (*param_2)(param_3);
      }
      if (1 < iVar22 - 3U) goto LAB_020198f0;
      if (iVar22 == 4) {
        for (; iVar25 < 0x20; iVar25 = iVar25 + 1) {
          if (uVar11 < 0x80) {
            uVar8 = *(ushort *)(iVar14 + uVar11 * 2) & 8;
          }
          else {
            uVar8 = 0;
          }
          if (uVar8 == 0) {
            if (uVar11 < 0x80) {
              uVar8 = *(ushort *)(iVar14 + uVar11 * 2) & 1;
            }
            else {
              uVar8 = 0;
            }
            if ((uVar8 == 0) && (uVar11 != 0x2e)) break;
          }
          local_7a[iVar25] = (byte)uVar11;
          iVar10 = iVar10 + 1;
          uVar11 = (*param_2)(param_3);
        }
        if (uVar11 != 0x29) {
          uVar21 = 0x1000;
          goto LAB_02019fec;
        }
        iVar25 = iVar25 + 1;
      }
      local_7a[iVar25] = 0;
      if (bVar3) {
        uVar34 = func_02016008();
        uVar34 = func_0201d848(0,0,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
      }
      else {
        uVar34 = func_02016008();
      }
      *param_4 = local_b8 + iVar25 + local_a4 + iVar22;
      return uVar34;
    }
    if (0x200 < uVar21) {
      if (uVar21 == 0x400) {
        if (uVar11 < 0x80) {
          uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
        }
        else {
          uVar8 = 0;
        }
        if (uVar8 != 0) {
          local_b0 = local_b0 * 10 + (uVar11 - 0x30);
          bVar33 = SBORROW4(local_b0,0x134);
          iVar24 = local_b0 + -0x134;
          bVar30 = local_b0 == 0x134;
LAB_02019fc8:
          if (!bVar30 && iVar24 < 0 == bVar33) {
            *param_5 = 1;
          }
          goto LAB_02019fe0;
        }
        uVar21 = 0x800;
      }
      goto LAB_02019fec;
    }
    if (uVar21 != 0x200) goto LAB_02019fec;
    if (uVar11 != 0x30) {
      uVar21 = 0x400;
      goto LAB_02019fec;
    }
  }
  else {
    if (uVar21 < 0x4001) goto code_r0x02019704;
    if (uVar21 != 0x8000) goto LAB_02019fec;
    if (uVar19 < 0x21) {
      if (uVar19 < 0x20) {
        switch(uVar19) {
        case 0:
          goto LAB_02019fec;
        case 1:
          local_bc = local_8b;
          local_c8 = 0;
          local_8b[0] = 0;
          local_8b[1] = 0;
          local_8b[2] = 0;
          local_8b[3] = 0;
          local_8b[4] = 0;
          local_8b[5] = 0;
          local_8b[6] = 0;
          local_8b[7] = 0;
          uVar19 = 2;
          unaff_r10 = 0;
          break;
        case 2:
          if (uVar11 != 0x30) {
            uVar19 = 4;
            goto LAB_02019fec;
          }
          break;
        case 3:
          goto LAB_02019fec;
        case 4:
          if (uVar11 < 0x80) {
            uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 0x400;
          }
          else {
            uVar8 = 0;
          }
          if (uVar8 == 0) {
            if (uVar11 != 0x2e) {
              uVar19 = 0x10;
              goto LAB_02019fec;
            }
            uVar19 = 8;
          }
          else if (local_c8 < 0xe) {
            local_c8 = local_c8 + 1;
            bVar7 = local_bc[unaff_r10 / 2];
            if ((-1 < (int)uVar11) && ((int)uVar11 < 0x80)) {
              uVar11 = (uint)*(byte *)(((unsigned int)0x0201a454) + uVar11);
            }
LAB_02019e48:
            if ((int)uVar11 < 0x41) {
              uVar11 = uVar11 - 0x30;
            }
            else {
              uVar11 = uVar11 - 0x37;
            }
            uVar20 = unaff_r10 >> 0x1f;
            if ((unaff_r10 * -0x80000000 + uVar20 >> 0x1f | uVar20 << 1) == uVar20) {
              bVar16 = (byte)((uVar11 & 0xff) << 4);
            }
            else {
              bVar16 = (byte)uVar11;
            }
            local_bc[unaff_r10 / 2] = bVar7 | bVar16;
            unaff_r10 = unaff_r10 + 1;
          }
          break;
        case 5:
          goto LAB_02019fec;
        case 6:
          goto LAB_02019fec;
        case 7:
          goto LAB_02019fec;
        case 8:
          if (uVar11 < 0x80) {
            uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 0x400;
          }
          else {
            uVar8 = 0;
          }
          if (uVar8 == 0) {
            uVar19 = 0x10;
            goto LAB_02019fec;
          }
          if (local_c8 < 0xe) {
            bVar7 = local_bc[unaff_r10 / 2];
            if ((-1 < (int)uVar11) && ((int)uVar11 < 0x80)) {
              uVar11 = (uint)*(byte *)(((unsigned int)0x0201a454) + uVar11);
            }
            goto LAB_02019e48;
          }
          break;
        default:
          if (uVar19 != 0x10) goto LAB_02019fec;
          uVar20 = uVar11;
          if (uVar11 < 0x80) {
            uVar20 = (uint)*(byte *)(((unsigned int)0x0201a454) + uVar11);
          }
          if (uVar20 != 0x50) {
            uVar21 = 0x800;
            goto LAB_02019fec;
          }
          uVar19 = 0x20;
        }
      }
      else {
        if (uVar11 == 0x2d) {
          bVar31 = true;
        }
        else if (uVar11 != 0x2b) {
          (*param_2)(param_3,uVar11,1);
          iVar10 = iVar10 + -1;
        }
        uVar19 = 0x40;
      }
    }
    else {
      if (0x80 < uVar19) {
        if (uVar19 == 0x100) {
          if (uVar11 < 0x80) {
            uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
          }
          else {
            uVar8 = 0;
          }
          if (uVar8 != 0) {
            local_c0 = local_c0 * 10 + (uVar11 - 0x30);
            bVar33 = SBORROW4(local_b0,((unsigned int)0x0201a45c));
            iVar24 = local_b0 - ((unsigned int)0x0201a45c);
            bVar30 = local_b0 == ((unsigned int)0x0201a45c);
            goto LAB_02019fc8;
          }
          uVar21 = 0x800;
        }
        goto LAB_02019fec;
      }
      if (uVar19 < 0x80) {
        if (uVar19 != 0x40) goto LAB_02019fec;
        if (uVar11 < 0x80) {
          uVar8 = *(ushort *)(((unsigned int)0x0201a450) + uVar11 * 2) & 8;
        }
        else {
          uVar8 = 0;
        }
        if (uVar8 == 0) {
          uVar21 = 0x1000;
          goto LAB_02019fec;
        }
        if (uVar11 != 0x30) {
          uVar19 = 0x100;
          goto LAB_02019fec;
        }
        uVar19 = 0x80;
      }
      else if (uVar11 != 0x30) {
        uVar19 = 0x100;
        goto LAB_02019fec;
      }
    }
  }
LAB_02019fe0:
  iVar10 = iVar10 + 1;
  uVar11 = (*param_2)(param_3);
  goto LAB_02019fec;
code_r0x02019704:
  if (uVar21 == 0x4000) {
    iVar22 = 1;
    pbVar27 = local_8b + 8;
    iVar14 = 4;
    pbVar15 = local_7a + 0x20;
    do {
      bVar7 = *pbVar27;
      pbVar12 = pbVar27 + 1;
      pbVar27 = pbVar27 + 2;
      iVar14 = iVar14 + -1;
      pbVar15[1] = *pbVar12;
      pbVar12 = pbVar15 + 2;
      *pbVar15 = bVar7;
      pbVar15 = pbVar12;
    } while (iVar14 != 0);
    *pbVar12 = *pbVar27;
    for (; iVar22 < 8; iVar22 = iVar22 + 1) {
      uVar21 = uVar11;
      if (uVar11 < 0x80) {
        uVar21 = (uint)*(byte *)(iVar24 + uVar11);
      }
      if (local_7a[iVar22 + 0x20] != uVar21) break;
      iVar10 = iVar10 + 1;
      uVar11 = (*param_2)(param_3);
    }
    if ((iVar22 == 3) || (iVar22 == 8)) {
      if (bVar3) {
        uVar13 = func_0201f5a0(0,(*(unsigned int *)0x0201a458));
      }
      else {
        uVar13 = (*(unsigned int *)0x0201a458);
      }
      uVar34 = func_0201e61c(uVar13);
      *param_4 = local_b8 + local_a4 + iVar22;
      return uVar34;
    }
LAB_020198f0:
    uVar21 = 0x1000;
  }
  goto LAB_02019fec;
LAB_0201a008:
  if (uVar21 == 0x8000) {
    if ((iVar10 + -1 < 3) || ((uVar19 & ((unsigned int)0x0201a464)) == 0)) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
  }
  else {
    bVar30 = (uVar21 & ((unsigned int)0x0201a460)) == 0;
  }
  if (bVar30) {
    local_a4 = 0;
  }
  else {
    local_a4 = iVar10 + -1 + local_a4;
  }
  *param_4 = local_a4;
  (*param_2)(param_3,uVar11,1);
  if (uVar19 != 0) {
    iVar10 = 0;
    if (bVar31) {
      iVar10 = local_c0;
    }
    if (bVar31) {
      local_c0 = -iVar10;
    }
    local_c0 = local_c0 + local_c8 * 4;
    for (uVar19 = 0; (uVar19 < 4 && (((uint)local_8b[0] & 0x80 >> (uVar19 & 0xff)) == 0));
        uVar19 = uVar19 + 1) {
      local_c0 = local_c0 + -1;
    }
    uVar19 = uVar19 + 1;
    if (uVar19 != 0) {
      uVar11 = 0;
      if (local_8b <= local_8b + 7) {
        uVar21 = 8 - uVar19;
        local_bc = local_8b + 7;
        do {
          bVar7 = (byte)uVar11;
          uVar11 = (int)(uint)*local_bc >> (uVar21 & 0xff) & 0xff;
          pbVar15 = local_bc + -1;
          *local_bc = bVar7 | *local_bc << (uVar19 & 0xff);
          local_bc = pbVar15;
        } while (local_8b <= pbVar15);
      }
    }
    uVar19 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_98[7] = 0;
    uVar11 = 0xc;
    do {
      if (0x34 < uVar19 + 8) {
        uVar21 = 0x34 - uVar19;
      }
      uVar20 = (uint)local_8b[uVar19 >> 3];
      if (0x34 < uVar19 + 8) {
        uVar20 = uVar20 & 0xff << (uVar21 & 0xff) & 0xffU;
      }
      uVar26 = uVar11 & 7;
      local_98[uVar11 >> 3] = local_98[uVar11 >> 3] | (byte)((int)uVar20 >> uVar26);
      uVar11 = uVar11 + 8;
      uVar19 = uVar19 + 8;
      uVar21 = (uint)local_98[uVar11 >> 3];
      local_98[uVar11 >> 3] = local_98[uVar11 >> 3] | (byte)(uVar20 << (8 - uVar26 & 0xff));
    } while (uVar19 < 0x34);
    uVar19 = local_c0 + local_b0 + 0x3fe;
    if ((uVar19 & 0xfffff800) == 0) {
      local_98[0] = (byte)((uVar19 & 0x7ff) >> 4);
      local_98[1] = local_98[1] | (byte)((uVar19 & 0x7ff) << 4);
      if (bVar3) {
        local_98[0] = local_98[0] | 0x80;
      }
      iVar10 = 0;
      do {
        iVar24 = -iVar10;
        bVar7 = local_98[iVar10];
        local_98[iVar10] = local_98[iVar24 + 7];
        iVar10 = iVar10 + 1;
        local_98[iVar24 + 7] = bVar7;
      } while (iVar10 < 4);
      return CONCAT17(local_98[7],
                      CONCAT16(local_98[6],
                               CONCAT15(local_98[5],
                                        CONCAT14(local_98[4],
                                                 CONCAT13(local_98[3],
                                                          CONCAT12(local_98[2],
                                                                   CONCAT11(local_98[1],local_98[0])
                                                                  ))))));
    }
    *param_5 = 1;
    return 0;
  }
  if (bVar4) {
    local_b0 = -local_b0;
  }
  pcVar17 = (char *)((int)local_4a + (local_4c - 1));
  uVar19 = (uint)local_4c;
  while ((uVar19 != 0 && (pcVar17 = pcVar17 + -1, *pcVar17 == '0'))) {
    sVar9 = sVar9 + 1;
    uVar19 = uVar19 - 1;
  }
  local_4c = (char)uVar19;
  if ((uVar19 & 0xff) == 0) {
    local_4c = (char)uVar19 + '\x01';
    bStack_4b = 0x30;
  }
  if ((local_b0 < -0x134) || (0x134 < local_b0)) {
    uVar19 = *param_5;
    bVar31 = uVar19 == 0;
    if (bVar31) {
      uVar19 = (uint)bStack_4b;
    }
    bVar30 = bVar31 && uVar19 == 0x30;
    if (bVar31 && uVar19 == 0x30) {
      bVar30 = (char)local_4a[0] == '\0';
    }
    if (bVar30) {
      return 0;
    }
    *param_5 = 1;
  }
  uVar32 = *param_5 == 0;
  uVar28 = 1;
  local_50[1] = (short)local_b0 + sVar9;
  if (!(bool)uVar32) {
    if (bVar4) {
      return 0;
    }
    if (bVar3) {
      uVar34 = func_0201d848(0,0,*(undefined4 *)((unsigned int)0x0201a468),*(undefined4 *)((int)((unsigned int)0x0201a468) + 4));
      return uVar34;
    }
    return (*(unsigned int *)0x0201a468);
  }
  uVar34 = func_0201b838(local_50);
  uVar18 = (undefined4)((ulonglong)uVar34 >> 0x20);
  uVar13 = (undefined4)uVar34;
  func_0201e344(0,0,uVar13,uVar18);
  uVar29 = uVar28;
  if (!(bool)uVar32) {
    func_0201e21c(uVar13,uVar18,0,0x100000);
    uVar29 = 1;
    if (!(bool)uVar28) {
      *param_5 = 1;
      goto LAB_0201a21c;
    }
  }
  func_0201e0e0(uVar13,uVar18,0xffffffff,((unsigned int)0x0201a46c));
  puVar5 = ((unsigned int)0x0201a468);
  if ((bool)uVar29 && !(bool)uVar32) {
    *param_5 = 1;
    uVar34 = *puVar5;
  }
LAB_0201a21c:
  if ((bVar3) && ((uVar21 & ((unsigned int)0x0201a460)) != 0)) {
    uVar34 = func_0201d848(0,0,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20));
  }
  return uVar34;
}
