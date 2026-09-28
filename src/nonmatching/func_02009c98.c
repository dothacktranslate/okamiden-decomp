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

undefined8 func_02009c98(uint *param_1,undefined1 *param_2,int param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;

  puVar1 = param_1;
  puVar4 = param_2;
  switch(param_3) {
  case 8:
    puVar1 = (uint *)((int)param_1 + 1);
    puVar4 = param_2 + 1;
    *param_2 = (char)*param_1;
  case 7:
    param_1 = (uint *)((int)puVar1 + 1);
    param_2 = puVar4 + 1;
    *puVar4 = (char)*puVar1;
  case 6:
    puVar1 = (uint *)((int)param_1 + 1);
    puVar4 = param_2 + 1;
    *param_2 = (char)*param_1;
  case 5:
    param_1 = (uint *)((int)puVar1 + 1);
    param_2 = puVar4 + 1;
    *puVar4 = (char)*puVar1;
  case 4:
    puVar1 = (uint *)((int)param_1 + 1);
    puVar4 = param_2 + 1;
    *param_2 = (char)*param_1;
  case 3:
    param_1 = (uint *)((int)puVar1 + 1);
    param_2 = puVar4 + 1;
    *puVar4 = (char)*puVar1;
  case 2:
    puVar1 = (uint *)((int)param_1 + 1);
    puVar4 = param_2 + 1;
    *param_2 = (char)*param_1;
  case 1:
    param_1 = (uint *)((int)puVar1 + 1);
    param_2 = puVar4 + 1;
    *puVar4 = (char)*puVar1;
  case 0:
    return CONCAT44(param_2,param_1);
  default:
    puVar4 = param_2;
    puVar1 = param_1;
    if (((uint)param_1 & 1) != 0) {
      param_3 = param_3 + -1;
      puVar1 = (uint *)((int)param_1 + 1);
      puVar4 = param_2 + 1;
      *param_2 = (char)*param_1;
    }
    if (((uint)puVar1 & 2) != 0) {
      param_3 = param_3 + -2;
      puVar2 = (undefined1 *)((int)puVar1 + 1);
      puVar5 = puVar4 + 1;
      *puVar4 = (char)*puVar1;
      puVar1 = (uint *)((int)puVar1 + 2);
      puVar4 = puVar4 + 2;
      *puVar5 = *puVar2;
    }
    uVar8 = (uint)puVar4 & 3;
    puVar6 = (uint *)((uint)puVar4 & 0xfffffffc);
    if (uVar8 == 0) {
      bVar19 = SBORROW4(param_3,0x20);
      param_3 = param_3 + -0x20;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar10 = puVar1[2];
          uVar11 = puVar1[3];
          uVar12 = puVar1[4];
          uVar13 = puVar1[5];
          uVar14 = puVar1[6];
          uVar15 = puVar1[7];
          puVar1 = puVar1 + 8;
          *puVar6 = uVar8;
          puVar6[1] = uVar9;
          puVar6[2] = uVar10;
          puVar6[3] = uVar11;
          puVar6[4] = uVar12;
          puVar6[5] = uVar13;
          puVar6[6] = uVar14;
          puVar6[7] = uVar15;
          puVar6 = puVar6 + 8;
          bVar19 = SBORROW4(param_3,0x20);
          param_3 = param_3 + -0x20;
          bVar18 = param_3 < 0;
        }
      } while (bVar18 == bVar19);
      bVar19 = SBORROW4(param_3 + 0x20,4);
      param_3 = param_3 + 0x1c;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          *puVar6 = *puVar1;
          bVar19 = SBORROW4(param_3,4);
          param_3 = param_3 + -4;
          bVar18 = param_3 < 0;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
      } while (bVar18 == bVar19);
      uVar8 = param_3 + 4;
    }
    else if (uVar8 == 1) {
      uVar8 = *puVar6 & 0xff;
      bVar19 = SBORROW4(param_3,0x20);
      param_3 = param_3 + -0x20;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar9 = *puVar1;
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          uVar14 = puVar1[4];
          uVar15 = puVar1[5];
          uVar16 = puVar1[6];
          uVar17 = puVar1[7];
          puVar1 = puVar1 + 8;
          uVar10 = uVar8 | uVar9 << 8;
          uVar8 = uVar17 >> 0x18;
          *puVar6 = uVar10;
          puVar6[1] = uVar9 >> 0x18 | uVar11 << 8;
          puVar6[2] = uVar11 >> 0x18 | uVar12 << 8;
          puVar6[3] = uVar12 >> 0x18 | uVar13 << 8;
          puVar6[4] = uVar13 >> 0x18 | uVar14 << 8;
          puVar6[5] = uVar14 >> 0x18 | uVar15 << 8;
          puVar6[6] = uVar15 >> 0x18 | uVar16 << 8;
          puVar6[7] = uVar16 >> 0x18 | uVar17 << 8;
          puVar6 = puVar6 + 8;
          bVar19 = SBORROW4(param_3,0x20);
          param_3 = param_3 + -0x20;
          bVar18 = param_3 < 0;
        }
      } while (bVar18 == bVar19);
      bVar19 = SBORROW4(param_3 + 0x20,4);
      param_3 = param_3 + 0x1c;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar9 = *puVar1;
          *puVar6 = uVar8 | uVar9 << 8;
          uVar8 = uVar9 >> 0x18;
          bVar19 = SBORROW4(param_3,4);
          param_3 = param_3 + -4;
          bVar18 = param_3 < 0;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
      } while (bVar18 == bVar19);
      puVar1 = (uint *)((int)puVar1 + -1);
      uVar8 = param_3 + 5;
    }
    else if (uVar8 == 2) {
      uVar8 = *puVar6 & 0xffff;
      bVar19 = SBORROW4(param_3,0x20);
      param_3 = param_3 + -0x20;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar9 = *puVar1;
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          uVar14 = puVar1[4];
          uVar15 = puVar1[5];
          uVar16 = puVar1[6];
          uVar17 = puVar1[7];
          puVar1 = puVar1 + 8;
          uVar10 = uVar8 | uVar9 << 0x10;
          uVar8 = uVar17 >> 0x10;
          *puVar6 = uVar10;
          puVar6[1] = uVar9 >> 0x10 | uVar11 << 0x10;
          puVar6[2] = uVar11 >> 0x10 | uVar12 << 0x10;
          puVar6[3] = uVar12 >> 0x10 | uVar13 << 0x10;
          puVar6[4] = uVar13 >> 0x10 | uVar14 << 0x10;
          puVar6[5] = uVar14 >> 0x10 | uVar15 << 0x10;
          puVar6[6] = uVar15 >> 0x10 | uVar16 << 0x10;
          puVar6[7] = uVar16 >> 0x10 | uVar17 << 0x10;
          puVar6 = puVar6 + 8;
          bVar19 = SBORROW4(param_3,0x20);
          param_3 = param_3 + -0x20;
          bVar18 = param_3 < 0;
        }
      } while (bVar18 == bVar19);
      bVar19 = SBORROW4(param_3 + 0x20,4);
      param_3 = param_3 + 0x1c;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar9 = *puVar1;
          *puVar6 = uVar8 | uVar9 << 0x10;
          uVar8 = uVar9 >> 0x10;
          bVar19 = SBORROW4(param_3,4);
          param_3 = param_3 + -4;
          bVar18 = param_3 < 0;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
      } while (bVar18 == bVar19);
      puVar1 = (uint *)((int)puVar1 + -2);
      uVar8 = param_3 + 6;
    }
    else {
      uVar8 = *puVar6 & 0xffffff;
      bVar19 = SBORROW4(param_3,0x20);
      param_3 = param_3 + -0x20;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar9 = *puVar1;
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          uVar14 = puVar1[4];
          uVar15 = puVar1[5];
          uVar16 = puVar1[6];
          uVar17 = puVar1[7];
          puVar1 = puVar1 + 8;
          uVar10 = uVar8 | uVar9 << 0x18;
          uVar8 = uVar17 >> 8;
          *puVar6 = uVar10;
          puVar6[1] = uVar9 >> 8 | uVar11 << 0x18;
          puVar6[2] = uVar11 >> 8 | uVar12 << 0x18;
          puVar6[3] = uVar12 >> 8 | uVar13 << 0x18;
          puVar6[4] = uVar13 >> 8 | uVar14 << 0x18;
          puVar6[5] = uVar14 >> 8 | uVar15 << 0x18;
          puVar6[6] = uVar15 >> 8 | uVar16 << 0x18;
          puVar6[7] = uVar16 >> 8 | uVar17 << 0x18;
          puVar6 = puVar6 + 8;
          bVar19 = SBORROW4(param_3,0x20);
          param_3 = param_3 + -0x20;
          bVar18 = param_3 < 0;
        }
      } while (bVar18 == bVar19);
      bVar19 = SBORROW4(param_3 + 0x20,4);
      param_3 = param_3 + 0x1c;
      bVar18 = param_3 < 0;
      do {
        if (bVar18 == bVar19) {
          uVar9 = *puVar1;
          *puVar6 = uVar8 | uVar9 << 0x18;
          uVar8 = uVar9 >> 8;
          bVar19 = SBORROW4(param_3,4);
          param_3 = param_3 + -4;
          bVar18 = param_3 < 0;
          puVar6 = puVar6 + 1;
          puVar1 = puVar1 + 1;
        }
      } while (bVar18 == bVar19);
      puVar1 = (uint *)((int)puVar1 + -3);
      uVar8 = param_3 + 7;
    }
    if ((uVar8 & 4) != 0) {
      *(char *)puVar6 = (char)*puVar1;
      *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)((int)puVar1 + 1);
      puVar4 = (undefined1 *)((int)puVar1 + 3);
      puVar2 = (undefined1 *)((int)puVar6 + 3);
      *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar1 + 2);
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar4;
    }
    if ((uVar8 & 2) != 0) {
      puVar4 = (undefined1 *)((int)puVar1 + 1);
      puVar2 = (undefined1 *)((int)puVar6 + 1);
      *(char *)puVar6 = (char)*puVar1;
      puVar1 = (uint *)((int)puVar1 + 2);
      puVar6 = (uint *)((int)puVar6 + 2);
      *puVar2 = *puVar4;
    }
    puVar7 = puVar6;
    puVar3 = puVar1;
    if ((uVar8 & 1) != 0) {
      puVar3 = (uint *)((int)puVar1 + 1);
      puVar7 = (uint *)((int)puVar6 + 1);
      *(char *)puVar6 = (char)*puVar1;
    }
    return CONCAT44(puVar7,puVar3);
  }
}
