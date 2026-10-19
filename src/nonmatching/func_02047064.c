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
#define DAT_02047074 ((volatile unsigned int *)0x02047074U)


void func_02047064(undefined4 param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x02047070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ((unsigned int (*)())(*(volatile unsigned int *)0x02047074U))(param_1,*param_2,param_2[1]);
  return;
}
