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

extern int func_02001c28();
extern int func_02001cb0();
extern int func_02002ac4();
extern int func_02002b30();
extern int func_02002c10();
extern int func_02002e50();
extern int func_02003170();
extern int func_02009930();
extern int func_0201e9d4();
extern int func_02040748();
extern int func_0205e0c0();

/* WARNING: Type propagation algorithm not settling */

void func_020407cc(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_r1;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int local_14c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 auStack_128 [3];
  undefined4 auStack_11c [3];
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined1 auStack_f8 [12];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d4 [12];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [12];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [64];
  uint local_4c [6];
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  uint local_18;

  if (2 < *(int *)(param_1 + 0x68)) {
    iVar9 = (*(unsigned int *)0x02040ac4);
    iVar3 = func_02040748();
    if ((((iVar3 != 0) && (0 < *(short *)(param_1 + 0x10))) && (*(int *)(param_1 + 0x34) != 0)) &&
       ((*(ushort *)(*(int *)(param_1 + 0x34) + 0x32) & 1) != 0)) {
      if ((*(uint *)((*(unsigned int *)0x02040ac8) + 0x18) & 2) == 0) {
        func_0201e9d4(*(short *)(param_1 + 0xd8) * 0x1000 - *(int *)(param_1 + 0xcc));
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + extraout_r1;
        func_02001cb0(param_1 + 0x8c,param_1 + 0x8c,0,*(short *)(param_1 + 0xd6) * -0x1000,0);
      }
      puVar8 = local_4c;
      iVar3 = 7;
      puVar10 = ((unsigned int)0x02040acc);
      do {
        uVar4 = *puVar10;
        uVar7 = puVar10[1];
        puVar10 = puVar10 + 2;
        *puVar8 = uVar4;
        puVar8[1] = uVar7;
        puVar8 = puVar8 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_12c = 3;
      func_0205e0c0(0x10,&local_12c,1);
      func_0205e0c0(0x16,param_1 + 0x8c,0x10);
      local_130 = 2;
      func_0205e0c0(0x10,&local_130,1);
      func_02009930(param_1 + 0x58,local_4c + 1,0xc);
      func_0205e0c0(local_4c[1],local_4c + 2,2);
      iVar3 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
      if ((*(uint *)((*(unsigned int *)0x02040ac4) + 0x124) & 0x20000) == 0) {
        local_18 = 0;
      }
      else {
        local_18 = 0x20;
      }
      local_18 = ((unsigned int)0x02040ad0) |
                 (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar3) >> 0x1b | iVar3 << 5) -
                 iVar3) * 0x10000 | local_18;
      func_0205e0c0(local_24,auStack_20,3);
      iVar3 = *(int *)(param_1 + 0x70) + 1;
      local_14c = *(int *)(param_1 + 0x68);
      if (iVar3 <= *(int *)(param_1 + 0x68)) {
        local_14c = iVar3;
      }
      if (*(int *)(param_1 + 0x6c) + 1 < local_14c) {
        func_02001c28(auStack_8c);
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_a4 = *(undefined4 *)(iVar9 + 0x5c);
        uStack_a0 = *(undefined4 *)(iVar9 + 0x60);
        local_9c = *(undefined4 *)(iVar9 + 100);
        local_b0 = *(undefined4 *)(iVar9 + 0x68);
        uStack_ac = *(undefined4 *)(iVar9 + 0x6c);
        local_a8 = *(undefined4 *)(iVar9 + 0x70);
        func_02002ac4(&local_a4,&local_b0,auStack_bc);
        func_02002c10(auStack_bc,auStack_bc);
        local_134 = 3;
        func_0205e0c0(0x40,&local_134,1);
        iVar3 = *(int *)(param_1 + 0x6c);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        puVar11 = (undefined4 *)(*(int *)(param_1 + 100) + iVar3 * 0xc);
        iVar9 = 0;
        if (iVar3 < local_14c) {
          do {
            func_0205e0c0(0x15,0,0);
            func_0205e0c0(0x1c,puVar11,3);
            func_0205e0c0(0x18,auStack_8c,0x10);
            if (*(int *)(param_1 + 0x11c) == 0) {
              iVar5 = 0x1f000;
            }
            else {
              iVar5 = func_02003170(*(undefined4 *)(*(int *)(param_1 + 0x11c) + iVar3 * 4),
                                   *(undefined4 *)(param_1 + 0x118));
            }
            iVar9 = iVar9 + iVar5;
            func_02002ac4(&local_a4,puVar11,auStack_c8);
            func_02002ac4(&local_a4,puVar11,auStack_c8);
            func_02002c10(auStack_c8,auStack_c8);
            if (local_14c + -1 == iVar3) {
              local_ec = puVar11[-3];
              local_e8 = puVar11[-2];
              local_e4 = puVar11[-1];
              puVar6 = puVar11;
              puVar11 = &local_ec;
            }
            else {
              local_e0 = puVar11[3];
              if (iVar3 == 0) {
                local_dc = puVar11[4];
                local_d8 = puVar11[5];
                puVar6 = &local_e0;
              }
              else {
                local_dc = puVar11[4];
                local_d8 = puVar11[5];
                local_ec = puVar11[-3];
                local_e8 = puVar11[-2];
                local_e4 = puVar11[-1];
                func_02002ac4(&local_ec,puVar11,auStack_11c);
                func_02002c10(auStack_11c,auStack_11c);
                func_02002ac4(&local_e0,puVar11,auStack_128);
                func_02002c10(auStack_128,auStack_128);
                puVar6 = auStack_128;
                puVar11 = auStack_11c;
              }
            }
            func_02002ac4(puVar6,puVar11,auStack_d4);
            func_02002c10(auStack_d4,auStack_d4);
            func_02002b30(auStack_d4,auStack_bc,auStack_f8);
            func_02002c10(auStack_f8,auStack_f8);
            if (*(int *)(param_1 + 0xd0) == 0) {
              sVar2 = *(short *)(param_1 + 0xd4);
            }
            else {
              sVar2 = *(short *)(*(int *)(param_1 + 0xd0) + iVar3 * 2);
            }
            iVar5 = (int)sVar2;
            if ((local_14c + -1 == iVar3) || (iVar3 == 0)) {
              iVar5 = 0;
            }
            func_02002e50(-iVar5,auStack_f8,&local_98,&local_110);
            func_02002e50(iVar5,auStack_f8,&local_98,&local_104);
            local_4c[1] = (iVar9 * 0x100 >> 0x10) << 0x10;
            local_34 = local_4c[1] | 0x3f0;
            if (*(int *)(param_1 + 0xe0) == 0) {
              uVar1 = *(ushort *)(param_1 + 0xe4);
            }
            else {
              uVar1 = *(ushort *)(*(int *)(param_1 + 0xe0) + iVar3 * 2);
            }
            local_4c[2] = (uint)uVar1;
            local_4c[3] = local_110 >> 6 & 0x3ffU | (local_10c >> 6 & 0x3ffU) << 10 |
                          (local_108 >> 6 & 0x3ffU) << 0x14;
            local_2c = local_104 >> 6 & 0x3ffU | (local_100 >> 6 & 0x3ffU) << 10 |
                       (local_fc >> 6 & 0x3ffU) << 0x14;
            local_30 = local_4c[2];
            func_0205e0c0(local_4c[0],local_4c + 1,9);
            iVar3 = iVar3 + 1;
            puVar11 = (undefined4 *)(*(int *)(param_1 + 100) + iVar3 * 0xc);
          } while (iVar3 < local_14c);
        }
        func_0205e0c0(0x41,0,0);
      }
      local_138 = 1;
      func_0205e0c0(0x12,&local_138);
    }
  }
  return;
}
