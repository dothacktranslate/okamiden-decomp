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

extern int func_02045428();
extern int func_02056d5c();
extern int func_02056d88();
extern int func_020584c4();
extern int func_020584d4();
extern int func_020584e8();
extern int func_020584f8();


void func_0204586c(int param_1)

{
  undefined4 uVar1;

  if ((*(uint *)(param_1 + 8) & 8) == 0) {
    return;
  }
  func_02056d88();
  func_02056d5c();
  uVar1 = func_020584f8();
  func_020584c4(1);
  func_020584e8(0x199);
  func_02045428(param_1);
  func_020584e8(uVar1);
  func_020584c4(0);
  func_020584d4();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  return;
}
