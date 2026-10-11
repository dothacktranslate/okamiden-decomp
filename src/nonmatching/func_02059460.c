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

extern int func_02058c90();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_02059460(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_3c;
  uint local_2c;

  local_2c = param_4 & 0xfffffff8;
  iVar7 = param_1[4];
  uVar8 = param_3 & 0xfffffff8;
  iVar1 = (int)((uint)*(byte *)(param_1 + 3) * 0x40) >> 3;
  local_3c = iVar1 * (((int)(local_2c + ((uint)((int)local_2c >> 2) >> 0x1d)) >> 3) * iVar7 +
                     ((int)(uVar8 + ((uint)((int)uVar8 >> 2) >> 0x1d)) >> 3)) + *param_1;
  uVar5 = param_4 + param_6 + 7 & 0xfffffff8;
  if ((int)uVar5 <= (int)local_2c) {
    return;
  }
  do {
    iVar2 = local_3c;
    uVar3 = uVar8;
    if ((int)local_2c < (int)param_4) {
      iVar9 = param_4 - local_2c;
    }
    else {
      iVar9 = 0;
    }
    for (; (int)uVar3 < (int)(param_3 + param_5 + 7 & 0xfffffff8); uVar3 = uVar3 + 8) {
      iVar6 = param_3 - uVar3;
      iVar4 = (param_3 + param_5) - uVar3;
      if ((int)param_3 <= (int)uVar3) {
        iVar6 = 0;
      }
      if (8 < iVar4) {
        iVar4 = 8;
      }
      func_02058c90(iVar2,iVar6,iVar9,iVar4 - iVar6);
      iVar2 = iVar2 + iVar1;
    }
    local_3c = local_3c + iVar7 * iVar1;
    local_2c = local_2c + 8;
  } while ((int)local_2c < (int)uVar5);
  return;
}
