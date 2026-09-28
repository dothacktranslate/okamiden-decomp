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

extern int func_0201be2c();
extern int func_0201d008();
extern int func_0201d518();
extern int func_0201d848();
extern int func_0201dbfc();
extern int func_0201e064();
extern int func_0201e0e0();
extern int func_0201e178();
extern int func_0201e61c();
extern int func_0201ef10();
extern int func_0201fbf4();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong func_0201be58(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 extraout_r1_03;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;

  uVar18 = param_4 & 0x7fffffff;
  uVar14 = param_2 & 0x7fffffff;
  if (uVar18 == 0 && param_3 == 0) {
    return (ulonglong)((unsigned int)0x0201c3f4) << 0x20;
  }
  if (((int)((unsigned int)0x0201c3f8) < (int)uVar14) ||
     ((((uVar14 == ((unsigned int)0x0201c3f8) && (param_1 != 0)) || ((int)((unsigned int)0x0201c3f8) < (int)uVar18)) ||
      ((uVar18 == ((unsigned int)0x0201c3f8) && (param_3 != 0)))))) {
    lVar22 = func_0201d518(param_1,param_2,param_3,param_4);
    return lVar22;
  }
  iVar15 = 0;
  uVar12 = param_3;
  if ((int)param_2 < 0) {
    if ((int)uVar18 < ((unsigned int)0x0201c3fc)) {
      if (((unsigned int)0x0201c3fc) + -0x3500000 <= (int)uVar18) {
        uVar3 = ((unsigned int)0x0201c400) + ((int)uVar18 >> 0x14);
        if ((int)uVar3 < 0x15) {
          bVar19 = false;
          if (param_3 == 0) {
            uVar12 = 0x14 - uVar3;
            uVar3 = (int)uVar18 >> (uVar12 & 0xff);
            bVar19 = uVar18 == uVar3 << (uVar12 & 0xff);
          }
        }
        else {
          uVar12 = 0x34 - uVar3;
          uVar3 = param_3 >> (uVar12 & 0xff);
          bVar19 = param_3 == uVar3 << (uVar12 & 0xff);
        }
        if (bVar19) {
          iVar15 = 2 - (uVar3 & 1);
        }
      }
    }
    else {
      iVar15 = 2;
    }
  }
  if (param_3 == 0) {
    if (uVar18 == ((unsigned int)0x0201c3f8)) {
      if (uVar14 == 0x3ff00000 && param_1 == 0) {
        lVar22 = func_0201d848(0,param_4,0,param_4);
        return lVar22;
      }
      if ((int)uVar14 < (int)(((unsigned int)0x0201c3f8) + 0xc0000000)) {
        if ((int)param_4 < 0) {
          lVar22 = func_0201d848(0,0,0,param_4);
          return lVar22;
        }
        return 0;
      }
      if ((int)param_4 < 0) {
        param_4 = 0;
      }
      return (ulonglong)param_4 << 0x20;
    }
    if (uVar18 == ((unsigned int)0x0201c3f8) + 0xc0000000) {
      if ((int)param_4 < 0) {
        lVar22 = func_0201fbf4(0,((unsigned int)0x0201c3f8) + 0xc0000000,param_1,param_2);
        return lVar22;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_4 == 0x40000000) {
      lVar22 = func_0201dbfc(param_1,param_2,param_1,param_2);
      return lVar22;
    }
    if ((param_4 == ((unsigned int)0x0201c404)) && (-1 < (int)param_2)) {
      lVar22 = func_0201ef10(param_1,param_2);
      return lVar22;
    }
  }
  lVar22 = func_0201d008(param_1,param_2,uVar12,param_4);
  uVar26 = CONCAT44(param_2,(int)lVar22) & 0x7fffffffffffffff;
  if ((param_1 == 0) &&
     ((uVar14 == ((unsigned int)0x0201c3f8) || uVar14 == 0 || (uVar14 == ((unsigned int)0x0201c3f8) + 0xc0000000)))) {
    if ((int)param_4 < 0) {
      lVar22 = func_0201fbf4(0,((unsigned int)0x0201c3f4));
    }
    uStack_3c = (undefined4)((ulonglong)lVar22 >> 0x20);
    uStack_40 = (undefined4)lVar22;
    if ((int)param_2 < 0) {
      if (uVar14 == 0x3ff00000 && iVar15 == 0) {
        uVar23 = func_0201d848(uStack_40,uStack_3c,uStack_40,uStack_3c);
        uVar24 = func_0201d848(uStack_40,uStack_3c,uStack_40,uStack_3c);
        lVar22 = func_0201fbf4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                              (int)((ulonglong)uVar24 >> 0x20));
      }
      else if (iVar15 == 1) {
        lVar22 = func_0201d848(0,0,uStack_40,uStack_3c);
      }
    }
    return lVar22;
  }
  if ((int)param_2 < 0 && iVar15 == 0) {
    uVar1 = (*(unsigned int *)0x0201c408);
    (*(unsigned int *)0x0201c40c) = 0x21;
    lVar22 = func_0201e61c(uVar1);
    return lVar22;
  }
  if (((unsigned int)0x0201c410) < (int)uVar18) {
    if (((unsigned int)0x0201c410) + 0x2100000 < (int)uVar18) {
      if ((int)uVar14 <= ((unsigned int)0x0201c414)) {
        uVar14 = ((unsigned int)0x0201c414) + 0x40000001;
        if (-1 < (int)param_4) {
          uVar14 = 0;
        }
        return (ulonglong)uVar14 << 0x20;
      }
      if (((unsigned int)0x0201c414) + 1 <= (int)uVar14) {
        uVar14 = ((unsigned int)0x0201c414) + 0x40000001;
        if ((int)param_4 < 1) {
          uVar14 = 0;
        }
        return (ulonglong)uVar14 << 0x20;
      }
    }
    if ((int)uVar14 < ((unsigned int)0x0201c414)) {
      uVar14 = ((unsigned int)0x0201c414) + 0x40000001;
      if (-1 < (int)param_4) {
        uVar14 = 0;
      }
      return (ulonglong)uVar14 << 0x20;
    }
    if (((unsigned int)0x0201c414) + 1 < (int)uVar14) {
      uVar14 = ((unsigned int)0x0201c414) + 0x40000001;
      if ((int)param_4 < 1) {
        uVar14 = 0;
      }
      return (ulonglong)uVar14 << 0x20;
    }
    uVar23 = func_0201d848(param_1,param_2,0,((unsigned int)0x0201c414) + 1);
    uVar6 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar5 = (undefined4)uVar23;
    uVar23 = func_0201dbfc(uVar5,uVar6,uVar5,uVar6);
    iVar16 = ((unsigned int)0x0201c418);
    uVar24 = func_0201dbfc(0,((unsigned int)0x0201c418),uVar5,uVar6);
    uVar24 = func_0201d848(((unsigned int)0x0201c41c),((unsigned int)0x0201c41c) + -0x15800000,(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
    uVar24 = func_0201dbfc(uVar5,uVar6,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    uVar24 = func_0201d848(0,iVar16 + 0x100000,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    uVar23 = func_0201dbfc((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
    uVar1 = ((unsigned int)0x0201c420);
    uVar24 = func_0201dbfc(0x60000000,((unsigned int)0x0201c420),uVar5,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar25 = func_0201dbfc(((unsigned int)0x0201c424),((unsigned int)0x0201c428),uVar5,uVar6);
    uVar23 = func_0201dbfc(((unsigned int)0x0201c42c),uVar1,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    uVar23 = func_0201d848((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    func_0201d518((int)uVar24,uVar7,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    uVar24 = func_0201d848(0,extraout_r1,(int)uVar24,uVar7);
    uStack_5c = extraout_r1;
  }
  else {
    iVar16 = 0;
    if (uVar14 < 0x100000) {
      uVar26 = func_0201dbfc((int)lVar22,(int)((ulonglong)lVar22 >> 0x20),0,((unsigned int)0x0201c410) + 0x1600000)
      ;
      iVar16 = -0x35;
    }
    iVar13 = ((unsigned int)0x0201c438);
    uVar18 = (uint)(uVar26 >> 0x20);
    uStack_48 = (undefined4)uVar26;
    uVar14 = uVar18 & ((unsigned int)0x0201c400) >> 0xc;
    iVar16 = iVar16 + ((unsigned int)0x0201c400) + ((int)uVar18 >> 0x14);
    uVar18 = uVar14 | 0x3ff00000;
    if (((unsigned int)0x0201c430) < (int)uVar14) {
      if ((int)uVar14 < ((unsigned int)0x0201c434)) {
        iVar17 = 1;
      }
      else {
        iVar16 = iVar16 + 1;
        uVar18 = uVar18 - 0x100000;
        iVar17 = 0;
      }
    }
    else {
      iVar17 = 0;
    }
    puVar4 = (undefined4 *)(((unsigned int)0x0201c438) + iVar17 * 8);
    uVar23 = func_0201d848(uStack_48,uVar18,*puVar4,puVar4[1]);
    uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar24 = func_0201d518(uStack_48,uVar18,*(undefined4 *)(iVar13 + iVar17 * 8),
                          *(undefined4 *)(iVar13 + iVar17 * 8 + 4));
    uVar24 = func_0201fbf4(0,((unsigned int)0x0201c3f4),(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar25 = func_0201dbfc((int)uVar23,uVar5,(int)uVar24,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar1 = (undefined4)uVar25;
    iVar8 = ((int)uVar18 >> 1 | 0x20000000U) + 0x80000 + iVar17 * 0x40000;
    puVar4 = (undefined4 *)(iVar13 + iVar17 * 8);
    uVar25 = func_0201d848(0,iVar8,*puVar4,puVar4[1]);
    uVar25 = func_0201d848(uStack_48,uVar18,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar27 = func_0201dbfc(0,uVar7,0,iVar8);
    uVar23 = func_0201d848((int)uVar23,uVar5,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
    uVar25 = func_0201dbfc(0,uVar7,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar23 = func_0201d848((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
                          (int)((ulonglong)uVar25 >> 0x20));
    uVar23 = func_0201dbfc((int)uVar24,uVar6,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar24 = func_0201dbfc(uVar1,uVar7,uVar1,uVar7);
    uVar9 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar5 = (undefined4)uVar24;
    uVar24 = func_0201dbfc(uVar5,uVar9,uVar5,uVar9);
    uVar25 = func_0201dbfc(((unsigned int)0x0201c43c),((unsigned int)0x0201c440),uVar5,uVar9);
    uVar25 = func_0201d518(((unsigned int)0x0201c444),((unsigned int)0x0201c448),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201dbfc(uVar5,uVar9,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201d518(((unsigned int)0x0201c44c),((unsigned int)0x0201c450),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201dbfc(uVar5,uVar9,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201d518(((unsigned int)0x0201c454),((unsigned int)0x0201c458),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201dbfc(uVar5,uVar9,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201d518(((unsigned int)0x0201c45c),((unsigned int)0x0201c460),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201dbfc(uVar5,uVar9,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201d518(((unsigned int)0x0201c464),((unsigned int)0x0201c468),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar24 = func_0201dbfc((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                          (int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201d518(0,uVar7,uVar1,uVar7);
    uVar25 = func_0201dbfc((int)uVar23,uVar6,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar24 = func_0201d518((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                          (int)((ulonglong)uVar25 >> 0x20));
    uVar5 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar25 = func_0201dbfc(0,uVar7,0,uVar7);
    uVar9 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar27 = func_0201d518(0,((unsigned int)0x0201c3f4) + 0x180000,(int)uVar25,uVar9);
    func_0201d518((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar24,uVar5);
    uVar27 = func_0201d848(0,extraout_r1_00,0,((unsigned int)0x0201c3f4) + 0x180000);
    uVar25 = func_0201d848((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar25,uVar9);
    uVar24 = func_0201d848((int)uVar24,uVar5,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201dbfc(0,uVar7,0,extraout_r1_00);
    uVar5 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar23 = func_0201dbfc((int)uVar23,uVar6,0,extraout_r1_00);
    uVar24 = func_0201dbfc((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar1,uVar7);
    uVar23 = func_0201d518((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
    uVar1 = (undefined4)((ulonglong)uVar23 >> 0x20);
    func_0201d518((int)uVar25,uVar5,(int)uVar23,uVar1);
    uVar24 = func_0201d848(0,extraout_r1_01,(int)uVar25,uVar5);
    uVar23 = func_0201d848((int)uVar23,uVar1,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    uVar24 = func_0201dbfc(0xe0000000,((unsigned int)0x0201c46c),0,extraout_r1_01);
    uVar1 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar25 = func_0201dbfc(((unsigned int)0x0201c470),((unsigned int)0x0201c474),0,extraout_r1_01);
    uVar23 = func_0201dbfc(((unsigned int)0x0201c478),((unsigned int)0x0201c46c),(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    uVar23 = func_0201d518((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    puVar4 = (undefined4 *)(((unsigned int)0x0201c47c) + iVar17 * 8);
    uVar23 = func_0201d518(*puVar4,puVar4[1],(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    uVar25 = func_0201e064(iVar16);
    uVar5 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar27 = func_0201d518((int)uVar24,uVar1,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    iVar16 = ((unsigned int)0x0201c480);
    uVar27 = func_0201d518((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),
                          *(undefined4 *)(((unsigned int)0x0201c480) + iVar17 * 8),
                          *(undefined4 *)(((unsigned int)0x0201c480) + iVar17 * 8 + 4));
    func_0201d518((int)uVar25,uVar5,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
    uVar25 = func_0201d848(0,extraout_r1_02,(int)uVar25,uVar5);
    puVar4 = (undefined4 *)(iVar16 + iVar17 * 8);
    uVar25 = func_0201d848((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),*puVar4,puVar4[1]);
    uVar24 = func_0201d848((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar24,uVar1);
    uStack_5c = extraout_r1_02;
  }
  uVar23 = func_0201d848((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                        (int)((ulonglong)uVar24 >> 0x20));
  uVar14 = ((unsigned int)0x0201c3f4);
  if ((int)param_2 < 0 && iVar15 == 1) {
    uVar14 = ((unsigned int)0x0201c3f4) + 0x80000000;
  }
  uVar24 = func_0201d848(param_3,param_4,0,param_4);
  uVar24 = func_0201dbfc(0,uStack_5c,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar23 = func_0201dbfc(param_3,param_4,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  uVar23 = func_0201d518((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                        (int)((ulonglong)uVar23 >> 0x20));
  uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar9 = (undefined4)uVar23;
  uVar23 = func_0201dbfc(0,param_4,0,uStack_5c);
  uVar11 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar2 = (undefined4)uVar23;
  lVar22 = func_0201d518(uVar9,uVar10);
  uVar7 = ((unsigned int)0x0201c49c);
  uVar6 = ((unsigned int)0x0201c498);
  uVar5 = ((unsigned int)0x0201c48c);
  uVar1 = ((unsigned int)0x0201c488);
  uVar18 = (uint)((ulonglong)lVar22 >> 0x20);
  iVar15 = (int)lVar22;
  uVar21 = ((unsigned int)0x0201c484) <= uVar18;
  if ((int)uVar18 < (int)((unsigned int)0x0201c484)) {
    uVar21 = ((unsigned int)0x0201c484) + 0xcc00 <= (uVar18 & 0x7fffffff);
    if ((int)(((unsigned int)0x0201c484) + 0xcc00) <= (int)(uVar18 & 0x7fffffff)) {
      bVar19 = uVar18 + ((unsigned int)0x0201c494) == 0;
      uVar20 = bVar19 && iVar15 == 0;
      if (!bVar19 || iVar15 != 0) {
        uVar23 = func_0201dbfc(((unsigned int)0x0201c498),((unsigned int)0x0201c49c),0,uVar14);
        lVar22 = func_0201dbfc(uVar6,uVar7,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        return lVar22;
      }
      uVar24 = func_0201d848(iVar15,uVar18,uVar2,uVar11);
      func_0201e178(uVar9,uVar10,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
      uVar5 = ((unsigned int)0x0201c49c);
      uVar1 = ((unsigned int)0x0201c498);
      if (!(bool)uVar21 || (bool)uVar20) {
        uVar23 = func_0201dbfc(((unsigned int)0x0201c498),((unsigned int)0x0201c49c),0,uVar14);
        lVar22 = func_0201dbfc(uVar1,uVar5,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
        return lVar22;
      }
    }
  }
  else {
    uVar20 = lVar22 == 0x4090000000000000;
    if (lVar22 != 0x4090000000000000) {
      uVar23 = func_0201dbfc(((unsigned int)0x0201c488),((unsigned int)0x0201c48c),0,uVar14);
      lVar22 = func_0201dbfc(uVar1,uVar5,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
      return lVar22;
    }
    uVar24 = func_0201d518(((unsigned int)0x0201c42c),((unsigned int)0x0201c490),uVar9,uVar10);
    uVar25 = func_0201d848(0,0x40900000,uVar2,uVar11);
    func_0201e0e0((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                 (int)((ulonglong)uVar25 >> 0x20));
    uVar5 = ((unsigned int)0x0201c48c);
    uVar1 = ((unsigned int)0x0201c488);
    if ((bool)uVar21 && !(bool)uVar20) {
      uVar23 = func_0201dbfc(((unsigned int)0x0201c488),((unsigned int)0x0201c48c),0,uVar14);
      lVar22 = func_0201dbfc(uVar1,uVar5,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
      return lVar22;
    }
  }
  iVar15 = 0;
  if ((int)((unsigned int)0x0201c404) < (int)(uVar18 & 0x7fffffff)) {
    uVar18 = uVar18 + (0x100000 >> (((unsigned int)0x0201c400) + ((int)(uVar18 & 0x7fffffff) >> 0x14) + 1 & 0xff))
    ;
    uVar12 = ((unsigned int)0x0201c400) + ((int)(uVar18 & 0x7fffffff) >> 0x14);
    iVar15 = (int)(uVar18 & 0xfffff | 0x100000) >> (0x14 - uVar12 & 0xff);
    if (lVar22 < 0) {
      iVar15 = -iVar15;
    }
    uVar23 = func_0201d848(uVar2,uVar11,0,uVar18 & ~(0xfffff >> (uVar12 & 0xff)));
  }
  uStack_4c = (undefined4)((ulonglong)uVar23 >> 0x20);
  uStack_50 = (undefined4)uVar23;
  func_0201d518(uVar9,uVar10,uStack_50,uStack_4c);
  iVar16 = ((unsigned int)0x0201c4a0);
  uVar23 = func_0201dbfc(0,((unsigned int)0x0201c4a0));
  uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar24 = func_0201d848(0,extraout_r1_03,uStack_50,uStack_4c);
  uVar24 = func_0201d848(uVar9,uVar10,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201dbfc(((unsigned int)0x0201c4a4),iVar16 + -1,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar25 = func_0201dbfc(((unsigned int)0x0201c4a8),((unsigned int)0x0201c4ac),0,extraout_r1_03);
  uVar24 = func_0201d518((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                        (int)((ulonglong)uVar25 >> 0x20));
  uVar6 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uVar25 = func_0201d518((int)uVar23,uVar5,(int)uVar24,uVar6);
  uVar7 = (undefined4)((ulonglong)uVar25 >> 0x20);
  uVar1 = (undefined4)uVar25;
  uVar23 = func_0201d848(uVar1,uVar7,(int)uVar23,uVar5);
  uVar23 = func_0201d848((int)uVar24,uVar6,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  uVar6 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar24 = func_0201dbfc(uVar1,uVar7,uVar1,uVar7);
  uVar9 = (undefined4)((ulonglong)uVar24 >> 0x20);
  uVar5 = (undefined4)uVar24;
  uVar24 = func_0201dbfc(((unsigned int)0x0201c4b0),((unsigned int)0x0201c4b4));
  uVar24 = func_0201d518(((unsigned int)0x0201c4b8),((unsigned int)0x0201c4bc),(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201dbfc(uVar5,uVar9,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201d518(((unsigned int)0x0201c4c0),((unsigned int)0x0201c4c4),(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201dbfc(uVar5,uVar9,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201d518(((unsigned int)0x0201c4c8),((unsigned int)0x0201c4cc),(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201dbfc(uVar5,uVar9,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201d518(((unsigned int)0x0201c4d0),((unsigned int)0x0201c4d4),(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201dbfc(uVar5,uVar9,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar24 = func_0201d848(uVar1,uVar7,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
  uVar25 = func_0201dbfc(uVar1,uVar7);
  uVar24 = func_0201d848((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0,0x40000000);
  uVar24 = func_0201fbf4((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar24,
                        (int)((ulonglong)uVar24 >> 0x20));
  uVar25 = func_0201dbfc(uVar1,uVar7,(int)uVar23,uVar6);
  uVar23 = func_0201d518((int)uVar23,uVar6,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
  uVar23 = func_0201d848((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                        (int)((ulonglong)uVar23 >> 0x20));
  uVar23 = func_0201d848((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar1,uVar7);
  uVar24 = func_0201d848(0,0x3ff00000,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
  iVar16 = (int)((ulonglong)uVar24 >> 0x20);
  iVar13 = iVar16 + iVar15 * 0x100000;
  uVar23 = CONCAT44(iVar13,(int)uVar24);
  if (iVar13 >> 0x14 < 1) {
    uVar23 = func_0201be2c((int)uVar24,iVar16,iVar15);
  }
  uStack_3c = (undefined4)((ulonglong)uVar23 >> 0x20);
  uStack_40 = (undefined4)uVar23;
  lVar22 = func_0201dbfc(0,uVar14,uStack_40,uStack_3c);
  return lVar22;
}
