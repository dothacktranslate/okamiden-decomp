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


void func_02045038(int param_1)

{
  *(undefined4 *)(0xc + param_1) = 1;
  *(unsigned char *)(0x1c + param_1) = 0x1000;
  *(undefined4 *)(param_1 + 0x20) = 0x1000;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0x1f;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}
