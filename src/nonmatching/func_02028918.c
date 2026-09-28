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

extern int func_0202cc4c();
extern int func_0203ab3c();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x0209ef9c();
extern int func_0x0209f00c();
extern int func_0x0209f07c();
extern int func_0x0209f0d0();
extern int func_0x020be4fc();

undefined4 func_02028918(undefined4 param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;

  piVar1 = ((unsigned int)0x02028b80);
  iVar10 = (*(unsigned int *)0x02028b80);
  iVar4 = func_020465d8(param_1,1);
  iVar9 = ((unsigned int)0x02028b84);
  switch(iVar4 - ((unsigned int)0x02028b84)) {
  case 0:
  case 8:
    uVar7 = func_020465d8(param_1,3);
    iVar4 = func_020465d8(param_1,6);
    iVar8 = func_020465d8(param_1,5);
    local_20 = func_020465d8(param_1,4);
    local_20 = local_20 << 0xc;
    local_1c = iVar8 << 0xc;
    local_18 = iVar4 << 0xc;
    iVar4 = func_020465d8(param_1,1);
    uVar7 = func_0x0209f00c(uVar7,0,&local_20,0,iVar4 == iVar9 + 8);
    goto LAB_020289b0;
  case 1:
    uVar7 = func_020465d8(param_1,3);
    uVar5 = func_020465d8(param_1,7);
    iVar9 = func_020465d8(param_1,6);
    iVar4 = func_020465d8(param_1,5);
    local_2c = func_020465d8(param_1,4);
    local_2c = local_2c << 0xc;
    local_28 = iVar4 << 0xc;
    local_24 = iVar9 << 0xc;
    uVar7 = func_0203ab3c(uVar7,0,&local_2c,uVar5);
LAB_020289b0:
    *(undefined4 *)(iVar10 + 0xc0) = uVar7;
    uVar7 = 0xffffffff;
    break;
  case 2:
    uVar7 = func_020465d8(param_1,3);
    uVar3 = func_020465d8(param_1,4);
    uVar2 = func_020465d8(param_1,5);
    uVar5 = func_0202cc4c(*(undefined4 *)(iVar10 + 0x20),uVar3,uVar2);
    func_0x0209ef9c(uVar7,0,uVar5,0,0);
    goto LAB_02028a7c;
  case 3:
    uVar7 = func_020465d8(param_1,3);
    uVar3 = func_020465d8(param_1,4);
    uVar2 = func_020465d8(param_1,5);
    uVar5 = func_0202cc4c(*(undefined4 *)(iVar10 + 0x20),uVar3,uVar2);
    func_0x0209f07c(uVar7,0,uVar5,1,0);
LAB_02028a7c:
    uVar7 = 0xffffffff;
    break;
  case 4:
    uVar7 = 0xffffffff;
    func_0x0209f0d0(0xffffffff);
    break;
  case 5:
  case 9:
    iVar11 = *(int *)(*(int *)*piVar1 + 0x5c);
    uVar7 = func_020465d8(param_1,3);
    uVar5 = func_020465d8(param_1,4);
    uVar3 = func_020465d8(param_1,5);
    uVar6 = func_020465d8(param_1,6);
    iVar4 = func_020465d8(param_1,1);
    iVar8 = 0;
    switch(uVar5) {
    case 1:
      iVar8 = *(int *)(iVar11 + 0x54);
      break;
    case 2:
      iVar8 = *(int *)(iVar11 + 0x58);
      break;
    case 3:
      iVar8 = func_0x020be4fc(*(undefined4 *)(iVar11 + 0x3c),uVar3);
    }
    if (iVar8 != 0) {
      uVar7 = func_0x0209f00c(uVar7,0,*(int *)(*(int *)(iVar8 + 0x84) + 0xa8) +
                                      (uVar6 & 0xffff) * 0x48 + 8,0,iVar4 == iVar9 + 5);
      *(undefined4 *)(iVar10 + 0xc0) = uVar7;
    }
    goto LAB_02028b6e;
  case 6:
    uVar7 = *(undefined4 *)(iVar10 + 0xc0);
    break;
  case 7:
    func_020465d8(param_1,3);
    func_0x0209f0d0();
    uVar7 = 0xffffffff;
    break;
  case 10:
    iVar9 = *(int *)(*(int *)(*(int *)*piVar1 + 0x5c) + 0x54);
    if (iVar9 != 0) {
      uVar7 = func_0x0209f00c(0xe4,0,iVar9 + 0x18,0,0);
      *(undefined4 *)(iVar10 + 0xc0) = uVar7;
    }
LAB_02028b6e:
    uVar7 = 0xffffffff;
    break;
  default:
    goto switchD_02028942_default;
  }
  func_02046868(param_1,uVar7);
switchD_02028942_default:
  return 1;
}
