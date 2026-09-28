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

extern int func_02058b44();

void func_02059894(undefined2 *param_1,int param_2,int param_3,short param_4,short param_5,
                 int param_6,int param_7,uint param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ushort local_28;

  local_28 = 0;
  if (param_9 == 0) {
    puVar11 = param_1 + 4;
  }
  else {
    param_1[6] = -param_4;
    param_1[4] = (short)param_6 - param_4;
    param_1[7] = -param_5;
    param_1[5] = (short)param_7 - param_5;
    puVar11 = param_1 + 8;
    local_28 = 0x800;
  }
  uVar4 = ((unsigned int)0x02059aa0);
  uVar7 = ((unsigned int)0x02059a9c);
  iVar6 = ((unsigned int)0x02059a98);
  iVar5 = ((unsigned int)0x02059a94);
  iVar10 = 0;
  if (0 < param_3) {
    do {
      if (param_8 == 0x300) {
        uVar8 = *(uint *)(param_2 + iVar10 * 8);
        iVar3 = (int)(uVar8 & uVar7 & 0xc000) >> 0xe;
        iVar1 = ((uVar8 & uVar7) >> 0x1e) * 2;
        iVar2 = ((uVar8 & 0xff) - *(ushort *)(iVar1 + iVar5 + iVar3 * 8) / 2) * 0x10000;
        iVar1 = (((uVar8 & uVar4) >> 0x10) - (uint)(*(ushort *)(iVar1 + iVar6 + iVar3 * 8) >> 1)) *
                0x10000;
        uVar8 = iVar1 >> 0x10;
        if (0xff < (int)uVar8) {
          uVar8 = (uint)(short)((ushort)((uint)iVar1 >> 0x10) | 0xff00);
        }
        uVar9 = iVar2 >> 0x10;
        if (0x7f < (int)uVar9) {
          uVar9 = (uint)(short)((uint)iVar2 >> 0x10);
        }
        *(uint *)(param_2 + iVar10 * 8) =
             *(uint *)(param_2 + iVar10 * 8) & ((unsigned int)0x02059aa4) | uVar9 & 0xff | (uVar8 & 0x1ff) << 0x10
        ;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_3);
  }
  iVar5 = 0;
  if (0 < param_3) {
    do {
      iVar10 = param_2 + iVar5 * 8;
      puVar11[iVar5 * 3] = *(undefined2 *)(param_2 + iVar5 * 8);
      iVar6 = iVar5 + 1;
      puVar11[iVar5 * 3 + 1] = *(undefined2 *)(iVar10 + 2);
      puVar11[iVar5 * 3 + 2] = *(undefined2 *)(iVar10 + 4);
      iVar5 = iVar6;
    } while (iVar6 < param_3);
  }
  bVar12 = param_8 == 0x20000000;
  bVar13 = param_8 == 0x10000000;
  bVar14 = param_8 == 0x30000000;
  if (bVar14) {
    param_8 = 1;
  }
  if (!bVar14) {
    param_8 = 0;
  }
  *param_1 = (short)param_3;
  param_1[1] = local_28 |
               (ushort)bVar12 << 9 | (ushort)bVar13 << 8 | (ushort)((param_8 & 0x3f) << 10);
  *(undefined2 **)(param_1 + 2) = puVar11;
  iVar5 = func_02058b44(param_6 * param_6 + param_7 * param_7);
  uVar7 = iVar5 / 2 & 0xff;
  if ((iVar5 / 2 & 3U) != 0) {
    uVar7 = uVar7 + 4 & 0xfc;
  }
  param_1[1] = param_1[1] | (ushort)((int)uVar7 >> 2);
  return;
}
