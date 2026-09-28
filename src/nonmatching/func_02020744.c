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

extern int func_0201ebe0();
extern int func_020201f8();
extern int func_0202027c();
extern int func_02020364();
extern int func_0202158c();
extern int func_02021a5c();
extern int func_02021ab8();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_02020744(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  code *pcVar11;
  int iVar12;
  undefined1 auStack_c4 [4];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c [2];
  int iStack_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  int local_88;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;

LAB_02020758:
  pbVar10 = *(byte **)(param_2 + 8);
  if (pbVar10 == (byte *)0x0) goto code_r0x02020764;
  goto LAB_020207a0;
code_r0x02020764:
  uVar4 = func_02021a5c(param_1,param_2);
  func_02020364(uVar4,param_2);
  if (*(int *)(param_2 + 4) == 0) {
    func_0202158c();
  }
  func_02021ab8(param_1,param_2);
  pbVar10 = *(byte **)(param_2 + 8);
  if (pbVar10 == (byte *)0x0) goto LAB_02020758;
LAB_020207a0:
  bVar1 = *pbVar10;
  switch(bVar1 & 0x1f) {
  case 0:
  default:
switchD_020207ac_default:
    func_0202158c();
    goto LAB_02020f60;
  case 1:
    func_020201f8(pbVar10 + 1,&local_28);
    puVar9 = (undefined4 *)(*(int *)(param_2 + 8) + local_28);
    goto LAB_0202081c;
  case 2:
    puVar9 = (undefined4 *)func_020201f8(pbVar10 + 1,&local_2c);
    (*(code *)*puVar9)(*(int *)(param_1 + 0x18) + local_2c,0xffffffff);
    puVar9 = puVar9 + 1;
    goto LAB_0202081c;
  case 3:
    uVar4 = func_020201f8(pbVar10 + 1,&local_34);
    puVar5 = (undefined4 *)func_020201f8(uVar4,&local_30);
    puVar9 = puVar5 + 1;
    if ((bVar1 & 0x40) == 0) {
      uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + local_34);
    }
    else {
      uVar6 = *(uint *)(param_1 + local_34 * 4 + 0x1c) & 0xff;
    }
    if (uVar6 != 0) {
      (*(code *)*puVar5)(*(int *)(param_1 + 0x18) + local_30,0xffffffff);
    }
    break;
  case 4:
    puVar5 = (undefined4 *)func_020201f8(pbVar10 + 1,&local_38);
    puVar9 = puVar5 + 1;
    if ((bVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + local_38);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + local_38 * 4 + 0x1c);
    }
    (*(code *)*puVar5)(uVar4,0xffffffff);
    break;
  case 5:
    uVar4 = func_020201f8(pbVar10 + 1,&local_44);
    uVar4 = func_0202027c(uVar4,&local_40);
    puVar9 = (undefined4 *)func_0202027c(uVar4,&local_3c);
    iVar12 = local_40 * local_3c + *(int *)(param_1 + 0x18) + local_44;
    pcVar11 = (code *)*puVar9;
    puVar9 = puVar9 + 1;
    for (iVar8 = local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar12 = iVar12 - local_3c;
      (*pcVar11)(iVar12,0xffffffff);
    }
    goto LAB_020209bc;
  case 6:
    uVar4 = func_020201f8(pbVar10 + 1,&local_4c);
    puVar5 = (undefined4 *)func_020201f8(uVar4,&local_48);
    puVar9 = puVar5 + 1;
    if ((bVar1 & 0x20) == 0) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x18) + local_4c);
    }
    else {
      iVar12 = *(int *)(param_1 + local_4c * 4 + 0x1c);
    }
    (*(code *)*puVar5)(iVar12 + local_48,0);
    break;
  case 7:
    uVar4 = func_020201f8(pbVar10 + 1,&local_54);
    puVar5 = (undefined4 *)func_020201f8(uVar4,&local_50);
    puVar9 = puVar5 + 1;
    if ((bVar1 & 0x20) == 0) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x18) + local_54);
    }
    else {
      iVar12 = *(int *)(param_1 + local_54 * 4 + 0x1c);
    }
    (*(code *)*puVar5)(iVar12 + local_50,0xffffffff);
    break;
  case 8:
    uVar4 = func_020201f8(pbVar10 + 1,&local_60);
    uVar4 = func_020201f8(uVar4,&local_5c);
    puVar9 = (undefined4 *)func_020201f8(uVar4,&local_58);
    puVar5 = puVar9 + 1;
    if ((bVar1 & 0x40) == 0) {
      sVar3 = *(short *)(*(int *)(param_1 + 0x18) + local_60);
    }
    else {
      sVar3 = (short)*(undefined4 *)(param_1 + local_60 * 4 + 0x1c);
    }
    if (sVar3 != 0) {
      if ((bVar1 & 0x20) == 0) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x18) + local_5c);
      }
      else {
        iVar12 = *(int *)(param_1 + local_5c * 4 + 0x1c);
      }
      (*(code *)*puVar9)(iVar12 + local_58,0xffffffff);
    }
    goto LAB_02020b30;
  case 9:
    uVar4 = func_020201f8(pbVar10 + 1,&local_70);
    uVar4 = func_020201f8(uVar4,&local_6c);
    uVar4 = func_0202027c(uVar4,&local_68);
    puVar9 = (undefined4 *)func_0202027c(uVar4,&local_64);
    pcVar11 = (code *)*puVar9;
    if ((bVar1 & 0x20) == 0) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x18) + local_70);
    }
    else {
      iVar12 = *(int *)(param_1 + local_70 * 4 + 0x1c);
    }
    puVar9 = puVar9 + 1;
    iVar12 = local_68 * local_64 + iVar12 + local_6c;
    for (iVar8 = local_68; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar12 = iVar12 - local_64;
      (*pcVar11)(iVar12,0xffffffff);
    }
    goto LAB_020209bc;
  case 10:
    puVar5 = (undefined4 *)func_020201f8(pbVar10 + 1,&local_74);
    puVar9 = puVar5 + 1;
    if ((bVar1 & 0x20) == 0) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + local_74);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + local_74 * 4 + 0x1c);
    }
    (*(code *)*puVar5)(uVar4);
    break;
  case 0xb:
    uVar4 = func_020201f8(pbVar10 + 1,&local_7c);
    puVar9 = (undefined4 *)func_020201f8(uVar4,&local_78);
    puVar5 = puVar9 + 1;
    if ((bVar1 & 0x40) == 0) {
      uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x18) + local_7c);
    }
    else {
      uVar6 = *(uint *)(param_1 + local_7c * 4 + 0x1c) & 0xff;
    }
    if (uVar6 != 0) {
      if ((bVar1 & 0x20) == 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + local_78);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + local_78 * 4 + 0x1c);
      }
      (*(code *)*puVar9)(uVar4);
    }
    goto LAB_02020b30;
  case 0xc:
    if (param_3 == pbVar10) {
      return;
    }
    uVar4 = func_0202027c(pbVar10 + 5,auStack_84);
    puVar9 = (undefined4 *)func_020201f8(uVar4,auStack_80);
    goto LAB_0202081c;
  case 0xd:
    puVar9 = (undefined4 *)func_020201f8(pbVar10 + 1,&local_88);
    piVar7 = (int *)(*(int *)(param_1 + 0x18) + local_88);
    pcVar11 = (code *)piVar7[2];
    if (pcVar11 != (code *)0x0) {
      iVar12 = *piVar7;
      if (*(int *)(param_1 + 4) == iVar12) {
        *(code **)(param_1 + 8) = pcVar11;
      }
      else {
        (*pcVar11)(iVar12,0xffffffff);
      }
    }
    break;
  case 0xe:
    goto switchD_020207ac_default;
  case 0xf:
    if (param_3 == pbVar10) {
      return;
    }
    uVar4 = func_0202027c(pbVar10 + 1,&iStack_94);
    uVar4 = func_0202027c(uVar4,auStack_90);
    iVar12 = func_020201f8(uVar4,auStack_8c);
    puVar9 = (undefined4 *)(iVar12 + iStack_94 * 4);
    goto LAB_0202081c;
  case 0x10:
    uVar4 = func_020201f8(pbVar10 + 1,&local_a4);
    piVar7 = (int *)func_020201f8(uVar4,&local_a0);
    iVar12 = *piVar7;
    puVar9 = (undefined4 *)func_020201f8(piVar7 + 1,local_9c);
    puVar5 = puVar9 + 1;
    if ((bVar1 & 0x20) == 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x18) + local_a4);
    }
    else {
      iVar8 = *(int *)(param_1 + local_a4 * 4 + 0x1c);
    }
    (*(code *)*puVar9)(iVar8 + local_a0,iVar12 + local_9c[0]);
    goto LAB_02020b30;
  case 0x11:
    uVar4 = func_020201f8(pbVar10 + 1,&local_b4);
    pbVar10 = (byte *)func_020201f8(uVar4,&local_ac);
    bVar2 = *pbVar10;
    uVar4 = func_020201f8(pbVar10 + 1,&local_b0);
    puVar9 = (undefined4 *)func_020201f8(uVar4,&local_a8);
    puVar5 = puVar9 + 1;
    if ((bVar1 & 0x20) == 0) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x18) + local_b4);
    }
    else {
      iVar12 = *(int *)(param_1 + local_b4 * 4 + 0x1c);
    }
    if ((bVar2 & 0x20) == 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x18) + local_b0);
    }
    else {
      iVar8 = *(int *)(param_1 + local_b0 * 4 + 0x1c);
    }
    (*(code *)*puVar9)(iVar12 + local_ac,iVar8 + local_a8);
LAB_02020b30:
    *(undefined4 **)(param_2 + 8) = puVar5;
    goto LAB_02020f60;
  case 0x12:
    pbVar10 = (byte *)func_020201f8(pbVar10 + 1,&local_c0);
    bVar2 = *pbVar10;
    uVar4 = func_020201f8(pbVar10 + 1,&local_bc);
    puVar9 = (undefined4 *)func_0202027c(uVar4,&local_b8);
    pcVar11 = (code *)*puVar9;
    puVar9 = puVar9 + 1;
    if ((bVar1 & 0x20) == 0) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x18) + local_c0);
    }
    else {
      iVar12 = *(int *)(param_1 + local_c0 * 4 + 0x1c);
    }
    if ((bVar2 & 0x20) == 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x18) + local_bc);
    }
    else {
      iVar8 = *(int *)(param_1 + local_bc * 4 + 0x1c);
    }
    iVar12 = iVar12 + iVar8;
    for (iVar8 = func_0201ebe0(iVar8,local_b8); iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar12 = iVar12 - local_b8;
      (*pcVar11)(iVar12,0xffffffff);
    }
LAB_020209bc:
    *(undefined4 **)(param_2 + 8) = puVar9;
    goto LAB_02020f60;
  case 0x13:
    puVar9 = (undefined4 *)func_020201f8(pbVar10 + 1,auStack_c4);
LAB_0202081c:
    *(undefined4 **)(param_2 + 8) = puVar9;
    goto LAB_02020f60;
  }
  *(undefined4 **)(param_2 + 8) = puVar9;
LAB_02020f60:
  if ((bVar1 & 0x80) != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
  }
  goto LAB_02020758;
}
