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

void func_0201b36c(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;

  iVar10 = 9;
  puVar12 = param_1;
  do {
    puVar3 = param_2 + 2;
    uVar2 = *param_2;
    iVar10 = iVar10 + -1;
    puVar12[1] = param_2[1];
    puVar13 = puVar12 + 2;
    *puVar12 = uVar2;
    param_2 = puVar3;
    puVar12 = puVar13;
  } while (iVar10 != 0);
  *puVar13 = *puVar3;
  if (*(char *)(param_3 + 5) == '\0') {
    return;
  }
  uVar15 = (uint)*(byte *)(param_1 + 2);
  uVar4 = uVar15;
  if (uVar15 < *(byte *)(param_3 + 4)) {
    uVar4 = (uint)*(byte *)(param_3 + 4);
  }
  iVar14 = (int)(short)param_1[1] - (int)*(short *)(param_3 + 2);
  iVar10 = uVar4 + iVar14;
  if (0x20 < iVar10) {
    iVar10 = 0x20;
  }
  while ((int)uVar15 < iVar10) {
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    *(undefined1 *)((int)param_1 + uVar15 + 5) = 0;
    uVar15 = (uint)*(byte *)(param_1 + 2);
  }
  pbVar7 = (byte *)((int)param_1 + 5);
  iVar9 = (uint)*(byte *)(param_3 + 4) + iVar14;
  if (iVar9 < iVar10) {
    iVar10 = iVar9;
  }
  pbVar5 = (byte *)(param_3 + 5);
  pbVar18 = pbVar5 + (int)(pbVar7 + iVar10 + (-iVar14 - (int)pbVar7));
  pbVar17 = pbVar7 + iVar10;
  pbVar19 = pbVar18;
  while ((pbVar7 < pbVar17 && (pbVar5 < pbVar19))) {
    pbVar16 = pbVar17 + -1;
    pbVar19 = pbVar19 + -1;
    if (*pbVar16 < *pbVar19) {
      pbVar11 = pbVar17 + -2;
      bVar1 = pbVar17[-2];
      while (bVar1 == 0) {
        pbVar11 = pbVar11 + -1;
        bVar1 = *pbVar11;
      }
      while (pbVar11 != pbVar16) {
        *pbVar11 = *pbVar11 - 1;
        pbVar11 = pbVar11 + 1;
        *pbVar11 = *pbVar11 + 10;
      }
    }
    *pbVar16 = *pbVar16 - *pbVar19;
    pbVar17 = pbVar16;
  }
  iVar10 = (int)pbVar18 - (int)pbVar5;
  if (iVar10 < (int)(uint)*(byte *)(param_3 + 4)) {
    bVar20 = *pbVar18 < 5;
    if ((bVar20) || (*pbVar18 != 5)) {
LAB_0201b50c:
      if (bVar20) {
        if (*pbVar17 == 0) {
          pbVar18 = pbVar17 + -1;
          bVar1 = pbVar17[-1];
          while (bVar1 == 0) {
            pbVar18 = pbVar18 + -1;
            bVar1 = *pbVar18;
          }
          while (pbVar18 != pbVar17) {
            *pbVar18 = *pbVar18 - 1;
            pbVar18 = pbVar18 + 1;
            *pbVar18 = *pbVar18 + 10;
          }
        }
        *pbVar17 = *pbVar17 - 1;
      }
    }
    else {
      do {
        pbVar18 = pbVar18 + 1;
        if ((byte *)(param_3 + 5 + (uint)*(byte *)(param_3 + 4)) <= pbVar18) {
          iVar14 = iVar14 + iVar10;
          pbVar17 = pbVar7 + iVar14 + -1;
          if ((pbVar7[iVar14 + -1] & 1) != 0) {
            bVar20 = true;
          }
          goto LAB_0201b50c;
        }
      } while (*pbVar18 == 0);
    }
  }
  bVar1 = *pbVar7;
  pbVar18 = pbVar7;
  while (bVar1 == 0) {
    pbVar18 = pbVar18 + 1;
    bVar1 = *pbVar18;
  }
  if (pbVar7 < pbVar18) {
    bVar1 = *(byte *)(param_1 + 2);
    iVar10 = (int)pbVar18 - (int)pbVar7;
    param_1[1] = param_1[1] - ((ushort)iVar10 & 0xff);
    pbVar17 = pbVar7;
    for (; pbVar18 < pbVar7 + bVar1; pbVar18 = pbVar18 + 1) {
      *pbVar17 = *pbVar18;
      pbVar17 = pbVar17 + 1;
    }
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) - (char)iVar10;
  }
  pcVar6 = (char *)((int)param_1 + 5);
  pcVar8 = pcVar6 + *(byte *)(param_1 + 2);
  do {
    if (pcVar8 <= pcVar6) break;
    pcVar8 = pcVar8 + -1;
  } while (*pcVar8 == '\0');
  *(char *)(param_1 + 2) = ((char)pcVar8 - (char)pcVar6) + '\x01';
  return;
}
