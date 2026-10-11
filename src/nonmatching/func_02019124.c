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

extern int func_02016050();
extern int func_02016068();
extern int func_02018d9c();
extern int func_02018e80();

undefined4 func_02019124(int param_1,byte *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;

  iVar2 = func_02018d9c(param_2);
  iVar3 = func_02018d9c(param_2);
  pbVar4 = (byte *)func_02016050((iVar3 + 1) * 3);
  iVar10 = **(int **)(((unsigned int)0x02019324) + 4);
  iVar3 = (*(int **)(((unsigned int)0x02019324) + 4))[1];
  pbVar5 = (byte *)func_02016050(iVar2);
  pbVar6 = (byte *)func_02016050(iVar2);
  for (pbVar8 = pbVar5; pbVar8 < pbVar5 + iVar2; pbVar8 = pbVar8 + 1) {
    *pbVar8 = 0;
  }
  for (pbVar8 = pbVar6; pbVar8 < pbVar6 + iVar2; pbVar8 = pbVar8 + 1) {
    *pbVar8 = 0;
  }
  uVar11 = 0;
  iVar2 = func_02018d9c(param_2);
  pbVar8 = pbVar4;
  pbVar15 = pbVar5;
  pbVar17 = pbVar6;
  if (iVar2 != 0) {
    pbVar12 = param_2;
    pbVar13 = pbVar4;
    pbVar14 = pbVar5;
    pbVar16 = pbVar6;
    do {
      uVar9 = (uint)*pbVar12;
      pbVar8 = pbVar13;
      pbVar15 = pbVar14;
      pbVar17 = pbVar16;
      if ((iVar10 <= (int)uVar9) && ((int)uVar9 <= iVar10 + iVar3)) {
        uVar1 = *(ushort *)(*(int *)(*(int *)(((unsigned int)0x02019324) + 4) + 0xc) + (uVar9 - iVar10) * 2);
        if (uVar1 != 0) {
          pbVar8 = pbVar13 + 1;
          *pbVar13 = (byte)uVar1;
          if ((uVar1 & 0xf00) != 0) {
            pbVar15 = pbVar14 + 1;
            *pbVar14 = (byte)(uVar1 >> 8) & 0xf;
          }
          if ((uVar1 & 0xf000) != 0) {
            pbVar17 = pbVar16 + 1;
            *pbVar16 = (byte)((int)(uVar1 & 0xf000) >> 0xc);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar9 = func_02018d9c(param_2);
      pbVar12 = pbVar12 + 1;
      pbVar13 = pbVar8;
      pbVar14 = pbVar15;
      pbVar16 = pbVar17;
    } while (uVar11 < uVar9);
  }
  pbVar12 = pbVar5;
  pbVar13 = pbVar6;
  if (*(short *)(*(int *)(((unsigned int)0x02019324) + 4) + 8) == 0) {
    for (; pbVar12 < pbVar15; pbVar12 = pbVar12 + 1) {
      *pbVar8 = *pbVar12;
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    while (pbVar15 = pbVar15 + -1, pbVar5 <= pbVar15) {
      *pbVar8 = *pbVar15;
      pbVar8 = pbVar8 + 1;
    }
  }
  for (; pbVar13 < pbVar17; pbVar13 = pbVar13 + 1) {
    *pbVar8 = *pbVar13;
    pbVar8 = pbVar8 + 1;
  }
  *pbVar8 = 0;
  func_02016068(pbVar5);
  func_02016068(pbVar6);
  uVar7 = func_02018d9c(pbVar4);
  if (param_1 != 0) {
    func_02018e80(param_1,pbVar4,param_3);
  }
  func_02016068(pbVar4);
  return uVar7;
}
