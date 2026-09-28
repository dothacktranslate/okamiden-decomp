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

extern int func_02007ca4();
extern int func_02007cc0();
extern int func_02008b6c();
extern int func_02008b80();

undefined4 * func_02007d90(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;

  uVar1 = func_02008b6c();
  piVar4 = *(int **)(((unsigned int)0x02007e94) + param_1 * 4);
  if (piVar4 == (int *)0x0) {
    func_02008b80();
    return (undefined4 *)0x0;
  }
  if (param_2 < 0) {
    param_2 = *piVar4;
  }
  iVar6 = param_2 * 0xc + piVar4[4];
  uVar8 = param_3 + 0x3fU & 0xffffffe0;
  for (puVar7 = *(undefined4 **)(iVar6 + 4);
      (puVar7 != (undefined4 *)0x0 && ((int)puVar7[2] < (int)uVar8));
      puVar7 = (undefined4 *)puVar7[1]) {
  }
  if (puVar7 == (undefined4 *)0x0) {
    func_02008b80(uVar1);
    return (undefined4 *)0x0;
  }
  iVar5 = puVar7[2];
  if (iVar5 - uVar8 < 0x40) {
    uVar2 = func_02007cc0(*(undefined4 **)(iVar6 + 4),puVar7);
    *(undefined4 *)(iVar6 + 4) = uVar2;
  }
  else {
    puVar7[2] = uVar8;
    piVar4 = (int *)((int)puVar7 + uVar8);
    piVar4[2] = iVar5 - uVar8;
    *(undefined4 *)((int)puVar7 + uVar8) = *puVar7;
    puVar3 = (undefined4 *)puVar7[1];
    piVar4[1] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = piVar4;
    }
    if (*piVar4 == 0) {
      *(int **)(iVar6 + 4) = piVar4;
    }
    else {
      *(int **)(*piVar4 + 4) = piVar4;
    }
  }
  uVar2 = func_02007ca4(*(undefined4 *)(iVar6 + 8),puVar7);
  *(undefined4 *)(iVar6 + 8) = uVar2;
  func_02008b80(uVar1);
  return puVar7 + 8;
}
