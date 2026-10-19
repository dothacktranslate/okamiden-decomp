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
extern unsigned int func_0201a4f8();
#define DAT_0201a9b8 ((volatile unsigned int *)0x0201a9b8U)
#define DAT_0201a9bc ((volatile unsigned int *)0x0201a9bcU)


uint func_0201a8fc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_24 [3];
  int local_18;
  int local_14;
  undefined4 uStack_10;

  local_24[1] = 0;
  local_24[0] = param_1;
  uStack_10 = param_4;
  uVar1 = func_0201a4f8(param_3,0x7fffffff,DAT_0201a9b8,local_24,&local_14,&local_18,local_24 + 2);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + local_14;
  }
  if (((local_24[2] == 0) && ((local_18 != 0 || (uVar1 < 0x80000000)))) &&
     ((local_18 == 0 || (uVar1 < 0x80000001)))) {
    if (local_18 != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = 0;
  if (local_18 != 0) {
    uVar1 = 0x80000000;
  }
  *DAT_0201a9bc = 0x22;
  if (local_18 == 0) {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}
