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

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_02001f6c(int *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;

  iVar10 = param_1[1];
  puVar15 = &local_64;
  if (param_3 != param_2) {
    puVar15 = param_3;
  }
  iVar14 = *param_1;
  iVar8 = param_1[2];
  iVar7 = param_1[3];
  iVar6 = param_1[5];
  lVar1 = (longlong)(int)param_2[0xc] * (longlong)iVar7 +
          (longlong)(int)param_2[8] * (longlong)iVar8 +
          (longlong)(int)*param_2 * (longlong)iVar14 + (longlong)iVar10 * (longlong)(int)param_2[4];
  *puVar15 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar12 = param_1[4];
  lVar1 = (longlong)(int)param_2[0xd] * (longlong)iVar7 +
          (longlong)(int)param_2[9] * (longlong)iVar8 +
          (longlong)(int)param_2[1] * (longlong)iVar14 +
          (longlong)iVar10 * (longlong)(int)param_2[5];
  puVar15[1] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar5 = param_1[6];
  lVar1 = (longlong)(int)param_2[0xf] * (longlong)iVar7 +
          (longlong)(int)param_2[0xb] * (longlong)iVar8 +
          (longlong)(int)param_2[3] * (longlong)iVar14 +
          (longlong)iVar10 * (longlong)(int)param_2[7];
  puVar15[3] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar11 = param_1[7];
  lVar1 = (longlong)(int)param_2[0xe] * (longlong)iVar7 +
          (longlong)(int)param_2[10] * (longlong)iVar8 +
          (longlong)(int)param_2[2] * (longlong)iVar14 +
          (longlong)iVar10 * (longlong)(int)param_2[6];
  lVar2 = (longlong)(int)param_2[0xe] * (longlong)iVar11 +
          (longlong)(int)param_2[10] * (longlong)iVar5 +
          (longlong)(int)param_2[2] * (longlong)iVar12 + (longlong)iVar6 * (longlong)(int)param_2[6]
  ;
  puVar15[2] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  puVar15[6] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[0xd] * (longlong)iVar11 +
          (longlong)(int)param_2[9] * (longlong)iVar5 +
          (longlong)(int)param_2[1] * (longlong)iVar12 + (longlong)iVar6 * (longlong)(int)param_2[5]
  ;
  puVar15[5] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar7 = param_1[9];
  lVar1 = (longlong)(int)param_2[0xf] * (longlong)iVar11 +
          (longlong)(int)param_2[0xb] * (longlong)iVar5 +
          (longlong)(int)param_2[3] * (longlong)iVar12 + (longlong)iVar6 * (longlong)(int)param_2[7]
  ;
  puVar15[7] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  uVar3 = param_2[4];
  uVar4 = *param_2;
  uVar9 = param_2[8];
  iVar14 = param_1[8];
  uVar13 = param_2[0xc];
  lVar1 = (longlong)(int)uVar13 * (longlong)iVar11 +
          (longlong)(int)uVar9 * (longlong)iVar5 +
          (longlong)(int)uVar4 * (longlong)iVar12 + (longlong)iVar6 * (longlong)(int)uVar3;
  iVar5 = param_1[10];
  iVar10 = param_1[0xb];
  puVar15[4] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)uVar13 * (longlong)iVar10 +
          (longlong)(int)uVar9 * (longlong)iVar5 +
          (longlong)(int)uVar4 * (longlong)iVar14 + (longlong)iVar7 * (longlong)(int)uVar3;
  puVar15[8] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar12 = param_1[0xd];
  lVar1 = (longlong)(int)param_2[0xd] * (longlong)iVar10 +
          (longlong)(int)param_2[9] * (longlong)iVar5 +
          (longlong)(int)param_2[1] * (longlong)iVar14 + (longlong)iVar7 * (longlong)(int)param_2[5]
  ;
  puVar15[9] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar11 = param_1[0xc];
  iVar8 = param_1[0xe];
  iVar6 = param_1[0xf];
  lVar1 = (longlong)(int)param_2[0xf] * (longlong)iVar10 +
          (longlong)(int)param_2[0xb] * (longlong)iVar5 +
          (longlong)(int)param_2[3] * (longlong)iVar14 + (longlong)iVar7 * (longlong)(int)param_2[7]
  ;
  puVar15[0xb] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[0xe] * (longlong)iVar10 +
          (longlong)(int)param_2[10] * (longlong)iVar5 +
          (longlong)(int)param_2[2] * (longlong)iVar14 + (longlong)iVar7 * (longlong)(int)param_2[6]
  ;
  lVar2 = (longlong)(int)param_2[0xe] * (longlong)iVar6 +
          (longlong)(int)param_2[10] * (longlong)iVar8 +
          (longlong)(int)param_2[2] * (longlong)iVar11 +
          (longlong)iVar12 * (longlong)(int)param_2[6];
  puVar15[10] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  puVar15[0xe] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[0xd] * (longlong)iVar6 +
          (longlong)(int)param_2[9] * (longlong)iVar8 +
          (longlong)(int)param_2[1] * (longlong)iVar11 +
          (longlong)iVar12 * (longlong)(int)param_2[5];
  puVar15[0xd] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[0xc] * (longlong)iVar6 +
          (longlong)(int)param_2[8] * (longlong)iVar8 +
          (longlong)(int)*param_2 * (longlong)iVar11 + (longlong)iVar12 * (longlong)(int)param_2[4];
  puVar15[0xc] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[0xf] * (longlong)iVar6 +
          (longlong)(int)param_2[0xb] * (longlong)iVar8 +
          (longlong)(int)param_2[3] * (longlong)iVar11 +
          (longlong)iVar12 * (longlong)(int)param_2[7];
  puVar15[0xf] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  if (puVar15 == &local_64) {
    *param_3 = local_64;
    param_3[1] = uStack_60;
    param_3[2] = uStack_5c;
    param_3[3] = uStack_58;
    param_3[4] = uStack_54;
    param_3[5] = uStack_50;
    param_3[6] = uStack_4c;
    param_3[7] = uStack_48;
    param_3[8] = uStack_44;
    param_3[9] = uStack_40;
    param_3[10] = uStack_3c;
    param_3[0xb] = uStack_38;
    param_3[0xc] = uStack_34;
    param_3[0xd] = uStack_30;
    param_3[0xe] = uStack_2c;
    param_3[0xf] = uStack_28;
    return;
  }
  return;
}
