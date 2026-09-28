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

extern int func_0201aabc();

void func_0201ac10(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte abStack_68 [64];
  undefined4 uStack_28;

  uStack_28 = param_4;
  uVar5 = 0;
  iVar6 = (uint)*(byte *)(param_2 + 4) + (uint)*(byte *)(param_3 + 4);
  iVar7 = iVar6 + -1;
  pbVar8 = abStack_68 + iVar6;
  *param_1 = 0;
  pbVar9 = pbVar8;
  if (0 < iVar7) {
    do {
      iVar11 = *(byte *)(param_3 + 4) - 1;
      iVar6 = (iVar7 - iVar11) + -1;
      if (iVar6 < 0) {
        iVar6 = 0;
        iVar11 = iVar7 + -1;
      }
      iVar4 = (uint)*(byte *)(param_2 + 4) - iVar6;
      iVar10 = iVar11 + 1;
      if (iVar4 < iVar11 + 1) {
        iVar10 = iVar4;
      }
      pbVar2 = (byte *)(param_3 + 5 + iVar11);
      pbVar1 = (byte *)(param_2 + 5 + iVar6);
      for (; 0 < iVar10; iVar10 = iVar10 + -1) {
        uVar5 = (uint)*pbVar1 * (uint)*pbVar2 + uVar5;
        pbVar2 = pbVar2 + -1;
        pbVar1 = pbVar1 + 1;
      }
      iVar7 = iVar7 + -1;
      pbVar9 = pbVar9 + -1;
      *pbVar9 = (char)uVar5 + (char)(uint)((ulonglong)((unsigned int)0x0201ad8c) * (ulonglong)uVar5 >> 0x23) * -10
      ;
      uVar5 = (uint)((ulonglong)((unsigned int)0x0201ad8c) * (ulonglong)uVar5 >> 0x23);
    } while (0 < iVar7);
  }
  sVar3 = *(short *)(param_2 + 2) + *(short *)(param_3 + 2);
  *(short *)(param_1 + 2) = sVar3;
  if (uVar5 != 0) {
    pbVar9 = pbVar9 + -1;
    *pbVar9 = (byte)uVar5;
    sVar3 = *(short *)(param_1 + 2);
  }
  iVar6 = 0;
  if (uVar5 != 0) {
    *(short *)(param_1 + 2) = sVar3 + 1;
  }
  for (; (iVar6 < 0x20 && (pbVar9 < pbVar8)); pbVar9 = pbVar9 + 1) {
    param_1[iVar6 + 5] = *pbVar9;
    iVar6 = iVar6 + 1;
  }
  param_1[4] = (char)iVar6;
  if (pbVar8 <= pbVar9) {
    return;
  }
  if (*pbVar9 < 5) {
    return;
  }
  pbVar2 = pbVar9;
  if (*pbVar9 == 5) {
    do {
      pbVar2 = pbVar2 + 1;
      if (pbVar8 <= pbVar2) {
        if ((pbVar9[-1] & 1) == 0) {
          return;
        }
        break;
      }
    } while (*pbVar2 == 0);
  }
  func_0201aabc(param_1,param_1[4]);
  return;
}
