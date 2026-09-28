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

extern int func_020465d8();
extern int func_02046868();
extern int func_0x0209a7fc();
extern int func_0x0209a834();
extern int func_0x0209a87c();
extern int func_0x0209a978();
extern int func_0x0209a9a8();
extern int func_0x020af49c();
extern int func_0x020af510();

undefined4 func_02029954(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint local_1c;

  piVar7 = (int *)(*(unsigned int *)0x02029c70);
  iVar11 = *(int *)(*piVar7 + 0x5c);
  iVar8 = *(int *)(iVar11 + 0x30);
  local_1c = 0xffffffff;
  puVar9 = (uint *)(iVar8 + 0x88);
  iVar2 = func_020465d8(param_1,1);
  switch(iVar2 - ((unsigned int)0x02029c74)) {
  case 0:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(iVar8 + 0x8c) = uVar1;
    break;
  case 1:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(iVar8 + 0x9c) = uVar1;
    *(undefined2 *)(iVar8 + 0x8e) = *(undefined2 *)(iVar8 + 0x9c);
    break;
  case 2:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(iVar8 + 0x90) = uVar1;
    break;
  case 3:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(iVar8 + 0x92) = uVar1;
    break;
  case 4:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(iVar8 + 0x94) = uVar1;
    break;
  case 5:
    uVar5 = func_020465d8(param_1,3);
    if (uVar5 == 0x1f) {
      uVar5 = *puVar9 | 0x80000000;
    }
    else {
      if (uVar5 == 0) {
        uVar5 = 0x7fffffff;
      }
      else {
        uVar5 = 1 << (uVar5 & 0xff);
      }
      uVar5 = ~uVar5 & *puVar9;
    }
    *puVar9 = uVar5;
    break;
  case 6:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)((int)piVar7 + 0x32) = uVar1;
    break;
  case 7:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(piVar7 + 0xd) = uVar1;
    break;
  case 8:
    local_1c = (uint)*(ushort *)(iVar8 + 0x8c);
    break;
  case 9:
    local_1c = (uint)*(ushort *)(iVar8 + 0x8e);
    break;
  case 10:
    local_1c = (uint)*(ushort *)(iVar8 + 0x90);
    break;
  case 0xb:
    local_1c = (uint)*(ushort *)(iVar8 + 0x92);
    break;
  case 0xc:
    local_1c = (uint)*(ushort *)(iVar8 + 0x94);
    break;
  case 0xd:
    uVar10 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    uVar3 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    func_0x0209a834(uVar10,uVar3,uVar4,0);
    break;
  case 0xe:
    uVar10 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    uVar3 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    func_0x0209a87c(uVar10,uVar3,uVar4,0);
    break;
  case 0xf:
    uVar4 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    uVar3 = func_020465d8(param_1,3);
    func_0x0209a7fc(uVar4,uVar3,0);
  case 0x10:
    break;
  case 0x11:
    uVar10 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    uVar3 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    func_0x0209a9a8(uVar10,uVar3,uVar4);
    break;
  case 0x12:
    iVar2 = *(int *)(iVar11 + 0x30);
    uVar5 = 0x2000;
    uVar6 = *(uint *)(iVar2 + 0x14);
    goto LAB_02029af8;
  case 0x13:
    local_1c = func_020465d8(param_1,2);
    if (local_1c == 0) {
      local_1c = 1;
      *(uint *)(*(int *)(iVar11 + 0x30) + 0x88) =
           *(uint *)(*(int *)(iVar11 + 0x30) + 0x88) | 0x80000000;
    }
    else if (local_1c != 1) {
      if ((local_1c == 2) && (4 < *(uint *)(*(int *)(iVar11 + 0x30) + 0x18))) {
        *puVar9 = *puVar9 & 0x7fffffff;
        local_1c = 0xffffffff;
      }
      break;
    }
    if (3 < *(uint *)(*(int *)(iVar11 + 0x30) + 0x18)) {
      func_0x020af510(*(undefined4 *)(iVar11 + 0x44),0);
      local_1c = 2;
    }
    break;
  case 0x14:
    uVar5 = 0;
    iVar2 = func_020465d8(param_1,3);
    if (iVar2 != 0) {
      uVar5 = 0x20000000;
    }
    iVar11 = func_020465d8(param_1,4);
    if (iVar11 != 0) {
      uVar5 = uVar5 | 0x40000000;
    }
    if (iVar2 < 2) {
      *(undefined2 *)(iVar8 + 0x9e) = 0;
    }
    else {
      *(short *)(iVar8 + 0x9e) = (short)iVar2;
    }
    *puVar9 = uVar5 | 0x10000000 | *puVar9;
    goto LAB_02029b94;
  case 0x15:
    uVar3 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    iVar2 = func_020465d8(param_1,5);
    if (iVar2 == 0) {
      uVar10 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    }
    func_0x0209a834(uVar10,uVar3,uVar4,iVar2 == 0);
    goto LAB_02029b94;
  case 0x16:
    uVar3 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    iVar2 = func_020465d8(param_1,5);
    iVar8 = func_020465d8(param_1,6);
    switch(uVar3) {
    case 2:
      func_0x020af49c(*(undefined4 *)(iVar11 + 0x44),uVar4,iVar2 != 0,iVar8 != 0);
    }
LAB_02029b94:
    local_1c = 0xffffffff;
    break;
  case 0x17:
    uVar1 = func_020465d8(param_1,3);
    *(undefined2 *)(iVar8 + 0x9c) = uVar1;
    break;
  case 0x18:
    uVar10 = *(undefined4 *)(*(int *)(iVar11 + 0x30) + 0xdc);
    uVar3 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    func_0x0209a978(uVar10,uVar3,uVar4);
    break;
  case 0x19:
    iVar2 = *(int *)(iVar11 + 0x30);
    uVar5 = 0x8000;
    uVar6 = *(uint *)(iVar2 + 0x14);
LAB_02029af8:
    *(uint *)(iVar2 + 0x14) = uVar5 | uVar6;
    break;
  case 0x1a:
    iVar2 = func_020465d8(param_1,3);
    *(int *)(iVar8 + 0xa0) = iVar2 << 0xc;
  }
  func_02046868(param_1,local_1c);
  return 1;
}
