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


undefined4 func_02043edc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;

  uVar1 = func_020346b8(*(signed char *)(4 + param_1),4);
  if (param_2 < uVar1) {
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))
                      (*(int **)(param_1 + 4),param_2,4,0,uVar1,param_4);
    return uVar2;
  }
  return 0;
}
