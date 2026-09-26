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

extern int func_02035870();


void func_02043df8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 local_14;

  func_02035870(&local_14,param_2 + 0xc,param_3 + 4);
  *param_1 = local_14;
  (**(code **)(**(int **)(param_2 + 4) + 0xc))(*(int **)(param_2 + 4),param_3);
  return;
}
