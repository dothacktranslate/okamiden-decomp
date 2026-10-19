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
extern unsigned int func_02001c7c();
extern unsigned int func_020038e8();
extern unsigned int func_02003918();
extern unsigned int func_0205df8c();


void func_0205e19c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [64];

  func_0205df8c();
  puVar1 = (*(volatile unsigned int *)0x0205e220U);
  (*(volatile unsigned int *)0x0205e220U) = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1 = (*(volatile unsigned int *)0x0205e224U);
  iVar3 = param_2;
  if (param_1 != 0) {
    do {
      iVar2 = func_020038e8(auStack_50);
    } while (iVar2 != 0);
    func_02001c7c(auStack_50,param_1);
    puVar1 = (*(volatile unsigned int *)0x0205e224U);
  }
  while ((*(volatile unsigned int *)0x0205e224U) = puVar1, iVar3 != 0) {
    iVar3 = func_02003918(param_2);
    puVar1 = (*(volatile unsigned int *)0x0205e224U);
  }
  *puVar1 = 1;
  puVar1[-2] = 2;
  return;
}
