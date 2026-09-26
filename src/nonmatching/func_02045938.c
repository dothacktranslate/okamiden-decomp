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

extern int func_02035924();
extern int func_020572a8();
extern int func_0205737c();


undefined4 *
func_02045938(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;

  *param_1 = ((unsigned int)0x02045a08);
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  func_02035924(param_1 + 3);
  param_1[0x11a] = 0;
  param_1[0x11c] = param_5;
  uVar1 = ((unsigned int)0x02045a0c);
  param_1[0x11b] = 0;
  *param_1 = uVar1;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  func_020572a8();
  func_0205737c(param_1 + 0x108,0,0x80,0);
  func_0205737c(param_1 + 0x10f,0,0x80,1);
  param_1[0x117] = param_3 + 0x200;
  param_1[0x118] = param_3 + 0x400;
  param_1[0x119] = param_4;
  uVar2 = 0;
  uVar1 = extraout_r1;
  if (param_5 != 0) {
    uVar2 = param_7;
    uVar1 = param_6;
  }
  param_1[0x116] = param_3;
  if (param_5 != 0) {
    param_1[0x11b] = uVar2;
    param_1[0x11a] = uVar1;
  }
  return param_1;
}
