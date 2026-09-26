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


undefined4 * func_02043f20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = ((unsigned int)0x02043f48);
  param_1[1] = param_2;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  func_02035924();
  *param_1 = ((unsigned int)0x02043f4c);
  return param_1;
}
