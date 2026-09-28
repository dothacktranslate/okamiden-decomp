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

extern int func_02034910();
extern int func_02034924();
extern int func_02034938();
extern int func_02034944();

undefined4 func_020349d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar1 = func_02034910(param_1,*(undefined4 *)(iVar4 + 0x1c));
  if (iVar1 == 0) {
    return 0xff;
  }
  iVar1 = func_02034944(param_1);
  uVar5 = *(uint *)(iVar4 + 8);
  if ((uVar5 & 1) == 0) {
    iVar7 = 0x20;
    if ((uVar5 & 2) == 0) goto LAB_02034a1c;
    uVar5 = 0x10000;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar4 + 0xc);
    uVar6 = *(uint *)(param_1 + 8);
  }
  else {
    iVar7 = -0x20;
LAB_02034a1c:
    piVar3 = *(int **)(param_1 + 0xa4);
    if ((piVar3 == (int *)0x0) || ((uVar5 & 4) != 0)) {
      uVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))
                        (*(int **)(param_1 + 4),((unsigned int)0x02034ae8) & iVar1 + ((unsigned int)0x02034ae4),iVar7,
                         *(undefined4 *)(iVar4 + 0x1c));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      uVar5 = ((unsigned int)0x02034aec) & *(uint *)(param_1 + 8);
      goto LAB_02034a6e;
    }
    if ((*(uint *)(param_1 + 8) & 0x1000000) != 0) {
      iVar7 = -iVar7;
    }
    uVar2 = (**(code **)(*piVar3 + 8))
                      (piVar3,((unsigned int)0x02034ae8) & iVar1 + ((unsigned int)0x02034ae4),iVar7,
                       *(undefined4 *)(iVar4 + 0x1c));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    uVar6 = *(uint *)(param_1 + 8);
    uVar5 = 0x20000;
  }
  uVar5 = uVar5 | uVar6;
LAB_02034a6e:
  *(uint *)(param_1 + 8) = uVar5;
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((*(uint *)(param_1 + 8) & 6) == 0) {
      uVar5 = iVar1 + ((unsigned int)0x02034ae4) & ((unsigned int)0x02034ae8);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x20);
    }
    iVar7 = func_02034938(param_1,*(undefined4 *)(param_1 + 0x24),uVar5);
    *(int *)(param_1 + 0x1c) = iVar7;
    if (-1 < iVar7) {
      *(int *)(iVar4 + 0x10) = iVar1;
      return 1;
    }
    if ((*(uint *)(param_1 + 8) & 0x10000) == 0) {
      if ((*(uint *)(param_1 + 8) & 0x20000) == 0) {
        piVar3 = *(int **)(param_1 + 4);
      }
      else {
        piVar3 = *(int **)(param_1 + 0xa4);
      }
      (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  func_02034924(param_1);
  return 0xff;
}
