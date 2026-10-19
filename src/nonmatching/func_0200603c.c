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



void func_0200603c(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;

  UNRECOVERED_JUMPTABLE = (*(volatile unsigned int *)0x02006060U);
  uVar1 = (*(volatile unsigned int *)0x0200605cU);
  (*(volatile unsigned int *)0x02006058U) = (*(volatile unsigned int *)0x02006058U) & 0x7fffffff;
                    /* WARNING: Could not recover jumptable at 0x02006054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}
