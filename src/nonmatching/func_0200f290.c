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

void func_0200f290(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  puVar6 = ((unsigned int)0x0200f3a8);
  if (*(short *)(((unsigned int)0x0200f3a4) + 0x34) == 0) {
    uVar2 = *param_2;
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar2;
    return;
  }
  uVar2 = param_2[2];
  puVar1 = param_2 + 3;
  bVar10 = uVar2 == 0;
  if (bVar10) {
    param_2 = (ushort *)0x0;
  }
  param_1[3] = *puVar1;
  if (bVar10) {
    *param_1 = (ushort)param_2;
    param_1[1] = (ushort)param_2;
  }
  param_1[2] = uVar2;
  if (!bVar10) {
    uVar7 = *puVar6;
    uVar9 = puVar6[2];
    uVar8 = (uint)*param_2 * 4 - uVar7;
    lVar5 = (ulonglong)uVar8 * (ulonglong)uVar9;
    *param_1 = (ushort)((ulonglong)lVar5 >> 0x10) >> 6 |
               ((short)((int)uVar9 >> 0x1f) * (short)uVar8 +
               (short)uVar9 * -((short)((int)uVar7 >> 0x1f) + (ushort)((uint)*param_2 * 4 < uVar7))
               + (short)((ulonglong)lVar5 >> 0x20)) * 0x400;
    if ((short)*param_1 < 0) {
      *param_1 = 0;
    }
    else if (0xff < (short)*param_1) {
      *param_1 = 0xff;
    }
    uVar7 = puVar6[3];
    uVar9 = puVar6[5];
    uVar8 = (uint)param_2[1] * 4 - uVar7;
    lVar5 = (ulonglong)uVar8 * (ulonglong)uVar9;
    param_1[1] = (ushort)((ulonglong)lVar5 >> 0x10) >> 6 |
                 ((short)((int)uVar9 >> 0x1f) * (short)uVar8 +
                 (short)uVar9 *
                 -((short)((int)uVar7 >> 0x1f) + (ushort)((uint)param_2[1] * 4 < uVar7)) +
                 (short)((ulonglong)lVar5 >> 0x20)) * 0x400;
    if (-1 < (short)param_1[1]) {
      if (0xbf < (short)param_1[1]) {
        param_1[1] = 0xbf;
      }
      return;
    }
    param_1[1] = 0;
    return;
  }
  return;
}
