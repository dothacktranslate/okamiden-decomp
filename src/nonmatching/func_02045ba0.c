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

extern int func_02046204();
extern int func_02046444();
extern int func_02046830();
extern int func_02046ae8();
extern int func_02046d44();
extern int func_020471a4();


undefined4 func_02045ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;

  pcVar4 = *(code **)(param_1 + 0x14);
  if (pcVar4 != (code *)0x0) {
    uVar5 = (*pcVar4)(param_1,*(undefined4 *)(param_1 + 0x18),pcVar4,param_4,param_4);
    iVar1 = ((unsigned int)0x02045c4c);
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) {
        iVar3 = (int)*(char *)(param_1 + 0x28);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        func_02046ae8(iVar2,((unsigned int)0x02045c4c),param_1 + 0x28);
        iVar3 = func_02046444(*(undefined4 *)(param_1 + 0x10),iVar1 >> 0xe);
        func_02046204(*(undefined4 *)(param_1 + 0x10),0xfffffffe);
        if (iVar3 == 6) {
          func_02046830(*(undefined4 *)(param_1 + 0x10));
          func_02046d44(*(undefined4 *)(param_1 + 0x10),((unsigned int)0x02045c4c),param_1 + 0x28);
          func_020471a4(*(undefined4 *)(param_1 + 0x10),2,0);
        }
      }
      return 1;
    }
  }
  return 0;
}
