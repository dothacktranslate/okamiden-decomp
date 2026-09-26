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

extern int func_02007820();
extern int func_02039090();


void func_02044b6c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;

  uVar2 = (uint)((param_3 & 1) != 0);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((param_3 & 2) == 0) {
    func_02039090((*(unsigned int *)0x02044bec),*(undefined4 *)(((unsigned int)0x02044bf0) + uVar2 * 4),param_2,
                 *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x10),param_4);
    return;
  }
  func_02007820(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x10));
  (**(code **)(((unsigned int)0x02044be8) + uVar2 * 4))
            (*(undefined4 *)(iVar1 + 0x14),param_2,*(undefined4 *)(iVar1 + 0x10));
  return;
}
