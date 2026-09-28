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

extern int func_02007558();
extern int func_020075a8();
extern int func_02007820();
extern int func_020099f0();
extern int func_02009b68();
extern int func_0201ebe0();
extern int func_020679d0();

void func_02067b0c(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  char in_OV;
  bool bVar20;
  int local_5c;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  int local_34;

  uVar6 = *(uint *)(param_1 + 8);
  iVar15 = *(int *)(uVar6 + 0x118) << 0x1a;
  iVar7 = iVar15 >> 0x1f;
  if (iVar15 < 0) {
    iVar7 = *(int *)(uVar6 + 0x11c);
    in_OV = '\0';
  }
  if ((iVar15 < 0 && iVar7 != 0) && iVar7 < 0 == (bool)in_OV) {
    *(int *)(uVar6 + 0x11c) = *(int *)(uVar6 + 0x11c) + -1;
  }
  uVar8 = *(uint *)(param_1 + 0x2c);
  local_34 = 0;
  do {
    if (uVar8 == 0) {
LAB_02068250:
      if (*(code **)(uVar6 + 0x13c) != (code *)0x0) {
        (**(code **)(uVar6 + 0x13c))
                  (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),param_1 + 0x14,
                   *(undefined4 *)(param_1 + 0x2c),*(char *)(uVar6 + 200) != '\0',
                   *(undefined4 *)(uVar6 + 0x140));
      }
      iVar15 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          func_02007820(*(undefined4 *)(param_1 + iVar15 * 4 + 0x14),*(undefined4 *)(param_1 + 0x2c))
          ;
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(param_1 + 0x10));
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        *(undefined4 *)(uVar6 + 0x120) = 1;
      }
      return;
    }
    if (*(int *)(uVar6 + 0x118) << 0x1a < 0) {
      iVar15 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          func_020099f0(*(int *)(param_1 + iVar15 * 4 + 0x14) + local_34,0,uVar8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(param_1 + 0x10));
      }
      goto LAB_02068250;
    }
    uVar16 = *(uint *)(uVar6 + 0xe4);
    iVar15 = *(int *)(uVar6 + 0x168);
    uVar9 = func_0201ebe0(iVar15,uVar16);
    bVar20 = *(int *)(uVar6 + 0xdc) - 1U <= uVar9;
    uVar10 = uVar16;
    if (bVar20) {
      uVar10 = uVar6;
    }
    if (bVar20) {
      uVar10 = *(uint *)(uVar10 + 0xe8);
    }
    if (bVar20) {
      uVar10 = uVar6;
    }
    uVar16 = iVar15 - uVar9 * uVar16;
    if (bVar20) {
      uVar10 = *(uint *)(uVar10 + 0xec);
    }
    local_48 = uVar8;
    if (*(char *)(uVar6 + 200) != '\0') {
      local_48 = uVar8 >> 1;
    }
    local_40 = uVar16;
    if ((int)(*(uint *)(uVar6 + 0x118) << 0x1b) < 0) {
      if (uVar16 == 0) {
        *(uint *)(uVar6 + 0x118) = *(uint *)(uVar6 + 0x118) & 0xffffffef;
      }
      else {
        local_40 = 0;
        local_48 = uVar16;
      }
    }
    bVar20 = false;
    if ((uVar10 <= local_40 + local_48) &&
       (local_48 = uVar10 - local_40, *(int *)(uVar6 + 0xdc) - 1U <= uVar9)) {
      if (*(char *)(uVar6 + 0xc9) == '\0') {
        *(uint *)(uVar6 + 0x118) = *(uint *)(uVar6 + 0x118) | 0x20;
      }
      else {
        bVar20 = true;
      }
    }
    iVar5 = ((unsigned int)0x02068308);
    iVar7 = ((unsigned int)0x02068304);
    iVar15 = ((unsigned int)0x02068300);
    cVar1 = *(char *)(uVar6 + 200);
    local_4c = local_48;
    if (cVar1 == '\0') {
      local_50 = local_48;
    }
    else if (cVar1 == '\x01') {
      local_50 = local_48 << 1;
      local_4c = local_50;
    }
    else if (cVar1 == '\x02') {
      local_50 = (local_40 + local_48 + 1 >> 1) - (local_40 >> 1);
      if (local_40 == 0) {
        local_50 = local_50 + 4;
      }
      local_4c = local_48 << 1;
    }
    local_5c = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar4 = -0x8000;
      do {
        psVar11 = (short *)(*(int *)(param_1 + local_5c * 4 + 0x14) + local_34);
        if (local_5c < (int)(uint)*(byte *)(uVar6 + 0xca)) {
          psVar12 = psVar11;
          if (*(char *)(uVar6 + 200) == '\x02') {
            func_02007558(((unsigned int)0x0206830c));
            psVar12 = *(short **)(((unsigned int)0x02068310) + 8);
          }
          uVar10 = (**(code **)(uVar6 + 0x174))(uVar6,psVar12);
          if (uVar10 != local_50) {
            local_4c = 0;
            *(uint *)(uVar6 + 0x118) = *(uint *)(uVar6 + 0x118) | 0x20;
            local_48 = 0;
            bVar20 = false;
            if (*(char *)(uVar6 + 200) == '\x02') {
              func_020075a8(((unsigned int)0x0206830c));
            }
            break;
          }
          if (*(char *)(uVar6 + 200) == '\x02') {
            psVar12 = (short *)(uVar6 + 0x100 + local_5c * 4);
            pbVar14 = *(byte **)(((unsigned int)0x02068310) + 8);
            pbVar13 = pbVar14;
            if (local_40 == 0) {
              pbVar13 = pbVar14 + 4;
              sVar3 = *(short *)(pbVar14 + 2);
              *psVar12 = *(short *)pbVar14;
              psVar12[1] = sVar3;
            }
            uVar10 = local_40;
            psVar17 = psVar11;
            if ((local_40 & 1) != 0) {
              iVar19 = (int)*(short *)(iVar5 + (uint)*(byte *)(psVar12 + 1) * 2);
              uVar10 = (int)(uint)*pbVar13 >> 4;
              iVar18 = iVar19 >> 3;
              if ((uVar10 & 4) != 0) {
                iVar18 = iVar18 + iVar19;
              }
              if ((uVar10 & 2) != 0) {
                iVar18 = iVar18 + (iVar19 >> 1);
              }
              if ((uVar10 & 1) != 0) {
                iVar18 = iVar18 + (iVar19 >> 2);
              }
              if ((uVar10 & 8) == 0) {
                iVar18 = *psVar12 + iVar18;
                if (iVar15 < iVar18) {
                  iVar18 = iVar15;
                }
              }
              else {
                iVar18 = *psVar12 - iVar18;
                if (iVar18 < -0x8000) {
                  iVar18 = iVar4;
                }
              }
              iVar19 = (uint)*(byte *)(psVar12 + 1) + (int)*(char *)(iVar7 + uVar10);
              if (iVar19 < 0) {
                iVar19 = 0;
              }
              else if (0x58 < iVar19) {
                iVar19 = 0x58;
              }
              *psVar12 = (short)iVar18;
              *(char *)(psVar12 + 1) = (char)iVar19;
              psVar17 = psVar11 + 1;
              *psVar11 = (short)iVar18;
              uVar10 = local_40 + 1;
              pbVar13 = pbVar13 + 1;
            }
            for (; uVar10 < (local_40 + local_48 & 0xfffffffe); uVar10 = uVar10 + 2) {
              bVar2 = *pbVar13;
              iVar19 = (int)*(short *)(iVar5 + (uint)*(byte *)(psVar12 + 1) * 2);
              iVar18 = iVar19 >> 3;
              if ((bVar2 & 4) != 0) {
                iVar18 = iVar18 + iVar19;
              }
              if ((bVar2 & 2) != 0) {
                iVar18 = iVar18 + (iVar19 >> 1);
              }
              if ((bVar2 & 1) != 0) {
                iVar18 = iVar18 + (iVar19 >> 2);
              }
              if ((bVar2 & 8) == 0) {
                iVar18 = *psVar12 + iVar18;
                if (iVar15 < iVar18) {
                  iVar18 = iVar15;
                }
              }
              else {
                iVar18 = *psVar12 - iVar18;
                if (iVar18 < -0x8000) {
                  iVar18 = iVar4;
                }
              }
              iVar19 = (uint)*(byte *)(psVar12 + 1) + (int)*(char *)(iVar7 + (bVar2 & 0xf));
              if (iVar19 < 0) {
                iVar19 = 0;
              }
              else if (0x58 < iVar19) {
                iVar19 = 0x58;
              }
              *psVar12 = (short)iVar18;
              *(char *)(psVar12 + 1) = (char)iVar19;
              *psVar17 = (short)iVar18;
              iVar19 = (int)*(short *)(iVar5 + (uint)*(byte *)(psVar12 + 1) * 2);
              uVar9 = (int)(uint)*pbVar13 >> 4;
              iVar18 = iVar19 >> 3;
              if ((uVar9 & 4) != 0) {
                iVar18 = iVar18 + iVar19;
              }
              if ((uVar9 & 2) != 0) {
                iVar18 = iVar18 + (iVar19 >> 1);
              }
              if ((uVar9 & 1) != 0) {
                iVar18 = iVar18 + (iVar19 >> 2);
              }
              if ((uVar9 & 8) == 0) {
                iVar18 = *psVar12 + iVar18;
                if (iVar15 < iVar18) {
                  iVar18 = iVar15;
                }
              }
              else {
                iVar18 = *psVar12 - iVar18;
                if (iVar18 < -0x8000) {
                  iVar18 = iVar4;
                }
              }
              iVar19 = (uint)*(byte *)(psVar12 + 1) + (int)*(char *)(iVar7 + uVar9);
              if (iVar19 < 0) {
                iVar19 = 0;
              }
              else if (0x58 < iVar19) {
                iVar19 = 0x58;
              }
              *psVar12 = (short)iVar18;
              *(char *)(psVar12 + 1) = (char)iVar19;
              psVar17[1] = (short)iVar18;
              pbVar13 = pbVar13 + 1;
              psVar17 = psVar17 + 2;
            }
            if (uVar10 < local_40 + local_48) {
              bVar2 = *pbVar13;
              iVar19 = (int)*(short *)(iVar5 + (uint)*(byte *)(psVar12 + 1) * 2);
              iVar18 = iVar19 >> 3;
              if ((bVar2 & 4) != 0) {
                iVar18 = iVar18 + iVar19;
              }
              if ((bVar2 & 2) != 0) {
                iVar18 = iVar18 + (iVar19 >> 1);
              }
              if ((bVar2 & 1) != 0) {
                iVar18 = iVar18 + (iVar19 >> 2);
              }
              if ((bVar2 & 8) == 0) {
                iVar18 = *psVar12 + iVar18;
                if (iVar15 < iVar18) {
                  iVar18 = iVar15;
                }
              }
              else {
                iVar18 = *psVar12 - iVar18;
                if (iVar18 < -0x8000) {
                  iVar18 = iVar4;
                }
              }
              iVar19 = (uint)*(byte *)(psVar12 + 1) + (int)*(char *)(iVar7 + (bVar2 & 0xf));
              if (iVar19 < 0) {
                iVar19 = 0;
              }
              else if (0x58 < iVar19) {
                iVar19 = 0x58;
              }
              *psVar12 = (short)iVar18;
              *(char *)(psVar12 + 1) = (char)iVar19;
              *psVar17 = (short)iVar18;
            }
            func_020075a8(((unsigned int)0x0206830c));
          }
        }
        else if (*(int *)(uVar6 + 0x118) << 0x19 < 0) {
          func_020099f0(psVar11,0);
        }
        else {
          func_02009b68(*(int *)(param_1 + 0x14) + local_34);
        }
        local_5c = local_5c + 1;
      } while (local_5c < *(int *)(param_1 + 0x10));
    }
    if ((int)(*(uint *)(uVar6 + 0x118) << 0x1b) < 0) {
      *(uint *)(uVar6 + 0x118) = *(uint *)(uVar6 + 0x118) & 0xffffffef;
    }
    else {
      if (bVar20) {
        iVar15 = *(int *)(uVar6 + 0xd0);
      }
      else {
        iVar15 = *(int *)(uVar6 + 0x168) + local_48;
      }
      *(int *)(uVar6 + 0x168) = iVar15;
      iVar15 = *(int *)(uVar6 + 0x118) << 0x1a;
      local_34 = local_34 + local_4c;
      uVar8 = uVar8 - local_4c;
      iVar7 = iVar15 >> 0x1f;
      if (iVar15 < 0) {
        iVar7 = *(int *)(uVar6 + 0x144);
      }
      if (iVar15 < 0 && iVar7 != 0) {
        func_020679d0(uVar6);
      }
    }
  } while( true );
}
