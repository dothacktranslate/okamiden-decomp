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

int func_0205ef10(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 1);
  if (uVar3 < 0x10) {
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if ((param_1 == 0) || (*(byte *)(param_1 + 1) <= uVar2)) {
          piVar7 = (int *)0x0;
        }
        else {
          iVar6 = param_1 + (uint)*(ushort *)(param_1 + 6);
          piVar7 = (int *)(iVar6 + (uint)*(ushort *)(iVar6 + 2) + uVar2 * 0x10);
        }
        iVar6 = *piVar7;
        bVar10 = iVar6 == *param_2;
        if (bVar10) {
          iVar6 = piVar7[1];
        }
        bVar11 = bVar10 && iVar6 == param_2[1];
        if (bVar10 && iVar6 == param_2[1]) {
          bVar11 = piVar7[2] == param_2[2];
        }
        bVar10 = false;
        if (bVar11) {
          bVar10 = piVar7[3] == param_2[3];
        }
        if (bVar10) {
          if ((param_1 != 0) && (uVar2 < uVar3)) {
            return *(ushort *)(param_1 + (uint)*(ushort *)(param_1 + 6)) * uVar2 +
                   param_1 + (uint)*(ushort *)(param_1 + 6) + 4;
          }
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(param_1 + 1));
    }
  }
  else {
    pbVar4 = (byte *)(param_1 + 8);
    uVar2 = (uint)*(byte *)(param_1 + 9);
    if (uVar2 != 0) {
      uVar8 = (uint)pbVar4[uVar2 * 4];
      pbVar5 = pbVar4 + uVar2 * 4;
      if (uVar8 < *pbVar4) {
        do {
          iVar6 = (int)uVar8 >> 5;
          uVar2 = uVar8 & 0x1f;
          bVar1 = *pbVar5;
          uVar8 = (uint)pbVar4[(uint)pbVar5[((uint)param_2[iVar6] >> uVar2 & 1) + 1] * 4];
          pbVar5 = pbVar4 + (uint)pbVar5[((uint)param_2[iVar6] >> uVar2 & 1) + 1] * 4;
        } while (uVar8 < bVar1);
      }
      uVar2 = (uint)pbVar5[3];
      if ((param_1 == 0) || (uVar3 <= uVar2)) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar6 = param_1 + (uint)*(ushort *)(param_1 + 6);
        piVar7 = (int *)(iVar6 + (uint)*(ushort *)(iVar6 + 2) + uVar2 * 0x10);
      }
      iVar9 = *piVar7;
      iVar6 = *param_2;
      bVar10 = iVar9 == iVar6;
      if (bVar10) {
        iVar9 = piVar7[1];
        iVar6 = param_2[1];
      }
      bVar11 = bVar10 && iVar9 == iVar6;
      if (bVar10 && iVar9 == iVar6) {
        bVar11 = piVar7[2] == param_2[2];
      }
      bVar10 = false;
      if (bVar11) {
        bVar10 = piVar7[3] == param_2[3];
      }
      if (bVar10) {
        if ((param_1 != 0) && (uVar2 < uVar3)) {
          return *(ushort *)(param_1 + (uint)*(ushort *)(param_1 + 6)) * uVar2 +
                 param_1 + (uint)*(ushort *)(param_1 + 6) + 4;
        }
        return 0;
      }
    }
  }
  return 0;
}
