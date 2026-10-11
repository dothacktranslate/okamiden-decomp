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
extern int func_0205e0c0();

/* WARNING: Type propagation algorithm not settling */

void func_0203f424(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int local_6c;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c [6];
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  uint local_18;

  uVar1 = ((unsigned int)0x0203f684);
  if ((1 < *(int *)(param_1 + 0x68)) && (0 < *(short *)(param_1 + 0x10))) {
    if ((*(uint *)((*(unsigned int *)0x0203f67c) + 0x18) & 2) == 0) {
      iVar2 = *(int *)(param_1 + 0x6c) + ((unsigned int)0x0203f680);
      iVar7 = iVar2 >> 0x1f;
      *(uint *)(param_1 + 0x6c) = ((uint)(iVar2 * 0x20000 + iVar7) >> 0x11 | iVar7 << 0xf) - iVar7;
      func_02001cb0(param_1 + 0x80,param_1 + 0x80,0,uVar1,0);
    }
    iVar2 = *(int *)(param_1 + 0x6c) >> 0xc;
    puVar8 = local_4c;
    iVar7 = 7;
    puVar9 = ((unsigned int)0x0203f688);
    do {
      uVar3 = *puVar9;
      uVar6 = puVar9[1];
      puVar9 = puVar9 + 2;
      *puVar8 = uVar3;
      puVar8[1] = uVar6;
      puVar8 = puVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_50 = 3;
    func_0205e0c0(0x10,&local_50,1);
    func_0205e0c0(0x16,param_1 + 0x80,0x10);
    local_54 = 2;
    func_0205e0c0(0x10,&local_54,1);
    func_02009930(param_1 + 0x58,local_4c + 1,0xc);
    func_0205e0c0(local_4c[1],local_4c + 2,2);
    iVar7 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
    if ((*(uint *)((*(unsigned int *)0x0203f690) + 0x124) & 0x20000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x20;
    }
    local_18 = ((unsigned int)0x0203f68c) |
               (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar7) >> 0x1b | iVar7 << 5) -
               iVar7) * 0x10000 | local_18;
    func_0205e0c0(local_24,auStack_20,3);
    if (*(int *)(param_1 + 0x70) + 1 < *(int *)(param_1 + 0x68)) {
      local_58 = 3;
      func_0205e0c0(0x40,&local_58,1);
      iVar7 = *(int *)(param_1 + 0x70);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_68 = param_1 + 0x74;
      iVar10 = 0;
      if (iVar7 < *(int *)(param_1 + 0x68)) {
        do {
          func_0205e0c0(0x15,0,0);
          func_0205e0c0(0x1c,local_68,3);
          func_0205e0c0(0x18,((unsigned int)0x0203f694),0x10);
          local_4c[1] = ((iVar10 << 8) >> 0x10) << 0x10;
          local_34 = local_4c[1] | 0x1f0;
          iVar4 = iVar7 + iVar2;
          iVar5 = iVar4 >> 0x1f;
          iVar5 = (int)((((uint)(iVar4 * 0x20000000 + iVar5) >> 0x1d | iVar5 << 3) - iVar5) *
                       0x10000) >> 0x10;
          local_4c[2] = (uint)*(ushort *)(((unsigned int)0x0203f698) + iVar5 * 2);
          if (iVar7 == *(int *)(param_1 + 0x70)) {
            local_4c[3] = 0;
          }
          else {
            local_4c[3] = *(int *)(((unsigned int)0x0203f69c) + iVar5 * 4) << 0x10;
          }
          func_0205e0c0(local_4c[0],local_4c + 1,9);
          iVar10 = iVar10 + 0x1f000;
          iVar7 = iVar7 + 1;
          local_68 = *(int *)(param_1 + 100) + iVar7 * 0xc;
        } while (iVar7 < *(int *)(param_1 + 0x68));
      }
      func_0205e0c0(0x41,0,0);
      local_5c = 3;
      func_0205e0c0(0x40,&local_5c,1);
      iVar7 = *(int *)(param_1 + 0x70);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_6c = param_1 + 0x74;
      iVar10 = 0;
      if (iVar7 < *(int *)(param_1 + 0x68)) {
        do {
          func_0205e0c0(0x15,0,0);
          func_0205e0c0(0x1c,local_6c,3);
          func_0205e0c0(0x18,((unsigned int)0x0203f6a0),0x10);
          local_4c[1] = ((iVar10 << 8) >> 0x10) << 0x10;
          local_34 = local_4c[1] | 0x3f0;
          iVar4 = iVar7 + iVar2;
          iVar5 = iVar4 >> 0x1f;
          local_4c[2] = (uint)*(ushort *)
                               (((unsigned int)0x0203f698) +
                               ((int)((((uint)(iVar4 * 0x20000000 + iVar5) >> 0x1d | iVar5 << 3) -
                                      iVar5) * 0x10000) >> 0xf));
          local_4c[3] = ((unsigned int)0x0203f6a4);
          local_2c = ((unsigned int)0x0203f6a8);
          local_30 = local_4c[2];
          func_0205e0c0(local_4c[0],local_4c + 1,9);
          iVar10 = iVar10 + 0x1f000;
          iVar7 = iVar7 + 1;
          local_6c = *(int *)(param_1 + 100) + iVar7 * 0xc;
        } while (iVar7 < *(int *)(param_1 + 0x68));
      }
      func_0205e0c0(0x41,0,0);
    }
    local_60 = 1;
    func_0205e0c0(0x12,&local_60);
  }
  return;
}
