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

extern int func_02001a7c();
extern int func_02002940();
extern int func_02002998();
extern int func_0205c1a4();

undefined4 func_0205e7b0(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;

  piVar4 = ((unsigned int)0x0205e930);
  func_02001a7c(param_1,((unsigned int)0x0205e934),&local_28);
  lVar3 = (longlong)piVar4[0xb] * (longlong)local_20 +
          (longlong)piVar4[3] * (longlong)local_28 + (longlong)local_24 * (longlong)piVar4[7];
  func_02002998(((uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14) + piVar4[0xf]);
  lVar3 = (longlong)piVar4[8] * (longlong)local_20 +
          (longlong)*piVar4 * (longlong)local_28 + (longlong)local_24 * (longlong)piVar4[4];
  uVar7 = ((uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14) + piVar4[0xc];
  lVar3 = (longlong)piVar4[9] * (longlong)local_20 +
          (longlong)piVar4[1] * (longlong)local_28 + (longlong)local_24 * (longlong)piVar4[5];
  uVar8 = ((uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14) + piVar4[0xd];
  uVar9 = func_02002940();
  iVar5 = (int)(uVar9 >> 0x20);
  lVar3 = (ulonglong)uVar7 * (uVar9 & 0xffffffff);
  iVar1 = (int)(iVar5 * uVar7 + (int)uVar9 * ((int)uVar7 >> 0x1f) + (int)((ulonglong)lVar3 >> 0x20)
                + (uint)(0x7fffffff < (uint)lVar3) + 0x1000) / 2;
  lVar3 = (ulonglong)uVar8 * (uVar9 & 0xffffffff);
  iVar5 = (int)(iVar5 * uVar8 + (int)uVar9 * ((int)uVar8 >> 0x1f) + (int)((ulonglong)lVar3 >> 0x20)
                + (uint)(0x7fffffff < (uint)lVar3) + 0x1000) / 2;
  uVar6 = 0;
  if (-1 < iVar1 && -1 < iVar5) {
    iVar2 = iVar1;
    if (iVar1 < 0x1001) {
      iVar2 = iVar5;
    }
    if (iVar2 < 0x1001) goto LAB_0205e8d0;
  }
  uVar6 = 0xffffffff;
LAB_0205e8d0:
  func_0205c1a4(&local_2c,&local_30,&local_34,&local_38);
  *param_2 = local_2c + (iVar1 * (local_34 - local_2c) + 0x800 >> 0xc);
  *param_3 = (0xbf - local_30) - (iVar5 * (local_38 - local_30) + 0x800 >> 0xc);
  return uVar6;
}
