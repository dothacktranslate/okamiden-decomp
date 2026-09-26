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

extern int func_02043380();
extern int func_02043948();


undefined4 func_02043a14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;

  if (param_2 != 0) {
    uStack_10 = param_4;
    func_02043380(param_2);
    func_02043948(&uStack_10,param_1,param_2);
    return 1;
  }
  return 0;
}
