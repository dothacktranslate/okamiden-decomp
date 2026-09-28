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

extern int func_02022ed0();
extern int func_02022ffc();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x020af214();
extern int func_0x020c3bd0();
extern int func_0x020dbf54();
extern int func_0x020dc02c();

undefined4 func_02029c94(undefined4 param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;

  piVar9 = (int *)(*(unsigned int *)0x02029e94);
  iVar10 = *(int *)(*piVar9 + 0x5c);
  uVar4 = func_020465d8(param_1,2);
  iVar5 = func_020465d8(param_1,1);
  switch(iVar5 - ((unsigned int)0x02029e98)) {
  case 0:
    uVar3 = func_020465d8(param_1,3);
    *(undefined2 *)((int)piVar9 + 0x26) = uVar3;
    uVar3 = func_020465d8(param_1,4);
    *(undefined2 *)(piVar9 + 10) = uVar3;
    *(undefined2 *)((int)piVar9 + 0x2a) = *(undefined2 *)((*(unsigned int *)0x02029e94) + ((unsigned int)0x02029e9c));
    uVar3 = func_020465d8(param_1,6);
    *(undefined2 *)(piVar9 + 0xb) = uVar3;
    iVar5 = func_020465d8(param_1,3);
    if (iVar5 < 0) {
      iVar5 = *(int *)(iVar10 + 0x30);
      sVar2 = func_020465d8(param_1,3);
      *(short *)(iVar5 + 0xea) = -sVar2;
      iVar5 = *(int *)(iVar10 + 0x30);
      uVar3 = func_020465d8(param_1,4);
      *(undefined2 *)(iVar5 + 0xec) = uVar3;
    }
    func_02022ed0((*(unsigned int *)0x02029e94) + 0xf0,0,0,6);
    uVar4 = 0xffffffff;
    goto switchD_02029ccc_default;
  case 1:
    uVar4 = *(undefined4 *)(iVar10 + 0x40);
    uVar3 = func_020465d8(param_1,3);
    func_0x020c3bd0(uVar4,uVar3,0);
    uVar4 = 0xffffffff;
    goto switchD_02029ccc_default;
  case 2:
    iVar5 = func_020465d8(param_1,3);
    uVar1 = func_020465d8(param_1,4);
    if (((iVar5 != 3) && (iVar5 != 4)) && (iVar5 == 5)) {
      func_0x020af214(*(undefined4 *)(iVar10 + 0x44),uVar1,1,1,1);
    }
    break;
  case 3:
    iVar10 = *(int *)(iVar10 + 0x78);
    uVar4 = func_020465d8(param_1,3);
    iVar5 = func_020465d8(param_1,4);
    uVar6 = 0;
    switch(uVar4) {
    case 1:
      uVar6 = 2;
      break;
    case 2:
      uVar6 = 4;
      break;
    case 3:
      uVar6 = 8;
      break;
    case 4:
      uVar6 = 0x10;
      break;
    case 5:
      uVar6 = 0x20;
    }
    if (uVar6 != 0) {
      uVar7 = *(uint *)(iVar10 + 0x14);
      if (iVar5 == 0) {
        uVar6 = ~uVar6 & uVar7;
      }
      else {
        uVar6 = uVar6 | uVar7;
      }
      *(uint *)(iVar10 + 0x14) = uVar6;
    }
    break;
  case 4:
    uVar6 = func_020465d8(param_1,3);
    uVar7 = func_020465d8(param_1,4);
    iVar5 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x02029e94) + 0x5c) + 100);
    if (iVar5 != 0) {
      uVar11 = 0;
      do {
        iVar10 = ((unsigned int)0x02029ea0) + uVar11 * 0x1c;
        if (((*(byte *)(((unsigned int)0x02029ea0) + uVar11 * 0x1c) == uVar6) && (*(byte *)(iVar10 + 1) == uVar7))
           && ((*(short *)(iVar10 + 2) == 0 ||
               (iVar8 = func_02022ffc((*(unsigned int *)0x02029e94) + 0xf0), iVar8 != 0)))) {
          func_0x020dc02c(iVar5,*(undefined1 *)(iVar10 + 4),*(undefined1 *)(iVar10 + 5),
                          *(undefined1 *)(iVar10 + 6));
          func_0x020dbf54(iVar5,iVar10 + 8,*(undefined1 *)(iVar10 + 7),iVar10 + 0x10,0);
          func_0x020dbf54(iVar5,iVar10 + 8,0,iVar10 + 0x10,1);
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 6);
    }
    break;
  default:
    goto switchD_02029ccc_default;
  }
  uVar4 = 0xffffffff;
switchD_02029ccc_default:
  func_02046868(param_1,uVar4);
  return 1;
}
