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

undefined8 func_0201ef10(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  byte bVar12;

  if (param_2 < ((unsigned int)0x0201f0a0)) {
    uVar5 = param_2 >> 0x14;
    if (uVar5 == 0) {
      if (param_2 == 0) {
        if (param_1 == 0) {
          return 0;
        }
        uVar3 = param_1 << LZCOUNT(param_1);
        uVar5 = -LZCOUNT(param_1) - 0x14;
        uVar2 = uVar3 >> 0xb;
        param_1 = uVar3 << 0x15;
      }
      else {
        uVar5 = 0x2b - LZCOUNT(param_2);
        uVar2 = (param_2 << LZCOUNT(param_2)) >> 0xb | param_1 >> (uVar5 & 0xff);
        uVar5 = 0x20 - uVar5;
        param_1 = param_1 << (uVar5 & 0xff);
        uVar5 = 1 - uVar5;
      }
    }
    else {
      uVar2 = param_2 & ~((unsigned int)0x0201f0a0) | 0x100000;
    }
    iVar10 = (int)uVar5 >> 1;
    if (!(bool)((byte)uVar5 & 1)) {
      iVar10 = iVar10 + -1;
      iVar8 = (int)param_1 >> 0x1f;
      param_1 = param_1 << 1;
      uVar2 = uVar2 * 2 - iVar8;
    }
    uVar5 = param_1 << 1;
    uVar3 = uVar2 * 2 - ((int)param_1 >> 0x1f);
    uVar4 = 0;
    uVar7 = 0;
    uVar2 = 0x200000;
    do {
      iVar8 = uVar7 + uVar2;
      if (iVar8 <= (int)uVar3) {
        uVar7 = iVar8 + uVar2;
        uVar3 = uVar3 - iVar8;
        uVar4 = uVar4 + uVar2;
      }
      iVar8 = (int)uVar5 >> 0x1f;
      uVar5 = uVar5 * 2;
      uVar3 = uVar3 * 2 - iVar8;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
    uVar2 = 0;
    iVar8 = 0;
    bVar11 = uVar7 <= uVar3;
    if (uVar3 == uVar7) {
      bVar11 = 0x7fffffff < uVar5;
    }
    if (bVar11) {
      bVar11 = uVar5 < 0x80000000;
      uVar5 = uVar5 + 0x80000000;
      uVar3 = uVar3 - (uVar7 + bVar11);
      uVar7 = uVar7 + 1;
      uVar2 = 0x80000000;
    }
    uVar6 = uVar5 << 1;
    uVar3 = uVar3 * 2 - ((int)uVar5 >> 0x1f);
    uVar5 = 0x40000000;
    do {
      uVar9 = iVar8 + uVar5;
      bVar11 = uVar3 <= uVar7;
      if (uVar7 == uVar3) {
        bVar11 = uVar6 <= uVar9;
      }
      if (!bVar11 || uVar7 == uVar3 && uVar9 == uVar6) {
        iVar8 = uVar9 + uVar5;
        bVar11 = uVar6 < uVar9;
        uVar6 = uVar6 - uVar9;
        uVar3 = uVar3 - (uVar7 + bVar11);
        uVar2 = uVar2 + uVar5;
      }
      iVar1 = (int)uVar6 >> 0x1f;
      uVar6 = uVar6 << 1;
      uVar3 = uVar3 * 2 - iVar1;
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    if (uVar3 == 0 && uVar6 == 0) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    bVar12 = (byte)uVar2 & 1;
    uVar5 = (uint)((byte)uVar4 & 1) << 0x1f | uVar2 >> 1;
    return CONCAT44((uVar4 >> 1) + (uint)CARRY4(uVar5,(uint)bVar12) + 0x1ff00000 + iVar10 * 0x100000
                    ,uVar5 + bVar12);
  }
  if ((param_2 & 0x80000000) == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  else if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  param_2 = param_2 | ((unsigned int)0x0201f0a4);
  (*(unsigned int *)0x0201f0a8) = 0x21;
  return CONCAT44(param_2,param_1);
}
