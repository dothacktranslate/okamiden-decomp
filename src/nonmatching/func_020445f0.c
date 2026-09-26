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

extern int func_02032bcc();
extern int func_02038b2c();
extern int func_02038ba0();
extern int func_02044764();


int func_020445f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  if ((*(unsigned int *)0x02044668) == 0) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    iVar1 = func_02038ba0(0x44,param_1,4);
    iVar2 = func_02032bcc(iVar1 + 0x20 + param_2 * 8,4,((unsigned int)0x0204466c));
    if (iVar2 != 0) {
      uVar3 = func_02038b2c((*(unsigned int *)0x02044670),iVar2 + 0x20,iVar1,0x44,4,0);
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = func_02044764(iVar2,uVar3,iVar1 + 0x20 + iVar2,param_2);
      }
      (*(unsigned int *)0x02044668) = iVar4;
      return iVar4;
    }
  }
  return 0;
}
