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

extern int func_02009fa0();
extern int func_0200a0fc();
extern int func_0200a140();
extern int func_02034924();
extern int func_02034938();
extern int func_02034950();
extern int func_02034964();
extern int func_020349d4();
extern int func_02034af0();
extern int func_02034b98();
extern int func_02034c08();
extern int func_02035870();
extern int func_02036ba0();

void func_02034e24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_30 [28];

  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (2 < uVar1) {
      if (uVar1 == 0xff) {
        iVar6 = *(int *)(param_1 + 0x3c);
        func_02036ba0(*(undefined4 *)(iVar6 + 0x1c));
        func_02034af0(param_1);
        func_02035870(auStack_30,param_1 + 0x38,iVar6);
        (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),iVar6 + -4);
        *(undefined4 *)(param_1 + 0x18) = 0;
        return;
      }
      return;
    }
    if (uVar1 == 0) {
      uVar5 = func_020349d4(param_1);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      return;
    }
    if (uVar1 != 1) {
      if (uVar1 != 2) {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x34) < uVar1) {
        uVar1 = *(uint *)(param_1 + 0x34);
      }
      iVar6 = func_0200a140(param_1 + 0x8c,*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x24),uVar1)
      ;
      if (iVar6 == 0) {
        func_02034c08(param_1,*(int *)(param_1 + 0x3c) + -4,0);
        return;
      }
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + uVar1;
      return;
    }
    iVar6 = func_02034950(param_1);
    if (iVar6 == 1) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    iVar2 = func_02034964(param_1);
    if (iVar2 == 0) break;
    if (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar6 + 0x10)) {
      iVar6 = func_02034938(param_1,*(uint *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24),
                           *(undefined4 *)(param_1 + 0x20));
      if (-1 < iVar6) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar6;
        return;
      }
      break;
    }
    if ((*(uint *)(iVar6 + 8) & 1) != 0) {
      uVar1 = **(uint **)(param_1 + 0x24) >> 8;
      if ((*(uint *)(iVar6 + 8) & 2) == 0) {
        piVar4 = *(int **)(param_1 + 0xa4);
        if ((piVar4 == (int *)0x0) || ((*(uint *)(param_1 + 8) & 0x20000) == 0)) {
          uVar5 = (**(code **)(**(int **)(param_1 + 4) + 8))
                            (*(int **)(param_1 + 4),uVar1,0x20,*(undefined4 *)(iVar6 + 0x1c));
          *(undefined4 *)(param_1 + 0x28) = uVar5;
          uVar3 = ((unsigned int)0x02034fdc) & *(uint *)(param_1 + 8);
          goto LAB_02034ee0;
        }
        uVar5 = 0x20;
        if ((*(uint *)(param_1 + 8) & 0x1000000) != 0) {
          uVar5 = 0xffffffe0;
        }
        uVar5 = (**(code **)(*piVar4 + 8))(piVar4,uVar1,uVar5,*(undefined4 *)(iVar6 + 0x1c));
        *(undefined4 *)(param_1 + 0x28) = uVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar6 + 0xc);
        uVar3 = *(uint *)(param_1 + 8) | 0x40000;
LAB_02034ee0:
        *(uint *)(param_1 + 8) = uVar3;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        if ((*(uint *)(param_1 + 8) & 0x100) != 0x100) {
          func_02009fa0(*(undefined4 *)(param_1 + 0x24));
          *(uint *)(iVar6 + 0x10) = uVar1;
          func_02034c08(param_1,iVar6 + -4,1);
          return;
        }
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar6 + 0x10);
        *(uint *)(iVar6 + 0x10) = uVar1;
        *(undefined4 *)(param_1 + 0x30) = 4;
        func_0200a0fc(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24))
        ;
        uVar5 = 2;
        goto LAB_02034f68;
      }
      break;
    }
    func_02034b98(param_1,iVar6 + -4,1);
    if (*(char *)(param_1 + 0xa0) == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x18) != 1) {
      return;
    }
  }
  uVar5 = 0xff;
LAB_02034f68:
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  func_02034924(param_1);
  return;
}
