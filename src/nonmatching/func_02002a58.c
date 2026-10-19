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
#define DAT_02002a8c ((volatile unsigned int *)0x02002a8cU)
#define DAT_02002a90 ((volatile unsigned int *)0x02002a90U)


undefined4 func_02002a58(undefined4 param_1,undefined4 param_2)

{
  ushort *puVar1;

  puVar1 = DAT_02002a8c;
  *DAT_02002a8c = 0;
  *(undefined4 *)(puVar1 + 8) = param_1;
  *(undefined4 *)(puVar1 + 0xc) = param_2;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  do {
  } while ((*puVar1 & 0x8000) != 0);
  return *DAT_02002a90;
}
