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

extern int func_02036db8();
extern int func_020449c0();


void func_02044a24(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_a8 [128];
  undefined4 uStack_28;

  if ((param_2 & 0x100) == 0) {
    iVar2 = ((unsigned int)0x02044ae0);
    if ((param_2 & 0x8000) == 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x10000;
  }
  uStack_28 = param_4;
  if (iVar2 != 0) {
    func_020449c0(auStack_a8,param_1,0);
    func_02036db8((*(unsigned int *)0x02044ae4),auStack_a8,iVar2);
  }
  puVar1 = ((unsigned int)0x02044ae4);
  iVar2 = 0;
  uVar3 = 0x200;
  do {
    if ((param_2 & (uVar3 | uVar3 << 7)) != 0) {
      func_020449c0(auStack_a8,param_1,iVar2);
      func_02036db8(*puVar1,auStack_a8,(param_2 & uVar3 << 7) != 0);
    }
    uVar3 = uVar3 * 2;
    iVar2 = iVar2 + 1;
  } while (uVar3 < 0x4001);
  return;
}
