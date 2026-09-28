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

extern int func_020028c0();
extern int func_02002940();
extern int func_02002964();
extern int func_0201e7bc();

void func_02002560(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 uint param_6,undefined4 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;

  uVar4 = func_020028c0(param_2,param_1,param_3,param_4,param_4);
  puVar3 = ((unsigned int)0x020026a8);
  (*(unsigned int *)0x020026a8) = 0;
  puVar3[1] = 0x1000;
  puVar3[2] = param_4 - param_5;
  iVar7 = 0;
  puVar3[3] = 0;
  bVar8 = param_6 != 0x1000;
  if (bVar8) {
    iVar7 = uVar4 * param_6;
  }
  param_7[1] = 0;
  uVar5 = uVar4;
  if (bVar8) {
    uVar5 = iVar7 >> 0xb;
  }
  param_7[2] = 0;
  if (bVar8) {
    uVar5 = iVar7 + (uVar5 >> 0x14);
  }
  param_7[3] = 0;
  if (bVar8) {
    uVar4 = (int)uVar5 >> 0xc;
  }
  param_7[4] = 0;
  param_7[5] = uVar4;
  param_7[6] = 0;
  param_7[7] = 0;
  param_7[8] = 0;
  param_7[9] = 0;
  param_7[0xb] = -param_6;
  param_7[0xc] = 0;
  param_7[0xd] = 0;
  param_7[0xf] = 0;
  uVar9 = func_02002940();
  puVar3 = ((unsigned int)0x020026a8);
  (*(unsigned int *)0x020026a8) = 0;
  puVar3[1] = uVar4;
  puVar3[2] = param_3;
  puVar3[3] = 0;
  if (param_6 != 0x1000) {
    lVar1 = (ulonglong)param_6 * (uVar9 & 0xffffffff);
    uVar9 = func_0201e7bc((int)lVar1,
                         (int)(uVar9 >> 0x20) * param_6 +
                         (int)uVar9 * ((int)param_6 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20),
                         0x1000,0);
  }
  iVar7 = (int)(uVar9 >> 0x20);
  uVar5 = param_5 + param_4;
  lVar1 = (ulonglong)uVar5 * (uVar9 & 0xffffffff);
  lVar2 = (longlong)(param_4 << 1) * (longlong)param_5 + 0x800;
  uVar4 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) * 0x100000;
  lVar2 = (ulonglong)uVar4 * (uVar9 & 0xffffffff);
  param_7[10] = iVar7 * uVar5 + (int)uVar9 * ((int)uVar5 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)
                + (uint)(0x7fffffff < (uint)lVar1);
  param_7[0xe] = iVar7 * uVar4 + (int)uVar9 * ((int)uVar4 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20)
                 + (uint)(0x7fffffff < (uint)lVar2);
  uVar6 = func_02002964();
  *param_7 = uVar6;
  return;
}
