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

extern int func_02016974();
extern int func_0201ad90();
extern int func_0201b1ac();
extern int func_0201b28c();
extern int func_0201b36c();
extern int func_0201b60c();
extern int func_0201be58();
extern int func_0201cfe0();
extern int func_0201d2ac();
extern int func_0201d518();
extern int func_0201d848();
extern int func_0201dbfc();
extern int func_0201e064();
extern int func_0201e0a4();
extern int func_0201e2b8();
extern int func_0201e61c();
extern int func_0201fbf4();

undefined4 func_0201b838(char *param_1)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  char *pcVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined2 *puVar21;
  int iVar22;
  byte *pbVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  int local_120;
  int local_11c;
  uint local_118;
  int local_114;
  undefined1 auStack_108 [38];
  undefined2 auStack_e2 [19];
  undefined2 auStack_bc [19];
  undefined2 auStack_96 [19];
  undefined1 auStack_70 [38];
  char local_4a [2];
  short local_48;
  byte local_46;
  byte local_45 [33];

  if (param_1[4] == '\0') {
    uVar7 = ((unsigned int)0x0201be0c);
    if (*param_1 != '\0') {
      uVar7 = ((unsigned int)0x0201be10);
    }
    uVar7 = func_0201cfe0(0,0,0,uVar7);
    return uVar7;
  }
  cVar2 = param_1[5];
  if (cVar2 == '0') {
    uVar7 = ((unsigned int)0x0201be0c);
    if (*param_1 != '\0') {
      uVar7 = ((unsigned int)0x0201be10);
    }
    uVar7 = func_0201cfe0(0,0,0,uVar7);
    return uVar7;
  }
  if (cVar2 == 'I') {
    uVar7 = ((unsigned int)0x0201be0c);
    if (*param_1 != '\0') {
      uVar7 = ((unsigned int)0x0201be10);
    }
    uVar25 = func_0201e61c((*(unsigned int *)0x0201be14));
    uVar7 = func_0201cfe0((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,uVar7);
    return uVar7;
  }
  if (cVar2 == 'N') {
    return 0;
  }
  iVar11 = 9;
  pcVar13 = local_4a;
  pcVar18 = param_1;
  do {
    pcVar19 = pcVar18 + 4;
    uVar3 = *(undefined2 *)pcVar18;
    iVar11 = iVar11 + -1;
    *(undefined2 *)(pcVar13 + 2) = *(undefined2 *)(pcVar18 + 2);
    pcVar14 = pcVar13 + 4;
    *(undefined2 *)pcVar13 = uVar3;
    pcVar13 = pcVar14;
    pcVar18 = pcVar19;
  } while (iVar11 != 0);
  pbVar9 = local_45;
  *(undefined2 *)pcVar14 = *(undefined2 *)pcVar19;
  pbVar20 = pbVar9 + local_46;
  for (; pbVar9 < pbVar20; pbVar9 = pbVar9 + 1) {
    *pbVar9 = *pbVar9 - 0x30;
  }
  local_48 = local_48 + (local_46 - 1);
  iVar11 = (int)local_48;
  func_0201ad90(auStack_70,((unsigned int)0x0201be1c),0x134);
  iVar8 = func_0201b28c(auStack_70,local_4a);
  if (iVar8 != 0) {
    uVar7 = ((unsigned int)0x0201be0c);
    if (*param_1 != '\0') {
      uVar7 = ((unsigned int)0x0201be10);
    }
    uVar25 = func_0201e61c((*(unsigned int *)0x0201be14));
    uVar7 = func_0201cfe0((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,uVar7);
    return uVar7;
  }
  pbVar9 = local_45 + 1;
  uVar25 = func_0201e0a4(local_45[0]);
  while( true ) {
    uVar4 = (undefined4)((ulonglong)uVar25 >> 0x20);
    uVar7 = (undefined4)uVar25;
    if (pbVar20 <= pbVar9) break;
    iVar8 = (int)pbVar20 - (int)pbVar9 >> 0x1f;
    iVar8 = ((uint)(((int)pbVar20 - (int)pbVar9) * 0x20000000 + iVar8) >> 0x1d | iVar8 << 3) - iVar8
    ;
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    iVar22 = 0;
    iVar12 = 0;
    pbVar23 = pbVar9;
    if (0 < iVar8) {
      do {
        pbVar9 = pbVar23 + 1;
        iVar12 = iVar12 + 1;
        iVar22 = iVar22 * 10 + (uint)*pbVar23;
        pbVar23 = pbVar9;
      } while (iVar12 < iVar8);
    }
    iVar12 = ((unsigned int)0x0201be20) + iVar8 * 8;
    uVar26 = func_0201dbfc(uVar7,uVar4,*(undefined4 *)(iVar12 + -8),*(undefined4 *)(iVar12 + -4));
    uVar10 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar25 = func_0201e0a4(iVar22);
    uVar25 = func_0201d518((int)uVar26,uVar10,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    bVar24 = iVar22 == 0;
    if ((!bVar24) &&
       (func_0201e2b8((int)uVar26,uVar10,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20)), bVar24))
    break;
    iVar11 = iVar11 - iVar8;
  }
  if (iVar11 < 0) {
    uVar25 = func_0201e064(-iVar11);
    uVar25 = func_0201be58(0,((unsigned int)0x0201be24),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201fbf4(uVar7,uVar4,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
  }
  else {
    uVar25 = func_0201e064(iVar11);
    uVar25 = func_0201be58(0,((unsigned int)0x0201be24),(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar25 = func_0201dbfc(uVar7,uVar4,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
  }
  uVar27 = func_0201d2ac((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),iVar11);
  iVar11 = func_02016974();
  if (iVar11 == 2) {
    uVar27 = CONCAT44(((unsigned int)0x0201be28),0xffffffff);
  }
  local_114 = (int)(uVar27 >> 0x20);
  local_118 = (uint)uVar27;
  func_0201b60c(auStack_96,local_118,local_114);
  iVar11 = func_0201b1ac(auStack_96,local_4a);
  if (iVar11 == 0) {
    iVar11 = func_0201b28c(auStack_96,local_4a);
    bVar24 = iVar11 != 0;
    while( true ) {
      local_114 = (int)(uVar27 >> 0x20);
      local_118 = (uint)uVar27;
      if (bVar24) {
        local_120 = local_118 + 1;
        uVar1 = (uint)(0xfffffffe < local_118);
        iVar11 = func_02016974();
        if (iVar11 == 2) goto LAB_0201bdd4;
      }
      else {
        local_120 = local_118 - 1;
        uVar1 = -(uint)(local_118 == 0);
      }
      local_11c = local_114 + uVar1;
      func_0201b60c(auStack_bc,local_120,local_11c);
      if ((bVar24) &&
         (iVar11 = func_0201b28c(auStack_bc,local_4a), uVar5 = uVar27,
         uVar6 = CONCAT44(local_11c,local_120), iVar11 == 0)) goto LAB_0201bd4c;
      if ((!bVar24) && (iVar11 = func_0201b28c(local_4a,auStack_bc), iVar11 == 0)) break;
      iVar11 = 9;
      puVar16 = auStack_96;
      puVar17 = auStack_bc;
      do {
        puVar21 = puVar17 + 2;
        uVar3 = *puVar17;
        iVar11 = iVar11 + -1;
        puVar16[1] = puVar17[1];
        puVar15 = puVar16 + 2;
        *puVar16 = uVar3;
        puVar16 = puVar15;
        puVar17 = puVar21;
      } while (iVar11 != 0);
      uVar27 = CONCAT44(local_11c,local_120);
      *puVar15 = *puVar21;
    }
    iVar11 = 9;
    puVar16 = auStack_96;
    puVar17 = auStack_e2;
    do {
      puVar15 = puVar16 + 2;
      uVar3 = *puVar16;
      iVar11 = iVar11 + -1;
      puVar17[1] = puVar16[1];
      puVar21 = puVar17 + 2;
      *puVar17 = uVar3;
      puVar16 = puVar15;
      puVar17 = puVar21;
    } while (iVar11 != 0);
    *puVar21 = *puVar15;
    iVar11 = 9;
    puVar16 = auStack_bc;
    puVar17 = auStack_96;
    do {
      puVar15 = puVar16 + 2;
      uVar3 = *puVar16;
      iVar11 = iVar11 + -1;
      puVar17[1] = puVar16[1];
      puVar21 = puVar17 + 2;
      *puVar17 = uVar3;
      puVar16 = puVar15;
      puVar17 = puVar21;
    } while (iVar11 != 0);
    *puVar21 = *puVar15;
    iVar11 = 9;
    puVar16 = auStack_e2;
    puVar17 = auStack_bc;
    do {
      puVar15 = puVar16 + 2;
      uVar3 = *puVar16;
      iVar11 = iVar11 + -1;
      puVar17[1] = puVar16[1];
      puVar21 = puVar17 + 2;
      *puVar17 = uVar3;
      puVar16 = puVar15;
      puVar17 = puVar21;
    } while (iVar11 != 0);
    *puVar21 = *puVar15;
    uVar5 = CONCAT44(local_11c,local_120);
    uVar6 = uVar27;
LAB_0201bd4c:
    func_0201b36c(auStack_e2,local_4a,auStack_96);
    func_0201b36c(auStack_108,auStack_bc,local_4a);
    iVar11 = func_0201b1ac(auStack_e2,auStack_108);
    uVar27 = uVar5;
    if (iVar11 == 0) {
      iVar11 = func_0201b28c(auStack_e2,auStack_108);
      if (iVar11 == 0) {
        uVar27 = uVar6;
      }
    }
    else if ((uVar5 & 1) != 0) {
      uVar27 = uVar6;
    }
  }
LAB_0201bdd4:
  local_114 = (int)(uVar27 >> 0x20);
  local_118 = (uint)uVar27;
  if (local_4a[0] != '\0') {
    local_118 = func_0201d848(0,0,local_118,local_114);
  }
  return local_118;
}
