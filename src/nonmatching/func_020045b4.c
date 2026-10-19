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
extern unsigned int func_02003d44();
extern unsigned int func_0200910c();
extern unsigned int func_02009884();
#define DAT_02004620 ((volatile unsigned int *)0x02004620U)


void func_020045b4(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = func_02003d44();
  if ((*DAT_02004620 != -1) && (0x1c < param_3)) {
    func_0200910c(*DAT_02004620,param_1,iVar1 + param_2,param_3,1,param_4);
    return;
  }
  func_02009884(param_1,iVar1 + param_2,param_3);
  return;
}
