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
extern int func_02057da0();


void func_020450dc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  uVar1 = func_020568cc(*puVar2);
  func_02057da0(puVar2 + 1,uVar1);
  puVar2[4] = 1;
  return;
}
