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

extern int func_0204380c();


void func_0204374c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  int unaff_r8;

  iVar2 = *(int *)(param_1 + 0x44);
  uVar1 = (undefined1)param_2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xa8) = uVar1;
    unaff_r5 = *(int *)(*(int *)(iVar2 + 0xc) + 0x2c);
  }
  if (iVar2 != 0 && unaff_r5 != 0) {
    do {
      iVar2 = *(int *)(unaff_r5 + 0x44);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0xa8) = uVar1;
        unaff_r4 = *(int *)(*(int *)(iVar2 + 0xc) + 0x2c);
      }
      if (iVar2 != 0 && unaff_r4 != 0) {
        do {
          iVar2 = *(int *)(unaff_r4 + 0x44);
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + 0xa8) = uVar1;
            unaff_r8 = *(int *)(*(int *)(iVar2 + 0xc) + 0x2c);
          }
          if (iVar2 != 0 && unaff_r8 != 0) {
            do {
              iVar2 = *(int *)(unaff_r8 + 0x44);
              if (iVar2 != 0) {
                *(undefined1 *)(iVar2 + 0xa8) = uVar1;
                unaff_r7 = *(int *)(*(int *)(iVar2 + 0xc) + 0x2c);
              }
              if (iVar2 != 0 && unaff_r7 != 0) {
                do {
                  if (*(int *)(unaff_r7 + 0x44) != 0) {
                    func_0204380c(*(int *)(unaff_r7 + 0x44),param_2);
                  }
                  unaff_r7 = *(int *)(unaff_r7 + 0x34);
                } while (unaff_r7 != 0);
              }
              unaff_r8 = *(int *)(unaff_r8 + 0x34);
            } while (unaff_r8 != 0);
          }
          unaff_r4 = *(int *)(unaff_r4 + 0x34);
        } while (unaff_r4 != 0);
      }
      unaff_r5 = *(int *)(unaff_r5 + 0x34);
    } while (unaff_r5 != 0);
    return;
  }
  return;
}
