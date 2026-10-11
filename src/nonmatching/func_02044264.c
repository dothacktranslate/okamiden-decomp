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

extern int func_02059bf0();
extern int func_02059dbc();
extern int func_02059e18();


void func_02044264(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r6;

  iVar1 = (**(code **)((uint)*(ushort *)(param_2 + 4) * 0x18 + ((unsigned int)0x0204435c) +
                      (uint)*(ushort *)(param_2 + 6) * 4))();
  iVar3 = *(int *)(((unsigned int)0x02044364) + (uint)*(ushort *)(param_2 + 4) * 4);
  iVar2 = (**(code **)(((unsigned int)0x02044360) + (uint)*(ushort *)(param_2 + 4) * 4))();
  if (((unsigned int)0x02044368) < iVar2) {
    if (((unsigned int)0x02044368) + 0x100000 < iVar2) {
      if (iVar2 == ((unsigned int)0x02044368) + 0x200000) {
        unaff_r6 = 3;
      }
    }
    else if (iVar2 == ((unsigned int)0x02044368) + 0x100000) {
      unaff_r6 = 2;
    }
  }
  else if (iVar2 < ((unsigned int)0x02044368)) {
    if (iVar2 == 0x10) {
      unaff_r6 = 0;
    }
  }
  else {
    unaff_r6 = 1;
  }
  func_02059dbc(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  func_02059bf0(param_1 + 0x14,iVar1 + (*(int *)(param_2 + 8) << (unaff_r6 & 0xff)) * 0x20,
               *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),4);
  func_02059e18(iVar3 + *(int *)(param_2 + 0x28) * 8,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               *(undefined4 *)(param_2 + 0x18),0,*(undefined4 *)(param_2 + 8),unaff_r6);
  return;
}
