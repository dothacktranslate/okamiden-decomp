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
extern unsigned int func_02007820();
extern unsigned int func_020098a0();
extern unsigned int func_0200a400();
#define DAT_02065454 ((volatile unsigned int *)0x02065454U)


void func_020653d8(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_r3;
  int iVar4;

  piVar3 = DAT_02065454;
  if (*DAT_02065454 != 0) {
    iVar4 = 0;
    piVar1 = DAT_02065454 + 3;
    piVar2 = DAT_02065454 + 5;
    DAT_02065454[7] = 0;
    func_020098a0(0,*piVar1,*piVar2,in_r3,in_r3);
    func_020098a0(0,piVar3[4],piVar3[5]);
    func_02007820(piVar3[3],piVar3[5]);
    func_02007820(piVar3[4],piVar3[5]);
    if (-1 < piVar3[0xb]) {
      iVar4 = 1 << (piVar3[0xb] & 0xffU);
    }
    func_0200a400(piVar3[9],piVar3[10],iVar4,0);
    return;
  }
  return;
}
