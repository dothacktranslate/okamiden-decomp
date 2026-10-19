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
#define DAT_02045010 (*(volatile unsigned int *)0x02045010U)
#define DAT_02045014 (*(volatile unsigned int *)0x02045014U)
#define DAT_02045018 (*(volatile unsigned int *)0x02045018U)


void func_02044ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0204500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ((unsigned int (*)())(*(volatile unsigned int *)0x02045018U))(DAT_02045010,6,0x20,DAT_02045014);
  return;
}
