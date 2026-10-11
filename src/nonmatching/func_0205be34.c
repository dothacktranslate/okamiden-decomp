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

extern int func_02001c28();
extern int func_020028e0();
extern int func_020099c4();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 func_0205be34(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint local_68 [16];
  undefined4 uStack_28;

  uStack_28 = param_4;
  func_020099c4(param_1,local_68);
  func_02001c28(param_2);
  iVar9 = 0;
  do {
    uVar3 = 0;
    iVar5 = iVar9;
    for (iVar2 = iVar9; iVar2 < 4; iVar2 = iVar2 + 1) {
      uVar6 = local_68[iVar9 + iVar2 * 4];
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
      }
      if ((int)uVar3 < (int)uVar6) {
        uVar3 = uVar6;
        iVar5 = iVar2;
      }
    }
    if (uVar3 == 0) {
      return 0xffffffff;
    }
    if (iVar5 != iVar9) {
      iVar8 = param_2 + iVar9 * 0x10;
      iVar2 = 0;
      iVar4 = param_2 + iVar5 * 0x10;
      do {
        uVar3 = local_68[iVar9 * 4 + iVar2];
        local_68[iVar9 * 4 + iVar2] = local_68[iVar5 * 4 + iVar2];
        local_68[iVar5 * 4 + iVar2] = uVar3;
        uVar7 = *(undefined4 *)(iVar8 + iVar2 * 4);
        *(undefined4 *)(iVar8 + iVar2 * 4) = *(undefined4 *)(iVar4 + iVar2 * 4);
        *(undefined4 *)(iVar4 + iVar2 * 4) = uVar7;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    uVar10 = func_020028e0(local_68[iVar9 * 5]);
    iVar2 = (int)(uVar10 >> 0x20);
    iVar5 = 0;
    iVar4 = param_2 + iVar9 * 0x10;
    do {
      uVar3 = local_68[iVar9 * 4 + iVar5];
      lVar1 = (ulonglong)uVar3 * (uVar10 & 0xffffffff);
      local_68[iVar9 * 4 + iVar5] =
           iVar2 * uVar3 + (int)uVar10 * ((int)uVar3 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
           (uint)(0x7fffffff < (uint)lVar1);
      uVar3 = *(uint *)(iVar4 + iVar5 * 4);
      lVar1 = (ulonglong)uVar3 * (uVar10 & 0xffffffff);
      *(uint *)(iVar4 + iVar5 * 4) =
           iVar2 * uVar3 + (int)uVar10 * ((int)uVar3 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
           (uint)(0x7fffffff < (uint)lVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar2 = 0;
    do {
      if (iVar2 != iVar9) {
        uVar3 = local_68[iVar9 + iVar2 * 4];
        iVar4 = 0;
        iVar5 = param_2 + iVar2 * 0x10;
        do {
          uVar6 = local_68[iVar9 * 4 + iVar4];
          local_68[iVar2 * 4 + iVar4] =
               local_68[iVar2 * 4 + iVar4] -
               ((uint)((ulonglong)uVar6 * (ulonglong)uVar3) >> 0xc |
               (((int)uVar3 >> 0x1f) * uVar6 +
               uVar3 * ((int)uVar6 >> 0x1f) + (int)((ulonglong)uVar6 * (ulonglong)uVar3 >> 0x20)) *
               0x100000);
          uVar6 = *(uint *)(param_2 + iVar9 * 0x10 + iVar4 * 4);
          *(uint *)(iVar5 + iVar4 * 4) =
               *(int *)(iVar5 + iVar4 * 4) -
               ((uint)((ulonglong)uVar6 * (ulonglong)uVar3) >> 0xc |
               (((int)uVar3 >> 0x1f) * uVar6 +
               uVar3 * ((int)uVar6 >> 0x1f) + (int)((ulonglong)uVar6 * (ulonglong)uVar3 >> 0x20)) *
               0x100000);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  return 0;
}
