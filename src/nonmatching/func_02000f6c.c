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

extern int func_02002964();
extern int func_02002998();
extern int func_02009984();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 func_02000f6c(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  uint auStack_4c [9];
  undefined4 uStack_28;

  puVar14 = auStack_4c;
  if (param_1 != param_2) {
    puVar14 = param_2;
  }
  lVar2 = (longlong)(int)param_1[3] * (longlong)(int)param_1[8];
  uVar15 = (uint)lVar2;
  lVar3 = (longlong)(int)param_1[5] * (longlong)(int)param_1[6];
  uVar9 = (uint)lVar3;
  uVar10 = uVar15 - uVar9;
  lVar4 = (longlong)(int)param_1[4] * (longlong)(int)param_1[8];
  uVar16 = (uint)lVar4;
  lVar5 = (longlong)(int)param_1[5] * (longlong)(int)param_1[7];
  uVar11 = (uint)lVar5;
  uVar12 = uVar16 - uVar11;
  uVar13 = uVar10 + 0x800 >> 0xc |
           (((int)((ulonglong)lVar2 >> 0x20) -
            ((int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar15 < uVar9))) +
           (uint)(0xfffff7ff < uVar10)) * 0x100000;
  lVar2 = (longlong)(int)param_1[3] * (longlong)(int)param_1[7];
  uVar9 = (uint)lVar2;
  lVar3 = (longlong)(int)param_1[4] * (longlong)(int)param_1[6];
  uVar15 = (uint)lVar3;
  uVar16 = uVar12 + 0x800 >> 0xc |
           (((int)((ulonglong)lVar4 >> 0x20) -
            ((int)((ulonglong)lVar5 >> 0x20) + (uint)(uVar16 < uVar11))) +
           (uint)(0xfffff7ff < uVar12)) * 0x100000;
  uVar10 = uVar9 - uVar15;
  uVar12 = (uint)((longlong)(int)*param_1 * (longlong)(int)uVar16);
  uVar11 = (uint)((longlong)(int)param_1[1] * (longlong)(int)uVar13);
  uVar10 = uVar10 + 0x800 >> 0xc |
           (((int)((ulonglong)lVar2 >> 0x20) -
            ((int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar9 < uVar15))) +
           (uint)(0xfffff7ff < uVar10)) * 0x100000;
  lVar2 = (longlong)(int)uVar10 * (longlong)(int)param_1[2] +
          CONCAT44((int)((ulonglong)((longlong)(int)*param_1 * (longlong)(int)uVar16) >> 0x20) -
                   ((int)((ulonglong)((longlong)(int)param_1[1] * (longlong)(int)uVar13) >> 0x20) +
                   (uint)(uVar12 < uVar11)),uVar12 - uVar11) + 0x800;
  uVar9 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) * 0x100000;
  if (uVar9 != 0) {
    uStack_28 = param_4;
    func_02002998(uVar9);
    uVar12 = param_1[2];
    uVar6 = param_1[7];
    uVar9 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar12);
    lVar2 = (longlong)(int)param_1[1] * (longlong)(int)param_1[8];
    uVar17 = (uint)lVar2;
    uVar7 = param_1[3];
    uVar15 = (uint)((longlong)(int)uVar7 * (longlong)(int)uVar12);
    lVar3 = (longlong)(int)param_1[1] * (longlong)(int)param_1[5];
    uVar8 = (uint)lVar3;
    uStack_64 = (uint)((longlong)(int)param_1[4] * (longlong)(int)uVar12);
    iStack_60 = (int)((ulonglong)((longlong)(int)param_1[4] * (longlong)(int)uVar12) >> 0x20);
    uStack_5c = (uint)((longlong)(int)param_1[6] * (longlong)(int)uVar12);
    lVar4 = (longlong)(int)*param_1 * (longlong)(int)param_1[8];
    uVar18 = (uint)lVar4;
    iStack_58 = (int)((ulonglong)((longlong)(int)param_1[6] * (longlong)(int)uVar12) >> 0x20);
    lVar5 = (longlong)(int)*param_1 * (longlong)(int)param_1[5];
    uVar19 = (uint)lVar5;
    uVar11 = func_02002964();
    lVar2 = (longlong)(int)uVar11 *
            (longlong)
            (int)(uVar17 - uVar9 >> 0xc |
                 ((int)((ulonglong)lVar2 >> 0x20) -
                 ((int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar12) >> 0x20) +
                 (uint)(uVar17 < uVar9))) * 0x100000);
    lVar3 = (longlong)(int)uVar11 *
            (longlong)
            (int)(uVar8 - uStack_64 >> 0xc |
                 ((int)((ulonglong)lVar3 >> 0x20) - (iStack_60 + (uint)(uVar8 < uStack_64))) *
                 0x100000);
    lVar4 = (longlong)(int)uVar11 *
            (longlong)
            (int)(uVar18 - uStack_5c >> 0xc |
                 ((int)((ulonglong)lVar4 >> 0x20) - (iStack_58 + (uint)(uVar18 < uStack_5c))) *
                 0x100000);
    lVar5 = (longlong)(int)uVar11 *
            (longlong)
            (int)(uVar19 - uVar15 >> 0xc |
                 ((int)((ulonglong)lVar5 >> 0x20) -
                 ((int)((ulonglong)((longlong)(int)uVar7 * (longlong)(int)uVar12) >> 0x20) +
                 (uint)(uVar19 < uVar15))) * 0x100000);
    iVar1 = (int)uVar11 >> 0x1f;
    *puVar14 = (uint)((ulonglong)uVar16 * (ulonglong)uVar11) >> 0xc |
               (iVar1 * uVar16 +
               uVar11 * ((int)uVar16 >> 0x1f) + (int)((ulonglong)uVar16 * (ulonglong)uVar11 >> 0x20)
               ) * 0x100000;
    puVar14[1] = -((uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14);
    puVar14[2] = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
    puVar14[3] = -((uint)((ulonglong)uVar13 * (ulonglong)uVar11) >> 0xc |
                  (iVar1 * uVar13 +
                  uVar11 * ((int)uVar13 >> 0x1f) +
                  (int)((ulonglong)uVar13 * (ulonglong)uVar11 >> 0x20)) * 0x100000);
    puVar14[4] = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
    puVar14[5] = -((uint)lVar5 >> 0xc | (int)((ulonglong)lVar5 >> 0x20) << 0x14);
    puVar14[6] = (uint)((ulonglong)uVar10 * (ulonglong)uVar11) >> 0xc |
                 (iVar1 * uVar10 +
                 uVar11 * ((int)uVar10 >> 0x1f) +
                 (int)((ulonglong)uVar10 * (ulonglong)uVar11 >> 0x20)) * 0x100000;
    uVar10 = (uint)((longlong)(int)*param_1 * (longlong)(int)param_1[7]);
    uVar9 = (uint)((longlong)(int)param_1[6] * (longlong)(int)param_1[1]);
    lVar2 = (longlong)(int)uVar11 *
            (longlong)
            (int)(uVar10 - uVar9 >> 0xc |
                 ((int)((ulonglong)((longlong)(int)*param_1 * (longlong)(int)param_1[7]) >> 0x20) -
                 ((int)((ulonglong)((longlong)(int)param_1[6] * (longlong)(int)param_1[1]) >> 0x20)
                 + (uint)(uVar10 < uVar9))) * 0x100000);
    puVar14[7] = -((uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14);
    uVar10 = (uint)((longlong)(int)*param_1 * (longlong)(int)param_1[4]);
    uVar9 = (uint)((longlong)(int)param_1[3] * (longlong)(int)param_1[1]);
    lVar2 = (longlong)(int)uVar11 *
            (longlong)
            (int)(uVar10 - uVar9 >> 0xc |
                 ((int)((ulonglong)((longlong)(int)*param_1 * (longlong)(int)param_1[4]) >> 0x20) -
                 ((int)((ulonglong)((longlong)(int)param_1[3] * (longlong)(int)param_1[1]) >> 0x20)
                 + (uint)(uVar10 < uVar9))) * 0x100000);
    puVar14[8] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
    if (puVar14 == auStack_4c) {
      func_02009984(auStack_4c,param_2);
    }
    return 0;
  }
  return 0xffffffff;
}
