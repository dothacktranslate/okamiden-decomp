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
extern unsigned int func_02022ffc();
extern unsigned int func_02068e38();


void func_02068d94(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  if (*(int *)(param_1 + 0x334) == 0) {
    iVar1 = func_02068e38(param_2);
    if (iVar1 != 2) goto LAB_02068dda;
  }
  else {
    *(short *)(param_1 + 0x350) = *(short *)(param_1 + 0x350) + 1;
    if (*(short *)(param_1 + 0x350) <= (*(volatile unsigned int *)0x02068e24U)) goto LAB_02068dda;
  }
  *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 0x80000000;
LAB_02068dda:
  iVar1 = func_02022ffc((*(volatile unsigned int *)0x02068e28U) + 0xf0,(*(volatile unsigned int *)0x02068e2cU));
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x30c) = *(uint *)(param_1 + 0x30c) | 0x80000000;
  }
  *(uint *)(param_1 + 0x48) = (*(volatile unsigned int *)0x02068e30U) | *(uint *)(param_1 + 0x48);
  *(short *)(param_1 + (*(volatile unsigned int *)0x02068e34U)) = *(short *)(param_1 + (*(volatile unsigned int *)0x02068e34U)) + 1;
  uVar4 = *(undefined4 *)(param_2 + 0xf80);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0xf84);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar2 = *(undefined4 *)(param_2 + 0xf88);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}
