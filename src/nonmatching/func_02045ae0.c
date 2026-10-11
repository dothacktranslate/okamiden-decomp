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

extern int func_02015ad0();
extern int func_020461a4();
extern int func_020461e8();
extern int func_02047028();
extern int func_0204819c();


void func_02045ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x14) = param_7;
  *(undefined4 *)(param_1 + 0x18) = param_8;
  *(undefined4 *)(param_1 + 0x1c) = param_9;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_10 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    func_02015ad0(param_1 + 0x28,param_10,0x20,param_4,param_4);
  }
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = func_020461e8(param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    param_2 = func_020461a4(param_2);
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  func_0204819c(param_2,param_3,param_4,param_5);
  func_02047028(param_2,0,0);
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    **(int **)(param_1 + 0x1c) = param_1;
  }
  return;
}
