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

extern int func_02058b8c();
extern int func_02058c90();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_020595f8(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint local_30;

  bVar2 = *(byte *)(param_1 + 3);
  uVar8 = param_3 & 0xfffffff8;
  local_30 = param_4 & 0xfffffff8;
  uVar9 = param_4 + param_6 + 7 & 0xfffffff8;
  iVar1 = (int)(uVar8 + ((uint)((int)uVar8 >> 2) >> 0x1d)) >> 3;
  iVar13 = (int)(local_30 + ((uint)((int)local_30 >> 2) >> 0x1d)) >> 3;
  iVar10 = param_1[1];
  iVar11 = param_1[2];
  iVar5 = *param_1;
  if ((int)uVar9 <= (int)local_30) {
    return;
  }
  do {
    iVar3 = iVar1;
    uVar4 = uVar8;
    if ((int)local_30 < (int)param_4) {
      iVar14 = param_4 - local_30;
    }
    else {
      iVar14 = 0;
    }
    for (; (int)uVar4 < (int)(param_3 + param_5 + 7 & 0xfffffff8); uVar4 = uVar4 + 8) {
      iVar6 = func_02058b8c(iVar3,iVar13,iVar10,iVar11);
      iVar7 = param_3 - uVar4;
      iVar12 = (param_3 + param_5) - uVar4;
      if ((int)param_3 <= (int)uVar4) {
        iVar7 = 0;
      }
      if (8 < iVar12) {
        iVar12 = 8;
      }
      func_02058c90(((int)((uint)bVar2 * 0x40) >> 3) * iVar6 + iVar5,iVar7,iVar14,iVar12 - iVar7);
      iVar3 = iVar3 + 1;
    }
    iVar13 = iVar13 + 1;
    local_30 = local_30 + 8;
  } while ((int)local_30 < (int)uVar9);
  return;
}
