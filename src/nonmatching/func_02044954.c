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

extern int func_02056744();


void func_02044954(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;

  uStack_c = param_4;
  iVar1 = func_02056744(param_1,&local_10);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x10) = local_10;
  }
  return;
}
