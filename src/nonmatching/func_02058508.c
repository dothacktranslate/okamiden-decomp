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

extern int func_0205826c();

void func_02058508(int param_1,int param_2,uint param_3,uint *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;

  func_0205826c(param_4,param_5,param_6,param_7,&local_2c);
  puVar4 = ((unsigned int)0x02058744);
  uVar8 = *param_4;
  uVar7 = uVar8 & 0x300;
  if (uVar7 != 0x100 && uVar7 != 0x300) {
    uVar7 = uVar8 & 0x30000300;
  }
  if (uVar7 == 0x300) {
    iVar2 = (int)(uVar8 & ((unsigned int)0x02058734) & 0xc000) >> 0xe;
    iVar1 = ((uVar8 & ((unsigned int)0x02058734)) >> 0x1e) * 2;
    bVar9 = *(int *)(((unsigned int)0x0205873c) + 8) != 0;
    iVar6 = 0;
    if (bVar9) {
      iVar6 = *(int *)(((unsigned int)0x0205873c) + 4);
    }
    uVar3 = *(ushort *)(iVar1 + ((unsigned int)0x02058740) + iVar2 * 8);
    if (bVar9) {
      param_3 = iVar6 + param_3 * 0x1000;
    }
    (*(unsigned int *)0x02058744) =
         (param_1 + ((int)(uint)*(ushort *)(iVar1 + ((unsigned int)0x02058738) + iVar2 * 8) >> 1)) * 0x1000;
    if (!bVar9) {
      param_3 = param_3 << 0xc;
    }
    *puVar4 = (param_2 + ((int)(uint)uVar3 >> 1)) * 0x1000;
    *puVar4 = param_3;
  }
  else {
    bVar9 = *(int *)(((unsigned int)0x0205873c) + 8) != 0;
    if (bVar9) {
      uVar8 = *(int *)(((unsigned int)0x0205873c) + 4) + param_3 * 0x1000;
    }
    (*(unsigned int *)0x02058744) = param_1 << 0xc;
    if (!bVar9) {
      uVar8 = param_3 << 0xc;
    }
    *puVar4 = param_2 << 0xc;
    *puVar4 = uVar8;
  }
  piVar5 = ((unsigned int)0x02058748);
  (*(unsigned int *)0x02058748) = local_1c << 0xc;
  *piVar5 = local_18 << 0xc;
  *piVar5 = 0x1000;
  piVar5[0x25] = 1;
  piVar5[7] = ((local_20 << 8) >> 0x10) << 0x10 | (local_2c << 8) >> 0x10 & 0xffffU;
  piVar5[9] = 0x10000;
  piVar5[7] = ((local_20 << 8) >> 0x10) << 0x10 | (local_24 << 8) >> 0x10 & 0xffffU;
  piVar5[9] = 0x10040;
  piVar5[7] = ((local_28 << 8) >> 0x10) << 0x10 | (local_24 << 8) >> 0x10 & 0xffffU;
  piVar5[9] = 0x40;
  piVar5[7] = ((local_28 << 8) >> 0x10) << 0x10 | (local_2c << 8) >> 0x10 & 0xffffU;
  piVar5[9] = 0;
  iVar1 = ((unsigned int)0x0205873c);
  piVar5[0x26] = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (*(unsigned int *)0x0205874c);
  }
  return;
}
