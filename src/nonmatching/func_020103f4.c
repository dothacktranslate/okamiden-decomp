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

extern int func_02010834();
extern int func_020108d4();
extern int func_02010a18();

void func_020103f4(undefined4 param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint *puVar11;

  puVar3 = ((unsigned int)0x02010830);
  puVar11 = ((unsigned int)0x0201082c);
  iVar2 = ((unsigned int)0x02010828);
  puVar1 = ((unsigned int)0x02010824);
  if (param_3 != 0) {
    if (*(int *)(((unsigned int)0x02010828) + 0x1c) != 0) {
      *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 0;
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    pcVar8 = *(code **)(iVar2 + 8);
    if (pcVar8 == (code *)0x0) {
      return;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    (*pcVar8)(6,*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  if ((param_2 & 0x7f00) == 0x3000) {
    if (*(code **)(((unsigned int)0x02010828) + 0x20) == (code *)0x0) {
      return;
    }
    (**(code **)(((unsigned int)0x02010828) + 0x20))();
    return;
  }
  if ((param_2 & 0xff) != 0) {
    *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 0;
    switch(param_2 & 0xff) {
    case 1:
      goto LAB_020107a8;
    case 2:
      uVar9 = 5;
      break;
    case 3:
      uVar9 = 1;
      break;
    case 4:
    default:
      uVar9 = 6;
    }
    goto LAB_020107ec;
  }
  uVar9 = 0;
  switch(*(undefined4 *)(((unsigned int)0x02010828) + 0x18)) {
  case 0:
    puVar10 = *(undefined4 **)(((unsigned int)0x02010828) + 0xc);
    uVar4 = func_02010834((*(unsigned int *)0x0201082c) & 0xff);
    *puVar10 = uVar4;
    uVar4 = func_02010834((*puVar11 & 0x1fff) >> 8);
    puVar10[1] = uVar4;
    uVar4 = func_02010834((*puVar11 & 0x3fffff) >> 0x10);
    puVar10[2] = uVar4;
    uVar4 = func_02010a18(puVar10);
    puVar10[3] = uVar4;
    break;
  case 1:
    puVar10 = *(undefined4 **)(((unsigned int)0x02010828) + 0xc);
    uVar4 = func_02010834((*(unsigned int *)0x02010830) & 0x3f);
    *puVar10 = uVar4;
    uVar4 = func_02010834((*puVar3 & 0x7fff) >> 8);
    puVar10[1] = uVar4;
    uVar5 = *puVar3;
    goto LAB_02010554;
  case 2:
    puVar10 = *(undefined4 **)(((unsigned int)0x02010828) + 0xc);
    uVar4 = func_02010834((*(unsigned int *)0x0201082c) & 0xff);
    *puVar10 = uVar4;
    uVar4 = func_02010834((*puVar11 & 0x1fff) >> 8);
    puVar10[1] = uVar4;
    uVar4 = func_02010834((*puVar11 & 0x3fffff) >> 0x10);
    puVar10[2] = uVar4;
    uVar4 = func_02010a18(puVar10);
    puVar10[3] = uVar4;
    puVar10 = *(undefined4 **)(iVar2 + 0x10);
    uVar4 = func_02010834(puVar11[1] & 0x3f);
    *puVar10 = uVar4;
    uVar4 = func_02010834((puVar11[1] & 0x7fff) >> 8);
    puVar10[1] = uVar4;
    uVar5 = puVar11[1];
LAB_02010554:
    uVar4 = func_02010834((uVar5 & 0x7fffff) >> 0x10);
    puVar10[2] = uVar4;
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    if (((*(unsigned int *)0x02010824) & 0xf) == 4) {
      **(undefined4 **)(((unsigned int)0x02010828) + 0xc) = 1;
    }
    else {
      **(undefined4 **)(((unsigned int)0x02010828) + 0xc) = 0;
    }
    break;
  case 7:
    if ((int)((uint)(*(unsigned int *)0x02010824) << 0x19) < 0) {
      **(undefined4 **)(((unsigned int)0x02010828) + 0xc) = 1;
    }
    else {
      **(undefined4 **)(((unsigned int)0x02010828) + 0xc) = 0;
    }
    break;
  case 8:
    puVar11 = *(uint **)(((unsigned int)0x02010828) + 0xc);
    *puVar11 = (*(unsigned int *)0x02010830) & 7;
    uVar5 = func_02010834((*puVar3 & 0x3fff) >> 8);
    puVar11[1] = uVar5;
    uVar5 = func_02010834((*puVar3 & 0x7fffff) >> 0x10);
    puVar11[2] = uVar5;
    puVar11[3] = 0;
    if ((int)(*puVar3 << 0x18) < 0) {
      puVar11[3] = puVar11[3] + 1;
    }
    if ((int)((*(unsigned int *)0x02010830) << 0x10) < 0) {
      puVar11[3] = puVar11[3] + 2;
    }
    if ((int)((*(unsigned int *)0x02010830) << 8) < 0) {
      puVar11[3] = puVar11[3] + 4;
    }
    break;
  case 9:
    if (*(int *)(((unsigned int)0x02010828) + 0x1c) != 0) {
LAB_02010728:
      *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 0;
      break;
    }
    if (**(int **)(((unsigned int)0x02010828) + 0xc) == 1) {
      if (((*(unsigned int *)0x02010824) & 0xf) == 4) break;
      *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 1;
      uVar7 = *puVar1 & 0xfff0 | 4;
    }
    else {
      if (((*(unsigned int *)0x02010824) & 0xf) == 0) break;
      *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 1;
      uVar7 = *puVar1 & 0xfff0;
    }
    goto LAB_02010788;
  case 10:
    if (*(int *)(((unsigned int)0x02010828) + 0x1c) != 0) goto LAB_02010728;
    if (**(int **)(((unsigned int)0x02010828) + 0xc) == 1) {
      if ((int)((uint)(*(unsigned int *)0x02010824) << 0x19) < 0) break;
      *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 1;
      uVar7 = *puVar1 | 0x40;
    }
    else {
      if (-1 < (int)((uint)(*(unsigned int *)0x02010824) << 0x19)) break;
      *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 1;
      uVar7 = *puVar1 & 0xffbf;
    }
LAB_02010788:
    *puVar1 = uVar7;
    iVar6 = func_020108d4();
    if (iVar6 == 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      uVar9 = 3;
    }
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  default:
    *(undefined4 *)(((unsigned int)0x02010828) + 0x1c) = 0;
LAB_020107a8:
    uVar9 = 4;
  }
LAB_020107ec:
  if (*(int *)(iVar2 + 0x1c) != 0) {
    return;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  pcVar8 = *(code **)(iVar2 + 8);
  if (pcVar8 == (code *)0x0) {
    return;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  (*pcVar8)(uVar9,*(undefined4 *)(iVar2 + 0x14));
  return;
}
