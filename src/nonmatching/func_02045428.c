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

extern int func_02045060();
extern int func_02057df8();
extern int func_02058508();
extern int func_02058750();


void func_02045428(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint local_4c;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];

  local_4c = 0;
  (*(unsigned int *)0x020455f4) = 0;
  iVar7 = param_1 + 0x20;
  iVar1 = *(int *)(param_1 + 0x460);
  if (*(short *)(param_1 + 0x1c) != 0) {
    do {
      iVar6 = *(int *)(iVar1 + local_4c * 4);
      iVar5 = (uint)*(ushort *)(iVar6 + 0x32) * 0x24;
      uVar10 = *(undefined4 *)
                ((uint)*(ushort *)(iVar6 + 0x32) * 0x14 + *(int *)(param_1 + 0x46c) + 8);
      iVar8 = *(int *)(param_1 + 0x468);
      uVar9 = *(undefined4 *)(iVar8 + iVar5);
      (*(unsigned int *)0x020455fc) = ((unsigned int)0x020455f8) | (int)*(short *)(iVar6 + 0x26) << 0x10;
      if ((*(uint *)(iVar6 + 0xc) & 0x10000) == 0) {
        puVar11 = (undefined1 *)0x0;
      }
      else {
        puVar11 = auStack_34;
        func_02045060(iVar6,puVar11,auStack_44);
      }
      uVar12 = 0;
      uVar2 = func_02057df8(iVar7,0x80,*(undefined4 *)(iVar6 + 0x34),puVar11,iVar6 + 0x14,0,
                           (*(uint *)(iVar6 + 0xc) & 0x20000) != 0);
      iVar6 = (int)*(short *)(iVar6 + 0x30);
      if (uVar2 != 0) {
        do {
          uVar4 = *(uint *)(iVar7 + uVar12 * 8);
          uVar3 = uVar4 & ((unsigned int)0x02045600);
          (*(unsigned int *)0x02045604) = 0;
          uVar3 = (int)uVar3 >> 0x10;
          uVar4 = uVar4 & 0xff;
          if (0xff < (int)uVar3) {
            uVar3 = uVar3 | 0xffffff00;
          }
          if (0xbf < uVar4) {
            uVar4 = uVar4 | 0xffffff00;
          }
          if ((*(uint *)(iVar7 + uVar12 * 8) & 0x300) == 0) {
            func_02058508(uVar3,uVar4,iVar6,iVar7 + uVar12 * 8,iVar8 + iVar5 + 0xc,uVar9,uVar10);
          }
          else {
            func_02058750(uVar3,uVar4,iVar6,iVar7 + uVar12 * 8);
          }
          iVar6 = (iVar6 + -1) * 0x10000 >> 0x10;
          uVar3 = uVar12 + 1;
          uVar12 = uVar3 & 0xffff;
        } while ((uVar3 & 0xffff) < uVar2);
      }
      uVar12 = local_4c + 1;
      local_4c = uVar12 & 0xffff;
    } while ((uVar12 & 0xffff) < (uint)*(ushort *)(param_1 + 0x1c));
  }
  (*(unsigned int *)0x02045608) = 1;
  return;
}
