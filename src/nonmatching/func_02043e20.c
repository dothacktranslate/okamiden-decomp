#pragma thumb on

typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;

typedef int bool;
typedef int code();

extern int LZCOUNT();

extern int func_020346b8();
extern int func_02035834();
extern int func_02043eb8();
extern int func_0x01fff110();
extern int func_0x01fff148();


int * func_02043e20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *unaff_r7;
  undefined1 auStack_30 [20];
  uint local_1c;
  undefined4 uStack_18;

  uVar3 = 0xffffffff;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar3 = 0xac;
  }
  else if (*(int *)(param_2 + 0x10) == 1) {
    uVar3 = 0x128;
  }
  uStack_18 = param_4;
  local_1c = func_020346b8(*(undefined4 *)(param_1 + 4),4);
  if ((uVar3 < local_1c) &&
     (piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),uVar3,4,0),
     piVar1 != (int *)0x0)) {
    if (*(int *)(param_2 + 0x10) == 0) {
      unaff_r7 = piVar1;
      if (piVar1 != (int *)0x0) {
        unaff_r7 = (int *)func_0x01fff110(piVar1,param_2);
      }
    }
    else if ((*(int *)(param_2 + 0x10) == 1) && (unaff_r7 = piVar1, piVar1 != (int *)0x0)) {
      unaff_r7 = (int *)func_0x01fff148(piVar1,param_2);
    }
    func_02035834(auStack_30,param_1 + 0xc,param_1 + 0x10,unaff_r7 + 1);
    iVar2 = (**(code **)(*unaff_r7 + 0xc))(unaff_r7,param_2);
    if (iVar2 != 0) {
      return unaff_r7;
    }
    func_02043eb8(param_1,unaff_r7);
  }
  return (int *)0x0;
}
