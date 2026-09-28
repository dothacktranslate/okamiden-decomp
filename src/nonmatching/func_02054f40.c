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

extern int func_0201d028();
extern int func_0201df60();
extern int func_0201e488();
extern int func_0201e4f0();
extern int func_0201e61c();
extern int func_0201e6a0();
extern int func_0201e6e8();
extern int func_0201f190();
extern int func_0201f370();
extern int func_0201f5a0();
extern int func_0201f824();
extern int func_0204b744();
extern int func_0204b9e0();
extern int func_0204bdc4();
extern int func_0204c150();
extern int func_0204c408();
extern int func_0204c4b0();
extern int func_0204cdac();
extern int func_0204ce68();
extern int func_0204cf68();
extern int func_0204e284();
extern int func_0204e3d4();
extern int func_0204e410();
extern int func_0204f4a4();
extern int func_0205275c();
extern int func_02052828();
extern int func_02052c8c();
extern int func_02052e1c();
extern int func_0205411c();
extern int func_020541f4();
extern int func_02054408();
extern int func_02054538();
extern int func_020546b0();
extern int func_02054904();
extern int func_0205499c();
extern int func_02054a68();
extern int func_02054bd0();
extern int func_02054d84();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_02054f40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 uVar30;
  bool bVar31;
  undefined1 uVar32;
  int local_7c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  uStack_28 = param_4;
  local_7c = param_2;
LAB_02054f50:
  uVar12 = ((unsigned int)0x02055f08);
  iVar20 = *(int *)(param_1 + 0xc);
  iVar1 = **(int **)(*(int *)(param_1 + 0x14) + 4);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x10) + 8);
  uVar3 = 0x20000 - ((unsigned int)0x02055f08);
  uVar4 = 0x20000 - ((unsigned int)0x02055f08);
  uVar5 = 0x20000 - ((unsigned int)0x02055f08);
  uVar6 = 0x20000 - ((unsigned int)0x02055f08);
  uVar7 = 0x20000 - ((unsigned int)0x02055f08);
  uVar8 = 0x20000 - ((unsigned int)0x02055f08);
  puVar14 = *(uint **)(param_1 + 0x18);
switchD_02055078_default:
  puVar13 = puVar14;
  puVar14 = puVar13 + 1;
  uVar23 = *puVar13;
  if (((*(byte *)(param_1 + 0x38) & 0xc) != 0) &&
     ((iVar9 = *(int *)(param_1 + 0x40) + -1, *(int *)(param_1 + 0x40) = iVar9, iVar9 == 0 ||
      ((*(byte *)(param_1 + 0x38) & 4) != 0)))) {
    func_020541f4(param_1,puVar14);
    if (*(char *)(param_1 + 6) == '\x01') {
      *(uint **)(param_1 + 0x18) = puVar13;
      return;
    }
    iVar20 = *(int *)(param_1 + 0xc);
  }
  uVar29 = ((unsigned int)0x02055f08);
  uVar27 = uVar23 >> 6 & 0xff;
  uVar10 = uVar23 & 0x3f;
  puVar21 = (uint *)(iVar20 + uVar27 * 8);
  uVar32 = 0x24 < uVar10;
  uVar30 = uVar10 == 0x25;
  switch(uVar10) {
  case 0:
    puVar13 = (uint *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    uVar23 = *(uint *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    goto LAB_020551b8;
  case 1:
    *puVar21 = *(uint *)(uVar2 + ((uVar23 & 0xffffc000) >> 0xb));
    uVar23 = *(uint *)(uVar2 + ((uVar23 & 0xffffc000) >> 0xb) + 4);
    goto LAB_020551c0;
  case 2:
    *puVar21 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    puVar21[1] = 1;
    if ((uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17) != 0) {
      puVar14 = puVar13 + 2;
    }
    goto switchD_02055078_default;
  case 3:
    puVar13 = (uint *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    do {
      puVar13[1] = 0;
      puVar13 = puVar13 + -2;
    } while (puVar21 <= puVar13);
    goto switchD_02055078_default;
  case 4:
    puVar13 = *(uint **)(*(int *)(iVar1 + ((uVar23 & 0xff800000) >> 0x15) + 0x14) + 8);
    uVar23 = *puVar13;
LAB_020551b8:
    *puVar21 = uVar23;
    uVar23 = puVar13[1];
    goto LAB_020551c0;
  case 5:
    uStack_30 = *(undefined4 *)(iVar1 + 0xc);
    uStack_2c = 5;
    *(uint **)(param_1 + 0x18) = puVar14;
    puVar17 = &uStack_30;
    goto LAB_020553c8;
  case 6:
    *(uint **)(param_1 + 0x18) = puVar14;
    puVar17 = (undefined4 *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    goto LAB_020553c8;
  case 7:
    uStack_38 = *(uint *)(iVar1 + 0xc);
    uStack_34 = 5;
    *(uint **)(param_1 + 0x18) = puVar14;
    puVar21 = &uStack_38;
    goto LAB_02055314;
  case 8:
    iVar9 = *(int *)(iVar1 + ((uVar23 & 0xff800000) >> 0x15) + 0x14);
    puVar13 = *(uint **)(iVar9 + 8);
    *puVar13 = *puVar21;
    puVar13[1] = puVar21[1];
    if (((3 < (int)puVar21[1]) && ((*(byte *)(*puVar21 + 5) & 3) != 0)) &&
       ((*(byte *)(iVar9 + 5) & 4) != 0)) {
      func_0204e3d4(param_1);
    }
    goto switchD_02055078_default;
  case 9:
    *(uint **)(param_1 + 0x18) = puVar14;
LAB_02055314:
    func_02054538(param_1,puVar21);
    break;
  case 10:
    uVar15 = func_0204f4a4((uVar23 & ((unsigned int)0x02055f08)) >> 0x17);
    func_0204f4a4(uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17);
    uVar23 = func_02052828(param_1,uVar15);
    *puVar21 = uVar23;
    puVar21[1] = 5;
    *(uint **)(param_1 + 0x18) = puVar14;
    if (*(uint *)(*(int *)(param_1 + 0x10) + 0x40) <= *(uint *)(*(int *)(param_1 + 0x10) + 0x44)) {
      func_0204e284(param_1);
    }
    break;
  case 0xb:
    puVar17 = (undefined4 *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    puVar21[2] = *(uint *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    puVar21[3] = puVar17[1];
    *(uint **)(param_1 + 0x18) = puVar14;
LAB_020553c8:
    func_02054408(param_1,puVar17);
    break;
  case 0xc:
    uVar29 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar29 & 0x100) == 0) {
      puVar17 = (undefined4 *)(iVar20 + uVar29 * 8);
    }
    else {
      puVar17 = (undefined4 *)(uVar2 + (uVar29 & 0xfffffeff) * 8);
    }
    uVar23 = uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      puVar19 = (undefined4 *)(iVar20 + uVar23 * 8);
    }
    else {
      puVar19 = (undefined4 *)(uVar2 + (uVar23 & 0xfffffeff) * 8);
    }
    iVar9 = puVar17[1];
    bVar31 = iVar9 != 3;
    if (!bVar31) {
      iVar9 = puVar19[1];
    }
    if (bVar31 || iVar9 != 3) {
      *(uint **)(param_1 + 0x18) = puVar14;
      goto LAB_0205544c;
    }
    uVar23 = func_0201f370(*puVar17,*puVar19);
    goto LAB_02055700;
  case 0xd:
    uVar29 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar29 & 0x100) == 0) {
      puVar17 = (undefined4 *)(iVar20 + uVar29 * 8);
    }
    else {
      puVar17 = (undefined4 *)(uVar2 + (uVar29 & 0xfffffeff) * 8);
    }
    uVar23 = uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      puVar19 = (undefined4 *)(iVar20 + uVar23 * 8);
    }
    else {
      puVar19 = (undefined4 *)(uVar2 + (uVar23 & 0xfffffeff) * 8);
    }
    iVar9 = puVar17[1];
    bVar31 = iVar9 != 3;
    if (!bVar31) {
      iVar9 = puVar19[1];
    }
    if (bVar31 || iVar9 != 3) {
      *(uint **)(param_1 + 0x18) = puVar14;
      goto LAB_0205544c;
    }
    uVar11 = *puVar17;
    uVar15 = *puVar19;
LAB_02055668:
    uVar23 = func_0201f5a0(uVar11,uVar15);
    goto LAB_02055700;
  case 0xe:
    uVar29 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar29 & 0x100) == 0) {
      puVar17 = (undefined4 *)(iVar20 + uVar29 * 8);
    }
    else {
      puVar17 = (undefined4 *)(uVar2 + (uVar29 & 0xfffffeff) * 8);
    }
    uVar23 = uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      puVar19 = (undefined4 *)(iVar20 + uVar23 * 8);
    }
    else {
      puVar19 = (undefined4 *)(uVar2 + (uVar23 & 0xfffffeff) * 8);
    }
    iVar9 = puVar17[1];
    bVar31 = iVar9 != 3;
    if (!bVar31) {
      iVar9 = puVar19[1];
    }
    if (bVar31 || iVar9 != 3) {
      *(uint **)(param_1 + 0x18) = puVar14;
      goto LAB_0205544c;
    }
    uVar23 = func_0201f190(*puVar17,*puVar19);
    goto LAB_02055700;
  case 0xf:
    uVar29 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar29 & 0x100) == 0) {
      puVar17 = (undefined4 *)(iVar20 + uVar29 * 8);
    }
    else {
      puVar17 = (undefined4 *)(uVar2 + (uVar29 & 0xfffffeff) * 8);
    }
    uVar23 = uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      puVar19 = (undefined4 *)(iVar20 + uVar23 * 8);
    }
    else {
      puVar19 = (undefined4 *)(uVar2 + (uVar23 & 0xfffffeff) * 8);
    }
    iVar9 = puVar17[1];
    bVar31 = iVar9 != 3;
    if (!bVar31) {
      iVar9 = puVar19[1];
    }
    if (bVar31 || iVar9 != 3) {
      *(uint **)(param_1 + 0x18) = puVar14;
      goto LAB_0205544c;
    }
    uVar23 = func_0201f824(*puVar17,*puVar19);
    goto LAB_02055700;
  case 0x10:
    uVar29 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar29 & 0x100) == 0) {
      puVar17 = (undefined4 *)(iVar20 + uVar29 * 8);
    }
    else {
      puVar17 = (undefined4 *)(uVar2 + (uVar29 & 0xfffffeff) * 8);
    }
    uVar23 = uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      puVar19 = (undefined4 *)(iVar20 + uVar23 * 8);
    }
    else {
      puVar19 = (undefined4 *)(uVar2 + (uVar23 & 0xfffffeff) * 8);
    }
    iVar9 = puVar17[1];
    bVar31 = iVar9 == 3;
    if (bVar31) {
      iVar9 = puVar19[1];
    }
    if (bVar31 && iVar9 == 3) {
      uVar11 = *puVar17;
      uVar24 = *puVar19;
      func_0201f824(uVar11,uVar24);
      func_0201e61c();
      func_0201d028();
      uVar15 = func_0201df60();
      uVar15 = func_0201f190(uVar24,uVar15);
      goto LAB_02055668;
    }
    *(uint **)(param_1 + 0x18) = puVar14;
    goto LAB_0205544c;
  case 0x11:
    goto switchD_02055078_default;
  case 0x12:
    puVar17 = (undefined4 *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    if (puVar17[1] == 3) {
      uVar15 = *puVar17;
      uVar11 = 0;
      goto LAB_02055668;
    }
    *(uint **)(param_1 + 0x18) = puVar14;
LAB_0205544c:
    func_02054d84(param_1,puVar21);
    break;
  case 0x13:
    iVar9 = *(int *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14) + 4);
    uVar29 = 1;
    if (iVar9 != 0) {
      bVar31 = iVar9 == 1;
      if (bVar31) {
        iVar9 = *(int *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
      }
      if (!bVar31 || iVar9 != 0) {
        uVar29 = 0;
      }
    }
    *puVar21 = uVar29;
    uVar23 = 1;
    goto LAB_020551c0;
  case 0x14:
    piVar22 = (int *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    if (piVar22[1] == 4) {
      uVar23 = func_0201e6e8(*(undefined4 *)(*piVar22 + 0xc));
    }
    else {
      if (piVar22[1] != 5) {
        *(uint **)(param_1 + 0x18) = puVar14;
        iVar20 = func_020546b0(param_1,piVar22);
        if (iVar20 == 0) {
          func_0204b744(param_1,piVar22);
        }
        break;
      }
      func_02052e1c(*piVar22);
      uVar23 = func_0201e6a0();
    }
LAB_02055700:
    *puVar21 = uVar23;
    uVar23 = 3;
LAB_020551c0:
    puVar21[1] = uVar23;
    goto switchD_02055078_default;
  case 0x15:
    uVar10 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    uVar29 = ((unsigned int)0x02055f08) >> 0x17;
    *(uint **)(param_1 + 0x18) = puVar14;
    func_02054bd0(param_1,((uVar23 >> 0xe & uVar29) - uVar10) + 1);
    if (*(uint *)(*(int *)(param_1 + 0x10) + 0x40) <= *(uint *)(*(int *)(param_1 + 0x10) + 0x44)) {
      func_0204e284(param_1);
    }
    iVar20 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar20 + uVar27 * 8) = *(undefined4 *)(iVar20 + uVar10 * 8);
    *(undefined4 *)(iVar20 + uVar27 * 8 + 4) = *(undefined4 *)(iVar20 + uVar10 * 8 + 4);
    goto switchD_02055078_default;
  case 0x16:
    goto LAB_02055cdc;
  case 0x17:
    uVar10 = uVar23 >> 0x17;
    uVar28 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    bVar31 = (uVar28 & 0x100) != 0;
    if (bVar31) {
      uVar10 = uVar28 & 0xfffffeff;
      uVar28 = uVar2;
    }
    uVar23 = uVar23 >> 0xe;
    if (bVar31) {
      iVar9 = uVar28 + uVar10 * 8;
    }
    else {
      iVar9 = iVar20 + uVar28 * 8;
    }
    *(uint **)(param_1 + 0x18) = puVar14;
    uVar29 = uVar23 & uVar29 >> 0x17;
    bVar31 = (uVar29 & 0x100) != 0;
    if (bVar31) {
      uVar23 = uVar29 & 0xfffffeff;
      uVar29 = uVar2;
    }
    if (bVar31) {
      iVar20 = uVar29 + uVar23 * 8;
    }
    else {
      iVar20 = iVar20 + uVar29 * 8;
    }
    if ((*(int *)(iVar9 + 4) == *(int *)(iVar20 + 4)) &&
       (iVar20 = func_02054a68(param_1), iVar20 != 0)) {
      uVar23 = 1;
    }
    else {
      uVar23 = 0;
    }
    if (uVar27 == uVar23) {
      puVar14 = puVar14 + (uVar7 & *puVar14 >> 0xe) + ((unsigned int)0x02055f08);
    }
    goto LAB_02055920;
  case 0x18:
    *(uint **)(param_1 + 0x18) = puVar14;
    uVar23 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      iVar20 = iVar20 + uVar23 * 8;
    }
    else {
      iVar20 = uVar2 + (uVar23 & 0xfffffeff) * 8;
    }
    uVar23 = func_02054904(param_1,iVar20);
    if (uVar27 == uVar23) {
      puVar14 = puVar14 + (uVar6 & *puVar14 >> 0xe) + ((unsigned int)0x02055f08);
    }
    goto LAB_02055920;
  case 0x19:
    *(uint **)(param_1 + 0x18) = puVar14;
    uVar23 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if ((uVar23 & 0x100) == 0) {
      iVar20 = iVar20 + uVar23 * 8;
    }
    else {
      iVar20 = uVar2 + (uVar23 & 0xfffffeff) * 8;
    }
    uVar23 = func_0205499c(param_1,iVar20);
    if (uVar27 == uVar23) {
      puVar14 = puVar14 + (uVar5 & *puVar14 >> 0xe) + ((unsigned int)0x02055f08);
    }
LAB_02055920:
    iVar20 = *(int *)(param_1 + 0xc);
    goto LAB_02055924;
  case 0x1a:
    uVar29 = puVar21[1];
    uVar10 = 1;
    if (uVar29 != 0) {
      bVar31 = uVar29 == 1;
      if (bVar31) {
        uVar29 = *puVar21;
      }
      if (!bVar31 || uVar29 != 0) {
        uVar10 = 0;
      }
    }
    if ((uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17) != uVar10) {
      puVar14 = puVar14 + (uVar4 & *puVar14 >> 0xe) + ((unsigned int)0x02055f08);
    }
    goto LAB_02055924;
  case 0x1b:
    puVar13 = (uint *)(iVar20 + ((uVar23 & 0xff800000) >> 0x14));
    uVar29 = puVar13[1];
    uVar10 = 1;
    if (uVar29 != 0) {
      bVar31 = uVar29 == 1;
      if (bVar31) {
        uVar29 = *puVar13;
      }
      if (!bVar31 || uVar29 != 0) {
        uVar10 = 0;
      }
    }
    if ((uVar23 >> 0xe & ((unsigned int)0x02055f08) >> 0x17) != uVar10) {
      *puVar21 = *puVar13;
      puVar21[1] = puVar13[1];
      puVar14 = puVar14 + (uVar3 & *puVar14 >> 0xe) + ((unsigned int)0x02055f08);
    }
    goto LAB_02055924;
  case 0x1c:
    uVar10 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    uVar29 = ((unsigned int)0x02055f08) >> 0x17;
    if (uVar10 != 0) {
      *(uint **)(param_1 + 8) = puVar21 + uVar10 * 2;
    }
    *(uint **)(param_1 + 0x18) = puVar14;
    iVar20 = func_0204c150(param_1,puVar21);
    if (iVar20 == 0) {
      local_7c = local_7c + 1;
      goto LAB_02054f50;
    }
    if (iVar20 != 1) {
      return;
    }
    if (-1 < (int)((uVar23 >> 0xe & uVar29) - 1)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
    }
    break;
  case 0x1d:
    uVar23 = (uVar23 & ((unsigned int)0x02055f08)) >> 0x17;
    if (uVar23 != 0) {
      *(uint **)(param_1 + 8) = puVar21 + uVar23 * 2;
    }
    *(uint **)(param_1 + 0x18) = puVar14;
    iVar20 = func_0204c150(param_1,puVar21);
    if (iVar20 == 0) {
      piVar22 = *(int **)(param_1 + 0x14);
      iVar1 = piVar22[-5];
      uVar12 = piVar22[1];
      if (*(int *)(param_1 + 0x58) != 0) {
        func_0204cf68(param_1,piVar22[-6]);
      }
      iVar20 = piVar22[-5] +
               ((int)((*piVar22 - uVar12) + ((uint)((int)(*piVar22 - uVar12) >> 2) >> 0x1d)) >> 3) *
               8;
      piVar22[-6] = iVar20;
      *(int *)(param_1 + 0xc) = iVar20;
      iVar20 = 0;
      if (uVar12 < *(uint *)(param_1 + 8)) {
        do {
          *(undefined4 *)(iVar1 + iVar20 * 8) = *(undefined4 *)(uVar12 + iVar20 * 8);
          *(undefined4 *)(iVar1 + iVar20 * 8 + 4) = *(undefined4 *)(uVar12 + iVar20 * 8 + 4);
          iVar20 = iVar20 + 1;
        } while (uVar12 + iVar20 * 8 < *(uint *)(param_1 + 8));
      }
      iVar1 = iVar1 + iVar20 * 8;
      *(int *)(param_1 + 8) = iVar1;
      piVar22[-4] = iVar1;
      piVar22[-3] = *(int *)(param_1 + 0x18);
      piVar22[-1] = piVar22[-1] + 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0x18;
      goto LAB_02054f50;
    }
    if (iVar20 != 1) {
      return;
    }
    break;
  case 0x1e:
    goto LAB_02055b54;
  case 0x1f:
    uVar29 = puVar21[4];
    uVar27 = func_0201f370(*puVar21,uVar29);
    uVar28 = puVar21[2];
    func_0201e4f0(0,uVar29);
    uVar29 = uVar28;
    uVar10 = uVar27;
    if (!(bool)uVar32) {
      uVar29 = uVar27;
      uVar10 = uVar28;
    }
    func_0201e488(uVar29,uVar10);
    if (!(bool)uVar32 || (bool)uVar30) {
      *puVar21 = uVar27;
      iVar9 = (uVar8 & uVar23 >> 0xe) + ((unsigned int)0x02055f08);
      puVar21[1] = 3;
      puVar21[6] = uVar27;
      puVar21[7] = 3;
      puVar14 = puVar14 + iVar9;
    }
    goto switchD_02055078_default;
  case 0x20:
    *(uint **)(param_1 + 0x18) = puVar14;
    puVar13 = puVar21 + 4;
    if ((((puVar21[1] != 3) &&
         (iVar9 = func_0205411c(puVar21,puVar21), uVar15 = ((unsigned int)0x02055f18), iVar9 == 0)) ||
        ((puVar21[3] != 3 &&
         (iVar9 = func_0205411c(puVar21 + 2,puVar21 + 2), uVar15 = ((unsigned int)0x02055f1c), iVar9 == 0)))) ||
       ((puVar21[5] != 3 &&
        (puVar13 = (uint *)func_0205411c(puVar13,puVar21 + 4), uVar15 = ((unsigned int)0x02055f20),
        puVar13 == (uint *)0x0)))) {
      func_0204b9e0(param_1,uVar15);
    }
    uVar29 = func_0201f5a0(*puVar21,*puVar13);
    *puVar21 = uVar29;
    puVar21[1] = 3;
LAB_02055cdc:
    puVar14 = puVar14 + (0x20000 - uVar12 & uVar23 >> 0xe) + ((unsigned int)0x02055f08);
    goto switchD_02055078_default;
  case 0x21:
    uVar29 = ((unsigned int)0x02055f08) >> 0x17;
    puVar21[10] = puVar21[4];
    puVar21[0xb] = puVar21[5];
    puVar21[8] = puVar21[2];
    puVar21[9] = puVar21[3];
    puVar21[6] = *puVar21;
    puVar21[7] = puVar21[1];
    *(uint **)(param_1 + 8) = puVar21 + 0xc;
    *(uint **)(param_1 + 0x18) = puVar14;
    func_0204c4b0(param_1,puVar21 + 6,uVar23 >> 0xe & uVar29);
    iVar20 = *(int *)(param_1 + 0xc);
    iVar9 = iVar20 + uVar27 * 8;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
    if (*(int *)(iVar9 + 0x1c) != 0) {
      *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar9 + 0x18);
      *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar9 + 0x1c);
      puVar14 = puVar14 + (*puVar14 >> 0xe) + ((unsigned int)0x02055f08);
    }
LAB_02055924:
    puVar14 = puVar14 + 1;
    goto switchD_02055078_default;
  case 0x22:
    uVar29 = uVar23 >> 0x17;
    uVar23 = uVar23 >> 0xe & 0x1ff;
    if (uVar29 == 0) {
      iVar9 = *(int *)(param_1 + 8) - (int)puVar21;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
      uVar29 = ((int)(iVar9 + ((uint)(iVar9 >> 2) >> 0x1d)) >> 3) - 1;
    }
    puVar26 = puVar14;
    if (uVar23 == 0) {
      puVar26 = puVar13 + 2;
      uVar23 = *puVar14;
    }
    puVar14 = puVar26;
    if (puVar21[1] == 5) {
      uVar10 = *puVar21;
      if (*(int *)(uVar10 + 0x1c) < (int)((uVar23 - 1) * 0x32 + uVar29)) {
        func_0205275c(param_1,uVar10);
      }
      for (; puVar14 = puVar26, 0 < (int)uVar29; uVar29 = uVar29 - 1) {
        puVar13 = puVar21 + uVar29 * 2;
        puVar14 = (uint *)func_02052c8c(param_1,uVar10);
        *puVar14 = puVar21[uVar29 * 2];
        puVar14[1] = puVar13[1];
        if (((3 < (int)puVar13[1]) && ((*(byte *)(*puVar13 + 5) & 3) != 0)) &&
           ((*(byte *)(uVar10 + 5) & 4) != 0)) {
          func_0204e410(param_1,uVar10);
        }
      }
    }
    goto switchD_02055078_default;
  case 0x23:
    func_0204cf68(param_1,puVar21);
    goto switchD_02055078_default;
  case 0x24:
    iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x10) + (uVar23 >> 0xe) * 4);
    uVar29 = (uint)*(byte *)(iVar9 + 0x48);
    uVar23 = func_0204cdac(param_1,uVar29);
    *(int *)(uVar23 + 0x10) = iVar9;
    iVar9 = 0;
    if (uVar29 != 0) {
      do {
        uVar10 = *puVar14 >> 0x17;
        if ((*puVar14 & 0x3f) == 4) {
          *(undefined4 *)(uVar23 + iVar9 * 4 + 0x14) = *(undefined4 *)(iVar1 + uVar10 * 4 + 0x14);
        }
        else {
          uVar15 = func_0204ce68(param_1,iVar20 + uVar10 * 8);
          *(undefined4 *)(uVar23 + iVar9 * 4 + 0x14) = uVar15;
        }
        iVar9 = iVar9 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar9 < (int)uVar29);
    }
    *puVar21 = uVar23;
    puVar21[1] = 6;
    *(uint **)(param_1 + 0x18) = puVar14;
    if (*(uint *)(*(int *)(param_1 + 0x10) + 0x40) <= *(uint *)(*(int *)(param_1 + 0x10) + 0x44)) {
      func_0204e284(param_1);
    }
    break;
  case 0x25:
    piVar22 = *(int **)(param_1 + 0x14);
    iVar9 = (uVar23 >> 0x17) - 1;
    iVar25 = (((int)((*piVar22 - piVar22[1]) + ((uint)(*piVar22 - piVar22[1] >> 2) >> 0x1d)) >> 3) -
             (uint)*(byte *)(*(int *)(iVar1 + 0x10) + 0x49)) + -1;
    if (iVar9 == -1) {
      *(uint **)(param_1 + 0x18) = puVar14;
      if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) <= iVar25 * 8) {
        func_0204bdc4(param_1,iVar25);
      }
      iVar20 = *(int *)(param_1 + 0xc);
      puVar21 = (uint *)(iVar20 + uVar27 * 8);
      *(uint **)(param_1 + 8) = puVar21 + iVar25 * 2;
      iVar9 = iVar25;
    }
    iVar16 = 0;
    if (0 < iVar9) {
      do {
        if (iVar16 < iVar25) {
          iVar18 = *piVar22 + iVar25 * -8;
          puVar21[iVar16 * 2] = *(uint *)(iVar18 + iVar16 * 8);
          uVar23 = *(uint *)(iVar18 + iVar16 * 8 + 4);
        }
        else {
          uVar23 = 0;
        }
        iVar18 = iVar16 + 1;
        puVar21[iVar16 * 2 + 1] = uVar23;
        iVar16 = iVar18;
      } while (iVar18 < iVar9);
    }
  default:
    goto switchD_02055078_default;
  }
  iVar20 = *(int *)(param_1 + 0xc);
  goto switchD_02055078_default;
LAB_02055b54:
  uVar12 = ((unsigned int)0x02055f14) & uVar23 >> 0x17;
  if (uVar12 != 0) {
    *(uint **)(param_1 + 8) = puVar21 + uVar12 * 2 + -2;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    func_0204cf68(param_1,iVar20);
  }
  *(uint **)(param_1 + 0x18) = puVar14;
  iVar1 = func_0204c408(param_1,puVar21);
  local_7c = local_7c + -1;
  if (local_7c == 0) {
    return;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
  }
  goto LAB_02054f50;
}
