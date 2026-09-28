#pragma thumb on

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

extern int func_0x01ff99b4();
extern int func_0x01ff9bc4();
extern int func_0x01ff9bf0();
extern int func_0x01ff9c94();
extern int func_0x01ff9d2c();

ulonglong func_02030920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined4 uStack_18;

  uStack_18 = param_4;
  func_0x01ff99b4(auStack_24);
  func_0x01ff99b4(auStack_30);
  func_0x01ff99b4(auStack_3c);
  func_0x01ff99b4(auStack_48);
  func_0x01ff99b4(auStack_54);
  func_0x01ff9d2c(auStack_60,param_2,param_1);
  func_0x01ff9c94(auStack_24,auStack_60);
  func_0x01ff9d2c(auStack_6c,param_3,param_1);
  func_0x01ff9c94(auStack_30,auStack_6c);
  func_0x01ff9bf0(auStack_78,param_5,auStack_30);
  func_0x01ff9c94(auStack_48,auStack_78);
  lVar8 = func_0x01ff9bc4(auStack_24,auStack_48);
  uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
  uVar2 = (uint)lVar8;
  if ((int)(-(uint)(uVar2 != 0) - uVar4) < 0 ==
      (SBORROW4(0,uVar4) != SBORROW4(-uVar4,(uint)(uVar2 != 0)))) {
    if (-1 < lVar8) {
      return (ulonglong)uVar4 << 0x20;
    }
    func_0x01ff9d2c(auStack_9c,param_4,param_1);
    func_0x01ff9c94(auStack_3c,auStack_9c);
    lVar9 = func_0x01ff9bc4(auStack_3c,auStack_48);
    iVar6 = (int)((ulonglong)lVar9 >> 0x20);
    uVar5 = (uint)lVar9;
    if (((int)(-(uint)(uVar5 != 0) - iVar6) < 0 !=
         (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(uVar5 != 0)))) ||
       ((int)((iVar6 - uVar4) - (uint)(uVar5 < uVar2)) < 0 !=
        (SBORROW4(iVar6,uVar4) != SBORROW4(iVar6 - uVar4,(uint)(uVar5 < uVar2))))) {
      return (ulonglong)-uVar5 << 0x20;
    }
    func_0x01ff9bf0(auStack_a8,auStack_3c,auStack_24);
    func_0x01ff9c94(auStack_54,auStack_a8);
    lVar11 = func_0x01ff9bc4(param_5,auStack_54);
    iVar6 = (int)((ulonglong)lVar11 >> 0x20);
    bVar7 = (int)lVar11 != 0;
    uVar5 = -(uint)bVar7 - iVar6;
    if (((int)uVar5 < 0 != (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)bVar7))) ||
       (iVar6 = (int)((ulonglong)(lVar9 + lVar11) >> 0x20), bVar7 = (uint)(lVar9 + lVar11) < uVar2,
       (int)((iVar6 - uVar4) - (uint)bVar7) < 0 !=
       (SBORROW4(iVar6,uVar4) != SBORROW4(iVar6 - uVar4,(uint)bVar7)))) {
      return (ulonglong)uVar5 << 0x20;
    }
  }
  else {
    func_0x01ff9d2c(auStack_84,param_4,param_1);
    func_0x01ff9c94(auStack_3c,auStack_84);
    lVar9 = func_0x01ff9bc4(auStack_3c,auStack_48);
    uVar5 = (uint)((ulonglong)lVar9 >> 0x20);
    if ((lVar9 < 0) ||
       (bVar7 = uVar2 < (uint)lVar9,
       (int)((uVar4 - uVar5) - (uint)bVar7) < 0 !=
       (SBORROW4(uVar4,uVar5) != SBORROW4(uVar4 - uVar5,(uint)bVar7)))) {
      return (ulonglong)uVar5 << 0x20;
    }
    func_0x01ff9bf0(auStack_90,auStack_3c,auStack_24);
    func_0x01ff9c94(auStack_54,auStack_90);
    uVar10 = func_0x01ff9bc4(param_5,auStack_54);
    if (((longlong)uVar10 < 0) ||
       (iVar6 = (int)(lVar9 + uVar10 >> 0x20), bVar7 = uVar2 < (uint)(lVar9 + uVar10),
       (int)((uVar4 - iVar6) - (uint)bVar7) < 0 !=
       (SBORROW4(uVar4,iVar6) != SBORROW4(uVar4 - iVar6,(uint)bVar7)))) {
      return uVar10 & 0xffffffff00000000;
    }
  }
  lVar9 = func_0x01ff9bc4(auStack_30,auStack_54);
  plVar1 = ((unsigned int)0x02030aec);
  uVar3 = (undefined4)(lVar9 << 0xc);
  if (lVar8 != 0) {
    (*(unsigned int *)0x02030aec) = lVar9 << 0xc;
    plVar1[1] = lVar8;
    do {
    } while (((uint)*(ushort *)(plVar1 + -2) & (uint)plVar1 >> 0xb) != 0);
    do {
    } while (((uint)(*(unsigned int *)0x02030af0) & (uint)((unsigned int)0x02030af0) >> 0xb) != 0);
    uVar3 = (*(unsigned int *)0x02030af4);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = uVar3;
  }
  return CONCAT44(param_6,1);
}
