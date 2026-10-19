/* Locally recovered Ghidra pseudocode; not behaviorally verified. */
typedef unsigned char byte;
typedef signed char sbyte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int code();
typedef unsigned int size_t;
typedef int bool;
#ifndef true
#define true 1
#define false 0
#endif
extern unsigned int func_02006370();
extern unsigned int func_0200653c();
extern unsigned int func_0200659c();
extern unsigned int func_02008b6c();
extern unsigned int func_02008b80();
#define DAT_0200b524 ((volatile unsigned int *)0x0200b524U)
#define DAT_0200b528 ((volatile unsigned int *)0x0200b528U)
#define DAT_0200b52c ((volatile unsigned int *)0x0200b52cU)
#define DAT_0200b530 ((volatile unsigned int *)0x0200b530U)
#define DAT_0200b534 ((volatile unsigned int *)0x0200b534U)
#define DAT_0200b538 ((volatile unsigned int *)0x0200b538U)


void func_0200b440(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;

  uVar3 = func_02008b6c();
  if (*DAT_0200b524 == 0) {
    *DAT_0200b524 = 1;
    iVar4 = 0;
    iVar6 = 0;
    *(undefined4 *)(DAT_0200b528 + 0x388) = 0;
    iVar7 = DAT_0200b52c;
    do {
      *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
      puVar2 = DAT_0200b534;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    *DAT_0200b534 = (short)DAT_0200b530;
    func_0200659c(0x40000);
    func_02006370(0x40000,DAT_0200b538);
    func_0200653c(0x40000);
    puVar5 = puVar2 + -2;
    while( true ) {
      uVar1 = *puVar5;
      uVar8 = uVar1 & 0xf;
      *puVar5 = uVar8 << 8;
      if (((uVar1 & 0xf) == 0) && (4 < iVar6)) break;
      iVar7 = 1000;
      uVar1 = *puVar5;
      while ((uVar1 & 0xf) == uVar8) {
        if (iVar7 < 1) {
          iVar6 = 0;
          break;
        }
        iVar7 = iVar7 + -1;
        uVar1 = *puVar5;
      }
      iVar6 = iVar6 + 1;
    }
  }
  func_02008b80(uVar3);
  return;
}
