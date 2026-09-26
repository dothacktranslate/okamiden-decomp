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

extern int func_0205765c();


void func_020458d0(int param_1)

{
  if ((*(uint *)(param_1 + 8) & 2) != 0) {
    func_0205765c(param_1 + 0x420);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  }
  if ((*(uint *)(param_1 + 8) & 4) == 0) {
    return;
  }
  func_0205765c(param_1 + 0x43c);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
  return;
}
