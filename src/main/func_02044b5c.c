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

extern int func_020449e8();


undefined4 func_02044b5c(void)

{
  int iVar1;

  iVar1 = func_020449e8();
  return *(undefined4 *)(iVar1 + 0x10);
}
