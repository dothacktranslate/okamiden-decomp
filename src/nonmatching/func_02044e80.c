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

extern int func_020449e8();
extern int func_02044c54();
extern int func_02044cd0();
extern int func_02044da8();


void func_02044e80(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = func_020449e8(param_2,3,param_3,param_4,param_4);
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_020449e8(param_3,0);
  }
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = func_020449e8(param_4,2);
  }
  if (iVar2 != 0) {
    func_02044c54(param_1,iVar2,param_6,param_8);
  }
  if (iVar3 != 0) {
    func_02044cd0(param_1,iVar3,param_7,param_8);
  }
  if (iVar1 != 0) {
    func_02044da8(param_1,iVar1,param_5,param_8);
    return;
  }
  return;
}
