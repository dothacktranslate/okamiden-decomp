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

extern int func_0205ab9c();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_02058dc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int local_50;
  uint *local_44;
  int iStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  int iStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined4 uStack_28;

  uStack_28 = param_4;
  iVar8 = param_1[2];
  iVar5 = param_1[3];
  local_50 = iVar8;
  if (iVar8 < 0) {
    local_50 = 0;
  }
  iVar15 = iVar8 + param_1[4];
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  iVar4 = iVar5 + param_1[5];
  if (7 < iVar15) {
    iVar15 = 8;
  }
  if (7 < iVar4) {
    iVar4 = 8;
  }
  if (0 < iVar5) {
    iVar5 = 0;
  }
  iVar10 = param_1[8];
  if (0 < iVar8) {
    iVar8 = 0;
  }
  iVar13 = param_1[7];
  iVar6 = param_1[6];
  uVar7 = -iVar5 * iVar6 + iVar13 * -iVar8;
  iVar5 = param_1[1];
  iVar8 = *param_1;
  if (iVar10 != 4) {
    iVar11 = param_1[9];
    puVar2 = (uint *)(iVar8 + iVar4 * 8);
    puVar1 = (uint *)(iVar8 + iVar3 * 8);
    if (puVar1 < puVar2) {
      do {
        iVar8 = (int)uVar7 >> 0x1f;
        uVar9 = *puVar1;
        uVar12 = puVar1[1];
        uStack_34 = 0;
        uStack_33 = 0;
        iStack_38 = iVar5 + (uVar7 >> 3);
        func_0205ab9c(&iStack_38,(uVar7 * 0x20000000 + iVar8 >> 0x1d | iVar8 << 3) - iVar8);
        for (uVar14 = local_50 * iVar10; uVar14 < (uint)(iVar15 * iVar10); uVar14 = uVar14 + 8) {
          iVar8 = func_0205ab9c(&iStack_38,iVar13);
          if (iVar8 != 0) {
            if (uVar14 < 0x20) {
              uVar9 = uVar9 & ~(0xff << (uVar14 & 0xff)) | iVar11 + iVar8 << (uVar14 & 0xff);
            }
            else {
              uVar12 = uVar12 & ~(0xff << (uVar14 - 0x20 & 0xff)) |
                       iVar11 + iVar8 << (uVar14 - 0x20 & 0xff);
            }
          }
        }
        puVar1[1] = uVar12;
        puVar16 = puVar1 + 2;
        *puVar1 = uVar9;
        uVar7 = uVar7 + iVar6;
        puVar1 = puVar16;
      } while (puVar16 < puVar2);
      return;
    }
    return;
  }
  iVar11 = param_1[9];
  local_44 = (uint *)(iVar8 + iVar3 * 4);
  puVar1 = (uint *)(iVar8 + iVar4 * 4);
  if (local_44 < puVar1) {
    do {
      iVar8 = (int)uVar7 >> 0x1f;
      uVar14 = *local_44;
      iStack_30 = iVar5 + (uVar7 >> 3);
      uStack_2c = 0;
      uStack_2b = 0;
      func_0205ab9c(&iStack_30,(uVar7 * 0x20000000 + iVar8 >> 0x1d | iVar8 << 3) - iVar8);
      for (uVar9 = local_50 * iVar10; uVar9 < (uint)(iVar15 * iVar10); uVar9 = uVar9 + 4) {
        iVar8 = func_0205ab9c(&iStack_30,iVar13);
        if (iVar8 != 0) {
          uVar14 = uVar14 & ~(0xf << (uVar9 & 0xff)) | iVar11 + iVar8 << (uVar9 & 0xff);
        }
      }
      puVar2 = local_44 + 1;
      *local_44 = uVar14;
      uVar7 = uVar7 + iVar6;
      local_44 = puVar2;
    } while (puVar2 < puVar1);
    return;
  }
  return;
}
