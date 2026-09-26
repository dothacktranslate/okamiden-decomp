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

extern int func_02044998();


uint func_020449a4(uint param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = func_02044998(param_2);
  return param_1 >> (iVar1 + 5U & 0xff);
}
