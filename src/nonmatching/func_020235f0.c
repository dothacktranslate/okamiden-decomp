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

extern int func_02023308();
extern int func_02023354();
extern int func_020233f0();
extern int func_02023534();
extern int func_020366a0();
extern int func_020367a8();
extern int func_020368e0();
extern int func_02044b5c();
extern int func_02044e80();

undefined4 func_020235f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;

  if (param_3 != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        return 1;
      }
      return 0;
    }
    if (((*(uint *)(param_1 + 0x18) & 2) == 0) &&
       (iVar1 = func_02023308(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c)
                             ,*(undefined4 *)(param_1 + 0x30)), iVar1 == 0)) {
      return 1;
    }
    func_02023534(param_1);
    return 1;
  }
  if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
    iVar1 = func_02044b5c(param_1 + 0x34,3);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + 0x18) & 0x20) != 0) {
      iVar1 = func_02044b5c(param_1 + 0x74,0);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) {
        return 1;
      }
    }
    if ((*(uint *)(param_1 + 0x18) & 0x40) != 0) {
      iVar1 = func_02044b5c(param_1 + 0xb4,2);
      *(int *)(param_1 + 0x30) = iVar1;
      if (iVar1 == 0) {
        return 1;
      }
    }
    if ((*(uint *)(param_1 + 0x18) & 0x80) != 0) {
      uVar2 = 2;
      goto LAB_0202368a;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      iVar1 = (uint)((*(uint *)(param_1 + 0x1c) & 1) == 0) * 0xc;
      uVar4 = *(undefined4 *)(((unsigned int)0x02023824) + iVar1);
      iVar7 = 0;
      uVar3 = *(undefined4 *)(((unsigned int)0x0202381c) + iVar1);
      uVar2 = *(undefined4 *)(((unsigned int)0x02023820) + iVar1);
      func_02023354(param_1 + 0x34,uVar3,uVar2,0);
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar7 = param_1 + 0xb4;
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x74;
      }
      func_02044e80(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,iVar1,iVar7,uVar4,uVar3,uVar2,
                   *(undefined4 *)(param_1 + 0x1c));
    }
    else {
      iVar7 = 0;
      func_02023354(param_1 + 0x34,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),0);
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar7 = param_1 + 0xb4;
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x74;
      }
      puVar5 = *(undefined4 **)(param_1 + 0x14);
      func_02044e80(*(undefined4 *)(param_1 + 0x24),param_1 + 0x34,iVar1,iVar7,*puVar5,puVar5[1],
                   puVar5[2],*(undefined4 *)(param_1 + 0x1c));
      if ((*(uint *)(param_1 + 0x18) & 0x1000) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x14) + 8;
      }
      if ((*(uint *)(param_1 + 0x18) & 0x800) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x14) + 4;
      }
      func_020233f0(param_1 + 0x34,iVar7,iVar1,0,1);
    }
  }
  else {
    iVar1 = func_020367a8(param_1 + 0x34);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = func_020366a0(param_1 + 0x34);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      iVar1 = (uint)((*(uint *)(param_1 + 0x1c) & 1) == 0) * 0xc;
      uVar6 = *(undefined4 *)(((unsigned int)0x0202381c) + iVar1);
      uVar3 = *(undefined4 *)(((unsigned int)0x02023820) + iVar1);
      if ((*(uint *)(param_1 + 0x18) & 0x800) == 0) {
        uVar6 = 0;
      }
      if ((*(uint *)(param_1 + 0x18) & 0x1000) == 0) {
        uVar3 = 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x24);
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 0x24);
      uVar6 = *(undefined4 *)(iVar1 + 4);
    }
    func_020368e0(uVar4,uVar2,0x1900,uVar6,uVar3);
  }
  uVar2 = 1;
LAB_0202368a:
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return 1;
}
