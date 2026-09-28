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

extern int func_02015ce0();
extern int func_02018ba4();
extern int func_02034c68();
extern int func_02036eb8();
extern int func_0203ba20();

bool func_0203be90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_64 [68];
  undefined4 uStack_20;

  uVar4 = ((unsigned int)0x0203c020);
  puVar2 = ((unsigned int)0x0203c01c);
  iVar3 = *(int *)(param_1 + 0x1c);
  uStack_20 = param_4;
  if (iVar3 == 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      func_02018ba4(auStack_64,((unsigned int)0x0203c010),*(undefined4 *)(param_1 + 0x18));
      uVar4 = func_02034c68((*(unsigned int *)0x0203c014),auStack_64,4,((unsigned int)0x0203c018),*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x14) = uVar4;
    }
    return false;
  }
  if (iVar3 != 3) {
    if (iVar3 != 4) {
      return true;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        if ((*(int *)(iVar3 + 0x24) != 0) &&
           (iVar6 = func_02015ce0(*(undefined4 *)(*(int *)(iVar3 + 0x20) + 0x54),uVar4), iVar6 != 0))
        {
          func_0203ba20(*(undefined4 *)(iVar3 + 0x24),0);
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (uVar7 < *(uint *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x1c) = 5;
    return true;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  bVar1 = true;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      iVar6 = *(int *)(iVar3 + 0x24);
      if (iVar6 != 0) {
        if ((*(uint *)(iVar6 + 0xc) & 0x80000000) == 0) {
          bVar8 = *(int *)(iVar6 + 0x1c) != 0;
          iVar5 = 0;
          if (bVar8) {
            iVar5 = *(int *)(iVar6 + 0x10);
          }
          if (!bVar8 || iVar5 == 0) {
            bVar1 = false;
          }
        }
        else {
          func_02036eb8(*puVar2);
        }
      }
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (uVar7 < *(uint *)(param_1 + 0x20));
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x1c) = 4;
  }
  return bVar1;
}
