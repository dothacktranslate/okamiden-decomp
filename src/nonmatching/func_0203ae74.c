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
extern unsigned int func_02042e60();
#define DAT_0203aed0 ((volatile unsigned int *)0x0203aed0U)


void func_0203ae74(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 uStack_8;

  local_20 = 0;
  local_10 = 0;
  local_c = (uint)(param_2 != 0);
  local_18 = 0xffffffff;
  local_14 = 0x80000000;
  local_28 = 2;
  local_24 = param_1;
  uStack_8 = param_4;
  func_02042e60(*DAT_0203aed0,&local_28);
  return;
}
