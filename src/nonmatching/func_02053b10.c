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

extern int func_0204e544();
extern int func_0204e55c();
extern int func_020539b8();
extern int func_020539e8();
extern int func_02053a00();
extern int func_02053a40();
extern int func_02053a58();
extern int func_02053e74();

void func_02053b10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;

  iVar1 = func_02053a00();
  if (iVar1 + 1U < 0x1fffffff || iVar1 == 0x1ffffffe) {
    uVar2 = func_0204e55c(*param_1,0,0,iVar1 << 3,param_4);
  }
  else {
    uVar2 = func_0204e544(*param_1);
  }
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(int *)(param_2 + 0x28) = iVar1;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(param_2 + 8) + iVar3 + 4) = 0;
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar6 = (uint *)(*(int *)(param_2 + 8) + iVar5 * 8);
      uVar2 = func_020539e8(param_1);
      switch(uVar2) {
      case 0:
        puVar6[1] = 0;
        break;
      case 1:
        iVar3 = func_020539e8(param_1);
        *puVar6 = (uint)(iVar3 != 0);
        puVar6[1] = 1;
        break;
      case 2:
      default:
        func_020539b8(param_1,((unsigned int)0x02053cbc));
        break;
      case 3:
        uVar4 = func_02053a40(param_1);
        *puVar6 = uVar4;
        puVar6[1] = 3;
        break;
      case 4:
        uVar4 = func_02053a58(param_1);
        *puVar6 = uVar4;
        puVar6[1] = 4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar1 = func_02053a00(param_1);
  if (iVar1 + 1U < 0x3fffffff || iVar1 == 0x3ffffffe) {
    uVar2 = func_0204e55c(*param_1,0,0,iVar1 << 2);
  }
  else {
    uVar2 = func_0204e544(*param_1);
  }
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(int *)(param_2 + 0x34) = iVar1;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = func_02053e74(param_1,*(undefined4 *)(param_2 + 0x20));
      *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar5 * 4) = uVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
    return;
  }
  return;
}
