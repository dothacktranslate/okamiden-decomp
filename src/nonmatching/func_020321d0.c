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
extern unsigned int func_020304ac();
extern unsigned int func_020307f8();
extern unsigned int func_0203218c();


int func_020321d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [64];
  undefined4 uStack_10;

  puVar3 = auStack_50;
  uStack_10 = param_4;
  iVar1 = func_0203218c();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      puVar3 = (undefined1 *)(param_1 + 0x54);
    }
    else {
      uVar2 = ((unsigned int (*)())(unsigned int)&func_020321d0)();
      func_020307f8(auStack_50,uVar2,param_1 + 0x54);
    }
    func_020304ac(param_1 + 0x94,puVar3);
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  return param_1 + 0x94;
}
