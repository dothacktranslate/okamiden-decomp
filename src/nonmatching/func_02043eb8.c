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

extern int func_02043df8();


undefined4 func_02043eb8(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;

  if (param_2 != (int *)0x0) {
    uStack_10 = param_4;
    (**(code **)(*param_2 + 8))();
    func_02043df8(&uStack_10,param_1,param_2);
    return 1;
  }
  return 0;
}
