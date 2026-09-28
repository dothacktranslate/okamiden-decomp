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

void func_0205fd70(uint *param_1,int param_2,uint *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;

  uVar8 = *param_3;
  uVar9 = param_2 >> 0xc;
  param_4 = param_4 + param_3[1];
  if ((uVar8 & 0xc0000000) != 0) {
    uVar5 = uVar8 & ((unsigned int)0x0205ff40);
    if ((uVar8 & 0x40000000) == 0) {
      if ((uVar9 & 3) == 0) {
        uVar9 = uVar9 >> 2;
      }
      else {
        if (uVar9 <= uVar5 >> 0x10) {
          if ((uVar9 & 1) != 0) {
            if ((uVar9 & 2) == 0) {
              uVar5 = uVar9 >> 2;
              uVar9 = uVar5 + 1;
            }
            else {
              uVar9 = uVar9 >> 2;
              uVar5 = uVar9 + 1;
            }
            if ((uVar8 & 0x20000000) == 0) {
              puVar6 = (uint *)(param_4 + uVar5 * 8);
              uVar8 = *puVar6;
              uVar14 = puVar6[1];
              puVar6 = (uint *)(param_4 + uVar9 * 8);
              lVar3 = (ulonglong)uVar8 * 3;
              uVar10 = (uint)lVar3;
              uVar11 = *puVar6;
              lVar4 = (ulonglong)uVar14 * 3;
              uVar5 = (uint)lVar4;
              uVar9 = puVar6[1];
              param_1[1] = uVar5 + uVar9 >> 2 |
                           (((int)uVar14 >> 0x1f) * 3 + (int)((ulonglong)lVar4 >> 0x20) +
                            ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar5,uVar9)) * 0x40000000;
              *param_1 = uVar10 + uVar11 >> 2 |
                         (((int)uVar8 >> 0x1f) * 3 + (int)((ulonglong)lVar3 >> 0x20) +
                          ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar10,uVar11)) * 0x40000000;
              return;
            }
            sVar1 = *(short *)(param_4 + uVar5 * 4 + 2);
            sVar2 = *(short *)(param_4 + uVar9 * 4 + 2);
            *param_1 = (int)*(short *)(param_4 + uVar9 * 4) + *(short *)(param_4 + uVar5 * 4) * 3 >>
                       2;
            param_1[1] = (int)sVar2 + sVar1 * 3 >> 2;
            return;
          }
          uVar9 = uVar9 >> 2;
          goto LAB_0205fed8;
        }
        uVar9 = (uVar9 & 3) + (uVar5 >> 0x12);
      }
    }
    else if ((uVar9 & 1) == 0) {
      uVar9 = uVar9 >> 1;
    }
    else {
      if (uVar9 <= uVar5 >> 0x10) {
        uVar9 = uVar9 >> 1;
LAB_0205fed8:
        if ((uVar8 & 0x20000000) == 0) {
          piVar13 = (int *)(param_4 + uVar9 * 8);
          iVar12 = piVar13[3];
          iVar7 = piVar13[1];
          *param_1 = *piVar13 + piVar13[2] >> 1;
          param_1[1] = iVar7 + iVar12 >> 1;
          return;
        }
        iVar12 = param_4 + uVar9 * 4;
        sVar1 = *(short *)(iVar12 + 2);
        sVar2 = *(short *)(iVar12 + 6);
        *param_1 = (int)*(short *)(param_4 + uVar9 * 4) + (int)*(short *)(iVar12 + 4) >> 1;
        param_1[1] = (int)sVar1 + (int)sVar2 >> 1;
        return;
      }
      uVar9 = (uVar5 >> 0x11) + 1;
    }
  }
  if ((uVar8 & 0x20000000) == 0) {
    puVar6 = (uint *)(param_4 + uVar9 * 8);
    uVar8 = *puVar6;
    uVar9 = puVar6[1];
  }
  else {
    uVar8 = (uint)*(short *)(param_4 + uVar9 * 4);
    uVar9 = (uint)*(short *)(param_4 + uVar9 * 4 + 2);
  }
  *param_1 = uVar8;
  param_1[1] = uVar9;
  return;
}
