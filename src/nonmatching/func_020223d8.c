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

extern int func_02021f80();
extern int func_02021fdc();
extern int func_0202207c();
extern int func_02022be4();
extern int func_02022ed0();
extern int func_02022f48();
extern int func_02022f84();
extern int func_02022ffc();
extern int func_02033028();
extern int func_0x0209f43c();

int func_020223d8(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined4 uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 *puVar60;
  uint uVar61;
  int iVar62;
  undefined4 *puVar63;
  int iVar64;
  uint uVar65;
  undefined1 auStack_64 [80];

  func_02021fdc(param_1,((unsigned int)0x02022758));
  iVar64 = 0;
  func_0x0209f43c(*(undefined4 *)(*(int *)(*(unsigned int *)0x0202275c) + 0x5c),0,0,0);
  func_02022be4(auStack_64,((unsigned int)0x02022760));
  iVar2 = ((unsigned int)0x02022764) + 4;
  iVar3 = ((unsigned int)0x02022764) + 4;
  iVar4 = ((unsigned int)0x02022764) + 6;
  iVar5 = ((unsigned int)0x02022764) + 6;
  iVar6 = ((unsigned int)0x02022764) + 8;
  iVar7 = ((unsigned int)0x02022764) + 8;
  iVar8 = ((unsigned int)0x02022764) + 10;
  iVar9 = ((unsigned int)0x02022764) + 10;
  iVar10 = ((unsigned int)0x02022764) + 0xc;
  iVar11 = ((unsigned int)0x02022764) + 0xc;
  iVar12 = ((unsigned int)0x02022764) + 0x18;
  iVar13 = ((unsigned int)0x02022764) + 0x18;
  iVar14 = ((unsigned int)0x02022764) + 0x1a;
  iVar15 = ((unsigned int)0x02022764) + 0x1a;
  iVar16 = ((unsigned int)0x02022764) + 0x1c;
  iVar17 = ((unsigned int)0x02022764) + 0x1c;
  iVar18 = ((unsigned int)0x02022764) + 0x20;
  iVar19 = ((unsigned int)0x02022764) + 0x20;
  iVar20 = ((unsigned int)0x02022764) + 0x24;
  iVar21 = ((unsigned int)0x02022764) + 0x24;
  iVar22 = ((unsigned int)0x02022764) + 0x28;
  iVar23 = ((unsigned int)0x02022764) + 0x28;
  iVar24 = ((unsigned int)0x02022764) + 0x2c;
  iVar25 = ((unsigned int)0x02022764) + 0x2c;
  iVar26 = ((unsigned int)0x02022764) + 0x2e;
  iVar27 = ((unsigned int)0x02022764) + 0x2e;
  iVar28 = ((unsigned int)0x02022764) + 0x30;
  iVar29 = ((unsigned int)0x02022764) + 0x30;
  iVar30 = ((unsigned int)0x02022764) + 0x32;
  iVar31 = ((unsigned int)0x02022764) + 0x32;
  iVar32 = ((unsigned int)0x02022764) + 0x34;
  iVar33 = ((unsigned int)0x02022764) + 0x34;
  iVar34 = ((unsigned int)0x02022764) + 0x36;
  iVar35 = ((unsigned int)0x02022764) + 0x36;
  iVar36 = ((unsigned int)0x02022764) + 0x38;
  iVar37 = ((unsigned int)0x02022764) + 0x38;
  iVar38 = ((unsigned int)0x02022764) + 0x3a;
  iVar39 = ((unsigned int)0x02022764) + 0x3a;
  iVar40 = ((unsigned int)0x02022764) + 4;
  iVar41 = ((unsigned int)0x02022764) + 6;
  iVar42 = ((unsigned int)0x02022764) + 8;
  iVar43 = ((unsigned int)0x02022764) + 10;
  iVar44 = ((unsigned int)0x02022764) + 0xc;
  iVar45 = ((unsigned int)0x02022764) + 0x10;
  iVar46 = ((unsigned int)0x02022764) + 0x14;
  iVar47 = ((unsigned int)0x02022764) + 0x18;
  iVar48 = ((unsigned int)0x02022764) + 0x1a;
  uVar59 = *(undefined4 *)(((unsigned int)0x0202276c) + ((unsigned int)0x02022768));
  iVar49 = ((unsigned int)0x02022764) + 0x1c;
  iVar50 = ((unsigned int)0x02022764) + 0x20;
  uVar51 = *(undefined4 *)(((unsigned int)0x0202276c) + ((unsigned int)0x02022768) + 4);
  iVar52 = ((unsigned int)0x02022764) + 0x24;
  iVar53 = ((unsigned int)0x02022764) + 0x28;
  iVar54 = ((unsigned int)0x02022764) + 0x2c;
  iVar55 = ((unsigned int)0x02022764) + 0x2e;
  iVar56 = ((unsigned int)0x02022764) + 0x30;
  do {
    iVar57 = iVar64 * 0x78;
    iVar64 = iVar64 + 1;
    iVar62 = ((unsigned int)0x0202276c) + iVar57;
    iVar57 = ((unsigned int)0x02022758) + iVar57;
    *(undefined4 *)(iVar57 + ((unsigned int)0x02022764)) = *(undefined4 *)(iVar62 + ((unsigned int)0x02022764));
    *(undefined2 *)(iVar57 + iVar3) = *(undefined2 *)(iVar62 + iVar2);
    *(undefined2 *)(iVar57 + iVar5) = *(undefined2 *)(iVar62 + iVar4);
    *(undefined2 *)(iVar57 + iVar7) = *(undefined2 *)(iVar62 + iVar6);
    *(undefined2 *)(iVar57 + iVar9) = *(undefined2 *)(iVar62 + iVar8);
    puVar60 = (undefined4 *)(iVar62 + iVar10);
    puVar63 = (undefined4 *)(iVar57 + iVar11);
    uVar58 = puVar60[1];
    *puVar63 = *puVar60;
    puVar63[1] = uVar58;
    puVar63[2] = puVar60[2];
    *(undefined2 *)(iVar57 + iVar13) = *(undefined2 *)(iVar62 + iVar12);
    *(undefined2 *)(iVar57 + iVar15) = *(undefined2 *)(iVar62 + iVar14);
    *(undefined4 *)(iVar57 + iVar17) = *(undefined4 *)(iVar62 + iVar16);
    *(undefined4 *)(iVar57 + iVar19) = *(undefined4 *)(iVar62 + iVar18);
    *(undefined4 *)(iVar57 + iVar21) = *(undefined4 *)(iVar62 + iVar20);
    *(undefined4 *)(iVar57 + iVar23) = *(undefined4 *)(iVar62 + iVar22);
    *(undefined2 *)(iVar57 + iVar25) = *(undefined2 *)(iVar62 + iVar24);
    *(undefined2 *)(iVar57 + iVar27) = *(undefined2 *)(iVar62 + iVar26);
    *(undefined2 *)(iVar57 + iVar29) = *(undefined2 *)(iVar62 + iVar28);
    *(undefined2 *)(iVar57 + iVar31) = *(undefined2 *)(iVar62 + iVar30);
    *(undefined2 *)(iVar57 + iVar33) = *(undefined2 *)(iVar62 + iVar32);
    *(undefined2 *)(iVar57 + iVar35) = *(undefined2 *)(iVar62 + iVar34);
    *(undefined2 *)(iVar57 + iVar37) = *(undefined2 *)(iVar62 + iVar36);
    *(undefined2 *)(iVar57 + iVar39) = *(undefined2 *)(iVar62 + iVar38);
    *(undefined4 *)(iVar57 + ((unsigned int)0x02022764)) = 0;
    *(undefined2 *)(iVar57 + iVar40) = 0;
    *(undefined2 *)(iVar57 + iVar41) = 0;
    *(undefined2 *)(iVar57 + iVar42) = 0;
    *(undefined2 *)(iVar57 + iVar43) = 0;
    *(undefined4 *)(iVar57 + iVar44) = 0;
    *(undefined4 *)(iVar57 + iVar45) = 0;
    *(undefined4 *)(iVar57 + iVar46) = 0;
    *(undefined2 *)(iVar57 + iVar47) = 0;
    *(undefined2 *)(iVar57 + iVar48) = 0;
    *(undefined4 *)(iVar57 + iVar49) = uVar59;
    *(undefined4 *)(iVar57 + iVar50) = uVar59;
    *(undefined4 *)(iVar57 + iVar52) = uVar51;
    *(undefined4 *)(iVar57 + iVar53) = uVar51;
    *(undefined2 *)(iVar57 + iVar54) = 1;
    *(undefined2 *)(iVar57 + iVar55) = 1;
    *(undefined2 *)(iVar57 + iVar56) = 0;
    puVar1 = ((unsigned int)0x02022770);
  } while (iVar64 < 3);
  (*(unsigned int *)0x02022770) = 2;
  puVar1[1] = 5;
  puVar1[2] = 3;
  puVar1[3] = 1;
  puVar1[4] = 1;
  iVar2 = ((unsigned int)0x02022774);
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 1;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  uVar61 = 0x84;
  puVar1[6] = *(undefined2 *)(((unsigned int)0x0202276c) + ((unsigned int)0x02022778));
  puVar1[7] = (short)*(undefined4 *)(((unsigned int)0x0202276c) + 0xf10);
  *(undefined4 *)(((unsigned int)0x0202277c) + 0x14) = *(undefined4 *)(((unsigned int)0x0202276c) + 0xe14);
  do {
    iVar2 = func_02022f48((*(unsigned int *)0x0202275c) + 0xf0,1,0,uVar61 & 0xffff);
    if (iVar2 != 0) {
      func_02022ed0(auStack_64,1,0,uVar61 & 0xffff);
    }
    uVar61 = uVar61 + 1;
  } while ((int)uVar61 < 0x8d);
  func_02022ed0(auStack_64,1,0,0x8c);
  func_02022ed0(auStack_64,1,0,0x8d);
  func_02022ed0(auStack_64,1,0,0x99);
  uVar65 = ((unsigned int)0x02022780) + 0x3f;
  uVar61 = ((unsigned int)0x02022780);
  do {
    iVar2 = func_02022ffc((*(unsigned int *)0x0202275c) + 0xf0,uVar61);
    if (iVar2 != 0) {
      func_02022f84(auStack_64,uVar61);
    }
    iVar2 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,uVar61 + 0x100 & 0xffff);
    if (iVar2 != 0) {
      func_02022f84(auStack_64,uVar61 + 0x100 & 0xffff);
    }
    uVar61 = uVar61 + 1 & 0xffff;
  } while (uVar61 <= uVar65);
  uVar65 = ((unsigned int)0x0202290c) + 0x1d;
  uVar61 = ((unsigned int)0x0202290c);
  do {
    iVar2 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,uVar61);
    if (iVar2 != 0) {
      func_02022f84(auStack_64,uVar61);
    }
    iVar2 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,uVar61 + 0x21 & 0xffff);
    if (iVar2 != 0) {
      func_02022f84(auStack_64,uVar61 + 0x21 & 0xffff);
    }
    uVar51 = ((unsigned int)0x02022910);
    uVar61 = uVar61 + 1 & 0xffff;
  } while (uVar61 <= uVar65);
  iVar2 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,((unsigned int)0x02022910));
  if (iVar2 != 0) {
    func_02022f84(auStack_64,uVar51);
  }
  iVar2 = ((unsigned int)0x02022914);
  uVar61 = 0xab;
  do {
    uVar65 = uVar61 + iVar2 & 0xffff;
    iVar3 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,uVar61);
    if (iVar3 != 0) {
      func_02022f84(auStack_64,uVar61);
      func_02022f84(auStack_64,uVar65);
    }
    uVar65 = uVar65 + 0x100 & 0xffff;
    iVar3 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,uVar65);
    if (iVar3 != 0) {
      func_02022f84(auStack_64,uVar65);
    }
    uVar61 = uVar61 + 1 & 0xffff;
  } while (uVar61 < 0xdd);
  uVar65 = ((unsigned int)0x02022918) + 5;
  uVar61 = ((unsigned int)0x02022918);
  do {
    iVar2 = func_02022ffc((*(unsigned int *)0x02022908) + 0xf0,uVar61);
    if (iVar2 != 0) {
      func_02022f84(auStack_64,uVar61);
    }
    uVar61 = uVar61 + 1 & 0xffff;
  } while (uVar61 <= uVar65);
  if (param_2 != 0) {
    func_02022ed0(auStack_64,0,0,5);
  }
  func_02022ed0(auStack_64,0,0,3);
  iVar2 = func_0202207c(param_1,((unsigned int)0x0202291c),((unsigned int)0x02022920),0);
  if (iVar2 == 0) {
    iVar2 = func_02033028((*(unsigned int *)0x02022924),((unsigned int)0x02022928),((unsigned int)0x0202292c),0x10,1);
    if (iVar2 == 0) {
      iVar2 = func_02021f80(param_1);
      if (iVar2 == 0) {
        return 9;
      }
      return 4;
    }
    iVar2 = 0;
  }
  return iVar2;
}
