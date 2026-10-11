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

extern int func_02001cb0();
extern int func_02003170();
extern int func_02009930();
extern int func_0201e9d4();
extern int func_02036db8();
extern int func_02036edc();
extern int func_02042650();
extern int func_0204278c();
extern int func_0205e0c0();

/* WARNING: Type propagation algorithm not settling */

void func_0203f970(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_r1;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int local_94;
  uint local_74;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50 [6];
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  uint local_1c;
  undefined4 uStack_18;

  if (1 < *(int *)(param_1 + 0x68)) {
    uVar10 = (*(unsigned int *)0x0203fcb0);
    uStack_18 = param_4;
    iVar4 = func_02036edc(uVar10,param_1 + 0xe2);
    if (((iVar4 != 0) && (*(int *)(iVar4 + 0x10) != 0)) && (*(int *)(param_1 + 0x34) == 0)) {
      func_0204278c(param_1 + 0x30,param_1 + 0xe2,param_1 + ((unsigned int)0x0203fcb4));
      func_02042650(param_1 + 0x58,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x3c));
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x30000;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40000000;
      func_02036db8(uVar10,param_1 + 0xe2,0);
    }
    if ((0 < *(short *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x34) != 0)) {
      if ((*(uint *)((*(unsigned int *)0x0203fcb8) + 0x18) & 2) == 0) {
        func_0201e9d4(*(short *)(param_1 + 0x114) * 0x1000 - *(int *)(param_1 + 0xd8));
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + extraout_r1;
        func_02001cb0(param_1 + 0x90,param_1 + 0x90,0,*(short *)(param_1 + 0x112) * -0x1000,0);
      }
      iVar4 = *(int *)(param_1 + 0x6c) >> 0xc;
      puVar9 = local_50;
      iVar8 = 7;
      puVar11 = ((unsigned int)0x0203fcbc);
      do {
        uVar5 = *puVar11;
        uVar7 = puVar11[1];
        puVar11 = puVar11 + 2;
        *puVar9 = uVar5;
        puVar9[1] = uVar7;
        puVar9 = puVar9 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      local_54 = 3;
      func_0205e0c0(0x10,&local_54,1);
      func_0205e0c0(0x16,param_1 + 0x90,0x10);
      local_58 = 2;
      func_0205e0c0(0x10,&local_58,1);
      func_02009930(param_1 + 0x58,local_50 + 1,0xc);
      func_0205e0c0(local_50[1],local_50 + 2,2);
      iVar8 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
      if ((*(uint *)((*(unsigned int *)0x0203fcc4) + 0x124) & 0x20000) == 0) {
        local_1c = 0;
      }
      else {
        local_1c = 0x20;
      }
      local_1c = ((unsigned int)0x0203fcc0) |
                 (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar8) >> 0x1b | iVar8 << 5) -
                 iVar8) * 0x10000 | local_1c;
      func_0205e0c0(local_28,auStack_24,3);
      iVar8 = *(int *)(param_1 + 0x74) + 1;
      local_94 = *(int *)(param_1 + 0x68);
      if (iVar8 <= *(int *)(param_1 + 0x68)) {
        local_94 = iVar8;
      }
      if (*(int *)(param_1 + 0x70) + 1 < *(int *)(param_1 + 0x74)) {
        if (*(char *)(param_1 + 0x120) != '\0') {
          local_5c = 3;
          func_0205e0c0(0x40,&local_5c,1);
          iVar8 = *(int *)(param_1 + 0x70);
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          iVar13 = *(int *)(param_1 + 100) + iVar8 * 0xc;
          iVar12 = 0;
          if (iVar8 < local_94) {
            local_74 = 0x3f00000;
            do {
              if (iVar8 == *(int *)(param_1 + 0x74)) {
                iVar13 = param_1 + 0x84;
              }
              iVar6 = iVar8 + iVar4;
              iVar3 = iVar6 >> 0x1f;
              func_0205e0c0(0x15,0,0);
              func_0205e0c0(0x1c,iVar13,3);
              func_0205e0c0(0x18,((unsigned int)0x0203fcc8),0x10);
              if (*(int *)(param_1 + 0x11c) == 0) {
                iVar13 = 0xf000;
              }
              else {
                iVar13 = func_02003170(*(undefined4 *)(*(int *)(param_1 + 0x11c) + iVar8 * 4),
                                      *(undefined4 *)(param_1 + 0x118));
              }
              iVar12 = iVar12 + iVar13;
              if (*(char *)(param_1 + 0x122) == '\0') {
                local_50[1] = (iVar12 * 0x100 >> 0x10) << 0x10;
                local_38 = 0x3f0;
              }
              else {
                local_50[1] = iVar12 * 0x100 >> 0x10 & 0xffff;
                local_38 = local_74;
              }
              local_38 = local_38 | local_50[1];
              if (*(int *)(param_1 + 0xdc) == 0) {
                uVar1 = *(ushort *)(param_1 + 0xe0);
              }
              else {
                uVar1 = *(ushort *)(*(int *)(param_1 + 0xdc) + iVar8 * 2);
              }
              local_50[2] = (uint)uVar1;
              local_34 = local_50[2];
              if (iVar8 == *(int *)(param_1 + 0x70)) {
                local_50[3] = 0;
              }
              else {
                iVar13 = (int)*(short *)(param_1 + 0xd6);
                if (iVar13 == 0) {
                  iVar13 = *(int *)(((unsigned int)0x0203fccc) +
                                   ((int)((((uint)(iVar6 * 0x20000000 + iVar3) >> 0x1d | iVar3 << 3)
                                          - iVar3) * 0x10000) >> 0x10) * 4);
                }
                if (*(int *)(param_1 + 0xd0) == 0) {
                  sVar2 = *(short *)(param_1 + 0xd4);
                }
                else {
                  sVar2 = *(short *)(*(int *)(param_1 + 0xd0) + iVar8 * 2);
                }
                iVar13 = func_02003170(iVar13,(int)sVar2);
                local_50[3] = iVar13 << 0x10;
                local_30 = iVar13 * -0x10000;
              }
              func_0205e0c0(local_50[0],local_50 + 1,9);
              iVar8 = iVar8 + 1;
              iVar13 = *(int *)(param_1 + 100) + iVar8 * 0xc;
            } while (iVar8 < local_94);
          }
          func_0205e0c0(0x41,0,0);
        }
        if (*(char *)(param_1 + ((unsigned int)0x0203fcd0)) != '\0') {
          local_60 = 3;
          func_0205e0c0(0x40,&local_60,1);
          iVar8 = *(int *)(param_1 + 0x70);
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          iVar13 = *(int *)(param_1 + 100) + iVar8 * 0xc;
          iVar12 = 0;
          if (iVar8 < local_94) {
            local_68 = 0x3f00000;
            do {
              if (iVar8 == *(int *)(param_1 + 0x74)) {
                iVar13 = param_1 + 0x84;
              }
              iVar6 = iVar8 + iVar4;
              iVar3 = iVar6 >> 0x1f;
              func_0205e0c0(0x15,0,0);
              func_0205e0c0(0x1c,iVar13,3);
              func_0205e0c0(0x18,((unsigned int)0x0203fcd4),0x10);
              if (*(int *)(param_1 + 0x11c) == 0) {
                iVar13 = 0xf000;
              }
              else {
                iVar13 = func_02003170(*(undefined4 *)(*(int *)(param_1 + 0x11c) + iVar8 * 4),
                                      *(undefined4 *)(param_1 + 0x118));
              }
              iVar12 = iVar12 + iVar13;
              if (*(char *)(param_1 + 0x122) == '\0') {
                local_50[1] = (iVar12 * 0x100 >> 0x10) << 0x10;
                local_38 = 0x3f0;
              }
              else {
                local_50[1] = iVar12 * 0x100 >> 0x10 & 0xffff;
                local_38 = local_68;
              }
              local_38 = local_38 | local_50[1];
              if (*(int *)(param_1 + 0xdc) == 0) {
                uVar1 = *(ushort *)(param_1 + 0xe0);
              }
              else {
                uVar1 = *(ushort *)(*(int *)(param_1 + 0xdc) + iVar8 * 2);
              }
              local_50[2] = (uint)uVar1;
              iVar13 = (int)*(short *)(param_1 + 0xd6);
              if (iVar13 == 0) {
                iVar13 = *(int *)(((unsigned int)0x0203fdbc) +
                                 ((int)((((uint)(iVar6 * 0x20000000 + iVar3) >> 0x1d | iVar3 << 3) -
                                        iVar3) * 0x10000) >> 0x10) * 4);
              }
              if (*(int *)(param_1 + 0xd0) == 0) {
                sVar2 = *(short *)(param_1 + 0xd4);
              }
              else {
                sVar2 = *(short *)(*(int *)(param_1 + 0xd0) + iVar8 * 2);
              }
              local_34 = local_50[2];
              iVar13 = func_02003170(iVar13,(int)sVar2);
              local_30 = (iVar13 >> 1) + 1;
              local_50[3] = -local_30 & 0xffff;
              local_30 = local_30 & 0xffff;
              func_0205e0c0(local_50[0],local_50 + 1,9);
              iVar12 = iVar12 + 0xf000;
              iVar8 = iVar8 + 1;
              iVar13 = *(int *)(param_1 + 100) + iVar8 * 0xc;
            } while (iVar8 < local_94);
          }
          func_0205e0c0(0x41,0,0);
        }
      }
      local_64 = 1;
      func_0205e0c0(0x12,&local_64);
    }
  }
  return;
}
