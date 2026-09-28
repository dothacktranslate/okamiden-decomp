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

extern int func_020223d8();
extern int func_02022ed0();
extern int func_02022f0c();
extern int func_0203633c();
extern int func_02037dd0();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x0209113c();
extern int func_0x020c21d4();
extern int func_0x020da8f0();
extern int func_0x020da908();
extern int func_0x020dc488();
extern int func_0x020dca48();

undefined4 func_0202a2c4(undefined4 param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  int local_20;
  int local_1c;
  int local_18;

  piVar11 = (int *)(*(unsigned int *)0x0202a5f4);
  iVar12 = *(int *)(*piVar11 + 0x5c);
  func_020465d8(param_1,1);
  iVar3 = func_020465d8(param_1,1);
  iVar7 = ((unsigned int)0x0202a5f8);
  switch(iVar3 - ((unsigned int)0x0202a5f8)) {
  case 0:
    *(undefined4 *)(iVar12 + 0x980) = ((unsigned int)0x0202a5fc);
    goto LAB_0202a336;
  case 1:
    uVar8 = 0;
    uVar4 = func_020465d8(param_1,3);
    switch(uVar4) {
    case 1:
      puVar5 = (ushort *)(*(int *)(iVar12 + 0x30) + 0x8c);
      goto LAB_0202a372;
    case 2:
      puVar5 = (ushort *)(*(int *)(iVar12 + 0x30) + 0x8e);
LAB_0202a372:
      uVar8 = (uint)*puVar5;
      break;
    case 5:
      uVar8 = *(uint *)(iVar12 + 0x980);
      break;
    case 6:
      uVar8 = (uint)*(short *)(*(int *)(iVar12 + 0x38) + ((unsigned int)0x0202a600));
      *(undefined4 *)(iVar12 + ((unsigned int)0x0202a604)) = 0;
      break;
    case 10:
      uVar8 = func_0x0209113c(*(undefined4 *)(iVar12 + 0x34));
    }
    break;
  case 2:
    iVar7 = func_020465d8(param_1,5);
    iVar3 = func_020465d8(param_1,4);
    iVar12 = func_020465d8(param_1,3);
    piVar11[0x19] = iVar12 << 0xc;
    piVar11[0x1a] = iVar3 << 0xc;
    piVar11[0x1b] = iVar7 << 0xc;
    uVar8 = 0xffffffff;
    break;
  case 3:
    iVar7 = func_020465d8(param_1,3);
    if (iVar7 < 1) {
      iVar7 = (*(unsigned int *)0x0202a608);
      uVar8 = ((unsigned int)0x0202a60c) & *(uint *)(iVar7 + 0x124);
    }
    else {
      iVar7 = (*(unsigned int *)0x0202a608);
      uVar8 = *(uint *)(iVar7 + 0x124) | 0x10000;
    }
    *(uint *)(iVar7 + 0x124) = uVar8;
    goto LAB_0202a75c;
  case 4:
    iVar7 = func_020465d8(param_1,3);
    if (iVar7 < 1) {
      func_02022f0c((*(unsigned int *)0x0202a5f4) + 0xf0,0,0,1);
    }
    else {
      func_02022ed0((*(unsigned int *)0x0202a5f4) + 0xf0,0,0,1);
    }
    goto LAB_0202a75c;
  case 5:
    uVar2 = func_020465d8(param_1,3);
    *(undefined2 *)(piVar11 + 0x51) = uVar2;
    uVar2 = func_020465d8(param_1,4);
    *(undefined2 *)((int)piVar11 + 0x146) = uVar2;
    uVar2 = func_020465d8(param_1,5);
    *(undefined2 *)(piVar11 + 0x52) = uVar2;
    uVar2 = func_020465d8(param_1,6);
    *(undefined2 *)((int)piVar11 + 0x142) = uVar2;
    uVar8 = 0xffffffff;
    break;
  case 6:
    func_020465d8(param_1,3);
    goto LAB_0202a5a4;
  case 7:
    iVar7 = func_02037dd0((*(unsigned int *)0x0202a610));
    if (iVar7 != 0) goto LAB_0202a482;
    iVar7 = func_020465d8(param_1,3);
    iVar3 = func_020465d8(param_1,4);
    iVar6 = func_020465d8(param_1,5);
    uVar2 = func_020465d8(param_1,6);
    local_20 = iVar7 << 0xc;
    local_1c = iVar3 << 0xc;
    local_18 = iVar6 << 0xc;
    func_0x020c21d4(*(undefined4 *)(iVar12 + 0x48),uVar2,&local_20);
    uVar8 = 0xffffffff;
    break;
  case 8:
    iVar3 = *(int *)(iVar12 + 100);
    iVar7 = func_0x020dc488(iVar3,*(undefined2 *)(iVar3 + 0x3a),0x20);
    if (iVar7 != 0) {
      return 1;
    }
    iVar7 = func_0x020dc488(iVar3,*(undefined2 *)(iVar3 + 0x3c),0x20);
    if (iVar7 != 0) {
      return 1;
    }
    uVar2 = func_020465d8(param_1,3);
    func_0x020dca48(iVar3,6,uVar2);
    uVar8 = 0xffffffff;
    break;
  case 9:
    goto LAB_0202a336;
  case 10:
    sVar1 = func_020465d8(param_1,3);
    if (sVar1 == 0) {
      if (*(int *)(iVar12 + 0x980) != 0) {
        *(uint *)(iVar12 + 0x1c) = ((unsigned int)0x0202a614) & *(uint *)(iVar12 + 0x1c);
        *(undefined4 *)(iVar12 + 0x980) = 0;
        func_0x020da908(*(undefined4 *)(iVar12 + 0x7c));
      }
    }
    else if (sVar1 == 1) {
      if (*(int *)(iVar12 + 0x980) == 0) {
        *(uint *)(iVar12 + 0x1c) = *(uint *)(iVar12 + 0x1c) | 0x40000000;
        *(undefined4 *)(iVar12 + 0x980) = ((unsigned int)0x0202a618);
        func_0x020da8f0(*(undefined4 *)(iVar12 + 0x7c),iVar12 + 0x980);
      }
    }
    else if (sVar1 == 2) {
      if (0 < *(int *)(iVar12 + 0x980)) {
        uVar8 = ((unsigned int)0x0202a614) & *(uint *)(iVar12 + 0x1c);
LAB_0202a58c:
        *(uint *)(iVar12 + 0x1c) = uVar8;
      }
    }
    else if ((sVar1 == 3) && (*(int *)(iVar12 + 0x980) < 0)) {
      uVar8 = *(uint *)(iVar12 + 0x1c) | 0x40000000;
      goto LAB_0202a58c;
    }
    goto LAB_0202a75c;
  case 0xb:
    uVar2 = func_020465d8(param_1,3);
    *(undefined2 *)((*(unsigned int *)0x0202a5f4) + 0x140) = uVar2;
LAB_0202a5a4:
    uVar8 = 0xffffffff;
    break;
  case 0xc:
    func_020465d8(param_1,2);
    func_020465d8(param_1,3);
    iVar7 = func_0203633c();
    uVar8 = iVar7 + 1;
    break;
  case 0xd:
    uVar2 = func_020465d8(param_1,4);
    iVar3 = func_020465d8(param_1,3);
    iVar7 = ((unsigned int)0x0202a61c);
    if (((iVar3 == 7) || (iVar7 = ((unsigned int)0x0202a620), iVar3 == 8)) || (iVar7 = ((unsigned int)0x0202a624), iVar3 == 9))
    {
      *(undefined2 *)(iVar12 + iVar7) = uVar2;
    }
    goto LAB_0202a75c;
  case 0xe:
    iVar7 = func_020465d8(param_1,3);
    iVar3 = *(int *)(iVar12 + 0x30);
    if (iVar7 == 0) {
      uVar8 = ((unsigned int)0x0202a76c) & *(uint *)(iVar3 + 0x14);
    }
    else {
      uVar8 = *(uint *)(iVar3 + 0x14) | 0x4000;
    }
    *(uint *)(iVar3 + 0x14) = uVar8;
    goto LAB_0202a75c;
  case 0xf:
    uVar9 = piVar11[0x2f];
    uVar8 = 0x200;
    goto LAB_0202a654;
  case 0x10:
    iVar7 = func_020465d8(param_1,3);
    uVar8 = func_020223d8((*(unsigned int *)0x0202a770) + 4,iVar7 != 0);
    break;
  case 0x11:
    if (*(char *)((*(unsigned int *)0x0202a770) + ((unsigned int)0x0202a774)) != '\x01') goto LAB_0202a482;
LAB_0202a6a6:
    uVar8 = 1;
    break;
  case 0x12:
    uVar9 = piVar11[0x2f];
    uVar8 = 0x400;
LAB_0202a654:
    piVar11[0x2f] = uVar8 | uVar9;
    uVar8 = 0xffffffff;
    break;
  case 0x13:
    if (*(char *)((*(unsigned int *)0x0202a770) + 0x11) != '\0') goto LAB_0202a6a6;
LAB_0202a482:
    uVar8 = 0;
    break;
  case 0x14:
    iVar7 = func_020465d8(param_1,3);
    if (iVar7 == 0) {
      puVar10 = (uint *)(*(unsigned int *)0x0202a778);
      uVar8 = ((unsigned int)0x0202a77c) & *puVar10;
    }
    else {
      if (iVar7 != 1) goto LAB_0202a75c;
      puVar10 = (uint *)(*(unsigned int *)0x0202a778);
      uVar8 = *puVar10 | 0x800;
    }
    *puVar10 = uVar8;
    goto LAB_0202a75c;
  case 0x15:
    iVar7 = func_020465d8(param_1,3);
    if (iVar7 == 0) {
      iVar7 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202a770) + 0x5c) + 100);
      uVar8 = ((unsigned int)0x0202a780) & *(uint *)(iVar7 + 0x1c);
    }
    else {
      if (iVar7 != 1) goto LAB_0202a75c;
      iVar7 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202a770) + 0x5c) + 100);
      uVar8 = *(uint *)(iVar7 + 0x1c) | 0x80000000;
    }
    *(uint *)(iVar7 + 0x1c) = uVar8;
    goto LAB_0202a75c;
  case 0x16:
    iVar7 = func_020465d8(param_1,3);
    if (iVar7 == 0) {
      iVar7 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202a770) + 0x5c) + 100);
      uVar8 = ((unsigned int)0x0202a784) & *(uint *)(iVar7 + 0x1c);
    }
    else {
      if (iVar7 != 1) goto LAB_0202a75c;
      iVar7 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202a770) + 0x5c) + 100);
      uVar8 = *(uint *)(iVar7 + 0x1c) | 0x20000000;
    }
    *(uint *)(iVar7 + 0x1c) = uVar8;
LAB_0202a75c:
    uVar8 = 0xffffffff;
    break;
  case 0x17:
    piVar11[0x2f] = piVar11[0x2f] | 0x200;
    *(uint *)(iVar12 + 0x1c) = iVar7 << 0x18 | *(uint *)(iVar12 + 0x1c);
LAB_0202a336:
    uVar8 = 0xffffffff;
    break;
  default:
    goto switchD_0202a2fc_default;
  }
  func_02046868(param_1,uVar8);
switchD_0202a2fc_default:
  return 1;
}
