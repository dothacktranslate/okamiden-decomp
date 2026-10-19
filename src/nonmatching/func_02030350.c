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
#define DAT_020303a4 ((volatile unsigned int *)0x020303a4U)
#define DAT_020303a8 ((volatile unsigned int *)0x020303a8U)


undefined4 func_02030350(int param_1,int param_2)

{
  ushort *puVar1;

  puVar1 = DAT_020303a4;
  if (param_2 != 0 || param_1 != 0) {
    *DAT_020303a4 = 1;
    *(int *)(puVar1 + 4) = param_1;
    *(int *)(puVar1 + 6) = param_2;
    do {
    } while ((*puVar1 & 0x8000) != 0);
    do {
    } while ((*DAT_020303a4 & 0x8000) != 0);
    return *DAT_020303a8;
  }
  return 0;
}
