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

extern int func_02032c20();
extern int func_02035870();


undefined4 func_020446f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;

  if (param_2 != 0) {
    uStack_10 = param_4;
    if (*(int *)(param_2 + 0x3c) != 0) {
      func_02032c20();
      *(undefined4 *)(param_2 + 0x3c) = 0;
    }
    func_02035870(&uStack_10,param_1 + 0xc,param_2 + 4);
    (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),param_2);
    return 1;
  }
  return 0;
}
