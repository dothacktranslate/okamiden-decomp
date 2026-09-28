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

extern int func_0201edc4();
extern int func_0201f190();
extern int func_0203b220();
extern int func_02046598();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x020ae3f4();
extern int func_0x020ae470();
extern int func_0x020ae8d4();

undefined4 func_02028fac(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_154 [16];
  undefined4 local_114 [64];

  puVar1 = ((unsigned int)0x0202916c);
  iVar9 = *(int *)(*(int *)(*(unsigned int *)0x0202916c) + 0x5c);
  func_020465d8(param_1,2);
  iVar3 = func_020465d8(param_1,1);
  switch(iVar3 - ((unsigned int)0x02029170)) {
  case 0:
    uVar7 = func_020465d8(param_1,3);
    iVar3 = func_020465d8(param_1,4);
    iVar9 = func_0x020ae470(*(undefined4 *)(iVar9 + 0x44),uVar7,local_114,0x40);
    if ((iVar9 != 0) && (iVar12 = 0, 0 < iVar9)) {
      do {
        puVar10 = (uint *)local_114[iVar12];
        if (iVar3 == 0) {
          uVar8 = *puVar10 & 0xfffffffd | 1;
        }
        else {
          uVar8 = *puVar10 | 3;
        }
        iVar12 = iVar12 + 1;
        *puVar10 = uVar8;
      } while (iVar12 < iVar9);
    }
    break;
  case 1:
    uVar4 = func_020465d8(param_1,3);
    uVar5 = func_02046598(param_1,4);
    uVar7 = ((unsigned int)0x02029174);
    func_0201f190(((unsigned int)0x02029174),uVar5);
    uVar8 = func_0201edc4();
    uVar5 = func_02046598(param_1,5);
    func_0201f190(uVar7,uVar5);
    uVar11 = func_0201edc4();
    uVar5 = func_02046598(param_1,6);
    func_0201f190(uVar7,uVar5);
    uVar6 = func_0201edc4();
    iVar3 = func_0x020ae470(*(undefined4 *)(iVar9 + 0x44),uVar4,local_154,0x10);
    if ((iVar3 != 0) && (iVar9 = 0, 0 < iVar3)) {
      do {
        puVar10 = (uint *)local_154[iVar9];
        *puVar10 = *puVar10 | 0x100;
        puVar10[2] = uVar8;
        puVar10[3] = uVar11;
        iVar9 = iVar9 + 1;
        puVar10[4] = uVar6;
      } while (iVar9 < iVar3);
    }
    break;
  case 2:
    iVar3 = func_020465d8(param_1,3);
    uVar2 = func_020465d8(param_1,4);
    iVar9 = func_0x020ae3f4(*(undefined4 *)(*(int *)(*(int *)*puVar1 + 0x5c) + 0x44),uVar2);
    if (iVar3 == 1) {
      uVar11 = *(uint *)(iVar9 + 0xc);
      uVar8 = 1;
    }
    else {
      uVar11 = *(uint *)(iVar9 + 0xc) | 1;
      uVar8 = 2;
    }
    *(uint *)(iVar9 + 0xc) = uVar11 & ~uVar8;
    break;
  case 3:
    uVar7 = func_020465d8(param_1,3);
    iVar3 = func_020465d8(param_1,4);
    func_0x020ae8d4(*(undefined4 *)(iVar9 + 0x44),uVar7,0 < iVar3);
    break;
  case 4:
    uVar8 = func_020465d8(param_1,3);
    uVar2 = func_020465d8(param_1,4);
    iVar3 = func_0x020ae3f4(*(undefined4 *)(*(int *)(*(int *)*puVar1 + 0x5c) + 0x44),uVar2);
    if (uVar8 == 0xffffffff) {
      uVar8 = (uint)*(ushort *)(*(int *)(iVar3 + 0x1c) + 4);
    }
    func_0203b220(iVar3,uVar8 << 0xc);
    break;
  default:
    goto switchD_02028fe0_default;
  }
  func_02046868(param_1,0xffffffff);
switchD_02028fe0_default:
  return 1;
}
