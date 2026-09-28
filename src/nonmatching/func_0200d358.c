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

extern int func_0200d2cc();

int func_0200d358(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;
  ushort local_12;

  local_20 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(local_20 + 0x20);
  local_1c = *(int *)(iVar3 + 0xc) + (uint)*(ushort *)(param_1 + 0x34) * 8;
  iVar1 = func_0200d2cc(&local_20,&local_18,8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
    uVar2 = (uint)*(ushort *)(param_1 + 0x36);
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = *(uint *)(param_1 + 0x38);
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined2 *)(param_1 + 0x26) = local_14;
      *(int *)(param_1 + 0x28) = *(int *)(iVar3 + 0xc) + local_18;
    }
    *(uint *)(param_1 + 0x2c) = local_12 & ((unsigned int)0x0200d3f0);
  }
  return iVar1;
}
