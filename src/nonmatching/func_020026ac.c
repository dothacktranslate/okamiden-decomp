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

extern int func_02002940();
extern int func_02002998();
extern int func_0201e7bc();

void func_020026ac(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7,int *param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;

  func_02002998(param_4 - param_3);
  param_8[1] = 0;
  param_8[2] = 0;
  param_8[3] = 0;
  param_8[4] = 0;
  param_8[6] = 0;
  param_8[7] = 0;
  param_8[8] = 0;
  param_8[9] = 0;
  param_8[0xb] = 0;
  param_8[0xf] = param_7;
  uVar9 = func_02002940();
  puVar7 = ((unsigned int)0x020028bc);
  (*(unsigned int *)0x020028bc) = 0;
  puVar7[1] = 0x1000;
  puVar7[2] = param_1 - param_2;
  puVar7[3] = 0;
  iVar1 = (int)param_7 >> 0x1f;
  if (param_7 != 0x1000) {
    lVar2 = (ulonglong)param_7 * (uVar9 & 0xffffffff);
    uVar9 = func_0201e7bc((int)lVar2,
                         (int)(uVar9 >> 0x20) * param_7 +
                         (int)uVar9 * iVar1 + (int)((ulonglong)lVar2 >> 0x20),0x1000,0);
  }
  *param_8 = (int)((uVar9 << 0xd) >> 0x20) + (uint)(0x7fffffff < (uint)(uVar9 << 0xd));
  uVar10 = func_02002940();
  puVar7 = ((unsigned int)0x020028bc);
  (*(unsigned int *)0x020028bc) = 0;
  puVar7[1] = 0x1000;
  puVar7[2] = param_5 - param_6;
  puVar7[3] = 0;
  if (param_7 != 0x1000) {
    lVar2 = (ulonglong)param_7 * (uVar10 & 0xffffffff);
    uVar10 = func_0201e7bc((int)lVar2,
                          (int)(uVar10 >> 0x20) * param_7 +
                          (int)uVar10 * iVar1 + (int)((ulonglong)lVar2 >> 0x20),0x1000,0);
  }
  param_8[5] = (int)((uVar10 << 0xd) >> 0x20) + (uint)(0x7fffffff < (uint)(uVar10 << 0xd));
  uVar11 = func_02002940();
  if (param_7 != 0x1000) {
    lVar2 = (ulonglong)param_7 * (uVar11 & 0xffffffff);
    uVar11 = func_0201e7bc((int)lVar2,
                          (int)(uVar11 >> 0x20) * param_7 +
                          (int)uVar11 * iVar1 + (int)((ulonglong)lVar2 >> 0x20),0x1000,0);
  }
  uVar5 = -(param_4 + param_3);
  uVar6 = -(param_1 + param_2);
  uVar8 = param_6 + param_5;
  lVar2 = (ulonglong)uVar5 * (uVar9 & 0xffffffff);
  lVar3 = (ulonglong)uVar6 * (uVar10 & 0xffffffff);
  param_8[10] = (int)((uVar11 << 0xd) >> 0x20) + (uint)(0x7fffffff < (uint)(uVar11 << 0xd));
  lVar4 = (ulonglong)uVar8 * (uVar11 & 0xffffffff);
  param_8[0xc] = (int)(uVar9 >> 0x20) * uVar5 +
                 (int)uVar9 * ((int)uVar5 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)(0x7fffffff < (uint)lVar2);
  param_8[0xd] = (int)(uVar10 >> 0x20) * uVar6 +
                 (int)uVar10 * ((int)uVar6 >> 0x1f) + (int)((ulonglong)lVar3 >> 0x20) +
                 (uint)(0x7fffffff < (uint)lVar3);
  param_8[0xe] = (int)(uVar11 >> 0x20) * uVar8 +
                 (int)uVar11 * ((int)uVar8 >> 0x1f) + (int)((ulonglong)lVar4 >> 0x20) +
                 (uint)(0x7fffffff < (uint)lVar4);
  return;
}
