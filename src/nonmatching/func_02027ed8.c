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
extern int func_0201edc4();
extern int func_0201f190();
extern int func_02022ed0();
extern int func_02041100();
extern int func_02041fdc();
extern int func_0204201c();
extern int func_02046598();
extern int func_020465d8();
extern int func_02046868();
extern int func_020471a4();
extern int func_0x0209eb78();
extern int func_0x0209eb98();
extern int func_0x0209ecd4();
extern int func_0x0209edc0();
extern int func_0x020a0db4();
extern int func_0x020aedc0();
extern int func_0x020d3638();
extern int func_0x020d37c8();
extern int func_0x020d37dc();
extern int func_0x020d37ec();
extern int func_0x020d4510();
extern int func_0x020d4574();
extern int func_0x020d5fec();
extern int func_0x020d5ff4();
extern int func_0x020d6150();
extern int func_0x020d6e6c();
extern int func_0x020d6fe8();

undefined4 func_02027ed8(undefined4 param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;

  iVar10 = (*(unsigned int *)0x0202820c);
  iVar9 = 1;
  iVar7 = *(int *)(*(int *)(*(unsigned int *)0x02028210) + 0x5c);
  iVar3 = func_020465d8(param_1,1);
  switch(iVar3 - ((unsigned int)0x02028214)) {
  case 0:
    iVar3 = func_020465d8(param_1,3);
    iVar9 = func_0x0209eb78(iVar7);
    if (iVar9 != 0) {
      func_0x020a0db4(iVar7 + 0x88,0x20);
      func_0x0209ecd4(iVar7);
    }
    iVar9 = -1;
    func_0x0209eb98(iVar7,0,0,1,iVar3 == 2,iVar3 != 2,0xffffffff);
    break;
  case 1:
    uVar6 = func_020465d8(param_1,3);
    iVar3 = func_0x0209eb78(iVar7);
    if (iVar3 != 0) {
      func_0x020a0db4(iVar7 + 0x88,0x20);
      func_0x0209ecd4(iVar7);
    }
    uVar4 = func_020465d8(param_1,4);
    switch(uVar4) {
    case 0:
    case 1:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 0xffffffff;
      goto LAB_02027fe4;
    case 2:
      uVar8 = 1;
      uVar12 = 0xffffffff;
      break;
    case 3:
    case 4:
      uVar8 = 0;
      uVar12 = 0;
      break;
    default:
      goto switchD_02027fba_caseD_5;
    case 10:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 0xffffffff;
      uVar4 = 3;
      goto LAB_0202801e;
    }
    uVar11 = 0;
LAB_02027fe4:
    uVar4 = 1;
LAB_0202801e:
    func_0x0209eb98(iVar7,uVar6,uVar4,1,uVar8,uVar11,uVar12);
switchD_02027fba_caseD_5:
    goto switchD_02028068_default;
  case 2:
    func_0x020d37ec(*(undefined4 *)(iVar7 + 0x5c),0x200);
    uVar6 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    iVar3 = func_0x0209eb78(iVar7);
    if (iVar3 != 0) {
      func_0x020a0db4(iVar7 + 0x88,0x20);
      func_0x0209ecd4(iVar7);
    }
    switch(uVar4) {
    case 0:
    case 10:
switchD_02028068_caseD_a:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 0xffffffff;
LAB_02028106:
      uVar4 = 2;
      break;
    case 1:
      goto switchD_02028068_caseD_a;
    case 2:
      uVar8 = 1;
      uVar12 = 0xffffffff;
      goto LAB_020280b2;
    case 3:
      uVar8 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar4 = 2;
      break;
    case 4:
      uVar8 = 0;
      uVar12 = 1;
LAB_020280b2:
      uVar11 = 0;
      goto LAB_02028106;
    case 5:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 1;
      goto LAB_020280cc;
    case 6:
      uVar8 = 1;
      uVar11 = 0;
      uVar12 = 0xffffffff;
LAB_020280cc:
      uVar4 = 4;
      break;
    case 7:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 1;
      uVar4 = 5;
      break;
    case 8:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 1;
      uVar4 = 6;
      break;
    case 9:
      goto LAB_02028118;
    case 0xb:
      func_0x020d37dc(*(undefined4 *)(iVar7 + 0x5c),0x200);
LAB_02028118:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 1;
      uVar4 = 7;
      break;
    case 0xc:
      uVar8 = 0;
      uVar11 = 1;
      uVar12 = 1;
      uVar4 = 8;
      break;
    default:
      goto switchD_02028068_default;
    }
    func_0x0209eb98(iVar7,uVar6,uVar4,1,uVar8,uVar11,uVar12);
    goto switchD_02028068_default;
  case 3:
    func_020471a4(param_1,2,0);
    iVar9 = -1;
    break;
  case 4:
    iVar3 = func_0x0209eb78(iVar7);
    if (iVar3 == 0) {
      iVar9 = -1;
    }
    break;
  case 5:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        local_4c = func_0x020d37c8(*(undefined4 *)(iVar7 + 0x5c),0x10);
        goto LAB_02028186;
      }
      if (iVar3 != 2) goto LAB_02028186;
    }
    local_4c = func_0x020d6150(*(undefined4 *)(iVar7 + 0x5c));
LAB_02028186:
    func_02046868(param_1,local_4c);
    piVar1 = ((unsigned int)0x0202820c);
    iVar3 = (*(unsigned int *)0x0202820c);
    func_02002ac4(iVar3 + 0x68,iVar3 + 0x5c,iVar3 + 0x80);
    local_20 = *(int *)(iVar3 + 0x80);
    local_1c = *(int *)(iVar3 + 0x84);
    local_18 = *(int *)(iVar3 + 0x88);
    iVar3 = *piVar1;
    local_2c = *(undefined4 *)(iVar3 + 0x5c);
    uStack_28 = *(undefined4 *)(iVar3 + 0x60);
    local_24 = *(undefined4 *)(iVar3 + 100);
    func_02002e50(0x800,&local_20,&local_2c,&local_2c);
    local_18 = -local_18;
    local_1c = -local_1c;
    local_20 = -local_20;
    func_02002c10(&local_20,&local_20);
    return 1;
  case 6:
    func_0x020d3638(*(undefined4 *)(iVar7 + 0x5c));
    iVar3 = func_0x0209eb78(iVar7);
    if (iVar3 != 0) {
      func_0x020a0db4(iVar7 + 0x88,0x20);
      func_0x0209ecd4(iVar7);
    }
    goto switchD_02028068_default;
  case 7:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 == 0) {
      func_0204201c(iVar10);
    }
    else {
      func_02041fdc(iVar10);
    }
    goto switchD_02028068_default;
  case 8:
    uVar8 = *(undefined4 *)(iVar7 + 0x44);
    uVar6 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    func_0x020aedc0(uVar8,uVar6,uVar4);
    iVar9 = -1;
    break;
  case 9:
    uVar6 = *(undefined4 *)(iVar7 + 0x5c);
    sVar2 = func_020465d8(param_1,3);
    func_0x020d5fec(uVar6,(int)sVar2);
    goto LAB_0202832e;
  case 10:
    iVar3 = func_020465d8(param_1,3);
    iVar3 = func_0x0209edc0(iVar7,0 < iVar3);
    if (iVar3 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = -1;
    }
    break;
  case 0xb:
    uVar6 = func_02046598(param_1,3);
    func_0201f190(((unsigned int)0x02028444),uVar6);
    uVar6 = func_0201edc4();
    *(undefined4 *)(*(int *)(iVar7 + 0x5c) + ((unsigned int)0x02028448)) = uVar6;
    goto LAB_0202832e;
  case 0xc:
    uVar6 = (*(unsigned int *)0x0202844c);
    iVar3 = func_020465d8(param_1,3);
    func_02009930(iVar10 + 0x1fc,((unsigned int)0x02028450) + iVar3 * 0x200,0x200);
    func_02041100(uVar6,iVar3);
    iVar9 = -1;
    break;
  case 0xd:
    iVar9 = -1;
    func_0x020d4510(*(undefined4 *)(iVar7 + 0x5c),0xffffffff);
    break;
  case 0xe:
    iVar9 = (int)*(short *)(*(int *)(iVar7 + 0x5c) + 0x2ec);
    break;
  case 0xf:
    iVar3 = func_0x020d6fe8(*(undefined4 *)(iVar7 + 0x5c),0);
    if (iVar3 == 0) {
      iVar9 = -1;
    }
    break;
  case 0x10:
    if (*(int *)(iVar10 + 0x1dc) != 0) {
      iVar9 = -1;
    }
    break;
  case 0x11:
    iVar3 = func_020465d8(param_1,3);
    func_02022ed0((*(unsigned int *)0x02028454) + 0xf0,4,0,iVar3 + 1);
    func_02022ed0((*(unsigned int *)0x02028454) + 0xf0,4,0,iVar3 + 0x49);
    iVar9 = -1;
    break;
  case 0x12:
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 == 0) {
      uVar5 = ((unsigned int)0x02028458) & *(uint *)(iVar10 + 0x124);
    }
    else {
      uVar5 = *(uint *)(iVar10 + 0x124) | 0x100000;
    }
    *(uint *)(iVar10 + 0x124) = uVar5;
    goto switchD_02028068_default;
  case 0x13:
    uVar6 = *(undefined4 *)(iVar7 + 0x5c);
    sVar2 = func_020465d8(param_1,3);
    func_0x020d5ff4(uVar6,(int)sVar2);
LAB_0202832e:
    iVar9 = -1;
    break;
  case 0x14:
    iVar3 = func_020465d8(param_1,3);
    iVar9 = func_020465d8(param_1,4);
    iVar10 = func_020465d8(param_1,5);
    local_3c = func_020465d8(param_1,6);
    if (iVar3 == 0) {
      local_38 = 0;
      local_34 = 0;
      local_30 = 0x1000;
    }
    local_44 = iVar9 << 0xc;
    local_40 = iVar10 << 0xc;
    local_3c = local_3c << 0xc;
    func_0x020d6e6c(*(undefined4 *)(iVar7 + 0x5c),&local_44,&local_38);
    goto switchD_02028068_default;
  case 0x15:
    func_0x020d4574(*(undefined4 *)(iVar7 + 0x5c),1);
    iVar9 = -1;
    break;
  case 0x16:
    iVar3 = func_020465d8(param_1,3);
    uVar6 = 0xffffffff;
    if (-1 < iVar3) {
      func_020465d8(param_1,3);
      uVar6 = ((unsigned int)0x0202845c);
    }
    *(short *)(*(int *)(*(int *)(*(unsigned int *)0x02028454) + 0x5c) + 0xea) = (short)uVar6;
switchD_02028068_default:
    iVar9 = -1;
    break;
  case 0x17:
    iVar9 = *(int *)(*(int *)(iVar7 + 0x44) + 0x660);
    break;
  default:
    goto switchD_02027f06_default;
  }
  func_02046868(param_1,iVar9);
switchD_02027f06_default:
  return 1;
}
