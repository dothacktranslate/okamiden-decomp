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
extern unsigned int func_02022fc0();
extern unsigned int func_0209f0d0();
#define DAT_02068f00 ((volatile unsigned int *)0x02068f00U)
#define DAT_02068f04 ((volatile unsigned int *)0x02068f04U)
#define DAT_02068f08 ((volatile unsigned int *)0x02068f08U)


undefined4 func_02068ed8(int param_1)

{
  int iVar1;

  iVar1 = DAT_02068f00;
  if (-1 < *(int *)(param_1 + DAT_02068f00)) {
    func_0209f0d0();
    *(undefined4 *)(param_1 + iVar1) = 0xffffffff;
  }
  func_02022fc0(*DAT_02068f04 + 0xf0,DAT_02068f08);
  return 1;
}
