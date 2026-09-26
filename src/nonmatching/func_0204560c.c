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

extern int func_02035834();
extern int func_0204501c();
extern int func_02045024();
extern int func_02045038();
extern int func_020581b0();


undefined4 * func_0204560c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_28 [20];

  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_020581b0(param_3,param_4);
      iVar4 = iVar4 + 0x18;
    }
  }
  else {
    iVar4 = 0x5c;
  }
  puVar2 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),iVar4 + 0x38,4,param_5)
  ;
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    uVar1 = ((unsigned int)0x02045704);
    puVar2[2] = 0;
    *puVar2 = uVar1;
    func_02045038();
  }
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_020456d8;
    puVar5 = puVar2 + 0xe;
    if (puVar5 != (undefined4 *)0x0) {
      func_02045024(puVar5);
    }
    puVar2[0xb] = puVar5;
    uVar3 = puVar2[3] | 0x200;
  }
  else {
    puVar5 = puVar2 + 0xe;
    if (puVar5 != (undefined4 *)0x0) {
      func_0204501c(puVar5);
    }
    puVar2[0xb] = puVar5;
    uVar3 = puVar2[3] | 0x100;
  }
  puVar2[3] = uVar3;
LAB_020456d8:
  func_02035834(auStack_28,param_1 + 0xc,param_1 + 0x10,puVar2 + 1);
  return puVar2;
}
