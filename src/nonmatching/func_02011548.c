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

extern int func_020028c0();
extern int func_0200290c();
extern int func_02002fdc();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_02011548(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int unaff_r6;
  short *psVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  int local_48;
  int local_44;
  int local_40;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;

  uVar8 = (uint)*(ushort *)(param_1 + 2);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0x200;
  *(undefined2 *)(param_1 + 0x2e) = 0x200;
  *(undefined2 *)(param_1 + 0x30) = 0xfe00;
  *(undefined2 *)(param_1 + 0x32) = 0xfe00;
  psVar9 = *(short **)(param_1 + 4);
  if ((uVar8 < 2) || (psVar9[2] == -1)) {
    local_30 = *psVar9;
    local_2e = psVar9[1];
  }
  else {
    local_30 = *psVar9 * 2 - psVar9[2];
    local_2e = psVar9[1] * 2 - psVar9[3];
  }
  iVar11 = 0;
  iVar7 = 0;
  bVar12 = true;
  if (uVar8 != 0) {
    do {
      sVar3 = *psVar9;
      iVar5 = (int)sVar3;
      if (iVar5 == -1) {
        if (unaff_r6 == 0) {
          unaff_r6 = 1;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + iVar11 * 4) = unaff_r6;
        iVar5 = *(int *)(param_1 + 0xc);
        *(int *)(iVar5 + iVar11 * 4) = local_40;
        if (iVar7 + 1 < (int)uVar8) {
          iVar5 = (int)local_2e - (int)psVar9[3];
          iVar10 = (int)local_30 - (int)psVar9[2];
          iVar10 = func_0200290c((iVar10 * iVar10 + iVar5 * iVar5) * 0x1000);
          iVar5 = (int)psVar9[3] - (int)local_2e;
          if (iVar10 == 0) {
            iVar10 = 1;
          }
          iVar4 = (int)psVar9[2] - (int)local_30;
LAB_02011794:
          uVar1 = func_02002fdc(iVar5,iVar4);
        }
        else {
          bVar12 = iVar7 == 2;
          if (1 < iVar7) {
            iVar5 = (int)psVar9[-4];
          }
          iVar10 = 0;
          if (1 < iVar7) {
            bVar12 = iVar5 == -1;
          }
          bVar13 = false;
          iVar4 = local_40;
          if (bVar12) {
            iVar4 = (int)psVar9[-2];
            bVar13 = iVar4 == -1;
          }
          if (bVar13) {
            iVar4 = iVar4 - iVar5;
            iVar5 = (int)psVar9[-1] - (int)psVar9[-3];
            goto LAB_02011794;
          }
          uVar1 = 0;
        }
        iVar5 = *(int *)(param_1 + 0x28);
        *(short *)(iVar5 + iVar11 * 8) = local_2c;
        iVar5 = iVar5 + iVar11 * 8;
        *(short *)(iVar5 + 2) = local_2a;
        *(short *)(iVar5 + 4) = local_28;
        *(short *)(iVar5 + 6) = local_26;
        iVar11 = iVar11 + 1;
        if (local_2c < *(short *)(param_1 + 0x2c)) {
          *(short *)(param_1 + 0x2c) = local_2c;
        }
        if (*(short *)(param_1 + 0x30) < local_28) {
          *(short *)(param_1 + 0x30) = local_28;
        }
        if (local_2a < *(short *)(param_1 + 0x2e)) {
          *(short *)(param_1 + 0x2e) = local_2a;
        }
        if (*(short *)(param_1 + 0x32) < local_26) {
          *(short *)(param_1 + 0x32) = local_26;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + unaff_r6;
        bVar12 = true;
      }
      else {
        if (bVar12) {
          unaff_r6 = 0;
          *(int *)(*(int *)(param_1 + 8) + iVar11 * 4) = iVar7;
          local_2c = *psVar9;
          local_2a = psVar9[1];
          local_40 = 0;
          iVar10 = 0;
          iVar5 = (int)local_2a - (int)local_2e;
          iVar4 = (int)local_2c - (int)local_30;
          local_28 = local_2c;
          local_26 = local_2a;
        }
        else {
          if (iVar5 < local_2c) {
            local_2c = sVar3;
          }
          sVar6 = psVar9[1];
          iVar10 = (int)sVar6;
          if (local_28 < iVar5) {
            local_28 = sVar3;
          }
          if (iVar10 < local_2a) {
            local_2a = sVar6;
          }
          if (local_26 < iVar10) {
            local_26 = sVar6;
          }
          iVar10 = local_2e - iVar10;
          iVar5 = local_30 - iVar5;
          iVar10 = func_0200290c((iVar5 * iVar5 + iVar10 * iVar10) * 0x1000);
          iVar5 = (int)psVar9[1] - (int)local_2e;
          if (iVar10 == 0) {
            iVar10 = 1;
          }
          iVar4 = (int)*psVar9 - (int)local_30;
        }
        uVar1 = func_02002fdc(iVar5,iVar4);
        local_30 = *psVar9;
        local_2e = psVar9[1];
        local_40 = local_40 + 1;
        unaff_r6 = unaff_r6 + iVar10;
        bVar12 = false;
      }
      *(int *)(*(int *)(param_1 + 0x10) + iVar7 * 4) = iVar10;
      psVar9 = psVar9 + 2;
      *(undefined2 *)(*(int *)(param_1 + 0x18) + iVar7 * 2) = uVar1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar8);
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  psVar9 = *(short **)(param_1 + 4);
  local_48 = 0;
  local_44 = 0;
  sVar6 = 0;
  sVar3 = 0;
  iVar11 = 0;
  bVar12 = true;
  if (uVar8 == 0) {
    return;
  }
  do {
    local_44 = local_44 + *(int *)(*(int *)(param_1 + 0x10) + iVar11 * 4);
    sVar2 = func_020028c0(local_44,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 * 4));
    *(short *)(*(int *)(param_1 + 0x14) + iVar11 * 2) = sVar2 - sVar3;
    if (*psVar9 == -1) {
      bVar12 = true;
      iVar7 = iVar7 + 1;
    }
    else if (bVar12) {
      local_48 = local_48 + *(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4);
      sVar3 = func_020028c0(local_48,*(undefined4 *)(param_1 + 0x24));
      *(short *)(*(int *)(param_1 + 0x20) + iVar7 * 2) = sVar3 - sVar6;
      bVar12 = false;
      sVar6 = sVar3;
    }
    iVar11 = iVar11 + 1;
    psVar9 = psVar9 + 2;
    sVar3 = sVar2;
  } while (iVar11 < (int)uVar8);
  return;
}
