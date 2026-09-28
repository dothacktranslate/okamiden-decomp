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

undefined4 func_02060800(int *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_r6;
  ushort *puVar12;
  bool bVar13;

  if ((param_4 & 0x8000) != 0) {
    uVar8 = (uint)*(short *)(param_2 + (param_4 & ((unsigned int)0x02060954)) * 6);
    puVar12 = (ushort *)(param_2 + (param_4 & ((unsigned int)0x02060954)) * 6);
    param_1[8] = 0;
    iVar11 = ((unsigned int)0x02060958);
    bVar13 = (uVar8 & 0x10) != 0;
    if (bVar13) {
      unaff_r6 = -0x1000;
    }
    uVar8 = uVar8 & 0xf;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    if (!bVar13) {
      unaff_r6 = 0x1000;
    }
    bVar1 = *(byte *)(((unsigned int)0x0206095c) + uVar8 * 4);
    uVar3 = *puVar12;
    iVar10 = (int)(short)puVar12[1];
    param_1[uVar8] = unaff_r6;
    iVar9 = (int)(short)puVar12[2];
    bVar2 = *(byte *)(iVar11 + uVar8 * 4);
    param_1[bVar1] = iVar10;
    uVar4 = *puVar12;
    param_1[bVar2] = iVar9;
    if ((uVar3 & 0x20) != 0) {
      iVar9 = -iVar9;
    }
    if ((uVar4 & 0x40) != 0) {
      iVar10 = -iVar10;
    }
    param_1[*(byte *)(((unsigned int)0x02060960) + uVar8 * 4)] = iVar9;
    param_1[*(byte *)(((unsigned int)0x02060964) + uVar8 * 4)] = iVar10;
    return 0;
  }
  iVar11 = param_3 + (param_4 & ((unsigned int)0x02060954)) * 10;
  sVar5 = *(short *)(iVar11 + 8);
  uVar8 = (uint)*(short *)(param_3 + (param_4 & ((unsigned int)0x02060954)) * 10);
  sVar6 = *(short *)(iVar11 + 2);
  sVar7 = *(short *)(iVar11 + 4);
  uVar3 = *(ushort *)(iVar11 + 6);
  param_1[4] = (int)sVar5 >> 3;
  *param_1 = (int)uVar8 >> 3;
  param_1[1] = (int)sVar6 >> 3;
  param_1[2] = (int)sVar7 >> 3;
  param_1[3] = (int)(short)uVar3 >> 3;
  param_1[5] = ((int)(short)(uVar3 & 7 |
                            (ushort)((int)(((int)sVar7 & 7U |
                                           (int)(((int)sVar6 & 7U |
                                                 (int)((uVar8 & 7 |
                                                       (int)(((int)sVar5 & 7U) << 0x10) >> 0xd) <<
                                                      0x10) >> 0xd) << 0x10) >> 0xd) << 0x10) >> 0xd
                                    )) << 0x13) >> 0x13;
  return 1;
}
