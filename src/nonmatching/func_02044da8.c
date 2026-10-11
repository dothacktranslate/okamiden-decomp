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

extern int func_02007820();
extern int func_02039090();


void func_02044da8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;

  iVar1 = *(int *)(param_2 + 0x10);
  if ((param_4 & 2) != 0) {
    func_02007820(iVar1 + 0xc);
    (**(code **)(((unsigned int)0x02044e14) + param_1 * 4))(iVar1 + 0xc,param_3,*(undefined4 *)(iVar1 + 8));
    return;
  }
  func_02039090((*(unsigned int *)0x02044e18),*(undefined4 *)(((unsigned int)0x02044e1c) + param_1 * 4),param_3,iVar1 + 0xc,
               *(undefined4 *)(iVar1 + 8),param_4);
  return;
}
