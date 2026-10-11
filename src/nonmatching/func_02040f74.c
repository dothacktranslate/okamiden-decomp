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

extern int func_02036edc();
extern int func_0203ba20();
extern int func_0203ba90();
extern int func_02041050();
extern int func_0205bccc();

void func_02040f74(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;

  iVar2 = ((unsigned int)0x02041028);
  if ((*(uint *)(param_1 + 0x18) & 4) == 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    bVar1 = true;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar3 = func_02036edc((*(unsigned int *)0x0204102c),*(undefined4 *)(iVar2 + iVar5 * 4));
        if (((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) == 0)) || (*(int *)(iVar3 + 0x10) == 0)) {
          bVar1 = false;
        }
        iVar3 = *(int *)(param_1 + 0x30);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    iVar2 = ((unsigned int)0x02041028);
    if (bVar1) {
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          uVar4 = func_02036edc((*(unsigned int *)0x0204102c),*(undefined4 *)(iVar2 + iVar5 * 4));
          iVar3 = *(int *)(((unsigned int)0x02041030) + iVar5 * 4);
          if (iVar3 == 0) {
            func_0203ba20(uVar4,0);
          }
          else if (iVar3 == 1) {
            func_0203ba90(uVar4,0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x30));
      }
      func_02041050(param_1,1);
    }
  }
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (piVar6 = *(int **)(param_1 + 0x10); piVar6 != (int *)(param_1 + 0x10);
        piVar6 = (int *)*piVar6) {
      if ((piVar6[2] & 1U) != 0) {
        func_0205bccc();
        (**(code **)(piVar6[-1] + 0x10))();
      }
    }
  }
  return;
}
