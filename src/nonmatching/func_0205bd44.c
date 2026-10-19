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
#define DAT_0205bd6c ((volatile unsigned int *)0x0205bd6cU)
#define DAT_0205bd70 ((volatile unsigned int *)0x0205bd70U)


void func_0205bd44(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  puVar1 = DAT_0205bd6c;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *DAT_0205bd6c = *param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  *(uint *)(DAT_0205bd70 + 0xfc) = *(uint *)(DAT_0205bd70 + 0xfc) & 0xffffff5b;
  return;
}
