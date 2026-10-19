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
extern unsigned int func_02000148();
extern unsigned int func_02006784();
extern unsigned int func_02006808();
extern unsigned int func_020098a0();


void func_02006668(void)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 in_r3;

  puVar4 = (*(volatile unsigned int *)0x0200672cU);
  piVar3 = (*(volatile unsigned int *)0x02006728U);
  if ((*(volatile unsigned int *)0x02006728U) != 0) {
    return;
  }
  (*(volatile unsigned int *)0x0200672cU) = 0;
  *piVar3 = 1;
  func_02006784(0x7e,puVar4,0,piVar3,in_r3);
  sVar1 = *(short *)((int)puVar4 + 6);
  puVar2 = (*(volatile unsigned int *)0x02006730U);
  while ((*(volatile unsigned int *)0x02006730U) = puVar2, sVar1 != 0) {
    func_02000148(0x400);
    puVar2 = (*(volatile unsigned int *)0x02006730U);
    sVar1 = *(short *)((int)puVar4 + 6);
  }
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffff0000;
  func_020098a0(0,puVar2 + 4,0x28);
  puVar5 = (*(volatile unsigned int *)0x02006734U);
  (*(volatile unsigned int *)0x02006734U) = (*(volatile unsigned int *)0x02006734U) | 0x800;
  *puVar5 = *puVar5 | 0x80;
  func_02006808(0x7e,puVar2 + 0x10,0);
  func_02006784(0x7f,puVar2 + 0x10,0);
  return;
}
