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

extern int func_020568cc();
extern int func_02057d64();


void func_020450bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *puVar2 = param_3;
  uVar1 = func_020568cc(param_3,param_4,param_3,param_4,param_4);
  func_02057d64(puVar2 + 1,uVar1,param_2);
  return;
}
