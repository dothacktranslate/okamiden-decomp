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

extern int func_020038e8();
extern int func_0205bdf4();
extern int func_0205df8c();
extern int func_0205e0c0();
extern int func_0205e19c();

/* WARNING: Type propagation algorithm not settling */

void func_0205dbb8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [2];
  undefined1 auStack_88 [48];
  int local_58;
  int local_54;
  undefined1 auStack_48 [48];
  undefined4 uStack_18;

  if (((param_1[2] & 0x200U) != 0) || ((param_1[2] & 1U) == 0)) goto LAB_0205df38;
  uStack_18 = param_4;
  func_0205e19c(auStack_48,0);
  local_90[1] = 0x1e;
  func_0205e0c0(0x13,local_90 + 1,1);
  uVar3 = *(uint *)(param_1[0x2c] + 0x10);
  if ((uVar3 & 0xc0000000) != 0xc0000000) {
    *(uint *)(param_1[0x2c] + 0x10) = uVar3 & 0x3fffffff;
    uVar4 = ((unsigned int)0x0205df50);
    puVar2 = ((unsigned int)0x0205df4c);
    *(uint *)(param_1[0x2c] + 0x10) = *(uint *)(param_1[0x2c] + 0x10) | 0xc0000000;
    puVar2[1] = *(undefined4 *)(param_1[0x2c] + 0x10);
    func_0205e0c0(*puVar2,uVar4,1);
  }
  if (param_1[0x10] == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = *(char *)((int)param_1 + 0x99);
  }
  if (cVar7 == '\x01') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0x10])(param_1);
    if (param_1[0x10] != 0) {
      cVar7 = *(char *)((int)param_1 + 0x99);
    }
    if (param_1[0x10] == 0) {
      cVar7 = '\0';
    }
    uVar3 = param_1[2] & 0x40;
  }
  else {
    uVar3 = 0;
  }
  piVar5 = ((unsigned int)0x0205df54);
  if (uVar3 == 0) {
    uVar3 = (uint)*(ushort *)(param_1[0x2c] + 0x2e);
    iVar8 = (uint)*(ushort *)(param_1[0x2c] + 0x2c) << 0xf;
    (*(unsigned int *)0x0205df54) = iVar8;
    piVar5[5] = uVar3 * -0x8000;
    piVar5[0xc] = iVar8;
    piVar5[0xd] = uVar3 << 0xf;
    func_0205e0c0(0x16,piVar5,0x10);
  }
  if (cVar7 == '\x02') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0x10])(param_1);
    if (param_1[0x10] != 0) {
      cVar7 = *(char *)((int)param_1 + 0x99);
    }
    if (param_1[0x10] == 0) {
      cVar7 = '\0';
    }
    uVar3 = param_1[2] & 0x40;
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    iVar8 = param_1[0x36];
    if (iVar8 == 0) {
LAB_0205dd80:
      iVar8 = 0;
    }
    else {
      iVar6 = iVar8 + 4;
      if ((iVar6 == 0) || ((uint)*(byte *)(iVar8 + 5) <= (uint)*(byte *)(*param_1 + 1))) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)((uint)*(ushort *)(iVar6 + (uint)*(ushort *)(iVar8 + 10)) *
                         (uint)*(byte *)(*param_1 + 1) + iVar6 + (uint)*(ushort *)(iVar8 + 10) + 4);
      }
      if (piVar5 == (int *)0x0) goto LAB_0205dd80;
      iVar8 = iVar8 + *piVar5;
    }
    uVar1 = *(ushort *)(iVar8 + 0x1e);
    if ((uVar1 & 0x2000) != 0) {
      iVar6 = iVar8 + 0x2c;
      if ((uVar1 & 2) == 0) {
        iVar6 = iVar8 + 0x34;
      }
      if ((uVar1 & 4) == 0) {
        iVar6 = iVar6 + 4;
      }
      if ((uVar1 & 8) == 0) {
        iVar6 = iVar6 + 8;
      }
      func_0205e0c0(0x18,iVar6,0x10);
    }
  }
  if (cVar7 == '\x03') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0x10])(param_1);
    uVar3 = param_1[2] & 0x40;
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    if ((*(uint *)(((unsigned int)0x0205df58) + 0xfc) & 1) == 0) {
      if ((*(uint *)(((unsigned int)0x0205df58) + 0xfc) & 2) == 0) {
        uVar4 = func_0205bdf4();
        func_0205e0c0(0x19,uVar4,0xc);
      }
    }
    else {
      func_0205e0c0(0x1c,((unsigned int)0x0205df5c),3);
      func_0205e0c0(0x1a,((unsigned int)0x0205df60),9);
    }
    func_0205e0c0(0x19,auStack_48,0xc);
    func_0205df8c();
    puVar2 = ((unsigned int)0x0205df64);
    (*(unsigned int *)0x0205df64) = 0;
    puVar2[1] = 0;
    puVar2[5] = 0;
    do {
      iVar8 = func_020038e8(auStack_88);
      puVar2 = ((unsigned int)0x0205df68);
    } while (iVar8 != 0);
    (*(unsigned int *)0x0205df68) = 1;
    puVar2[-2] = 3;
    func_0205e0c0(0x16,auStack_88,0x10);
    local_90[0] = (((local_54 >> 4) << 8) >> 0x10) << 0x10 |
                  ((local_58 >> 4) << 8) >> 0x10 & 0xffffU;
    func_0205e0c0(0x22,local_90,1);
  }
  local_94 = 2;
  func_0205e0c0(0x10,&local_94,1);
  local_98 = 0x1e;
  func_0205e0c0(0x14,&local_98,1);
LAB_0205df38:
  *param_1 = *param_1 + 3;
  return;
}
