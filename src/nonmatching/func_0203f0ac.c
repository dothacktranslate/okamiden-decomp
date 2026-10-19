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
extern unsigned int func_02036eb8();
#define DAT_0203f0c4 ((volatile unsigned int *)0x0203f0c4U)


void func_0203f0ac(int param_1)

{
  if (*(int *)(param_1 + 0x110) != 0) {
    func_02036eb8(*DAT_0203f0c4);
  }
  return;
}
