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

extern int func_0201611c();

uint func_0201622c(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;

  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(char *)(param_1 + 0xd) != '\0') || ((*(uint *)(param_1 + 4) & 0x3ff) >> 7 == 0)) {
    return 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 8);
  uVar3 = uVar4 & 7;
  if ((uVar3 != 1) && (((*(uint *)(param_1 + 4) & 0x1f) >> 2 & 1) != 0)) {
    if (2 < uVar3) {
      *(uint *)(param_1 + 8) = uVar4 & 0xfffffff8 | uVar3 - 1 & 7;
      if (uVar3 == 3) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
      }
      return (uint)*(byte *)(param_1 + uVar3 + 0xf);
    }
    uVar3 = 0;
    *(uint *)(param_1 + 8) = uVar4 & 0xfffffff8 | 2;
    iVar1 = func_0201611c();
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x28) != 0) {
        pbVar2 = *(byte **)(param_1 + 0x24);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        *(byte **)(param_1 + 0x24) = pbVar2 + 1;
        return (uint)*pbVar2;
      }
    }
    if (iVar1 != 1) {
      uVar3 = *(uint *)(param_1 + 8) & 0xfffffff8;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      *(uint *)(param_1 + 8) = uVar3;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return 0xffffffff;
}
