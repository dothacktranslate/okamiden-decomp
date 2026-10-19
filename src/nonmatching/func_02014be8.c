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
extern unsigned int func_02008e58();
#define DAT_02014c0c ((volatile unsigned int *)0x02014c0cU)


void func_02014be8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x3f) != 1) {
    func_02008e58();
    return;
  }
  *DAT_02014c0c = 1;
  return;
}
