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

extern int func_0200b724();
extern int func_0200b74c();
extern int func_0200b7f0();

int func_0200b848(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *pcVar9;

  iVar1 = *(int *)(param_1 + 8);
  puVar8 = *(undefined4 **)(iVar1 + 0x24);
  if (0x22 < param_2) {
    iVar1 = 4;
    goto LAB_0200bb78;
  }
  if (puVar8[param_2] == 0) {
    iVar1 = 4;
    goto LAB_0200bb78;
  }
  iVar2 = param_1;
  switch(param_2) {
  case 0:
    piVar7 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)*puVar8;
    goto LAB_0200b91c;
  case 1:
    piVar7 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[1];
LAB_0200b91c:
    piVar4 = piVar7 + 1;
    iVar5 = *piVar7;
    break;
  case 2:
    piVar4 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[2];
    goto LAB_0200b93c;
  case 3:
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[3];
    goto LAB_0200b954;
  case 4:
    piVar7 = *(int **)(param_1 + 0x10);
    piVar4 = piVar7 + 2;
    iVar5 = piVar7[1];
    pcVar9 = (code *)puVar8[4];
    iVar2 = *piVar7;
    break;
  case 5:
    iVar5 = **(int **)(param_1 + 0x10);
    piVar4 = (int *)(*(int **)(param_1 + 0x10))[1];
    pcVar9 = (code *)puVar8[5];
    break;
  case 6:
    piVar4 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[6];
    goto LAB_0200b93c;
  case 7:
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    piVar4 = *(int **)(*(int *)(param_1 + 0x10) + 8);
    pcVar9 = (code *)puVar8[7];
    break;
  case 8:
    pcVar9 = (code *)puVar8[8];
    goto LAB_0200ba94;
  case 9:
    (*(code *)puVar8[9])();
    return 0;
  case 10:
    (*(code *)puVar8[10])();
    return 0;
  case 0xb:
    (*(code *)puVar8[0xb])();
    return 0;
  case 0xc:
    (*(code *)puVar8[0xc])();
    return 0;
  case 0xd:
    iVar5 = **(int **)(param_1 + 0x10);
    piVar4 = (int *)(*(int **)(param_1 + 0x10))[1];
    pcVar9 = (code *)puVar8[0xd];
    break;
  case 0xe:
    iVar5 = *(int *)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0xe];
    piVar4 = *(int **)(iVar5 + 4);
    break;
  case 0xf:
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0xf];
    goto LAB_0200b958;
  case 0x10:
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x10];
    goto LAB_0200b958;
  case 0x11:
    (*(code *)puVar8[0x11])();
    return 0;
  case 0x12:
    (*(code *)puVar8[0x12])();
    return 0;
  case 0x13:
    pcVar9 = (code *)puVar8[0x13];
    iVar2 = *(int *)(param_1 + 0x10);
    goto LAB_0200ba94;
  case 0x14:
    piVar7 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x14];
    goto LAB_0200baf4;
  case 0x15:
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x15];
    goto LAB_0200bab0;
  case 0x16:
    piVar7 = *(int **)(param_1 + 0x10);
    iVar5 = piVar7[1];
    piVar4 = (int *)piVar7[2];
    pcVar9 = (code *)puVar8[0x16];
    iVar2 = *piVar7;
    break;
  case 0x17:
    piVar7 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x17];
    goto LAB_0200baf4;
  case 0x18:
    piVar7 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x18];
    goto LAB_0200baf4;
  case 0x19:
    piVar7 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x19];
LAB_0200baf4:
    iVar5 = piVar7[1];
    piVar4 = (int *)piVar7[2];
    iVar2 = *piVar7;
    break;
  case 0x1a:
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x1a];
LAB_0200bab0:
    iVar1 = (*pcVar9)(iVar1,*puVar3,puVar3[1]);
    goto LAB_0200bb78;
  case 0x1b:
    piVar7 = *(int **)(param_1 + 0x10);
    iVar5 = piVar7[1];
    piVar4 = (int *)piVar7[2];
    pcVar9 = (code *)puVar8[0x1b];
    iVar2 = *piVar7;
    break;
  case 0x1c:
    pcVar9 = (code *)puVar8[0x1c];
    iVar2 = **(int **)(param_1 + 0x10);
    goto LAB_0200ba94;
  case 0x1d:
  default:
    iVar1 = 4;
    goto LAB_0200bb78;
  case 0x1e:
    pcVar9 = (code *)puVar8[0x1e];
    goto LAB_0200ba94;
  case 0x1f:
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x1f];
LAB_0200b954:
    uVar6 = *puVar3;
LAB_0200b958:
    iVar1 = (*pcVar9)(iVar1,param_1,uVar6);
    goto LAB_0200bb78;
  case 0x20:
    iVar5 = **(int **)(param_1 + 0x10);
    piVar4 = (int *)(*(int **)(param_1 + 0x10))[1];
    pcVar9 = (code *)puVar8[0x20];
    break;
  case 0x21:
    pcVar9 = (code *)puVar8[0x21];
LAB_0200ba94:
    iVar1 = (*pcVar9)(iVar1,iVar2);
    goto LAB_0200bb78;
  case 0x22:
    piVar4 = *(int **)(param_1 + 0x10);
    pcVar9 = (code *)puVar8[0x22];
LAB_0200b93c:
    iVar5 = *piVar4;
    piVar4 = (int *)piVar4[1];
  }
  iVar1 = (*pcVar9)(iVar1,iVar2,iVar5,piVar4);
LAB_0200bb78:
  iVar2 = func_0200b724(param_2);
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
      if (iVar1 != 0x100) {
        func_0200b74c(param_1,iVar1);
      }
    }
    else {
      iVar1 = func_0200b7f0(param_1,iVar1);
    }
  }
  return iVar1;
}
