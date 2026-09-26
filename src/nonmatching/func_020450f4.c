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
extern int func_02045938();
extern int func_0x01ff9f58();


int func_020450f4(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if ((*(unsigned int *)0x020451fc) == 0) {
    if (param_1 < 0x4000) {
      param_1 = 0x4000;
    }
    if (0x1f - LZCOUNT(((unsigned int)0x02045200)) < 1) {
      iVar4 = 4;
    }
    else {
      iVar4 = (0x20 - LZCOUNT(((unsigned int)0x02045200))) * 8;
    }
    iVar4 = param_1 + 0xa74 + iVar4;
    iVar5 = param_2 * 0x24 + iVar4;
    iVar1 = func_02032bcc(param_2 * 0x14 + iVar5,4,((unsigned int)0x02045204));
    if (iVar1 != 0) {
      uVar2 = func_0x01ff9f58((*(unsigned int *)0x02045208),iVar1 + 0x474,param_1,0);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = func_02045938(iVar1,uVar2,param_1 + 0x474 + iVar1,param_1 + 0xa74 + iVar1,param_2,
                             iVar4 + iVar1,iVar5 + iVar1,param_4);
      }
      (*(unsigned int *)0x020451fc) = iVar3;
      return iVar3;
    }
  }
  return 0;
}
