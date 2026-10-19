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



void func_0204d1d8(int param_1,int param_2)

{
  byte bVar1;

  bVar1 = *(byte *)(param_2 + 5);
  *(byte *)(param_2 + 5) = bVar1 & 0xfc;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = param_2;
    return;
  case 6:
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = param_2;
    return;
  case 7:
    break;
  case 8:
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = param_2;
    return;
  case 9:
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = param_2;
    return;
  case 10:
    if ((3 < (*(int **)(param_2 + 8))[1]) && ((*(byte *)(**(int **)(param_2 + 8) + 5) & 3) != 0)) {
      ((unsigned int (*)())(unsigned int)&func_0204d1d8)();
    }
    if (*(int *)(param_2 + 8) == param_2 + 0xc) {
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 4;
    }
    return;
  default:
    return;
  }
  *(byte *)(param_2 + 5) = bVar1 & 0xfc | 4;
  if ((*(int *)(param_2 + 8) != 0) && ((*(byte *)(*(int *)(param_2 + 8) + 5) & 3) != 0)) {
    ((unsigned int (*)())(unsigned int)&func_0204d1d8)();
  }
  if ((*(byte *)(*(int *)(param_2 + 0xc) + 5) & 3) == 0) {
    return;
  }
  ((unsigned int (*)())(unsigned int)&func_0204d1d8)(param_1);
  return;
}
