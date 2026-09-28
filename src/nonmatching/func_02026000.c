#pragma thumb on

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

extern int func_02002ac4();
extern int func_02002c10();
extern int func_02002e50();
extern int func_0201e6a0();
extern int func_0201e9b4();
extern int func_0201edc4();
extern int func_0201f190();
extern int func_0201f824();
extern int func_02024910();
extern int func_02039564();
extern int func_020395a4();
extern int func_02046598();
extern int func_020465d8();
extern int func_0204684c();
extern int func_02046868();
extern int func_0x020956d4();
extern int func_0x02095770();
extern int func_0x02095830();
extern int func_0x020a69ec();
extern int func_0x020ae6c8();
extern int func_0x020ae730();
extern int func_0x020be278();

/* WARNING: Removing unreachable block (ram,0x020264d0) */

undefined4 func_02026000(undefined4 param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auStack_f8 [4];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;

  piVar11 = (int *)(*(unsigned int *)0x02026338);
  iVar13 = (*(unsigned int *)0x0202633c);
  iVar12 = *(int *)(*piVar11 + 0x5c);
  iVar3 = func_020465d8(param_1,1);
  switch(iVar3 - ((unsigned int)0x02026340)) {
  case 0:
    *(uint *)(*(int *)(iVar12 + 0x50) + 0x14) =
         *(uint *)(*(int *)(iVar12 + 0x50) + 0x14) | 0x80000000;
    local_20 = func_020465d8(param_1,3);
    local_20 = local_20 << 0xc;
    local_1c = func_020465d8(param_1,4);
    local_1c = local_1c << 0xc;
    local_18 = func_020465d8(param_1,5);
    local_18 = local_18 << 0xc;
    local_2c = func_020465d8(param_1,6);
    local_2c = local_2c << 0xc;
    local_28 = func_020465d8(param_1,7);
    local_28 = local_28 << 0xc;
    local_24 = func_020465d8(param_1,8);
    local_24 = local_24 << 0xc;
    func_020395a4(iVar13 + 0x10,&local_2c,&local_20);
    goto LAB_02026406;
  case 1:
    *(uint *)(*(int *)(iVar12 + 0x50) + 0x14) =
         ((unsigned int)0x02026344) & *(uint *)(*(int *)(iVar12 + 0x50) + 0x14);
LAB_02026406:
    uVar10 = 0xffffffff;
    break;
  case 2:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 == 0) {
      func_02039564(iVar13 + 0x10,0x3c000);
      uVar9 = 4;
    }
    else {
      func_02039564(iVar13 + 0x10,0x25800);
      uVar9 = 0x10;
    }
    *(undefined4 *)(*(int *)((*(unsigned int *)0x02026348) + ((unsigned int)0x0202634c)) + ((unsigned int)0x0202634c) + -0x9c) = uVar9;
    goto LAB_0202643e;
  case 3:
    iVar3 = func_020465d8(param_1,3);
    iVar4 = func_020465d8(param_1,4);
    iVar5 = func_020465d8(param_1,5);
    iVar5 = iVar5 << 0xc;
    if (iVar3 == 0) {
      if (*(int *)(iVar12 + 0x54) != 0) {
        iVar3 = func_0x020be278(*(undefined4 *)(iVar12 + 0x3c));
        goto joined_r0x02026134;
      }
    }
    else if ((iVar3 == 1) && (*(int *)(iVar12 + 0x38) != 0)) {
      iVar3 = func_0x020a69ec(*(int *)(iVar12 + 0x38),*(int *)(iVar12 + 0x54) + 0x18,auStack_f8,1);
joined_r0x02026134:
      if (iVar3 != 0) {
        piVar11[0x32] = iVar3 + 0x18;
      }
    }
    piVar6 = (int *)piVar11[0x32];
    if (piVar6 != (int *)0x0) {
      local_40 = piVar6[2];
      local_44 = piVar6[1];
      local_48 = *piVar6;
      if (iVar5 != 0) {
        func_02002ac4(iVar13 + 0x68,iVar13 + 0x5c,iVar13 + 0x80);
        local_40 = *(int *)(iVar13 + 0x88);
        local_44 = *(int *)(iVar13 + 0x84);
        local_48 = *(int *)(iVar13 + 0x80);
        func_02002c10(&local_48,&local_48);
        local_d4 = -local_40;
        local_d8 = -local_44;
        local_dc = -local_48;
        iVar3 = iVar5 >> 0x1f;
        local_88 = local_dc;
        local_84 = local_d8;
        local_80 = local_d4;
        local_7c = local_dc;
        local_78 = local_d8;
        local_74 = local_d4;
        local_3c = local_dc;
        local_38 = local_d8;
        local_34 = local_d4;
        uVar14 = func_0201e9b4(local_dc,(int)local_dc >> 0x1f,iVar5,iVar3);
        local_dc = (uint)uVar14 + 0x800 >> 0xc |
                   ((int)((ulonglong)uVar14 >> 0x20) + ((unsigned int)0x02026350) +
                   (uint)(0xfffff7ff < (uint)uVar14)) * 0x100000;
        uVar14 = func_0201e9b4(local_d8,(int)local_d8 >> 0x1f,iVar5,iVar3);
        local_d8 = (uint)uVar14 + 0x800 >> 0xc |
                   ((int)((ulonglong)uVar14 >> 0x20) + ((unsigned int)0x02026350) +
                   (uint)(0xfffff7ff < (uint)uVar14)) * 0x100000;
        uVar14 = func_0201e9b4(local_d4,(int)local_d4 >> 0x1f,iVar5,iVar3);
        local_d4 = (uint)uVar14 + 0x800 >> 0xc |
                   ((int)((ulonglong)uVar14 >> 0x20) + ((unsigned int)0x02026350) +
                   (uint)(0xfffff7ff < (uint)uVar14)) * 0x100000;
        local_b8 = local_74;
        local_40 = local_74;
        local_c0 = local_7c;
        local_bc = local_78;
        local_48 = local_7c;
        local_44 = local_78;
        local_3c = local_b4;
        local_38 = uStack_b0;
        local_34 = local_ac;
        local_30 = local_a8;
      }
      local_e4 = local_44 + iVar4 * 0x1000;
      local_e8 = local_48;
      local_e0 = local_40;
      piVar11[0x33] = local_48;
      piVar11[0x34] = local_e4;
      piVar11[0x35] = local_40;
      piVar11[0x32] = (int)(piVar11 + 0x33);
      local_44 = local_e4;
      func_0x020956d4(*(undefined4 *)(iVar12 + 0x50),piVar11[0x32],0,0);
    }
    goto LAB_0202643e;
  case 4:
    local_54 = func_020465d8(param_1,3);
    local_54 = local_54 << 0xc;
    local_50 = func_020465d8(param_1,4);
    local_50 = local_50 << 0xc;
    local_ec = func_020465d8(param_1,5);
    local_ec = local_ec << 0xc;
    local_f4 = local_54;
    local_f0 = local_50;
    piVar11[0x33] = local_54;
    piVar11[0x34] = local_50;
    piVar11[0x35] = local_ec;
    piVar11[0x32] = (int)(piVar11 + 0x33);
    local_4c = local_ec;
    if (piVar11[0x32] != 0) {
      func_0x020956d4(*(undefined4 *)(iVar12 + 0x50),piVar11[0x32],0,0);
    }
    goto LAB_0202643e;
  case 5:
    if (piVar11[0x32] != 0) {
      func_0x02095770(*(undefined4 *)(iVar12 + 0x50),0);
    }
    piVar11[0x32] = 0;
    if ((*(uint *)(*(int *)(iVar12 + 0x50) + 0x14) & 0x3000000) == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = func_020465d8(param_1,2);
    }
    break;
  case 6:
    uVar10 = func_020465d8(param_1,2);
    if (uVar10 == 0) {
      if (piVar11[0x32] != 0) {
        piVar11[0x32] = 0;
      }
      iVar3 = *(int *)(iVar12 + 0x50);
      if ((*(uint *)(iVar3 + 0x14) & 0x1000000) == 0) {
        if ((*(uint *)(iVar3 + 0x14) & 0x2000000) != 0) {
          func_0x02095830(iVar3);
        }
      }
      else {
        iVar13 = func_0x020ae730(*(undefined4 *)(iVar12 + 0x44));
        if (iVar13 != 0) {
          func_0x02095770(iVar3,0x1800);
        }
      }
      if (*(short *)((int)piVar11 + 0x62) != 0) {
        func_02024910(piVar11 + 5);
        *(undefined2 *)((int)piVar11 + 0x62) = 0;
      }
      uVar10 = 1;
    }
    else if (uVar10 != 1) break;
    if ((*(uint *)(*(int *)(iVar12 + 0x50) + 0x14) & 0x3000000) == 0) {
      uVar2 = func_020465d8(param_1,3);
      func_02024910(piVar11 + 5,uVar2);
      uVar10 = 0xffffffff;
    }
    break;
  case 7:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 == 0) {
      uVar10 = ((unsigned int)0x02026530) & *(uint *)(iVar12 + 0x1c);
    }
    else {
      uVar10 = *(uint *)(iVar12 + 0x1c) | 0x200000;
    }
    *(uint *)(iVar12 + 0x1c) = uVar10;
    goto LAB_0202643e;
  case 8:
    iVar3 = func_0x020ae6c8(*(undefined4 *)(iVar12 + 0x44));
    if (iVar3 == 0) goto LAB_02026406;
LAB_02026450:
    uVar10 = 0;
    break;
  case 9:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 == 0) {
      *(undefined2 *)(*(int *)(iVar12 + 0x50) + 0x148) = 1;
    }
    else {
      uVar1 = *(ushort *)(*(int *)(iVar12 + 0x50) + 0x148);
      iVar3 = iVar3 - (uint)uVar1;
      if (0 < iVar3) {
        *(ushort *)(*(int *)(iVar12 + 0x50) + 0x148) = uVar1 + (short)iVar3;
      }
    }
LAB_0202643e:
    uVar10 = 0xffffffff;
    break;
  case 10:
    if ((*(uint *)(*(int *)(iVar12 + 0x50) + 0x14) & 2) != 0) goto LAB_02026450;
    uVar10 = 0xffffffff;
    break;
  case 0xb:
    uVar10 = (uint)*(ushort *)(*(int *)(iVar12 + 0x50) + 0x1e);
    break;
  case 0xc:
    uVar10 = (uint)*(ushort *)(iVar13 + 0x9a);
    break;
  case 0xd:
    uVar9 = *(undefined4 *)(iVar13 + 0x60);
    goto LAB_0202646e;
  case 0xe:
    uVar9 = *(undefined4 *)(iVar13 + 0xa0);
LAB_0202646e:
    uVar9 = func_0201e6a0(uVar9);
    uVar9 = func_0201f824(uVar9,((unsigned int)0x02026534));
    func_0204684c(param_1,uVar9);
    return 1;
  case 0xf:
    uVar7 = func_02046598(param_1,3);
    uVar9 = ((unsigned int)0x02026534);
    func_0201f190(((unsigned int)0x02026534),uVar7);
    uVar7 = func_0201edc4();
    uVar8 = func_02046598(param_1,4);
    func_0201f190(uVar9,uVar8);
    uVar9 = func_0201edc4();
    uVar10 = func_020465d8(param_1,5);
    *(uint *)(*(int *)(iVar12 + 0x50) + 0x14) =
         *(uint *)(*(int *)(iVar12 + 0x50) + 0x14) | 0x80000000;
    local_60 = *(undefined4 *)(iVar13 + 0x68);
    local_5c = *(undefined4 *)(iVar13 + 0x6c);
    local_58 = *(undefined4 *)(iVar13 + 0x70);
    iVar3 = (int)(uVar10 & 0xffff) >> 4;
    local_6c = (int)*(short *)(((unsigned int)0x0202653c) + (iVar3 * 2 + 1) * 2);
    local_64 = (int)*(short *)(((unsigned int)0x0202653c) + iVar3 * 4);
    local_68 = 0;
    func_02002e50(uVar7,&local_6c,&local_60,&local_6c);
    local_68 = uVar9;
    func_020395a4(iVar13 + 0x10,&local_6c,&local_60);
    uVar10 = 0xffffffff;
    break;
  default:
    goto switchD_02026032_default;
  }
  func_02046868(param_1,uVar10);
switchD_02026032_default:
  return 1;
}
