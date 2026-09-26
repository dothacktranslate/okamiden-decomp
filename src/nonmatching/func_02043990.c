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

extern int func_020346b8();
extern int func_02035834();
extern int func_02043310();


int func_02043990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  uint local_14;
  undefined4 uStack_10;

  uStack_10 = param_4;
  local_14 = func_020346b8(*(undefined4 *)(param_1 + 4),4);
  if (0x70 < local_14) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),0x70,4,0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_02043310();
    }
    func_02035834(auStack_28,param_1 + 0xc,param_1 + 0x10,iVar2 + 4);
    return iVar2;
  }
  return 0;
}
