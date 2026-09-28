typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef signed char sbyte;
typedef unsigned char byte;

typedef long long longlong;
typedef unsigned long long ulonglong;

typedef int bool;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

typedef int code();

extern int LZCOUNT();

#define CONCAT11(a,b) \
    ((((unsigned int)(a) & 0xffU) << 8) | \
     ((unsigned int)(b) & 0xffU))

#define CONCAT12(a,b) \
    ((((unsigned int)(a) & 0xffU) << 16) | \
     ((unsigned int)(b) & 0xffffU))

#define CONCAT13(a,b) \
    ((((unsigned int)(a) & 0xffU) << 24) | \
     ((unsigned int)(b) & 0xffffffU))

#define CONCAT14(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 32) | \
     ((unsigned long long)(b) & 0xffffffffULL))

#define CONCAT15(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 40) | \
     ((unsigned long long)(b) & 0xffffffffffULL))

#define CONCAT16(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 48) | \
     ((unsigned long long)(b) & 0xffffffffffffULL))

#define CONCAT17(a,b) \
    ((((unsigned long long)(a) & 0xffULL) << 56) | \
     ((unsigned long long)(b) & 0xffffffffffffffULL))

#define CONCAT21(a,b) \
    ((((unsigned int)(a) & 0xffffU) << 8) | \
     ((unsigned int)(b) & 0xffU))

#define CONCAT22(a,b) \
    ((((unsigned int)(a) & 0xffffU) << 16) | \
     ((unsigned int)(b) & 0xffffU))

#define CONCAT31(a,b) \
    ((((unsigned int)(a) & 0xffffffU) << 8) | \
     ((unsigned int)(b) & 0xffU))

#define CONCAT44(a,b) \
    ((((unsigned long long)(a)) << 32) | \
     ((unsigned int)(b)))

#define CARRY4(a,b) \
    ((uint)(a) > (uint)(0xffffffffU - (uint)(b)))

#define SCARRY4(a,b) \
    ((((int)(a) < 0) == ((int)(b) < 0)) && \
     (((int)((uint)(a) + (uint)(b)) < 0) != \
      ((int)(a) < 0)))

#define SBORROW4(a,b) \
    ((((int)(a) < 0) != ((int)(b) < 0)) && \
     (((int)((uint)(a) - (uint)(b)) < 0) != \
      ((int)(a) < 0)))

extern int func_0204bdc4();

void func_0204be48(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int aiStack_78 [5];
  undefined4 uStack_64;
  int iStack_18;

  pcVar4 = *(code **)(param_1 + 0x44);
  uVar1 = param_1;
  if (pcVar4 != (code *)0x0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x39);
  }
  if (pcVar4 == (code *)0x0 || uVar1 == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (param_2 == 4) {
    iStack_18 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28);
    iStack_18 = (int)((longlong)((unsigned int)0x0204bf28) * (longlong)iVar3 >> 0x22) - (iVar3 >> 0x1f);
  }
  aiStack_78[0] = param_2;
  uStack_64 = param_3;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x141) {
    func_0204bdc4(param_1,0x28);
  }
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 8) + 0x140;
  *(undefined1 *)(param_1 + 0x39) = 0;
  (*pcVar4)(param_1,aiStack_78);
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x20) + (iVar2 - iVar6);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x20) + (iVar5 - iVar6);
  return;
}
