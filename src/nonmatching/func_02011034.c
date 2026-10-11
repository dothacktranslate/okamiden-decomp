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

extern int func_02011548();
extern int func_02012490();
extern int func_02012518();
extern int func_020126b4();
extern int func_02012998();
extern int func_0201e9d4();
extern int func_0201ebe0();

undefined4
func_02011034(short *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int unaff_r11;
  uint uVar17;
  bool bVar18;
  int local_3c;
  int local_38;
  int local_30;
  short local_2c;
  short local_2a;
  int local_28;

  if (param_5 == (int *)0x0) {
    local_3c = 0;
    iVar11 = 3;
    iVar7 = 5;
  }
  else {
    local_3c = *param_5;
    iVar11 = param_5[1];
    iVar7 = param_5[2];
  }
  if (0 < local_3c) {
    iVar12 = 0x200;
    iVar9 = -0x200;
    iVar14 = 0x200;
    psVar3 = (short *)*param_2;
    uVar17 = 0;
    iVar4 = iVar9;
    if (0 < param_2[1]) {
      do {
        if (*psVar3 != -1) {
          iVar15 = (int)*psVar3;
          if (iVar15 < iVar12) {
            iVar12 = iVar15;
          }
          if (iVar9 < iVar15) {
            iVar9 = iVar15;
          }
          iVar15 = (int)psVar3[1];
          if (iVar15 < iVar14) {
            iVar14 = iVar15;
          }
          if (iVar4 < iVar15) {
            iVar4 = iVar15;
          }
        }
        uVar16 = uVar17 + 1;
        uVar17 = uVar16 & 0xffff;
        psVar3 = psVar3 + 2;
      } while ((int)(uVar16 & 0xffff) < param_2[1]);
    }
    local_38 = iVar9 - iVar12;
    if (iVar9 - iVar12 < iVar4 - iVar14) {
      local_38 = iVar4 - iVar14;
    }
    local_30 = (iVar12 + iVar9) / 2 - local_38 / 2;
    unaff_r11 = (iVar14 + iVar4) / 2 - local_38 / 2;
  }
  iVar12 = *(int *)(param_1 + 0xc);
  iVar9 = 0;
  local_28 = 0;
  if (iVar11 == 0) {
    iVar11 = func_02012490(iVar12,&local_28,param_3,param_4,param_2,0,*(undefined4 *)(param_1 + 2));
    if (iVar11 == 0) {
      local_28 = 0;
    }
  }
  else {
    if ((0 < local_3c) &&
       ((((iVar11 == 1 || (iVar11 == 3)) && (0 < iVar7)) &&
        (iVar7 = func_0201e9d4(iVar7 * local_38,local_3c), iVar7 == 0)))) {
      iVar7 = 1;
    }
    if (iVar11 == 1) {
      iVar9 = func_02012518(iVar12,&local_28,param_3,param_4,param_2,iVar7,
                           *(undefined4 *)(param_1 + 2));
    }
    else if (iVar11 == 2) {
      iVar9 = func_020126b4(iVar12,&local_28,param_3,param_4,param_2,iVar7,
                           *(undefined4 *)(param_1 + 2));
    }
    else if (iVar11 == 3) {
      iVar9 = func_02012998(iVar12,&local_28,param_3,param_4,param_2,iVar7,
                           *(undefined4 *)(param_1 + 2));
    }
    if (iVar9 == 0) {
      local_28 = 0;
    }
  }
  iVar11 = local_28;
  sVar5 = 0;
  sVar10 = 0;
  if (0 < local_28) {
    local_2c = -1;
    local_2a = -1;
    iVar7 = *param_2;
    iVar9 = 0;
    psVar3 = *(short **)(param_1 + 2);
    if (local_3c < 1) {
      iVar11 = 0;
      sVar1 = 0;
      if (0 < local_28) {
        do {
          sVar10 = sVar1;
          uVar17 = (uint)*(ushort *)(iVar12 + iVar11 * 2);
          psVar6 = (short *)(iVar7 + uVar17 * 4);
          if ((uVar17 == ((unsigned int)0x02011544)) || ((int)*psVar6 == ((unsigned int)0x02011544) - 0x10000)) {
            if (iVar9 < 2) {
              iVar4 = 0;
              if (0 < iVar9) {
                do {
                  sVar5 = sVar5 + -1;
                  iVar4 = iVar4 + 1;
                  psVar3 = psVar3 + -2;
                } while (iVar4 < iVar9);
              }
            }
            else {
              local_2a = -1;
              sVar5 = sVar5 + 1;
              sVar10 = sVar10 + 1;
              *psVar3 = -1;
              psVar3[1] = -1;
              local_2c = -1;
              psVar3 = psVar3 + 2;
            }
            iVar9 = 0;
            psVar13 = psVar3;
          }
          else {
            sVar1 = *psVar6;
            bVar18 = local_2c == sVar1;
            sVar2 = local_2c;
            if (bVar18) {
              sVar1 = psVar6[1];
              sVar2 = local_2a;
            }
            psVar13 = psVar3;
            if (!bVar18 || sVar2 != sVar1) {
              local_2c = *psVar6;
              local_2a = psVar6[1];
              sVar5 = sVar5 + 1;
              psVar3[1] = local_2a;
              psVar13 = psVar3 + 2;
              *psVar3 = local_2c;
              iVar9 = iVar9 + 1;
            }
          }
          iVar11 = iVar11 + 1;
          psVar3 = psVar13;
          sVar1 = sVar10;
        } while (iVar11 < local_28);
      }
    }
    else {
      iVar4 = func_0201ebe0(local_3c << 0x10,local_38 + 1);
      iVar14 = 0;
      sVar1 = 0;
      if (0 < iVar11) {
        do {
          sVar10 = sVar1;
          uVar17 = (uint)*(ushort *)(iVar12 + iVar14 * 2);
          psVar6 = (short *)(iVar7 + uVar17 * 4);
          if ((uVar17 == ((unsigned int)0x02011544)) || ((int)*psVar6 == ((unsigned int)0x02011544) - 0x10000)) {
            if (iVar9 < 2) {
              iVar11 = 0;
              if (0 < iVar9) {
                do {
                  sVar5 = sVar5 + -1;
                  psVar3 = psVar3 + -2;
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar9);
              }
            }
            else {
              local_2a = -1;
              sVar5 = sVar5 + 1;
              local_2c = -1;
              *psVar3 = -1;
              sVar10 = sVar10 + 1;
              psVar3[1] = -1;
              psVar3 = psVar3 + 2;
            }
            iVar9 = 0;
          }
          else {
            iVar11 = iVar4 * (*psVar6 - local_30);
            sVar1 = (short)((uint)iVar11 >> 0x10);
            bVar18 = (int)local_2c == iVar11 >> 0x10;
            uVar8 = iVar4 * (psVar6[1] - unaff_r11);
            uVar17 = uVar8 & 0xffff0000;
            uVar16 = uVar17;
            if (bVar18) {
              uVar16 = (uint)local_2a;
            }
            if (!bVar18 || uVar16 != (int)uVar8 >> 0x10) {
              local_2a = (short)(uVar17 >> 0x10);
              *psVar3 = sVar1;
              sVar5 = sVar5 + 1;
              psVar3[1] = local_2a;
              psVar3 = psVar3 + 2;
              iVar9 = iVar9 + 1;
              local_2c = sVar1;
            }
          }
          iVar14 = iVar14 + 1;
          sVar1 = sVar10;
        } while (iVar14 < local_28);
      }
    }
  }
  param_1[1] = sVar5;
  *param_1 = sVar10;
  if (sVar5 != 0) {
    func_02011548(param_1);
    if (local_3c < 1) {
      *(int *)(param_1 + 0x1a) = (int)param_1[0x18] - (int)param_1[0x16];
      if ((int)param_1[0x18] - (int)param_1[0x16] < (int)param_1[0x19] - (int)param_1[0x17]) {
        *(int *)(param_1 + 0x1a) = (int)param_1[0x19] - (int)param_1[0x17];
      }
    }
    else {
      *(int *)(param_1 + 0x1a) = local_3c;
    }
    return 1;
  }
  if (local_3c < 1) {
    local_3c = 1;
  }
  *(int *)(param_1 + 0x1a) = local_3c;
  return 0;
}
