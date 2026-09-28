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

extern int func_0201edc4();
extern int func_0201f190();

uint func_0203dc34(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  uVar2 = ((unsigned int)0x0203de5c);
  iVar7 = param_4 * 0x1000;
  uVar6 = iVar7 + (param_1 & 0x1f) * 0x1000;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0x1f000 < (int)uVar6) {
    uVar6 = 0x1f000;
  }
  uVar8 = iVar7 + (param_1 & 0x3e0) * 0x80;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  else if (0x1f000 < (int)uVar8) {
    uVar8 = 0x1f000;
  }
  uVar3 = iVar7 + (param_1 & 0x7c00) * 4;
  if ((int)uVar8 < 0) {
    uVar3 = 0;
  }
  else if (0x1f000 < (int)uVar3) {
    uVar3 = 0x1f000;
  }
  uVar5 = (uint)((ulonglong)((unsigned int)0x0203de58) * (ulonglong)uVar3);
  uVar9 = (uint)((ulonglong)uVar6 * 0x4c8);
  uVar10 = (uint)((ulonglong)uVar8 * 0x964);
  iVar7 = (uVar5 + 0x800 >> 0xc |
          (((int)uVar3 >> 0x1f) * ((unsigned int)0x0203de58) +
           (int)((ulonglong)((unsigned int)0x0203de58) * (ulonglong)uVar3 >> 0x20) + (uint)(0xfffff7ff < uVar5)) *
          0x100000) +
          (uVar9 + 0x800 >> 0xc |
          (((int)uVar6 >> 0x1f) * 0x4c8 + (int)((ulonglong)uVar6 * 0x4c8 >> 0x20) +
          (uint)(0xfffff7ff < uVar9)) * 0x100000) +
          (uVar10 + 0x800 >> 0xc |
          (((int)uVar8 >> 0x1f) * 0x964 + (int)((ulonglong)uVar8 * 0x964 >> 0x20) +
          (uint)(0xfffff7ff < uVar10)) * 0x100000);
  func_0201f190(((unsigned int)0x0203de5c));
  uVar6 = func_0201edc4();
  uVar3 = uVar6 * 0x20000 + 0x800;
  uVar8 = ((int)uVar6 >> 0x1f) << 0x11 | uVar6 >> 0xf;
  uVar5 = uVar3 >> 0xc | (uVar8 + (0xfffff7ff < uVar6 * 0x20000)) * 0x100000;
  func_0201f190(uVar2,param_3,uVar8,uVar3,param_4);
  uVar6 = func_0201edc4();
  uVar8 = uVar6 * 0x20000 + 0x800 >> 0xc |
          ((uVar6 >> 0xf) + (uint)(0xfffff7ff < uVar6 * 0x20000)) * 0x100000;
  uVar9 = (uint)((ulonglong)((unsigned int)0x0203de60) * (ulonglong)uVar5);
  uVar10 = (uint)((ulonglong)((unsigned int)0x0203de64) * (ulonglong)uVar8);
  uVar3 = (uint)((ulonglong)((unsigned int)0x0203de68) * (ulonglong)uVar5);
  lVar1 = (ulonglong)(((unsigned int)0x0203de64) + 0xb10) * (ulonglong)uVar8;
  uVar6 = (uint)lVar1;
  uVar6 = (int)(iVar7 + (uVar6 + 0x800 >> 0xc |
                        (((int)uVar8 >> 0x1f) * (((unsigned int)0x0203de64) + 0xb10) +
                         (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xfffff7ff < uVar6)) * 0x100000))
          >> 0xc;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0x1f < (int)uVar6) {
    uVar6 = 0x1f;
  }
  iVar4 = (int)((iVar7 - (uVar9 + 0x800 >> 0xc |
                         (((int)uVar5 >> 0x1f) * ((unsigned int)0x0203de60) +
                          (int)((ulonglong)((unsigned int)0x0203de60) * (ulonglong)uVar5 >> 0x20) +
                         (uint)(0xfffff7ff < uVar9)) * 0x100000)) -
               (uVar10 + 0x800 >> 0xc |
               (((int)uVar8 >> 0x1f) * ((unsigned int)0x0203de64) +
                (int)((ulonglong)((unsigned int)0x0203de64) * (ulonglong)uVar8 >> 0x20) +
               (uint)(0xfffff7ff < uVar10)) * 0x100000)) >> 0xc;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x1f < iVar4) {
    iVar4 = 0x1f;
  }
  iVar7 = (int)(iVar7 + (uVar3 + 0x800 >> 0xc |
                        (((int)uVar5 >> 0x1f) * ((unsigned int)0x0203de68) +
                         (int)((ulonglong)((unsigned int)0x0203de68) * (ulonglong)uVar5 >> 0x20) +
                        (uint)(0xfffff7ff < uVar3)) * 0x100000)) >> 0xc;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (0x1f < iVar7) {
    iVar7 = 0x1f;
  }
  return param_1 & 0x8000 | (uVar6 | iVar4 << 5 | iVar7 << 10) & 0xffff;
}
