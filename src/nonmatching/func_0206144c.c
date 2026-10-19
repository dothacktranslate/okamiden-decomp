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
#define DAT_02061490 ((volatile unsigned int *)0x02061490U)


void func_0206144c(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;

  cVar1 = *(char *)(param_3 + 0x17);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xc) = *DAT_02061490;
  *(char *)(param_1 + 0x19) = cVar1;
  *(undefined4 *)(param_1 + 8) = param_2;
  if (cVar1 == '\0') {
    return;
  }
  do {
    *(ushort *)(param_1 + uVar2 * 2 + 0x1a) = (ushort)uVar2 | 0x100;
    uVar2 = uVar2 + 1;
  } while (uVar2 < *(byte *)(param_1 + 0x19));
  return;
}
