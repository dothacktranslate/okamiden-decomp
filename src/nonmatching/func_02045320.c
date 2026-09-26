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
extern int func_02045060();
extern int func_020574d4();
extern int func_020575a0();
extern int func_02057df8();


void func_02045320(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];

  sVar1 = *(short *)(param_1 + param_2 * 2 + 0x18);
  if (sVar1 == 0) {
    return;
  }
  func_020154e8(*(undefined4 *)(param_1 + param_2 * 4 + 0x458),sVar1,4,((unsigned int)0x02045424));
  iVar7 = param_1 + param_2 * 2;
  iVar3 = *(int *)(param_1 + param_2 * 4 + 0x458);
  uVar4 = 0;
  if (*(short *)(iVar7 + 0x18) == 0) {
    return;
  }
  do {
    iVar6 = *(int *)(iVar3 + uVar4 * 4);
    if ((*(uint *)(iVar6 + 0xc) & 0x30000) == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = auStack_34;
      func_02045060(iVar6,puVar5);
      func_020575a0(param_1 + 0x420 + param_2 * 0x1c,auStack_44);
    }
    func_02057df8(param_1 + 0x20,0x80,*(undefined4 *)(iVar6 + 0x34),puVar5);
    func_020574d4(param_1 + 0x420 + param_2 * 0x1c,param_1 + 0x20);
    uVar2 = uVar4 + 1;
    uVar4 = uVar2 & 0xffff;
  } while ((uVar2 & 0xffff) < (uint)*(ushort *)(iVar7 + 0x18));
  return;
}
