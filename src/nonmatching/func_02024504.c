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

extern int func_02018ba4();
extern int func_0201e9d4();
extern int func_0201ebe0();
extern int func_02022f48();
extern int func_020242b8();
extern int func_02024910();
extern int func_02032ac4();
extern int func_020381cc();
extern int func_020382c0();
extern int func_0x0208550c();
extern int func_0x020859b8();
extern int func_0x020859d4();
extern int func_0x0208f4d0();
extern int func_0x020a0d5c();
extern int func_0x020a0d94();
extern int func_0x020ae848();
extern int func_0x020d6000();

undefined4
func_02024504(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,char param_5,int param_6
            )

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 extraout_r1;
  uint uVar6;
  int iVar7;
  undefined1 auStack_34 [32];

  piVar2 = ((unsigned int)0x020247cc);
  iVar7 = *(int *)(*(int *)(*(unsigned int *)0x020247cc) + 0x5c);
  uVar6 = *(uint *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0x24) != 0) {
    func_02018ba4(auStack_34,((unsigned int)0x020247d0),param_4,param_2);
  }
  iVar3 = func_02022f48(*piVar2 + 0xf0,0,0,0);
  if (((iVar3 == 1) && (*(short *)(*(int *)(iVar7 + 0x30) + 0xe4) < 0)) &&
     (*(int *)(iVar7 + 0x54) != 0)) {
    bVar1 = true;
    if ((*(int *)(iVar7 + 0x58) != 0) &&
       (iVar3 = func_0x020859d4(*(int *)(iVar7 + 0x58),0), iVar3 != 0)) {
      bVar1 = false;
    }
    iVar3 = func_0x0208f4d0(*(undefined4 *)(iVar7 + 0x54),0);
    if ((!bVar1) || (iVar3 != 0)) {
      return 0;
    }
  }
  piVar2 = ((unsigned int)0x020247cc);
  if (param_4 == 0) {
    if (param_6 == 1) {
      param_4 = func_0201ebe0(param_2,1000);
      param_4 = param_4 & 0xffff;
    }
    else if (param_6 == 2) {
      param_4 = 99;
    }
    else {
      param_4 = (uint)*(ushort *)(*(int *)(iVar7 + 0x30) + 0xea);
    }
  }
  func_02018ba4(auStack_34,((unsigned int)0x020247d4),param_4,param_2);
  func_0201e9d4(param_3,((unsigned int)0x020247d8));
  *(undefined2 *)(param_1 + 0x8c) = extraout_r1;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar3 = func_02022f48(*piVar2 + 0xf0,0,0,0);
  uVar5 = 2;
  if (iVar3 == 0) {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  iVar3 = func_02022f48(*piVar2 + 0xf0,0,0,0);
  if (iVar3 != 1) goto LAB_0202476a;
  if (param_6 == 3) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
  }
  if ((uVar6 & 0x10) != 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
  }
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & ((unsigned int)0x020247dc) | 0x10;
  if ((*(int *)(iVar7 + 0x58) != 0) && (iVar3 = func_0x020859b8(), iVar3 == 0)) {
    iVar3 = *(int *)(*(int *)(iVar7 + 0x58) + 0x360);
    if ((iVar3 != 0x60) && (iVar3 != 0x7c)) {
      func_0x0208550c(*(int *)(iVar7 + 0x58),0,1);
    }
  }
  if (param_6 == 4) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
    uVar5 = 1;
LAB_020246de:
    *(undefined1 *)(param_1 + 0x44) = uVar5;
  }
  else {
    if ((param_5 == '\0') && ((*(uint *)(param_1 + 0xa8) & 2) == 0)) {
      uVar5 = 0;
      goto LAB_020246de;
    }
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
    func_0x020a0d94(iVar7 + 0x88,1);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x020a0d5c(iVar7 + 0x88);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x200000;
  func_0x020d6000(*(undefined4 *)(iVar7 + 0x5c));
  if (*(short *)(param_1 + 0x4c) != 0) {
    func_02024910(param_1);
    *(undefined2 *)(param_1 + 0x4c) = 0;
  }
  func_0x020a0d94(iVar7 + 0x88,0x10);
  if ((((*(int *)(param_1 + 0x24) != 0) || (*(char *)(param_1 + 0x10) != '\0')) ||
      ((*(uint *)(param_1 + 0xa8) & 0x180) != 0)) && ((*(uint *)(param_1 + 0xa8) & 0x10) == 0)) {
    func_0x020ae848(*(undefined4 *)(iVar7 + 0x44),0);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x20;
  }
LAB_0202476a:
  if (*(int *)(param_1 + 0x24) != 0) {
    func_020382c0((*(unsigned int *)0x020247e0),*(int *)(param_1 + 0x24),5,0);
  }
  if ((*(uint *)(param_1 + 0xa8) & 0x100) != 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & ((unsigned int)0x020247e4);
  }
  iVar3 = func_02032ac4(0x54,((unsigned int)0x020247e8),((unsigned int)0x020247ec),0x1e);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = func_020242b8(iVar3,param_1 + 0x24,auStack_34,1,((unsigned int)0x020247f0),param_1,0);
  }
  func_020381cc((*(unsigned int *)0x020247e0),uVar4,10,0,0,((unsigned int)0x020247f4));
  iVar3 = func_02022f48(*piVar2 + 0xf0,0,0,0);
  if ((iVar3 == 1) &&
     ((((*(int *)(param_1 + 0x24) != 0 || (*(char *)(param_1 + 0x10) != '\0')) ||
       ((*(uint *)(param_1 + 0xa8) & 0x180) != 0)) && ((*(uint *)(param_1 + 0xa8) & 0x10) == 0)))) {
    func_0x020ae848(*(undefined4 *)(iVar7 + 0x44),0);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x20;
  }
  return 1;
}
