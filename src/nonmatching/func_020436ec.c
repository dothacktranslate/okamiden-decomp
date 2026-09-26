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


void func_020436ec(int param_1)

{
  int iVar1;

  if (*(int **)(param_1 + 0x44) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x44) + 0x14))();
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  do {
    func_020436ec(iVar1);
    iVar1 = *(int *)(iVar1 + 0x34);
  } while (iVar1 != 0);
  return;
}
