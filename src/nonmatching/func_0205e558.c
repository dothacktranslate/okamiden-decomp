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
extern unsigned int func_0205b16c();
extern unsigned int func_0205b228();
extern unsigned int func_0205bac8();
extern unsigned int func_0205f230();
extern unsigned int func_0205f240();
#define DAT_0205e668 ((volatile unsigned int *)0x0205e668U)
#define DAT_0205e66c ((volatile unsigned int *)0x0205e66cU)
#define DAT_0205e670 ((volatile unsigned int *)0x0205e670U)
#define DAT_0205e674 ((volatile unsigned int *)0x0205e674U)
#define DAT_0205e678 ((volatile unsigned int *)0x0205e678U)


uint * func_0205e558(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  int iStack_14;
  int iStack_18;
  uint *puVar4;
  int iVar3;
  int iVar2;
  undefined4 uVar1;

  puVar4 = (uint *)*param_1;
  if (puVar4 <= DAT_0205e668) {
    if (puVar4 < DAT_0205e668) {
      return DAT_0205e668 + -0x240;
    }
    return param_1;
  }
  uStack_10 = param_4;
  if (DAT_0205e66c < puVar4) {
    if (puVar4 != DAT_0205e66c + 0x20000) {
      return DAT_0205e66c + 0x20000;
    }
  }
  else {
    if (DAT_0205e66c <= puVar4) {
      return param_1;
    }
    if (puVar4 != DAT_0205e670) {
      return param_1;
    }
    uVar1 = func_0205f230();
    iVar2 = func_0205f240(param_1);
    if (iVar2 != 0) {
      func_0205bac8(uVar1);
    }
  }
  iVar2 = func_0205f240(param_1);
  if (iVar2 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_0205b228();
  func_0205b16c(iVar2,&iStack_14,&iStack_18);
  if (iVar3 != 0) {
    (*(code *)*DAT_0205e674)(iVar3);
  }
  if (iStack_18 != 0) {
    (*(code *)*DAT_0205e678)();
  }
  if (iStack_14 != 0) {
    puVar4 = (uint *)(*(code *)*DAT_0205e678)();
    return puVar4;
  }
  return (uint *)0x0;
}
