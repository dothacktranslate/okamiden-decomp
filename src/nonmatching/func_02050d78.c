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
#define DAT_0205104c ((volatile unsigned int *)0x0205104cU)
#define DAT_02051050 ((volatile unsigned int *)0x02051050U)
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
extern unsigned int func_02047714();
extern unsigned int func_02050798();
extern unsigned int func_020509f4();
extern unsigned int func_02050ab0();
extern unsigned int func_02050b08();
extern unsigned int func_02050ba0();
extern unsigned int func_02050c18();
extern unsigned int func_02050c74();
extern unsigned int func_02050cdc();
extern unsigned int func_02050d28();


undefined1 * func_02050d78(undefined4 *param_1,undefined1 *param_2,char *param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;

  uVar5 = DAT_02051050;
  iVar4 = DAT_0205104c;
LAB_02050d98:
  iVar8 = (int)*param_3;
  if (iVar8 < 1) {
    if (iVar8 == 0) {
      return param_2;
    }
    goto switchD_02050db4_default;
  }
  switch(iVar8) {
  case 0x24:
    if (param_3[1] == '\0') {
      if (param_2 != (undefined1 *)param_1[1]) {
        param_2 = (undefined1 *)0x0;
      }
      return param_2;
    }
    break;
  case 0x25:
    bVar1 = param_3[1];
    if (bVar1 == 0x62) {
      param_2 = (undefined1 *)func_02050b08(param_1,param_2,param_3 + 2);
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      param_3 = param_3 + 4;
    }
    else if (bVar1 == 0x66) {
      if (param_3[2] != '[') {
        func_02047714(param_1[2],uVar5);
      }
      pcVar9 = (char *)func_02050798(param_1,param_3 + 2);
      uVar6 = 0;
      if (param_2 != (undefined1 *)*param_1) {
        uVar6 = param_2[-1];
      }
      iVar8 = func_020509f4(uVar6,param_3 + 2,pcVar9 + -1);
      if ((iVar8 != 0) ||
         (iVar8 = func_020509f4(*param_2,param_3 + 2,pcVar9 + -1), param_3 = pcVar9, iVar8 == 0)) {
        return (undefined1 *)0x0;
      }
    }
    else {
      if (bVar1 < 0x80) {
        uVar7 = *(ushort *)(iVar4 + (uint)bVar1 * 2) & 8;
      }
      else {
        uVar7 = 0;
      }
      if (uVar7 == 0) break;
      param_2 = (undefined1 *)func_02050d28(param_1,param_2);
      if (param_2 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      param_3 = param_3 + 2;
    }
    goto LAB_02050d98;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    if (param_3[1] == ')') {
      puVar10 = (undefined1 *)func_02050c74(param_1,param_2,param_3 + 2,0xfffffffe,param_4);
      return puVar10;
    }
    puVar10 = (undefined1 *)func_02050c74(param_1,param_2,param_3 + 1,0xffffffff,param_4);
    return puVar10;
  case 0x29:
    puVar10 = (undefined1 *)func_02050cdc(param_1,param_2,param_3 + 1);
    return puVar10;
  }
switchD_02050db4_default:
  pcVar9 = (char *)func_02050798(param_1,param_3);
  if ((param_2 < (undefined1 *)param_1[1]) &&
     (iVar8 = func_02050ab0(*param_2,param_3,pcVar9), iVar8 != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  cVar2 = *pcVar9;
  if (cVar2 < '.') {
    if (')' < cVar2) {
      if (cVar2 == '*') {
        puVar10 = (undefined1 *)func_02050ba0(param_1,param_2,param_3,pcVar9);
        return puVar10;
      }
      if (cVar2 == '+') {
        if (!bVar3) {
          return (undefined1 *)0x0;
        }
        puVar10 = (undefined1 *)func_02050ba0(param_1,param_2 + 1,param_3,pcVar9);
        return puVar10;
      }
      if (cVar2 == '-') {
        puVar10 = (undefined1 *)func_02050c18(param_1,param_2,param_3,pcVar9);
        return puVar10;
      }
    }
  }
  else if (cVar2 == '?') {
    if ((bVar3) &&
       (puVar10 = (undefined1 *)((unsigned int (*)())(unsigned int)&func_02050d78)(param_1,param_2 + 1,pcVar9 + 1),
       puVar10 != (undefined1 *)0x0)) {
      return puVar10;
    }
    param_3 = pcVar9 + 1;
    goto LAB_02050d98;
  }
  if (!bVar3) {
    return (undefined1 *)0x0;
  }
  param_2 = param_2 + 1;
  param_3 = pcVar9;
  goto LAB_02050d98;
}
