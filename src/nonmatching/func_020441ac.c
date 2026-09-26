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

extern int func_02059bc4();
extern int func_02059cb0();


void func_020441ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = (**(code **)((uint)*(ushort *)(param_2 + 4) * 0x18 + ((unsigned int)0x0204425c) +
                      (uint)*(ushort *)(param_2 + 6) * 4))();
  uVar2 = (**(code **)((uint)*(ushort *)(param_2 + 4) * 0x18 + ((unsigned int)0x02044260) +
                      (uint)*(ushort *)(param_2 + 6) * 4))();
  func_02059bc4(param_1 + 0x14,iVar1 + *(int *)(param_2 + 8) * 0x20,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),4);
  func_02059cb0(uVar2,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
               *(int *)(param_2 + 0x14) >> 3,*(int *)(param_2 + 0x18) >> 3,0x20,
               *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x24),param_4);
  return;
}
