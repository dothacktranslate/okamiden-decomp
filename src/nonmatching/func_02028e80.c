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

extern int func_0202cd5c();
extern int func_0202d100();
extern int func_0202d288();
extern int func_0202d2d8();
extern int func_0202d2e8();
extern int func_0202d2f4();
extern int func_0202facc();
extern int func_020465d8();
extern int func_02046868();

undefined4 func_02028e80(undefined4 param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  uVar9 = *(undefined4 *)((*(unsigned int *)0x02028fa4) + 0x20);
  uVar5 = func_020465d8(param_1,2);
  iVar6 = func_020465d8(param_1,1);
  if (iVar6 != ((unsigned int)0x02028fa8)) {
    if (iVar6 != ((unsigned int)0x02028fa8) + 1) {
      return 1;
    }
    uVar2 = func_020465d8(param_1,3);
    uVar3 = func_020465d8(param_1,4);
    uVar4 = func_020465d8(param_1,5);
    func_0202d2f4(uVar9,uVar2,uVar3,uVar4,0);
    uVar5 = 0xffffffff;
    goto switchD_02028ef0_default;
  }
  uVar2 = func_020465d8(param_1,3);
  uVar1 = func_020465d8(param_1,4);
  uVar7 = func_020465d8(param_1,5);
  uVar8 = 0;
  if (1 < uVar1) {
    uVar8 = func_0202d2e8(uVar9,uVar2);
  }
  switch(uVar1) {
  case 0:
    func_0202cd5c(uVar9,uVar2,0,uVar7 & 0xffff);
    goto LAB_02028f56;
  case 1:
    iVar6 = func_0202d2d8(uVar9,uVar2,0);
    if (iVar6 != 0) {
      func_0202d100(uVar9,uVar2,0,0);
      uVar5 = 0xffffffff;
    }
    goto switchD_02028ef0_default;
  case 2:
    break;
  case 3:
    break;
  case 4:
    func_0202facc(uVar8,(uVar7 & 0xffff) << 0xc);
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    func_0202d288(uVar9,uVar2,0);
LAB_02028f56:
    uVar5 = 0xffffffff;
  default:
    goto switchD_02028ef0_default;
  }
  uVar5 = 0xffffffff;
switchD_02028ef0_default:
  func_02046868(param_1,uVar5);
  return 1;
}
