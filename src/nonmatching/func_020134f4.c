/* Unreviewed Ghidra reconstruction for experimental fuzzy matching. */
typedef unsigned int undefined3;
typedef unsigned int uint3;
typedef unsigned int undefined5;
typedef unsigned int uint5;
#define SUB41(a,off) ((unsigned int)(((unsigned long long)(a) >> (8*(off))) & 0xffULL))
#define SUB42(a,off) ((unsigned int)(((unsigned long long)(a) >> (8*(off))) & 0xffffULL))
#define SUB43(a,off) ((unsigned int)(((unsigned long long)(a) >> (8*(off))) & 0xffffffULL))
#define SUB81(a,off) SUB41(a,off)
#define SUB82(a,off) SUB42(a,off)
#define SUB84(a,off) ((unsigned int)((unsigned long long)(a) >> (8*(off))))
#define CONCAT11(a,b) ((((unsigned int)(a) & 0xffU) << 8) | ((unsigned int)(b) & 0xffU))
#define CONCAT12(a,b) ((((unsigned int)(a) & 0xffU) << 16) | ((unsigned int)(b) & 0xffffU))
#define CONCAT13(a,b) ((((unsigned int)(a) & 0xffU) << 24) | ((unsigned int)(b) & 0xffffffU))
#define CONCAT21(a,b) ((((unsigned int)(a) & 0xffffU) << 8) | ((unsigned int)(b) & 0xffU))
#define CONCAT22(a,b) ((((unsigned int)(a) & 0xffffU) << 16) | ((unsigned int)(b) & 0xffffU))
#define CONCAT31(a,b) ((((unsigned int)(a) & 0xffffffU) << 8) | ((unsigned int)(b) & 0xffU))
#define CONCAT44(a,b) ((((unsigned long long)(a) & 0xffffffffULL) << 32) | ((unsigned long long)(b) & 0xffffffffULL))
#define DAT_02013640 (*(volatile unsigned int *)0x02013640U)
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
extern unsigned int func_02007000();
extern unsigned int func_020077e8();
extern unsigned int func_02007820();
extern unsigned int func_02007844();
extern unsigned int func_02008b6c();
extern unsigned int func_02008b80();
extern unsigned int func_02008be8();
extern unsigned int func_0200b588();
extern unsigned int func_0200b5ac();


bool func_020134f4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  if ((param_1[1] & 2) == 0) {
    uVar2 = param_1[1];
    param_1[1] = uVar2 | 2;
    iVar1 = func_0200b588(0xb,1,uVar2 | 2,param_4,param_4);
    while (iVar1 == 0) {
      func_02008be8(0x32);
      iVar1 = func_0200b588(0xb,1);
    }
    ((unsigned int (*)())(unsigned int)&func_020134f4)(param_1,0,1);
  }
  func_02007820(*param_1,0x60);
  func_02007844();
  param_1[0x147] = *(undefined4 *)(DAT_02013640 + 4);
  do {
    param_1[1] = param_1[1] | 0x20;
    do {
      iVar1 = func_0200b5ac(0xb,param_2,1);
    } while (iVar1 < 0);
    if (param_2 == 0) {
      uVar3 = *param_1;
      do {
        iVar1 = func_0200b5ac(0xb,uVar3,1);
      } while (iVar1 < 0);
    }
    uVar3 = func_02008b6c();
    uVar2 = param_1[1];
    while ((uVar2 & 0x20) != 0) {
      func_02007000(0);
      uVar2 = param_1[1];
    }
    func_02008b80(uVar3);
    func_020077e8(*param_1,0x60);
  } while ((*(int *)*param_1 == 4) && (param_3 = param_3 + -1, 0 < param_3));
  return *(int *)*param_1 == 0;
}
