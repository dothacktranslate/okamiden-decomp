#pragma thumb on

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

extern int func_02000c00();
extern int func_02000c0c();
extern int func_0201e9d4();


void func_02045060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;

  iVar1 = (int)(uint)*(ushort *)(param_1 + 0x24) >> 4;
  uStack_18 = param_4;
  func_02000c00(auStack_28,(int)*(short *)(((unsigned int)0x020450b8) + iVar1 * 4),
               (int)*(short *)(((unsigned int)0x020450b8) + (iVar1 * 2 + 1) * 2));
  func_02000c0c(auStack_28,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  uVar2 = func_0201e9d4(0x1000000,*(undefined4 *)(param_1 + 0x1c));
  uVar3 = func_0201e9d4(0x1000000,*(undefined4 *)(param_1 + 0x20));
  func_02000c0c(auStack_28,param_3,uVar2,uVar3);
  return;
}
