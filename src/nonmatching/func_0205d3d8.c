/* Locally recovered Ghidra pseudocode; not behaviorally verified. */
typedef unsigned char byte;
typedef signed char sbyte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int code();
typedef unsigned int size_t;
typedef int bool;
#ifndef true
#define true 1
#define false 0
#endif
extern unsigned int func_02001488();
extern unsigned int func_02001f6c();
extern unsigned int func_02002b30();
extern unsigned int func_02002bb0();
extern unsigned int func_02002c10();
extern unsigned int func_020038e8();
extern unsigned int func_020098cc();
extern unsigned int func_0205bdf4();
extern unsigned int func_0205c0d4();
extern unsigned int func_0205c108();
extern unsigned int func_0205df8c();
extern unsigned int func_0205e0c0();
#define DAT_0205d6f8 ((volatile unsigned int *)0x0205d6f8U)
#define DAT_0205d6fc ((volatile unsigned int *)0x0205d6fcU)
#define DAT_0205d700 ((volatile unsigned int *)0x0205d700U)
#define DAT_0205d704 ((volatile unsigned int *)0x0205d704U)
#define DAT_0205d708 ((volatile unsigned int *)0x0205d708U)
#define DAT_0205d70c ((volatile unsigned int *)0x0205d70cU)
#define DAT_0205d710 ((volatile unsigned int *)0x0205d710U)
#define DAT_0205d714 ((volatile unsigned int *)0x0205d714U)
#define DAT_0205d718 ((volatile unsigned int *)0x0205d718U)
#define DAT_0205d71c ((volatile unsigned int *)0x0205d71cU)
#define DAT_0205d720 ((volatile unsigned int *)0x0205d720U)


void func_0205d3d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_28;
  undefined4 local_30;
  undefined4 local_34;
  undefined4 local_38;
  undefined1 auStack_48 [16];
  undefined4 local_50;
  undefined4 local_54;
  int local_58;
  undefined1 auStack_68 [16];
  undefined1 auStack_a8 [64];
  undefined1 auStack_e8 [64];
  uint local_ec;
  uint local_f0;
  char cVar11;
  int iVar10;
  undefined1 *puVar9;
  uint uVar8;
  undefined4 uVar7;
  int iVar6;
  undefined4 *puVar5;
  undefined4 *puVar4;
  undefined4 *puVar3;
  undefined4 *puVar2;
  byte bVar1;

  puVar4 = DAT_0205d700;
  puVar3 = DAT_0205d6fc;
  puVar2 = DAT_0205d6f8;
  iVar10 = 2;
  if ((param_1[2] & 0x200U) != 0) {
    if (param_2 == 0x40 || param_2 == 0x60) {
      iVar10 = 3;
    }
    if (param_2 == 0x20 || param_2 == 0x60) {
      iVar10 = iVar10 + 1;
    }
    *param_1 = *param_1 + iVar10;
    return;
  }
  uStack_28 = param_4;
  if (((param_2 == 0x40) || (param_2 == 0x60)) && (iVar10 = 3, (param_1[2] & 0x100U) == 0)) {
    if (param_2 == 0x40) {
      bVar1 = *(byte *)(*param_1 + 2);
    }
    else {
      bVar1 = *(byte *)(*param_1 + 3);
    }
    local_ec = (uint)bVar1;
    func_0205e0c0(0x14,&local_ec,1);
  }
  if (param_1[0xb] == 0) {
    cVar11 = '\0';
  }
  else {
    cVar11 = (char)param_1[0x25];
  }
  if (cVar11 == '\x01') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0xb])(param_1);
    if (param_1[0xb] != 0) {
      cVar11 = (char)param_1[0x25];
    }
    if (param_1[0xb] == 0) {
      cVar11 = '\0';
    }
    uVar8 = param_1[2] & 0x40;
  }
  else {
    uVar8 = 0;
  }
  if ((param_1[2] & 0x100U) != 0 || uVar8 != 0) goto LAB_0205d674;
  func_0205df8c();
  puVar5 = DAT_0205d708;
  *DAT_0205d708 = DAT_0205d704;
  *puVar5 = 0;
  *puVar5 = 0;
  do {
    iVar6 = func_020038e8(auStack_68);
  } while (iVar6 != 0);
  if ((*(uint *)(DAT_0205d70c + 0xfc) & 1) == 0) {
    if ((*(uint *)(DAT_0205d70c + 0xfc) & 2) != 0) {
      func_02001488(DAT_0205d710,auStack_e8);
      puVar9 = auStack_e8;
      goto LAB_0205d548;
    }
  }
  else {
    uVar7 = func_0205c0d4();
    func_02001488(uVar7,auStack_a8);
    puVar9 = auStack_a8;
LAB_0205d548:
    func_02001f6c(auStack_68,puVar9,auStack_68);
  }
  *puVar2 = local_38;
  puVar2[1] = local_34;
  puVar2[2] = local_30;
  uVar7 = func_02002bb0(auStack_68);
  *puVar3 = uVar7;
  uVar7 = func_02002bb0(&local_58);
  puVar3[1] = uVar7;
  uVar7 = func_02002bb0(auStack_48);
  puVar3[2] = uVar7;
  puVar4[5] = local_50;
  puVar4[4] = local_54;
  *puVar4 = local_54;
  puVar4[2] = 0;
  puVar4[3] = local_58;
  puVar4[1] = -local_58;
  func_02002c10(puVar4,puVar4);
  func_02002c10(puVar4 + 3,puVar4 + 3);
  func_02002b30(puVar4,puVar4 + 3,puVar4 + 6);
  uVar7 = DAT_0205d718;
  puVar2 = DAT_0205d708;
  if ((*(uint *)(DAT_0205d70c + 0xfc) & 1) == 0) {
    if ((*(uint *)(DAT_0205d70c + 0xfc) & 2) == 0) {
      func_020098cc(DAT_0205d720,DAT_0205d708,0x48);
      goto LAB_0205d674;
    }
    *DAT_0205d708 = DAT_0205d714;
    func_020098cc(uVar7,puVar2,8);
    uVar7 = func_0205bdf4();
  }
  else {
    *DAT_0205d708 = DAT_0205d714;
    func_020098cc(uVar7,puVar2,8);
    uVar7 = func_0205c108();
  }
  func_020098cc(uVar7,puVar2,0x30);
  puVar3 = DAT_0205d700;
  *puVar2 = DAT_0205d71c;
  func_020098cc(puVar3,puVar2,0x3c);
LAB_0205d674:
  if (cVar11 == '\x03') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0xb])(param_1);
    uVar8 = param_1[2] & 0x40;
  }
  else {
    uVar8 = 0;
  }
  if (((param_2 == 0x20) || (param_2 == 0x60)) &&
     ((iVar10 = iVar10 + 1, uVar8 == 0 && ((param_1[2] & 0x100U) == 0)))) {
    local_f0 = (uint)*(byte *)(*param_1 + 2);
    func_0205e0c0(0x13,&local_f0,1);
  }
  *param_1 = *param_1 + iVar10;
  return;
}
