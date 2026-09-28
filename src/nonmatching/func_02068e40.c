#pragma thumb on

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

extern int func_0x020c8e30();

void func_02068e40(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_18;

  sVar1 = *(short *)(param_2 + 0x50);
  iVar5 = 0x28;
  puVar6 = (undefined4 *)(param_1 + ((unsigned int)0x02068ed0));
  puVar7 = param_2;
  do {
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    puVar7 = puVar7 + 2;
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined2 *)(param_1 + ((unsigned int)0x02068ed4)) = *(undefined2 *)(param_2 + 0x50);
  iVar5 = ((unsigned int)0x02068ed0);
  local_18 = 0;
  if (0 < sVar1) {
    iVar9 = ((unsigned int)0x02068ed0) + 6;
    do {
      iVar8 = 0;
      if (0 < *(short *)(param_1 + ((unsigned int)0x02068ed4))) {
        do {
          iVar4 = param_1 + iVar8 * 0x20;
          if (*(char *)(iVar4 + iVar9) != '\x06') {
            func_0x020c8e30(*(undefined4 *)(iVar4 + iVar5),param_1 + iVar5);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(short *)(param_1 + ((unsigned int)0x02068ed4)));
      }
      local_18 = local_18 + 1;
    } while (local_18 < sVar1);
  }
  puVar6 = (undefined4 *)(param_1 + ((unsigned int)0x02068ed0));
  iVar5 = 0x28;
  puVar7 = param_2;
  do {
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar7 = uVar2;
    puVar7[1] = uVar3;
    puVar7 = puVar7 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_1 + ((unsigned int)0x02068ed4));
  return;
}
