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

void func_0203b234(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    return;
  }
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 4);
  if (param_2 == 0x1000) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  else {
    lVar1 = (longlong)*(int *)(param_1 + 0x10) * (longlong)param_2 + 0x800;
    uVar3 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000;
  }
  iVar2 = *(int *)(param_1 + 0x14) + uVar3;
  *(int *)(param_1 + 0x14) = iVar2;
  if (-1 < (int)uVar3 || -1 < iVar2) {
    if ((int)(uVar4 * 0x1000) <= *(int *)(param_1 + 0x14)) {
      if ((*(uint *)(param_1 + 0xc) & 2) == 0) {
        *(uint *)(param_1 + 0x14) = uVar4 * 0x1000 - uVar3;
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
      }
      else {
        *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4 * -0x1000;
      }
      return;
    }
    return;
  }
  if ((*(uint *)(param_1 + 0xc) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  else {
    *(uint *)(param_1 + 0x14) = iVar2 + uVar4 * 0x1000;
  }
  return;
}
