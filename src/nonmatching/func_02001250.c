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

void func_02001250(int *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;

  iVar7 = param_1[1];
  iVar8 = *param_1;
  iVar6 = param_1[2];
  puVar3 = param_3;
  if (param_3 == param_2) {
    puVar3 = &local_48;
  }
  lVar1 = (longlong)(int)param_2[6] * (longlong)iVar6 +
          (longlong)(int)*param_2 * (longlong)iVar8 + (longlong)iVar7 * (longlong)(int)param_2[3];
  *puVar3 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[7] * (longlong)iVar6 +
          (longlong)(int)param_2[1] * (longlong)iVar8 + (longlong)iVar7 * (longlong)(int)param_2[4];
  puVar3[1] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar4 = param_1[4];
  iVar5 = param_1[3];
  iVar9 = param_1[5];
  lVar1 = (longlong)(int)param_2[8] * (longlong)iVar6 +
          (longlong)(int)param_2[2] * (longlong)iVar8 + (longlong)iVar7 * (longlong)(int)param_2[5];
  lVar2 = (longlong)(int)param_2[8] * (longlong)iVar9 +
          (longlong)(int)param_2[2] * (longlong)iVar5 + (longlong)iVar4 * (longlong)(int)param_2[5];
  puVar3[2] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  puVar3[5] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  iVar8 = param_1[7];
  lVar1 = (longlong)(int)param_2[7] * (longlong)iVar9 +
          (longlong)(int)param_2[1] * (longlong)iVar5 + (longlong)iVar4 * (longlong)(int)param_2[4];
  puVar3[4] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  iVar7 = param_1[6];
  iVar6 = param_1[8];
  lVar1 = (longlong)(int)param_2[6] * (longlong)iVar9 +
          (longlong)(int)*param_2 * (longlong)iVar5 + (longlong)iVar4 * (longlong)(int)param_2[3];
  lVar2 = (longlong)(int)param_2[6] * (longlong)iVar6 +
          (longlong)(int)*param_2 * (longlong)iVar7 + (longlong)iVar8 * (longlong)(int)param_2[3];
  puVar3[3] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  puVar3[6] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[7] * (longlong)iVar6 +
          (longlong)(int)param_2[1] * (longlong)iVar7 + (longlong)iVar8 * (longlong)(int)param_2[4];
  puVar3[7] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)(int)param_2[8] * (longlong)iVar6 +
          (longlong)(int)param_2[2] * (longlong)iVar7 + (longlong)iVar8 * (longlong)(int)param_2[5];
  puVar3[8] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  if (puVar3 != &local_48) {
    return;
  }
  *param_3 = local_48;
  param_3[1] = local_44;
  param_3[2] = local_40;
  param_3[3] = local_3c;
  param_3[4] = local_38;
  param_3[5] = local_34;
  param_3[6] = local_30;
  param_3[7] = local_2c;
  param_3[8] = local_28;
  return;
}
