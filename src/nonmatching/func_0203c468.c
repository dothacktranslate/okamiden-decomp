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

void func_0203c468(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  *(int *)(param_1 + 0x18) = param_1 + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1c) = param_1 + *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x20) = param_1 + *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x30) = param_1 + *(int *)(param_1 + 0x30);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      iVar2 = uVar1 * 0x5c;
      iVar4 = *(int *)(param_1 + 0x18) + iVar2;
      iVar3 = *(int *)(iVar4 + 0x40);
      if (iVar3 != 0) {
        *(int *)(iVar4 + 0x40) = (iVar3 + -1) * 0x48 + *(int *)(param_1 + 0x1c);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2 + 0x44);
      if (iVar3 != 0) {
        *(int *)(uVar1 * 0x5c + *(int *)(param_1 + 0x18) + 0x44) =
             (iVar3 + -1) * 0x24 + *(int *)(param_1 + 0x20);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2 + 0x48);
      if (iVar3 != 0) {
        *(int *)(uVar1 * 0x5c + *(int *)(param_1 + 0x18) + 0x48) =
             param_1 + *(int *)(*(int *)(param_1 + 0x24) + param_1 + iVar3 * 4 + -4);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2 + 0x4c);
      if (iVar3 != 0) {
        *(int *)(uVar1 * 0x5c + *(int *)(param_1 + 0x18) + 0x4c) =
             param_1 + *(int *)(*(int *)(param_1 + 0x28) + param_1 + iVar3 * 4 + -4);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2 + 0x50);
      if (iVar3 != 0) {
        *(int *)(uVar1 * 0x5c + *(int *)(param_1 + 0x18) + 0x50) =
             param_1 + *(int *)(*(int *)(param_1 + 0x2c) + param_1 + iVar3 * 4 + -4);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2 + 0x54);
      if (iVar3 != 0) {
        *(int *)(uVar1 * 0x5c + *(int *)(param_1 + 0x18) + 0x54) =
             (iVar3 + -1) * 0x54 + *(int *)(param_1 + 0x30);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + iVar2 + 0x58);
      if (iVar2 != 0) {
        *(int *)(uVar1 * 0x5c + *(int *)(param_1 + 0x18) + 0x58) =
             param_1 + *(int *)(*(int *)(param_1 + 0x34) + param_1 + iVar2 * 4 + -4);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = (uint)((ulonglong)((unsigned int)0x0203c64c) * (ulonglong)(uint)(*(int *)(param_1 + 8) - iVar2) >> 0x25)
  ;
  uVar5 = 0;
  if (uVar1 == 0) {
    return;
  }
  do {
    iVar3 = uVar5 * 0x2c + param_1 + iVar2;
    uVar5 = uVar5 + 1;
    *(int *)(iVar3 + 0x20) = (*(int *)(iVar3 + 0x20) + -1) * 0x5c + *(int *)(param_1 + 0x18);
  } while (uVar5 < uVar1);
  return;
}
