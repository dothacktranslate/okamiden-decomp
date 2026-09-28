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
extern int func_02040dbc();
extern int func_02040f28();
extern int func_020465d8();
extern int func_02046868();

undefined4 func_0202a8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  undefined4 uStack_18;

  iVar7 = (*(unsigned int *)0x0202ab10);
  iVar8 = iVar7 + 0x14;
  uVar6 = (*(unsigned int *)0x0202ab14);
  uStack_18 = param_4;
  uVar2 = func_020465d8(param_1,2);
  iVar3 = func_020465d8(param_1,1);
  switch(iVar3 - ((unsigned int)0x0202ab18)) {
  case 0:
    iVar3 = func_020465d8(param_1,3);
    iVar3 = iVar3 * 0x10;
    if (*(int *)(iVar8 + iVar3 + 0x5c) != 0) {
      func_02040f28(uVar6);
    }
    uVar2 = func_020465d8(param_1,4);
    func_02018ba4(auStack_38,((unsigned int)0x0202ab1c),uVar2);
    iVar4 = iVar7 + 0x70;
    piVar5 = (int *)func_02040dbc(uVar6,(*(unsigned int *)0x0202ab20),1);
    *(int **)(iVar4 + iVar3) = piVar5;
    (**(code **)(*piVar5 + 0x24))(piVar5,auStack_38);
    *(undefined2 *)(iVar7 + 0x74 + iVar3) = 0;
    *(undefined2 *)(iVar8 + iVar3 + 0x62) = 0;
    *(undefined2 *)(iVar8 + iVar3 + 100) = 0x100;
    *(undefined2 *)(iVar8 + iVar3 + 0x66) = 0x100;
    uVar1 = func_020465d8(param_1,4);
    *(undefined2 *)(iVar8 + iVar3 + 0x68) = uVar1;
    (**(code **)(**(int **)(iVar4 + iVar3) + 0x74))(*(int **)(iVar4 + iVar3),iVar7 + 0x74 + iVar3);
    *(undefined2 *)(*(int *)(iVar4 + iVar3) + 0x10) = 0x1f;
    uVar2 = 0xffffffff;
    break;
  case 1:
    uVar2 = 0xffffffff;
    iVar3 = 0;
    do {
      piVar5 = *(int **)(iVar8 + iVar3 * 0x10 + 0x5c);
      if ((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 0x28))(), iVar7 == 0)) {
        uVar2 = 0;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    break;
  case 2:
    iVar3 = func_020465d8(param_1,3);
    iVar4 = func_020465d8(param_1,4);
    if (iVar4 < 1) {
      iVar3 = *(int *)(iVar8 + iVar3 * 0x10 + 0x5c);
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xfffffffe;
    }
    else {
      iVar3 = iVar3 * 0x10;
      iVar7 = iVar7 + 0x70;
      if (*(int *)(*(int *)(iVar7 + iVar3) + 0x38) == 0) {
        func_02018ba4(auStack_58,((unsigned int)0x0202ab24),*(undefined2 *)(iVar8 + iVar3 + 0x68));
        (**(code **)(**(int **)(iVar7 + iVar3) + 0x6c))
                  (*(int **)(iVar7 + iVar3),auStack_58,0,*(undefined2 *)(iVar8 + iVar3 + 0x60),
                   *(undefined2 *)(iVar8 + iVar3 + 0x62),0x64000);
      }
      *(uint *)(*(int *)(iVar7 + iVar3) + 0xc) = *(uint *)(*(int *)(iVar7 + iVar3) + 0xc) | 1;
    }
    goto LAB_0202aa58;
  case 3:
    iVar3 = func_020465d8(param_1,3);
    if (*(int *)(iVar7 + 0x70 + iVar3 * 0x10) != 0) {
      func_02040f28(uVar6);
      *(undefined4 *)(iVar7 + 0x70 + iVar3 * 0x10) = 0;
    }
LAB_0202aa58:
    uVar2 = 0xffffffff;
    break;
  case 4:
    iVar3 = func_020465d8(param_1,3);
    iVar3 = iVar3 * 0x10;
    uVar1 = func_020465d8(param_1,4);
    *(undefined2 *)(iVar7 + 0x74 + iVar3) = uVar1;
    uVar1 = func_020465d8(param_1,5);
    *(undefined2 *)(iVar8 + iVar3 + 0x62) = uVar1;
    uVar1 = func_020465d8(param_1,6);
    *(undefined2 *)(iVar8 + iVar3 + 100) = uVar1;
    uVar1 = func_020465d8(param_1,7);
    *(undefined2 *)(iVar8 + iVar3 + 0x66) = uVar1;
    piVar5 = *(int **)(iVar8 + iVar3 + 0x5c);
    (**(code **)(*piVar5 + 0x74))(piVar5,iVar7 + 0x74 + iVar3);
    uVar2 = 0xffffffff;
    break;
  case 5:
    iVar3 = func_020465d8(param_1,3);
    iVar7 = func_020465d8(param_1,4);
    uVar2 = 0xffffffff;
    *(ushort *)(*(int *)(iVar8 + iVar3 * 0x10 + 0x5c) + 0x10) =
         ((ushort)((uint)(iVar7 * 0x8000000 + (iVar7 >> 0x1f)) >> 0x1b) |
         (ushort)((iVar7 >> 0x1f) << 5)) - (short)(iVar7 >> 0x1f);
  }
  func_02046868(param_1,uVar2);
  return 1;
}
