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

extern int func_0205694c();
extern int func_02057db8();


void func_02045238(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar1 = *(int *)(param_2 + 0x1c);
  if (0 < iVar1) {
    iVar1 = *(int *)(param_2 + 0x20);
  }
  if (0 < iVar1) {
    iVar1 = (int)*(short *)(param_2 + 0x26);
  }
  if (iVar1 < 1) {
    return;
  }
  iVar2 = 0;
  bVar3 = (*(uint *)(param_2 + 0xc) & 0x100) == 0;
  iVar1 = 1;
  if (!bVar3) {
    param_3 = *(int **)(param_2 + 0x2c);
    iVar1 = *param_3;
  }
  if (bVar3 || iVar1 == 0) {
    if ((((*(uint *)(param_2 + 0xc) & 0x200) == 0) || (*(int *)(*(int *)(param_2 + 0x2c) + 4) == 0))
       && (*(int *)(param_2 + 0x28) != 0)) {
      iVar2 = func_0205694c(*(int *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x10));
    }
  }
  else {
    iVar2 = param_3[0xd];
    func_02057db8(param_3 + 1,0x1000);
  }
  if (iVar2 == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 0xc) & 4) == 0) {
    if ((*(uint *)(param_2 + 0xc) & 2) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 2;
  }
  *(int *)(*(int *)(param_1 + iVar1 * 4 + 0x458) + (uint)*(ushort *)(param_1 + iVar1 * 2 + 0x18) * 4
          ) = param_2;
  *(int *)(param_2 + 0x34) = iVar2;
  *(short *)(param_1 + 0x18 + iVar1 * 2) = *(short *)(param_1 + 0x18 + iVar1 * 2) + 1;
  return;
}
