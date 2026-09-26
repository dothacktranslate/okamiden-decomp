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

extern int func_020449a4();
extern int func_0205694c();


void func_02044f30(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  sVar3 = func_020449a4(param_2,*(undefined4 *)(((unsigned int)0x02044fe0) + *(int *)(param_1 + 4) * 4));
  uVar2 = ((unsigned int)0x02044fe4);
  uVar4 = 0;
  if (*param_1 != 0) {
    do {
      puVar5 = (ushort *)func_0205694c(param_1,uVar4);
      uVar8 = 0;
      iVar7 = *(int *)(puVar5 + 2);
      if (*puVar5 != 0) {
        do {
          iVar6 = uVar8 * 6 + iVar7;
          uVar1 = *(ushort *)(iVar6 + 4);
          uVar9 = uVar8 + 1;
          *(ushort *)(iVar6 + 4) = uVar1 & 0xfc00 | (uVar1 & (ushort)uVar2) + sVar3 & (ushort)uVar2;
          uVar8 = uVar9 & 0xffff;
        } while ((uVar9 & 0xffff) < (uint)*puVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_1);
    return;
  }
  return;
}
