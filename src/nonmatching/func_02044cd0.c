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


void func_02044cd0(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = (uint)(3 < (int)param_1);
  iVar1 = *(int *)(param_2 + 0x10);
  if ((param_4 & 2) == 0) {
    bVar3 = (param_4 & 4) != 0;
    if (bVar3) {
      param_1 = uVar2 + 2;
    }
    if (bVar3) {
      uVar2 = param_1 & 0xffff;
    }
    func_02039090((*(unsigned int *)0x02044da0),*(undefined4 *)(((unsigned int)0x02044da4) + uVar2 * 4),param_3,
                 *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8));
    return;
  }
  func_02007820(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8),param_3,param_4,param_4);
  if ((param_4 & 4) == 0) {
    (**(code **)(((unsigned int)0x02044d9c) + uVar2 * 4))
              (*(undefined4 *)(iVar1 + 0xc),param_3,*(undefined4 *)(iVar1 + 8));
    return;
  }
  (**(code **)(((unsigned int)0x02044d90) + uVar2 * 4))();
  (**(code **)(((unsigned int)0x02044d94) + uVar2 * 4))
            (*(undefined4 *)(iVar1 + 0xc),param_3,*(undefined4 *)(iVar1 + 8));
  (**(code **)(((unsigned int)0x02044d98) + uVar2 * 4))();
  return;
}
