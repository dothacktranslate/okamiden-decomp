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

extern int func_02056ac0();
extern int func_02056afc();


void func_02044898(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_18;

  iVar1 = func_02056afc(param_1,&uStack_18);
  iVar2 = func_02056ac0(param_1,&uStack_14);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x10) = uStack_14;
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 + 0x14) = uStack_18;
    }
    return;
  }
  return;
}
