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

undefined4 func_020574d4(int *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  uVar4 = (uint)*(ushort *)((int)param_1 + 6);
  bVar3 = false;
  if (((uint)*(ushort *)(param_1 + 2) <= uVar4 + 1) && (*(ushort *)(param_1 + 1) <= uVar4)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar4 = (uVar4 - *(ushort *)(param_1 + 2)) + 1 & 0xffff;
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 < param_3) {
    return 0;
  }
  iVar6 = *param_1 * 0x540 + ((unsigned int)0x0205759c) + 0x100 + (uint)*(ushort *)(param_1 + 2) * 8;
  iVar5 = 0;
  if (0 < (int)param_3) {
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      iVar7 = iVar6 + iVar5 * 8;
      *(undefined2 *)(iVar6 + iVar5 * 8) = *param_2;
      *(undefined2 *)(iVar7 + 2) = uVar1;
      *(undefined2 *)(iVar7 + 4) = uVar2;
      iVar5 = iVar5 + 1;
      *(short *)(param_1 + 2) = (short)param_1[2] + 1;
      param_2 = param_2 + 4;
    } while (iVar5 < (int)param_3);
  }
  return 1;
}
