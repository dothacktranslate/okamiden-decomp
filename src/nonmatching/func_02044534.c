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

extern int func_0204409c();
extern int func_02044144();
extern int func_020441ac();
extern int func_02044264();
extern int func_0204436c();
extern int func_02044414();


undefined4 * func_02044534(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  *param_1 = ((unsigned int)0x020445e8);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xf] = 0;
  param_1[3] = 0x248;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)(param_2 + 6);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) >> 3;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) >> 3;
  if (*(ushort *)((int)param_1 + 0x12) < 4) {
    func_020441ac();
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)((int)param_1 + 0x42) = 0;
  }
  else {
    if (*(ushort *)((int)param_1 + 0x12) == 4) {
      uVar1 = func_02044264();
    }
    else {
      uVar1 = func_0204436c();
    }
    func_0204409c(*(int *)(((unsigned int)0x020445ec) + (uint)*(ushort *)(param_2 + 4) * 4) +
                 *(int *)(param_2 + 0x28) * 8,uVar1,0,0,*(undefined4 *)(param_2 + 0x24),0,0,0,
                 param_4);
    *(short *)(param_1 + 0x10) = (short)*(undefined4 *)(param_2 + 0x28);
    *(short *)((int)param_1 + 0x42) = (short)uVar1;
    iVar2 = func_02044144(param_1 + 5);
    param_1[0xf] = iVar2;
    if (iVar2 != 0) {
      func_02044414(param_1,param_2);
    }
  }
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[0xb] = param_1 + 5;
  param_1[0xc] = param_3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar3;
  return param_1;
}
