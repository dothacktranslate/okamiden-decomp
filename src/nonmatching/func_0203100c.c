
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef signed char sbyte;

typedef unsigned short ushort;
typedef unsigned short undefined2;
typedef signed short short2;

typedef unsigned int uint;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned int uint3;
typedef signed int int3;
typedef signed int int4;

typedef unsigned long long ulonglong;
typedef unsigned long long undefined8;
typedef signed long long longlong;

typedef unsigned char bool;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

typedef int code();

#define SUB21(x,o) \
    ((unsigned char)(((unsigned short)(x)) >> ((o) * 8)))

#define SUB22(x,o) \
    ((unsigned short)(((unsigned short)(x)) >> ((o) * 8)))

#define SUB31(x,o) \
    ((unsigned char)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB32(x,o) \
    ((unsigned short)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB33(x,o) \
    ((((unsigned int)(x)) >> ((o) * 8)) & 0x00ffffffU)

#define SUB41(x,o) \
    ((unsigned char)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB42(x,o) \
    ((unsigned short)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB43(x,o) \
    ((((unsigned int)(x)) >> ((o) * 8)) & 0x00ffffffU)

#define SUB44(x,o) \
    ((unsigned int)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB81(x,o) \
    ((unsigned char)(((unsigned long long)(x)) >> ((o) * 8)))

#define SUB82(x,o) \
    ((unsigned short)(((unsigned long long)(x)) >> ((o) * 8)))

#define SUB84(x,o) \
    ((unsigned int)(((unsigned long long)(x)) >> ((o) * 8)))

#define CONCAT11(a,b) \
    ((((unsigned short)(a)) << 8) | ((unsigned char)(b)))

#define CONCAT12(a,b) \
    ((((unsigned int)(a)) << 16) | ((unsigned short)(b)))

#define CONCAT21(a,b) \
    ((((unsigned int)(a)) << 8) | ((unsigned char)(b)))

#define CONCAT22(a,b) \
    ((((unsigned int)(a)) << 16) | ((unsigned short)(b)))

#define CONCAT13(a,b) \
    ((((unsigned int)(a)) << 24) | ((unsigned int)(b) & 0x00ffffffU))

#define CONCAT31(a,b) \
    ((((unsigned int)(a) & 0x00ffffffU) << 8) | ((unsigned char)(b)))

#define CONCAT44(a,b) \
    ((((unsigned long long)(a)) << 32) | ((unsigned int)(b)))

#define CARRY1(a,b) \
    (((unsigned int)(unsigned char)(a) + \
      (unsigned int)(unsigned char)(b)) > 0xffU)

#define CARRY2(a,b) \
    (((unsigned int)(unsigned short)(a) + \
      (unsigned int)(unsigned short)(b)) > 0xffffU)

#define CARRY4(a,b) \
    (((unsigned int)(a)) > (0xffffffffU - (unsigned int)(b)))

#define BORROW1(a,b) \
    ((unsigned char)(a) < (unsigned char)(b))

#define BORROW2(a,b) \
    ((unsigned short)(a) < (unsigned short)(b))

#define BORROW4(a,b) \
    ((unsigned int)(a) < (unsigned int)(b))

#define SBORROW4(a,b) \
    (((int)(a) < 0 && (int)(b) > 0 && (int)((a)-(b)) > 0) || \
     ((int)(a) > 0 && (int)(b) < 0 && (int)((a)-(b)) < 0))

#define SCARRY4(a,b) \
    (((int)(a) > 0 && (int)(b) > 0 && (int)((a)+(b)) < 0) || \
     ((int)(a) < 0 && (int)(b) < 0 && (int)((a)+(b)) > 0))

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

#define DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned char *)0x040000b0)

#define _DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned int *)0x040000b0)


extern int func_02002e50();
extern int func_02030af8();
extern int func_02030c8c();
extern int func_02030cbc();
extern int func_02030e38();
extern int func_02030f00();
extern int func_02033ab4();
extern int func_02033d9c();


undefined4
func_0203100c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 param_6,int param_7,int param_8,int param_9,
             int *param_10)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined4 *local_108;
  undefined4 *local_104;
  int local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90 [3];
  undefined4 *local_84;
  int *local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 auStack_3c [3];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined4 *puStack_18;

  puStack_18 = param_4;
  func_0x01ff99b4(auStack_24);
  func_0x01ff99b4(auStack_30);
  func_0x01ff99b4(auStack_3c);
  func_0x01ff99b4(&local_48);
  func_0x01ff99b4(&local_54);
  func_0x01ff99b4(auStack_60);
  func_0x01ff9d2c(auStack_114,param_2,param_1);
  func_0x01ff9c94(auStack_24,auStack_114);
  func_0x01ff9d2c(auStack_120,param_3,param_1);
  func_0x01ff9c94(auStack_30,auStack_120);
  local_84 = &local_6c;
  local_80 = &local_78;
  bVar1 = false;
  local_7c = 0;
  local_64 = param_1[2];
  local_68 = param_1[1];
  local_6c = *param_1;
  func_0x01ff9bf0(auStack_12c,auStack_24,auStack_30);
  func_0x01ff9c94(&local_54,auStack_12c);
  if (local_4c + local_54 + local_50 == 0) {
    return 0;
  }
  local_70 = local_4c;
  local_78 = local_54;
  local_74 = local_50;
  uVar7 = func_0x01ff9bc4(param_6,param_6);
  if ((int)((ulonglong)uVar7 >> 0x20) < (int)(uint)((uint)uVar7 < 0x19)) {
    func_0x01ff9c94(&local_48,param_4);
    iVar2 = func_02030f00(param_1,param_2,param_3,&local_84,param_4,auStack_3c);
    goto LAB_0203128e;
  }
  iVar2 = func_02030af8(param_1,param_2,param_3,&local_84);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_02030cbc(&local_84,param_4,param_6,auStack_60);
  puVar3 = param_5;
  if (iVar2 == 0) {
    local_90[0] = func_02030e38(param_4,param_5,param_1);
    local_90[1] = func_02030e38(param_4,param_5,param_2);
    local_90[2] = func_02030e38(param_4,param_5,param_3);
    iVar6 = 1;
    iVar2 = local_90[0];
    iVar5 = local_90[0];
    do {
      iVar4 = local_90[iVar6];
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if ((((iVar2 != -1) || (iVar5 != -1)) && (iVar2 == 1)) && (iVar5 == 1)) {
LAB_0203111c:
      puVar3 = param_4;
    }
LAB_02031190:
    func_0x01ff9c94(&local_48,puVar3);
  }
  else {
    iVar2 = func_02030e38(param_4,param_5,auStack_60);
    if (iVar2 == -1) goto LAB_02031190;
    if (iVar2 == 0) {
      func_0x01ff9c94(&local_48,auStack_60);
      bVar1 = true;
    }
    else if (iVar2 == 1) goto LAB_0203111c;
  }
  iVar2 = func_02030c8c(param_1,param_2,param_3,&local_84,&local_48);
  if (iVar2 == 0) {
    if (bVar1) {
      iVar2 = 0;
      func_0x01ff9c94(auStack_3c,&local_48);
      goto LAB_0203128e;
    }
    local_9c = local_48;
    local_98 = local_44;
    local_94 = local_40;
    iVar2 = func_02033d9c(&local_9c,&local_84,&local_a8);
    func_02002e50(-iVar2,local_80,&local_9c,&local_a8);
    puVar3 = auStack_3c;
  }
  else {
    if (iVar2 == 1) {
      local_ac = param_1[2];
      local_b0 = param_1[1];
      local_b4 = *param_1;
      param_3 = param_2;
LAB_02031214:
      local_b8 = param_3[2];
      local_bc = param_3[1];
      local_c0 = *param_3;
    }
    else {
      if (iVar2 == 2) {
        local_ac = param_2[2];
        local_b0 = param_2[1];
        local_b4 = *param_2;
        goto LAB_02031214;
      }
      local_ac = param_3[2];
      local_b0 = param_3[1];
      local_b4 = *param_3;
      local_b8 = param_1[2];
      local_bc = param_1[1];
      local_c0 = *param_1;
    }
    local_c4 = param_4[2];
    local_c8 = param_4[1];
    local_cc = *param_4;
    local_d0 = param_5[2];
    local_d4 = param_5[1];
    local_d8 = *param_5;
    local_fc = &local_b4;
    local_f8 = &local_c0;
    local_f4 = 0;
    local_108 = &local_cc;
    local_104 = &local_d8;
    local_100 = param_7;
    iVar2 = func_02033ab4(&local_fc,&local_108,&local_e4,&local_f0);
    func_0x01ff9a0c(auStack_3c,local_e4,local_e0,local_dc);
    puVar3 = &local_48;
    local_a8 = local_f0;
    local_a4 = local_ec;
    local_a0 = local_e8;
  }
  func_0x01ff9a0c(puVar3,local_a8,local_a4,local_a0);
LAB_0203128e:
  if (param_7 <= iVar2) {
    return 0;
  }
  if (param_8 != 0) {
    func_0x01ff9c94(param_8,auStack_3c);
  }
  if (param_9 != 0) {
    func_0x01ff9c94(param_9,&local_48);
  }
  *param_10 = iVar2;
  return 1;
}
