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

extern int func_02036edc();
extern int func_020449c0();


void func_020449e8(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];

  func_020449c0(auStack_88,param_1,param_2);
  func_02036edc((*(unsigned int *)0x02044a20),auStack_88);
  return;
}
