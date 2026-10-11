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
extern int func_02009930();
extern int func_02036edc();
extern int func_02041758();
extern int func_02042650();
extern int func_0204278c();
extern int func_0205bc9c();
extern int func_0205e0c0();

/* WARNING: Type propagation algorithm not settling */

void func_020401e4(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  short *psVar10;
  int local_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c [6];
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  uint local_18;

  if ((1 < *(short *)(param_1 + 0x68)) && (1 < *(short *)(param_1 + 0x6c))) {
    func_0205bc9c();
    iVar3 = func_02036edc((*(unsigned int *)0x02040434),param_1 + 0x6e);
    if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x10) != 0 && (*(int *)(param_1 + 0x34) == 0)))) {
      func_0204278c(param_1 + 0x30,param_1 + 0x6e,param_1 + 0x8e);
      func_02042650(param_1 + 0x58,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x3c));
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x30000;
    }
    uVar2 = ((unsigned int)0x02040440);
    if ((0 < *(short *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x34) != 0)) {
      if ((*(uint *)((*(unsigned int *)0x02040438) + 0x18) & 2) == 0) {
        iVar4 = *(int *)(param_1 + 0xa0) + ((unsigned int)0x0204043c);
        iVar3 = iVar4 >> 0x1f;
        *(uint *)(param_1 + 0xa0) = ((uint)(iVar4 * 0x20000 + iVar3) >> 0x11 | iVar3 << 0xf) - iVar3
        ;
        func_02001cb0(param_1 + 0xa4,param_1 + 0xa4,0,uVar2,0);
      }
      puVar8 = local_4c;
      iVar3 = 7;
      puVar9 = ((unsigned int)0x02040444);
      do {
        uVar5 = *puVar9;
        uVar7 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar8 = uVar5;
        puVar8[1] = uVar7;
        puVar8 = puVar8 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_30 = (uint)*(ushort *)(param_1 + 0x14);
      local_5c = 3;
      func_0205e0c0(0x10,&local_5c,1);
      uVar5 = 0;
      func_0205e0c0(0x15,0,0);
      local_60 = 2;
      func_0205e0c0(0x10,&local_60,1);
      func_02009930(param_1 + 0x58,local_4c + 1,0xc);
      func_0205e0c0(local_4c[1],local_4c + 2,2);
      iVar3 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
      if ((*(uint *)((*(unsigned int *)0x0204044c) + 0x124) & 0x20000) != 0) {
        uVar5 = 0x20;
      }
      local_18 = ((unsigned int)0x02040448) |
                 (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar3) >> 0x1b | iVar3 << 5) -
                 iVar3) * 0x10000 | uVar5;
      func_0205e0c0(local_24,auStack_20,3);
      if (*(short *)(param_1 + 0x6a) + 1 < (int)*(short *)(param_1 + 0x68)) {
        local_64 = 3;
        func_0205e0c0(0x40,&local_64,1);
        iVar3 = (int)*(short *)(param_1 + 0x6a);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        psVar10 = (short *)(*(int *)(param_1 + 100) + iVar3 * 4);
        local_74 = (int)*(short *)(param_1 + 0x68);
        if ((int)*(short *)(param_1 + 0x6c) <= (int)*(short *)(param_1 + 0x68)) {
          local_74 = (int)*(short *)(param_1 + 0x6c);
        }
        iVar4 = 0;
        if (iVar3 < local_74) {
          local_6c = 0x3f00000;
          do {
            func_0205e0c0(0x15,0,0);
            puVar6 = (undefined4 *)func_02041758((int)*psVar10,(int)psVar10[1],0x1000);
            local_58 = *puVar6;
            local_54 = puVar6[1];
            local_50 = puVar6[2];
            func_0205e0c0(0x1c,&local_58,3);
            if (*(char *)(param_1 + 0xec) == '\0') {
              local_4c[1] = ((iVar4 << 8) >> 0x10) << 0x10;
              local_34 = 0x3f0;
            }
            else {
              local_4c[1] = (iVar4 << 8) >> 0x10 & 0xffff;
              local_34 = local_6c;
            }
            local_34 = local_34 | local_4c[1];
            local_4c[2] = (uint)*(ushort *)(*(int *)(param_1 + 0xe8) + iVar3 * 2);
            if ((iVar3 == *(short *)(param_1 + 0x6a)) || (local_74 + -1 <= iVar3)) {
              local_4c[3] = 0;
            }
            else {
              uVar1 = *(ushort *)(*(int *)(param_1 + 0xe4) + iVar3 * 2);
              local_4c[3] = (uint)uVar1;
              local_2c = -(int)(short)uVar1 & 0xffff;
            }
            local_30 = local_4c[2];
            func_0205e0c0(local_4c[0],local_4c + 1,9);
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x1f000;
            psVar10 = (short *)(*(int *)(param_1 + 100) + iVar3 * 4);
          } while (iVar3 < local_74);
        }
        func_0205e0c0(0x41,0,0);
      }
      local_68 = 1;
      func_0205e0c0(0x12,&local_68);
    }
  }
  return;
}
