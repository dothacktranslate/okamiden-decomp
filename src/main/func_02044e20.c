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
extern int func_02044b6c();
extern int func_02044bf4();


void func_02044e20(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;

  if ((param_1 != 0) && (iVar1 = func_020449e8(param_1,0), iVar1 != 0)) {
    func_02044b6c(iVar1,param_2,param_5);
  }
  if (param_3 == 0) {
    return;
  }
  iVar1 = func_020449e8(param_3,2);
  if (iVar1 == 0) {
    return;
  }
  func_02044bf4(iVar1,param_4,param_5);
  return;
}
