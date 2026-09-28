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
extern int func_02022f0c();
extern int func_02022f48();
extern int func_02022f84();
extern int func_02022fc0();
extern int func_02022ffc();
extern int func_02024b84();
extern int func_02024bc0();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x020a00b8();
extern int func_0x020a00cc();

undefined4 func_02025950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;

  iVar8 = (*(unsigned int *)0x02025b20);
  uVar6 = 1;
  iVar4 = func_020465d8(param_1,1,param_3,param_4,param_4);
  switch(iVar4 - ((unsigned int)0x02025b24)) {
  case 0:
  case 1:
  case 2:
    break;
  case 3:
  case 4:
  case 5:
    uVar6 = 2;
    break;
  default:
    uVar6 = 6;
  }
  iVar4 = func_020465d8(param_1,1);
  switch(iVar4 - ((unsigned int)0x02025b24)) {
  case 0:
  case 3:
  case 6:
    if (uVar6 < 6) {
      uVar2 = func_020465d8(param_1,3);
      uVar7 = func_020465d8(param_1,4);
      func_02022ed0(iVar8 + 0xf0,uVar6,uVar2,uVar7);
    }
    else {
      uVar2 = func_020465d8(param_1,3);
      func_02022f84((*(unsigned int *)0x02025b20) + 0xf0,uVar2);
    }
    goto LAB_02025a00;
  case 1:
  case 4:
  case 7:
    if (uVar6 < 6) {
      uVar2 = func_020465d8(param_1,3);
      uVar7 = func_020465d8(param_1,4);
      func_02022f0c(iVar8 + 0xf0,uVar6,uVar2,uVar7);
    }
    else {
      uVar2 = func_020465d8(param_1,3);
      func_02022fc0((*(unsigned int *)0x02025b20) + 0xf0,uVar2);
    }
    goto LAB_02025a00;
  case 2:
  case 5:
  case 8:
    if (uVar6 < 6) {
      uVar5 = func_020465d8(param_1,3);
      uVar7 = func_020465d8(param_1,4);
      iVar4 = func_02022f48(iVar8 + 0xf0,uVar6,uVar5 & 0xffff,uVar7);
      uVar6 = (uint)(iVar4 != 0);
    }
    else {
      uVar2 = func_020465d8(param_1,3);
      uVar6 = func_02022ffc((*(unsigned int *)0x02025b20) + 0xf0,uVar2);
    }
    break;
  case 9:
    uVar7 = *(undefined4 *)(*(int *)(*(unsigned int *)0x02025b20) + 0x5c);
    iVar4 = func_020465d8(param_1,3);
    if ((iVar4 != 0) && (iVar4 == 1)) {
      func_0x020a00b8(uVar7);
      func_0x020a00cc(uVar7);
    }
LAB_02025a00:
    uVar6 = 0xffffffff;
    break;
  case 10:
    uVar2 = func_020465d8(param_1,3);
    uVar3 = func_020465d8(param_1,4);
    uVar1 = func_020465d8(param_1,5);
    func_02024b84(uVar2,uVar3,uVar1);
    uVar6 = 0xffffffff;
    break;
  case 0xb:
    uVar2 = func_020465d8(param_1,3);
    uVar3 = func_020465d8(param_1,4);
    uVar6 = func_02024bc0(uVar2,uVar3);
    break;
  default:
    goto switchD_020259a6_default;
  }
  func_02046868(param_1,uVar6);
switchD_020259a6_default:
  return 1;
}
