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


void func_02044044(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined2 *)((int)param_1 + 6) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80;
  param_1[0xc] = 0x60;
  param_1[0xd] = 0;
  return;
}
