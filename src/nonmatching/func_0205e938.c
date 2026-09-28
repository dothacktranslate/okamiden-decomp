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
extern int func_02002998();
extern int func_0205c13c();
extern int func_0205c1a4();

undefined4 func_0205e938(int param_1,int param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_r9;
  ulonglong uVar13;
  uint local_48;
  uint local_44;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;

  func_0205c1a4(&local_28,&local_2c,&local_30,&local_34);
  iVar7 = local_34 - local_2c;
  iVar3 = func_020028c0((param_1 - local_28) * 0x1000,(local_30 - local_28) * 0x1000);
  iVar7 = func_020028c0((param_2 + local_2c + -0xbf) * 0x1000,iVar7 * -0x1000);
  if (-1 < iVar3 && -1 < iVar7) {
    iVar5 = iVar3;
    if (iVar3 < 0x1001) {
      iVar5 = iVar7;
    }
    if (iVar5 < 0x1001) {
      uVar6 = 0;
      goto LAB_0205e9d0;
    }
  }
  uVar6 = 0xffffffff;
LAB_0205e9d0:
  iVar3 = (iVar3 + -0x800) * 2;
  iVar7 = (iVar7 + -0x800) * 2;
  piVar4 = (int *)func_0205c13c();
  lVar1 = (longlong)piVar4[3] * (longlong)iVar3 + (longlong)iVar7 * (longlong)piVar4[7];
  iVar5 = piVar4[0xf] + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14);
  func_02002998(iVar5 - piVar4[0xb]);
  lVar1 = (longlong)*piVar4 * (longlong)iVar3 + (longlong)iVar7 * (longlong)piVar4[4];
  iVar8 = piVar4[0xc] + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14);
  lVar1 = (longlong)piVar4[1] * (longlong)iVar3 + (longlong)iVar7 * (longlong)piVar4[5];
  iVar10 = piVar4[0xd] + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14);
  lVar1 = (longlong)piVar4[2] * (longlong)iVar3 + (longlong)iVar7 * (longlong)piVar4[6];
  iVar3 = piVar4[0xe] + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14);
  if (param_4 != (int *)0x0) {
    local_44 = iVar8 + piVar4[8];
    local_48 = iVar10 + piVar4[9];
    unaff_r9 = iVar3 + piVar4[10];
    local_40 = iVar5 + piVar4[0xb];
  }
  uVar9 = iVar8 - piVar4[8];
  uVar11 = iVar10 - piVar4[9];
  uVar12 = iVar3 - piVar4[10];
  uVar13 = func_02002940();
  iVar7 = (int)(uVar13 >> 0x20);
  iVar3 = (int)uVar13;
  if (param_4 != (int *)0x0) {
    func_02002998(local_40);
  }
  lVar1 = (ulonglong)uVar9 * (uVar13 & 0xffffffff);
  lVar2 = (ulonglong)uVar11 * (uVar13 & 0xffffffff);
  *param_3 = iVar7 * uVar9 + iVar3 * ((int)uVar9 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
             (uint)(0x7fffffff < (uint)lVar1);
  param_3[1] = iVar7 * uVar11 + iVar3 * ((int)uVar11 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20) +
               (uint)(0x7fffffff < (uint)lVar2);
  lVar1 = (ulonglong)uVar12 * (uVar13 & 0xffffffff);
  param_3[2] = iVar7 * uVar12 + iVar3 * ((int)uVar12 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)(0x7fffffff < (uint)lVar1);
  if (param_4 != (int *)0x0) {
    uVar13 = func_02002940();
    iVar7 = (int)(uVar13 >> 0x20);
    iVar3 = (int)uVar13;
    lVar1 = (ulonglong)local_44 * (uVar13 & 0xffffffff);
    lVar2 = (ulonglong)local_48 * (uVar13 & 0xffffffff);
    *param_4 = iVar7 * local_44 + iVar3 * ((int)local_44 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)
               + (uint)(0x7fffffff < (uint)lVar1);
    lVar1 = (ulonglong)unaff_r9 * (uVar13 & 0xffffffff);
    param_4[1] = iVar7 * local_48 +
                 iVar3 * ((int)local_48 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)(0x7fffffff < (uint)lVar2);
    param_4[2] = iVar7 * unaff_r9 +
                 iVar3 * ((int)unaff_r9 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20) +
                 (uint)(0x7fffffff < (uint)lVar1);
  }
  return uVar6;
}
