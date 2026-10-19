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
extern unsigned int func_02008dd4();
#define DAT_02005f04 ((volatile unsigned int *)0x02005f04U)
#define DAT_02005f08 ((volatile unsigned int *)0x02005f08U)
#define DAT_02005f0c ((volatile unsigned int *)0x02005f0cU)
#define DAT_02005f10 ((volatile unsigned int *)0x02005f10U)
#define DAT_02005f14 ((volatile unsigned int *)0x02005f14U)
#define DAT_02005f18 ((volatile unsigned int *)0x02005f18U)
#define DAT_02005f1c ((volatile unsigned int *)0x02005f1cU)
#define DAT_02005f20 ((volatile unsigned int *)0x02005f20U)
#define DAT_02005f24 ((volatile unsigned int *)0x02005f24U)
#define DAT_02005f28 ((volatile unsigned int *)0x02005f28U)


ushort func_02005e6c(ushort *param_1)

{
  ushort uVar1;

  uVar1 = *param_1;
  *param_1 = 0;
  if ((uVar1 & 1) != 0) {
    *DAT_02005f04 = 0;
  }
  if ((uVar1 & 2) != 0) {
    *DAT_02005f08 = 0;
  }
  if ((uVar1 & 4) != 0) {
    *DAT_02005f0c = 0;
  }
  if ((uVar1 & 8) != 0) {
    *DAT_02005f10 = 0;
  }
  if ((uVar1 & 0x10) != 0) {
    *DAT_02005f14 = 0;
  }
  if ((uVar1 & 0x20) != 0) {
    *DAT_02005f18 = 0;
  }
  if ((uVar1 & 0x40) != 0) {
    *DAT_02005f1c = 0;
  }
  if ((uVar1 & 0x80) != 0) {
    *DAT_02005f20 = 0;
  }
  if ((uVar1 & 0x100) != 0) {
    *DAT_02005f24 = 0;
  }
  func_02008dd4(uVar1,*DAT_02005f28);
  return uVar1;
}
