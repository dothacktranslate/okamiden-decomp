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

extern int func_020579a4();
extern int func_02057a9c();


void func_02044bf4(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 auStack_1c [20];

  bVar1 = (param_3 & 1) != 0;
  if (bVar1) {
    param_4 = 2;
  }
  if (!bVar1) {
    param_4 = 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_02057a9c(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x14),param_2,param_4,auStack_1c
                );
    return;
  }
  func_020579a4(*(undefined4 *)(param_1 + 0x10),param_2,param_4,auStack_1c);
  return;
}
