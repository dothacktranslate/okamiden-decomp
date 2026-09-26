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


void func_0204409c(uint *param_1,int param_2,short param_3,int param_4,short param_5,uint param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = ((unsigned int)0x02044140);
  iVar2 = 0;
  if (0 < param_2) {
    do {
      *(ushort *)(param_1 + 1) = (ushort)param_1[1] & 0xf3ff | param_3 << 10;
      iVar2 = iVar2 + 1;
      *param_1 = *param_1 & 0xfffff3ff | param_4 << 10;
      *(ushort *)(param_1 + 1) = (ushort)param_1[1] & 0xfff | param_5 << 0xc;
      if (param_6 == 0x100 || param_6 == 0x300) {
        *param_1 = *param_1 & uVar1 | param_6 | param_7 << 0x19;
      }
      else {
        *param_1 = *param_1 & uVar1 | param_6;
      }
      if (param_8 == 0) {
        uVar3 = *param_1 & 0xffffefff;
      }
      else {
        uVar3 = *param_1 | 0x1000;
      }
      *param_1 = uVar3;
      param_1 = param_1 + 2;
    } while (iVar2 < param_2);
    return;
  }
  return;
}
