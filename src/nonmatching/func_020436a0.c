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

extern int func_0x01ffdf78();
extern int func_0x01ffefc4();


void func_020436a0(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  iVar1 = func_0x01ffefc4();
  if (iVar1 == 0) {
    func_0x01ffdf78(*(undefined4 *)(param_1 + 0x44));
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  do {
    func_020436a0(iVar1);
    iVar1 = *(int *)(iVar1 + 0x34);
  } while (iVar1 != 0);
  return;
}
