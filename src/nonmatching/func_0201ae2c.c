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
#define DAT_0201b158 ((volatile unsigned int *)0x0201b158U)
#define DAT_0201b15c ((volatile unsigned int *)0x0201b15cU)
#define DAT_0201b160 ((volatile unsigned int *)0x0201b160U)
#define DAT_0201b164 ((volatile unsigned int *)0x0201b164U)
#define DAT_0201b168 ((volatile unsigned int *)0x0201b168U)
#define DAT_0201b16c ((volatile unsigned int *)0x0201b16cU)
#define DAT_0201b170 ((volatile unsigned int *)0x0201b170U)
#define DAT_0201b174 ((volatile unsigned int *)0x0201b174U)
#define DAT_0201b178 ((volatile unsigned int *)0x0201b178U)
#define DAT_0201b17c ((volatile unsigned int *)0x0201b17cU)
#define DAT_0201b180 ((volatile unsigned int *)0x0201b180U)
#define DAT_0201b184 ((volatile unsigned int *)0x0201b184U)
#define DAT_0201b188 ((volatile unsigned int *)0x0201b188U)
#define DAT_0201b18c ((volatile unsigned int *)0x0201b18cU)
#define DAT_0201b190 ((volatile unsigned int *)0x0201b190U)
#define DAT_0201b194 ((volatile unsigned int *)0x0201b194U)
#define DAT_0201b198 ((volatile unsigned int *)0x0201b198U)
#define DAT_0201b19c ((volatile unsigned int *)0x0201b19cU)
#define DAT_0201b1a0 ((volatile unsigned int *)0x0201b1a0U)
#define DAT_0201b1a4 ((volatile unsigned int *)0x0201b1a4U)
#define DAT_0201b1a8 ((volatile unsigned int *)0x0201b1a8U)
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
extern unsigned int func_0201ac10();
extern unsigned int func_0201ad90();


void func_0201ae2c(undefined2 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_3a [38];
  undefined4 uStack_14;
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 auStack_60 [19];
  undefined4 uVar4;

  uStack_14 = param_4;
  if ((int)param_2 < -0x34) {
    if (-0x36 < (int)param_2) {
      func_0201ad90(param_1,DAT_0201b15c,0xfffffff0);
      return;
    }
    if (param_2 == 0xffffffc0) {
      func_0201ad90(param_1,DAT_0201b158,0xffffffec);
      return;
    }
  }
  else {
    switch(param_2) {
    case 0:
      func_0201ad90(param_1,DAT_0201b188,0);
      return;
    case 1:
      func_0201ad90(param_1,DAT_0201b18c,0);
      return;
    case 2:
      func_0201ad90(param_1,DAT_0201b190,0);
      return;
    case 3:
      func_0201ad90(param_1,DAT_0201b194,0);
      return;
    case 4:
      func_0201ad90(param_1,DAT_0201b198,1);
      return;
    case 5:
      func_0201ad90(param_1,DAT_0201b19c,1);
      return;
    case 6:
      func_0201ad90(param_1,DAT_0201b1a0,1);
      return;
    case 7:
      func_0201ad90(param_1,DAT_0201b1a4,2);
      return;
    case 8:
      func_0201ad90(param_1,DAT_0201b1a8,2);
      return;
    case 0xffffffe0:
      func_0201ad90(param_1,DAT_0201b160,0xfffffff6);
      return;
    case 0xffffffe1:
      break;
    case 0xffffffe2:
      break;
    case 0xffffffe3:
      break;
    case 0xffffffe4:
      break;
    case 0xffffffe5:
      break;
    case 0xffffffe6:
      break;
    case 0xffffffe7:
      break;
    case 0xffffffe8:
      break;
    case 0xffffffe9:
      break;
    case 0xffffffea:
      break;
    case 0xffffffeb:
      break;
    case 0xffffffec:
      break;
    case 0xffffffed:
      break;
    case 0xffffffee:
      break;
    case 0xffffffef:
      break;
    case 0xfffffff0:
      func_0201ad90(param_1,DAT_0201b164,0xfffffffb);
      return;
    case 0xfffffff1:
      break;
    case 0xfffffff2:
      break;
    case 0xfffffff3:
      break;
    case 0xfffffff4:
      break;
    case 0xfffffff5:
      break;
    case 0xfffffff6:
      break;
    case 0xfffffff7:
      break;
    case 0xfffffff8:
      func_0201ad90(param_1,DAT_0201b168,0xfffffffd);
      return;
    case 0xfffffff9:
      func_0201ad90(param_1,DAT_0201b16c,0xfffffffd);
      return;
    case 0xfffffffa:
      func_0201ad90(param_1,DAT_0201b170,0xfffffffe);
      return;
    case 0xfffffffb:
      func_0201ad90(param_1,DAT_0201b174,0xfffffffe);
      return;
    case 0xfffffffc:
      func_0201ad90(param_1,DAT_0201b178,0xfffffffe);
      return;
    case 0xfffffffd:
      func_0201ad90(param_1,DAT_0201b17c,0xffffffff);
      return;
    case 0xfffffffe:
      func_0201ad90(param_1,DAT_0201b180,0xffffffff);
      return;
    case 0xffffffff:
      func_0201ad90(param_1,DAT_0201b184,0xffffffff);
      return;
    }
  }
  ((unsigned int (*)())(unsigned int)&func_0201ae2c)(auStack_3a,(int)param_2 / 2);
  func_0201ac10(param_1,auStack_3a,auStack_3a);
  if ((param_2 & 1) == 0) {
    return;
  }
  iVar3 = 9;
  puVar5 = auStack_60;
  puVar7 = param_1;
  do {
    uVar1 = *puVar7;
    puVar6 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    iVar3 = iVar3 + -1;
    puVar5[1] = *puVar6;
    puVar6 = puVar5 + 2;
    *puVar5 = uVar1;
    puVar5 = puVar6;
  } while (iVar3 != 0);
  *puVar6 = *puVar7;
  if (!((int)param_2 < 1)) {
    uVar4 = 0;
    uVar2 = DAT_0201b18c;
  } else {
    uVar4 = 0xffffffff;
    uVar2 = DAT_0201b184;
  }
  func_0201ad90(auStack_3a,uVar2,uVar4);
  func_0201ac10(param_1,auStack_60,auStack_3a);
  return;
}
