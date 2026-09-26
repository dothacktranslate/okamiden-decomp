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
extern int func_02043a48();
extern int func_0x01ff9f58();


int func_020438c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if (((*(unsigned int *)0x0204393c) == 0) &&
     (iVar1 = func_02032bcc(param_1 + 0x18,4,((unsigned int)0x02043940),param_4,param_4), iVar1 != 0)) {
    uVar2 = func_0x01ff9f58((*(unsigned int *)0x02043944),iVar1 + 0x18,param_1,0);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = func_02043a48(iVar1,uVar2);
    }
    (*(unsigned int *)0x0204393c) = iVar3;
    return iVar3;
  }
  return 0;
}
