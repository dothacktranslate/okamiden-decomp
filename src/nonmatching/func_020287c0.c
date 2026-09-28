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
extern int func_0x0208fb54();
extern int func_0x02090c98();
extern int func_0x02090cc4();
extern int func_0x02090d34();
extern int func_0x02090dac();
extern int func_0x02090dcc();

undefined4 func_020287c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = *(int *)(*(int *)(*(unsigned int *)0x02028910) + 0x5c);
  iVar1 = func_020465d8(param_1,1,param_3,param_4,param_4);
  switch(iVar1 - ((unsigned int)0x02028914)) {
  case 0:
    if (*(int *)(iVar4 + 0x54) == 0) {
      uVar3 = *(undefined4 *)(iVar4 + 0x34);
      iVar2 = func_020465d8(param_1,3);
      iVar1 = func_0x02090dac(uVar3);
      iVar2 = iVar2 + iVar1;
      iVar1 = func_0x02090dcc(*(undefined4 *)(iVar4 + 0x34));
      if ((iVar2 <= iVar1) && (iVar1 = iVar2, iVar2 < 0)) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar4 + 0x54) + 0x310);
      iVar2 = func_020465d8(param_1,3);
      iVar2 = iVar2 + iVar1;
      iVar1 = *(int *)(*(int *)(iVar4 + 0x54) + 0x314);
      if ((iVar2 <= iVar1) && (iVar1 = iVar2, iVar2 < 0)) {
        iVar1 = 0;
      }
    }
    func_0x02090d34(*(undefined4 *)(iVar4 + 0x34),iVar1);
    goto LAB_02028852;
  case 1:
    if (*(int *)(iVar4 + 0x54) != 0) {
      uVar3 = *(undefined4 *)(iVar4 + 0x34);
      iVar2 = func_020465d8(param_1,3);
      iVar1 = func_0x02090cc4(uVar3);
      iVar2 = iVar2 + iVar1;
      iVar1 = *(int *)(*(int *)(iVar4 + 0x54) + 0x60);
      if ((iVar2 <= iVar1) && (iVar1 = iVar2, iVar2 < 0)) {
        iVar1 = 0;
      }
      func_0x02090c98(*(undefined4 *)(iVar4 + 0x34),iVar1);
    }
    goto LAB_02028852;
  case 2:
    uVar3 = func_0x02090dac(*(undefined4 *)(iVar4 + 0x34));
    break;
  case 3:
    uVar3 = func_0x02090cc4(*(undefined4 *)(iVar4 + 0x34));
    break;
  case 4:
    uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x54) + 0x6a0) + 0x90);
    break;
  case 5:
    iVar1 = func_020465d8(param_1,3);
    iVar1 = -iVar1;
    goto LAB_020288f6;
  case 6:
    iVar1 = func_020465d8(param_1,3);
LAB_020288f6:
    func_0x0208fb54(*(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x6a0),iVar1,1);
    uVar3 = 0xffffffff;
    break;
  case 7:
    iVar1 = *(int *)(*(int *)(iVar4 + 0x54) + 0x310);
    iVar2 = func_020465d8(param_1,3);
    iVar2 = iVar2 + iVar1;
    iVar1 = *(int *)(*(int *)(iVar4 + 0x54) + 0x314);
    if ((iVar2 <= iVar1) && (iVar1 = iVar2, iVar2 < 0)) {
      iVar1 = 0;
    }
    *(int *)(*(int *)(iVar4 + 0x54) + 0x310) = iVar1;
LAB_02028852:
    uVar3 = 0xffffffff;
    break;
  default:
    goto switchD_020287e8_default;
  }
  func_02046868(param_1,uVar3);
switchD_020287e8_default:
  return 1;
}
