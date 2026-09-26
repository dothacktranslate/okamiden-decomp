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

extern int func_020154e8();
extern int func_02045238();
extern int func_02045320();
extern int func_02057858();


void func_02045748(int param_1)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r5;
  int *piVar2;

  if ((*(uint *)(param_1 + 8) & 0x100) != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x18) != 0) {
    func_02057858(param_1 + 0x420);
    unaff_r4 = (uint)*(ushort *)(param_1 + 0x18);
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    func_02057858(param_1 + 0x43c);
    unaff_r5 = (uint)*(ushort *)(param_1 + 0x1a);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  uVar1 = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  for (; piVar2 != (int *)(param_1 + 0x10); piVar2 = (int *)*piVar2) {
    uVar1 = piVar2[2];
    if ((uVar1 & 1) != 0) {
      uVar1 = func_02045238(param_1);
    }
  }
  if (unaff_r4 == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x18);
  }
  if (unaff_r4 != 0 || uVar1 != 0) {
    func_02045320(param_1,0);
    uVar1 = *(uint *)(param_1 + 8) | 2;
    *(uint *)(param_1 + 8) = uVar1;
  }
  if (unaff_r5 == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x1a);
  }
  if (unaff_r5 != 0 || uVar1 != 0) {
    func_02045320(param_1,1);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_020154e8(*(undefined4 *)(param_1 + 0x460),*(short *)(param_1 + 0x1c),4,((unsigned int)0x02045868));
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  return;
}
