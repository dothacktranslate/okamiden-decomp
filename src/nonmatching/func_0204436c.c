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

extern int func_02059c74();
extern int func_02059dbc();
extern int func_0205a118();


void func_0204436c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (**(code **)((uint)*(ushort *)(param_2 + 4) * 0x18 + ((unsigned int)0x0204440c) +
                      (uint)*(ushort *)(param_2 + 6) * 4))();
  iVar2 = *(int *)(((unsigned int)0x02044410) + (uint)*(ushort *)(param_2 + 4) * 4);
  func_02059dbc(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  func_02059c74(param_1 + 0x14,iVar1 + *(int *)(param_2 + 8) * 0x20,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),4);
  func_0205a118(iVar2 + *(int *)(param_2 + 0x28) * 8,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
               *(undefined4 *)(param_2 + 0x18),0,*(undefined4 *)(param_2 + 8));
  return;
}
