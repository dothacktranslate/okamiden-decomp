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
extern int func_02009930();
extern int func_02036edc();
extern int func_02041758();
extern int func_02042650();
extern int func_0204278c();
extern int func_0205bc9c();
extern int func_0205e0c0();

void func_0203fe6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_7c [12];
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  ushort local_58 [8];
  int local_48 [9];
  uint local_24 [3];
  undefined4 uStack_18;

  iVar3 = (*(unsigned int *)0x0204016c);
  *(undefined2 *)(param_1 + 0x86) = 0;
  if ((((*(uint *)(*(unsigned int *)0x02040170) & 1) == 0) || ((*(uint *)(param_1 + 0xc) & 0x20000000) != 0)) &&
     ((*(uint *)(iVar3 + 0x124) & 0x40000) == 0)) {
    uStack_18 = param_4;
    func_0205bc9c();
    iVar3 = func_02036edc((*(unsigned int *)0x02040174),((unsigned int)0x02040178));
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) && (*(int *)(param_1 + 0x34) == 0)) {
      func_0204278c(param_1 + 0x30,((unsigned int)0x0204017c),((unsigned int)0x02040180));
      func_02042650(param_1 + 0x58,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x3c));
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x30000;
    }
    if ((0 < *(short *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x34) != 0)) {
      local_ac = 0;
      func_0205e0c0(0x11,0,0);
      local_48[4] = *(int *)(param_1 + 0x40);
      local_48[0] = (int)(local_48[4] + ((uint)(local_48[4] >> 1) >> 0x1e)) >> 2;
      iVar7 = (int)*(short *)(param_1 + 0x70);
      local_48[1] = iVar7 << 0xc;
      iVar3 = iVar7 + *(short *)(param_1 + 0x72);
      local_48[3] = iVar3 * 0x1000;
      uVar5 = iVar7 + *(short *)(param_1 + 0x74);
      local_58[2] = (short)iVar3 - *(short *)(param_1 + 0x74);
      local_48[4] = local_48[4] - local_48[0];
      local_58[1] = 0;
      local_58[0] = (ushort)uVar5;
      local_8c = 3;
      local_58[3] = local_58[1];
      local_58[4] = local_58[2];
      local_58[5] = local_58[1];
      local_58[6] = local_58[0];
      local_58[7] = local_58[1];
      local_48[2] = local_48[0];
      local_48[5] = local_48[3];
      local_48[6] = local_48[4];
      local_48[7] = local_48[1];
      func_0205e0c0(0x10,&local_8c,1);
      func_0205e0c0(0x15,0,0);
      local_90 = 2;
      func_0205e0c0(0x10,&local_90,1);
      func_02009930(param_1 + 0x58,local_48 + 8,0xc);
      func_0205e0c0(local_48[8],local_24,2);
      local_24[0] = 0;
      local_94 = 1;
      func_0205e0c0(0x40,&local_94,1);
      func_0205e0c0(0x15,0,0);
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          iVar9 = local_ac * 2;
          local_48[8] = ((unsigned int)0x02040184);
          iVar7 = 0;
          local_24[0] = *(ushort *)
                         (param_1 + (local_ac + *(short *)(*(int *)(param_1 + 0x80) + iVar9) & 7U) *
                                    2 + 0x88) | 0x8000;
          local_24[1] = 0;
          iVar3 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
          local_24[2] = ((unsigned int)0x02040188) |
                        (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar3) >> 0x1b |
                         iVar3 << 5) - iVar3) * 0x10000 | 0x3d000000;
          func_0205e0c0(((unsigned int)0x02040184),local_24,3);
          if (-1 < *(short *)(*(int *)(param_1 + 0x7c) + iVar9)) {
            local_24[0] = 0;
            iVar3 = local_ac * 4;
            local_64 = (int)*(short *)(*(int *)(param_1 + 100) + iVar3) << 0xc;
            local_60 = (int)*(short *)(*(int *)(param_1 + 100) + iVar3 + 2) << 0xc;
            local_5c = 0;
            local_70 = (int)*(short *)(*(int *)(param_1 + 0x68) + iVar3) << 0xc;
            local_6c = (int)*(short *)(*(int *)(param_1 + 0x68) + iVar3 + 2) << 0xc;
            local_68 = 0;
            func_02002ac4(&local_70,&local_64,auStack_7c);
            func_02002e50((int)*(short *)(*(int *)(param_1 + 0x7c) + iVar9),auStack_7c,&local_64,
                         &local_70);
            func_02002c10(auStack_7c,auStack_7c);
            func_02002e50(((unsigned int)0x0204018c),auStack_7c,&local_70,&local_64);
            iVar8 = local_64 >> 0xc;
            iVar6 = local_60 >> 0xc;
            iVar9 = local_70 >> 0xc;
            iVar3 = local_6c >> 0xc;
            do {
              sVar1 = (short)iVar6;
              sVar2 = (short)iVar8;
              if (iVar7 < 2) {
                sVar1 = (short)iVar3;
                sVar2 = (short)iVar9;
              }
              puVar4 = (undefined4 *)
                       func_02041758((((int)(((uint)local_58[iVar7 * 2] - (uVar5 & 0xffff)) * 0x10000
                                           ) >> 0x10) + (int)sVar2) * 0x10000 >> 0x10,
                                    (int)(short)(*(short *)((int)local_48 + iVar7 * 4 + -0xe) +
                                                sVar1),0x1000);
              local_88 = *puVar4;
              local_84 = puVar4[1];
              local_80 = puVar4[2];
              local_48[8] = (local_48[iVar7 * 2] << 8) >> 0x10 & 0xffffU |
                            ((local_48[iVar7 * 2 + 1] << 8) >> 0x10) << 0x10;
              func_0205e0c0(0x11,0,0);
              func_0205e0c0(0x1c,&local_88,3);
              func_0205e0c0(((unsigned int)0x02040190),local_48 + 8,2);
              local_98 = 1;
              func_0205e0c0(0x12,&local_98,1);
              iVar7 = iVar7 + 1;
            } while (iVar7 < 4);
            *(short *)(param_1 + 0x86) = *(short *)(param_1 + 0x86) + 1;
          }
          local_ac = local_ac + 1;
        } while (local_ac < *(int *)(param_1 + 0x6c));
      }
      func_0205e0c0(0x41,0,0);
      local_9c = 1;
      func_0205e0c0(0x12,&local_9c);
    }
  }
  return;
}
