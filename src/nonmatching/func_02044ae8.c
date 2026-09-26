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

extern int func_02036eb8();
extern int func_020449e8();


void func_02044ae8(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  if ((param_2 & 0x8100) != 0) {
    uVar2 = func_020449e8(param_1,0);
    func_02036eb8((*(unsigned int *)0x02044b58),uVar2);
  }
  puVar1 = ((unsigned int)0x02044b58);
  iVar3 = 0;
  uVar4 = 0x200;
  do {
    if ((param_2 & (uVar4 | uVar4 << 7)) != 0) {
      uVar2 = func_020449e8(param_1,iVar3);
      func_02036eb8(*puVar1,uVar2);
    }
    uVar4 = uVar4 * 2;
    iVar3 = iVar3 + 1;
  } while (uVar4 < 0x4001);
  return;
}
