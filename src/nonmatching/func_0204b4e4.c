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
#define DAT_0204b648 (*(volatile unsigned int *)0x0204b648U)
#define DAT_0204b64c (*(volatile unsigned int *)0x0204b64cU)
#define DAT_0204b650 (*(volatile unsigned int *)0x0204b650U)
#define DAT_0204b654 (*(volatile unsigned int *)0x0204b654U)
#define DAT_0204b658 (*(volatile unsigned int *)0x0204b658U)
#define DAT_0204b65c (*(volatile unsigned int *)0x0204b65cU)
#define DAT_0204b660 (*(volatile unsigned int *)0x0204b660U)
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
extern unsigned int func_0204a6a8();
extern unsigned int func_0204ae84();
extern unsigned int func_0204b4b0();
extern unsigned int func_0204d164();


undefined4 func_0204b4e4(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;

  bVar7 = (*(undefined4 **)(param_2 + 4))[1] == 6;
  uVar3 = param_3;
  piVar5 = param_4;
  if (bVar7) {
    piVar5 = (int *)**(undefined4 **)(param_2 + 4);
    uVar3 = (uint)*(byte *)((int)piVar5 + 6);
  }
  if (bVar7 && uVar3 == 0) {
    iVar6 = piVar5[4];
    piVar5 = param_4;
    uVar1 = func_0204a6a8();
    iVar2 = func_0204d164(iVar6,param_3 + 1,uVar1);
    *param_4 = iVar2;
    if (iVar2 != 0) {
      return DAT_0204b648;
    }
    uVar3 = func_0204ae84(iVar6,uVar1,param_3);
    uVar1 = DAT_0204b64c;
    switch(uVar3 & 0x3f) {
    case 0:
      uVar4 = DAT_0204b650 & uVar3 >> 0x17;
      if (uVar4 < (uVar3 >> 6 & 0xff)) {
        uVar1 = ((unsigned int (*)())(unsigned int)&func_0204b4e4)(param_1,param_2,uVar4,param_4,piVar5);
        return uVar1;
      }
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      iVar2 = DAT_0204b658;
      if (*(int *)(iVar6 + 0x1c) != 0) {
        iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + (DAT_0204b650 & uVar3 >> 0x17) * 4) + 0x10;
      }
      *param_4 = iVar2;
      return DAT_0204b65c;
    case 5:
      *param_4 = *(int *)(*(int *)(iVar6 + 8) + ((uVar3 & 0xffffc000) >> 0xb)) + 0x10;
      return uVar1;
    case 6:
      iVar2 = func_0204b4b0(iVar6,DAT_0204b650 & uVar3 >> 0xe);
      *param_4 = iVar2;
      return DAT_0204b654;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      iVar2 = func_0204b4b0(iVar6,DAT_0204b650 & uVar3 >> 0xe);
      *param_4 = iVar2;
      return DAT_0204b660;
    }
  }
  return 0;
}
