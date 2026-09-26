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

extern int func_02035924();


undefined4 *
func_02044764(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;

  *param_1 = ((unsigned int)0x02044794);
  param_1[1] = param_2;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  func_02035924();
  uVar1 = ((unsigned int)0x02044798);
  param_1[7] = param_4;
  *param_1 = uVar1;
  param_1[6] = param_3;
  return param_1;
}
