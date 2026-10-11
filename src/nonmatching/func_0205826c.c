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

void func_0205826c(uint *param_1,uint *param_2,uint param_3,int param_4,int *param_5)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  uVar7 = (*param_1 & ((unsigned int)0x0205849c)) >> 0x1e;
  uVar4 = param_1[1] & 0x3ff;
  iVar5 = (int)(*param_1 & ((unsigned int)0x0205849c) & 0xc000) >> 0xe;
  uVar8 = param_2[5];
  uVar1 = *(ushort *)(uVar7 * 2 + ((unsigned int)0x020584a4) + iVar5 * 8);
  param_5[4] = (uint)*(ushort *)(uVar7 * 2 + ((unsigned int)0x020584a0) + iVar5 * 8);
  param_5[5] = (uint)uVar1;
  if (uVar8 == 0) {
    uVar7 = param_2[2];
    if (uVar7 == 4) {
      uVar4 = uVar4 << 0xf;
    }
    (*(unsigned int *)0x020584a8) =
         uVar7 << 0x1a | param_3 >> 3 | 0x40000000 | *param_2 << 0x14 | param_2[1] << 0x17 |
         param_2[4] << 0x1d;
    uVar8 = *param_2;
    if (uVar7 == 4) {
      uVar4 = uVar4 >> 0x10;
    }
    *param_5 = (uVar4 & *(int *)(((unsigned int)0x020584ac) + uVar8 * 4) - 1U) << 0xf;
    param_5[1] = ((int)uVar4 >> (uVar8 & 0xff)) << 0xf;
  }
  else {
    (*(unsigned int *)0x020584a8) =
         param_3 + (uVar4 << ((int)(uVar8 & 0x700000) >> 0x14) + 5) >> 3 | param_2[2] << 0x1a |
         0x40000000 | *(int *)(((unsigned int)0x020584b0) + iVar5 * 0x10 + uVar7 * 4) << 0x14 |
         *(int *)(((unsigned int)0x020584b4) + iVar5 * 0x10 + uVar7 * 4) << 0x17 | param_2[4] << 0x1d;
    *param_5 = 0;
    param_5[1] = 0;
  }
  uVar4 = *param_1;
  param_5[2] = *param_5 + param_5[4] * 0x1000;
  param_5[3] = param_5[1] + param_5[5] * 0x1000;
  iVar5 = -((int)(uVar4 << 3) >> 0x1f);
  iVar3 = -((int)(uVar4 << 2) >> 0x1f);
  if (iVar5 != 0) {
    iVar6 = *param_5;
    *param_5 = param_5[2];
    param_5[2] = iVar6;
  }
  puVar2 = ((unsigned int)0x020584b8);
  if (iVar3 != 0) {
    iVar6 = param_5[1];
    param_5[1] = param_5[3];
    puVar2 = ((unsigned int)0x020584b8);
    param_5[3] = iVar6;
  }
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(param_5,param_5 + 1,param_5 + 2,param_5 + 3,iVar5,iVar3,param_4);
  }
  uVar4 = (param_1[1] & 0xffff) >> 0xc;
  iVar5 = *(int *)(((unsigned int)0x020584bc) + ((int)(*param_1 << 0x12) >> 0x1f) * -4);
  if (param_2[3] == 0) {
    if (iVar5 == 4) {
      iVar3 = 0;
    }
    else {
      iVar3 = uVar4 << 5;
    }
  }
  else {
    iVar3 = uVar4 << 9;
  }
  (*(unsigned int *)0x020584c0) = (uint)(param_4 + iVar3) >> (4 - (iVar5 == 2) & 0xff);
  return;
}
