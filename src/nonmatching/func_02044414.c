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

extern int func_0205a3f0();
extern int func_0205a4e8();


void func_02044414(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r5;
  bool bVar3;

  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(short *)(param_1 + 0x12) != 4) {
    *(undefined4 *)(iVar2 + 8) = 4;
    func_0205a4e8(*(undefined4 *)(iVar2 + 4),param_1 + 0x14,*(undefined4 *)(param_2 + 0x2c),
                 *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),0,0,0,0,
                 *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x24),0);
    return;
  }
  iVar1 = (**(code **)(((unsigned int)0x0204452c) + (uint)*(ushort *)(param_2 + 4) * 4))();
  if (((unsigned int)0x02044530) < iVar1) {
    bVar3 = iVar1 == ((unsigned int)0x02044530) + 0x100000;
    if (bVar3 || iVar1 < ((unsigned int)0x02044530) + 0x100000) {
      if (bVar3) {
        unaff_r5 = 2;
      }
    }
    else {
      bVar3 = iVar1 == ((unsigned int)0x02044530) + 0x200000;
      if (bVar3) {
        unaff_r5 = 3;
      }
    }
  }
  else {
    if (((unsigned int)0x02044530) <= iVar1) {
      unaff_r5 = 1;
      *(undefined4 *)(iVar2 + 8) = 1;
      goto LAB_02044490;
    }
    bVar3 = iVar1 == 0x10;
    if (bVar3) {
      unaff_r5 = 0;
    }
  }
  if (bVar3) {
    *(undefined4 *)(iVar2 + 8) = unaff_r5;
  }
LAB_02044490:
  func_0205a3f0(*(undefined4 *)(iVar2 + 4),param_1 + 0x14,*(undefined4 *)(param_2 + 0x2c),
               *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),0,0,0,0,
               *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x24),unaff_r5,0);
  return;
}
