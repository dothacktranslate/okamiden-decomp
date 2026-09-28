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
extern int func_0201edc4();
extern int func_0201f190();
extern int func_0202ae54();
extern int func_02037dd0();
extern int func_02046598();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x020a0d5c();
extern int func_0x020a0d78();
extern int func_0x020a8648();
extern int func_0x020a86c4();
extern int func_0x020ab39c();
extern int func_0x020aea3c();
extern int func_0x020aefa8();
extern int func_0x020af09c();
extern int func_0x020b75b8();
extern int func_0x020c21d4();

undefined4 func_02029178(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;

  iVar9 = *(int *)(*(int *)(*(unsigned int *)0x02029498) + 0x5c);
  uStack_18 = param_4;
  local_34 = func_020465d8(param_1,2);
  iVar4 = func_020465d8(param_1,1);
  switch(iVar4 - ((unsigned int)0x0202949c)) {
  case 0:
    iVar4 = func_020465d8(param_1,3);
    if (iVar4 < 1) {
      func_0x020a0d78(iVar9 + 0x88,2);
    }
    else {
      func_0x020a0d5c(iVar9 + 0x88,2);
    }
    goto LAB_020291f0;
  case 1:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    if (iVar4 != 0) {
      iVar9 = func_020465d8(param_1,4);
      func_0x020ab39c(iVar4,1,6 - iVar9,0);
    }
    goto LAB_020291f0;
  case 2:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    iVar9 = 0xd0;
    goto LAB_0202923a;
  case 3:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    uVar3 = func_020465d8(param_1,4);
    *(undefined2 *)(iVar4 + 0xd0) = uVar3;
    local_34 = 0xffffffff;
    break;
  case 4:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    iVar9 = func_020465d8(param_1,4);
    local_34 = -(uint)(*(short *)(iVar4 + 0xd0) == iVar9);
    break;
  case 5:
    sVar2 = func_020465d8(param_1,3);
    sVar1 = func_020465d8(param_1,4);
    if ((sVar2 == 0) && (sVar1 == 0)) {
      local_34 = 0xffffffff;
    }
    else {
      func_0x020aefa8(*(undefined4 *)(iVar9 + 0x44),&local_34,sVar2);
    }
    break;
  case 6:
    uVar3 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(*(undefined4 *)(iVar9 + 0x44),uVar3);
    if (iVar4 != 0) {
      uVar3 = func_020465d8(param_1,4);
      func_0x020ab39c(iVar4,1,uVar3,0);
      local_34 = 0xffffffff;
    }
    break;
  case 7:
    sVar2 = func_020465d8(param_1,3);
    local_34 = func_0202ae54((int)sVar2);
    break;
  case 8:
    if ((local_34 == 0) && (iVar4 = func_02037dd0((*(unsigned int *)0x020294a0)), iVar4 == 0)) {
      local_34 = 1;
    }
    if (local_34 != 1) break;
    sVar2 = func_020465d8(param_1,3);
    uVar3 = func_020465d8(param_1,4);
    uVar10 = func_02046598(param_1,5);
    uVar7 = ((unsigned int)0x020294a4);
    func_0201f190(((unsigned int)0x020294a4),uVar10);
    iVar4 = func_0201edc4();
    uVar10 = func_02046598(param_1,6);
    func_0201f190(uVar7,uVar10);
    iVar5 = func_0201edc4();
    iVar6 = func_0x020aea3c(*(undefined4 *)(iVar9 + 0x44),(int)sVar2);
    if (iVar6 != 0) {
      uVar7 = *(undefined4 *)(iVar9 + 0x48);
      local_24 = *(undefined4 *)(iVar6 + 0x18);
      local_20 = *(int *)(iVar6 + 0x1c);
      local_1c = *(undefined4 *)(iVar6 + 0x20);
      iVar9 = *(int *)(iVar6 + 0xd8);
      if (iVar9 != 0) {
        local_24 = *(undefined4 *)(iVar9 + 100);
        local_20 = *(int *)(iVar9 + 0x68);
        local_1c = *(undefined4 *)(iVar9 + 0x6c);
      }
      local_20 = local_20 + iVar4;
      if (iVar5 != 0) {
        iVar4 = (*(unsigned int *)0x020294a8);
        local_30 = *(undefined4 *)(iVar4 + 0x5c);
        uStack_2c = *(undefined4 *)(iVar4 + 0x60);
        local_28 = *(undefined4 *)(iVar4 + 100);
        func_02002ac4(&local_30,&local_24,&local_30);
        func_02002c10(&local_30,&local_30);
        func_02002e50(iVar5,&local_30,&local_24,&local_24);
      }
      func_0x020c21d4(uVar7,uVar3,&local_24);
    }
    goto LAB_020291f0;
  case 9:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    sVar2 = func_020465d8(param_1,4);
    if (sVar2 == 0) {
      uVar8 = ((unsigned int)0x020294ac) & *(uint *)(iVar4 + 0xc4);
    }
    else {
      uVar8 = *(uint *)(iVar4 + 0xc4) | 0x800;
    }
    *(uint *)(iVar4 + 0xc4) = uVar8;
    goto LAB_020291f0;
  case 10:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    uVar7 = func_0x020aea3c(uVar10,uVar7);
    uVar10 = func_0x020a86c4();
    iVar4 = func_0x020a8648(uVar7,uVar10);
    local_34 = (uint)(iVar4 == 1);
    break;
  case 0xb:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    if (((uint)*(ushort *)(iVar4 + 0x60) + ((unsigned int)0x020294b0) & 0xffff) < 2) {
      local_34 = func_0x020b75b8();
      break;
    }
    goto LAB_02029516;
  case 0xc:
    uVar10 = *(undefined4 *)(iVar9 + 0x44);
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_0x020aea3c(uVar10,uVar7);
    iVar9 = 0xd2;
LAB_0202923a:
    local_34 = (uint)*(short *)(iVar4 + iVar9);
    break;
  case 0xd:
    uVar3 = func_020465d8(param_1,3);
    iVar4 = func_020465d8(param_1,4);
    iVar9 = func_0x020aea3c(*(undefined4 *)(iVar9 + 0x44),uVar3);
    if (iVar9 != 0) {
      if (iVar4 < 1) {
        iVar4 = *(int *)(iVar9 + 0xd8);
        if (iVar4 != 0) {
          uVar8 = ((unsigned int)0x02029528) & *(uint *)(iVar4 + 0xc);
          goto LAB_020294fe;
        }
      }
      else {
        iVar4 = *(int *)(iVar9 + 0xd8);
        if (iVar4 != 0) {
          uVar8 = *(uint *)(iVar4 + 0xc) | 0x80000;
LAB_020294fe:
          *(uint *)(iVar4 + 0xc) = uVar8;
        }
      }
    }
LAB_020291f0:
    local_34 = 0xffffffff;
    break;
  case 0xe:
    uVar3 = func_020465d8(param_1,3);
    func_0x020af09c(*(undefined4 *)(iVar9 + 0x44),uVar3);
LAB_02029516:
    local_34 = 0xffffffff;
  }
  func_02046868(param_1,local_34);
  return 1;
}
