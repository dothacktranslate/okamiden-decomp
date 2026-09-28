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

extern int func_020028c0();
extern int func_02002ac4();
extern int func_02002af4();
extern int func_02002e50();
extern int func_02002ea8();
extern int func_0201e9b4();
extern int func_02033328();
extern int func_0203337c();
extern int func_020333ec();
extern int func_02033504();

void func_02033ab4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];

  func_02002ac4(*param_1,param_1[1],auStack_20);
  func_02002ac4(*param_2,param_2[1],auStack_2c);
  iVar2 = func_02002af4(auStack_20,auStack_20);
  iVar3 = func_02002af4(auStack_2c,auStack_2c);
  if (iVar2 < 0x19) {
    puVar8 = (undefined4 *)param_1[1];
    *param_3 = *puVar8;
    param_3[1] = puVar8[1];
    puVar9 = auStack_2c;
    param_3[2] = puVar8[2];
    uVar4 = param_2[1];
    uVar10 = param_1[1];
    puVar8 = param_4;
  }
  else {
    puVar8 = (undefined4 *)param_2[1];
    if (0x18 < iVar3) {
      func_02002ac4(puVar8,param_1[1],auStack_38);
      iVar5 = func_02033328(auStack_20,auStack_2c);
      iVar6 = iVar5 >> 0x1f;
      lVar12 = func_0201e9b4(iVar2,iVar2 >> 0x1f,iVar3,iVar3 >> 0x1f);
      lVar13 = func_0201e9b4(iVar5,iVar6,iVar5,iVar6);
      lVar12 = (lVar12 >> 0xc) - (lVar13 >> 0xc);
      lVar13 = lVar12;
      if (lVar12 < 0) {
        lVar13 = CONCAT44(-(uint)((int)lVar12 != 0) - (int)((ulonglong)lVar12 >> 0x20),-(int)lVar12)
        ;
      }
      if ((int)((ulonglong)lVar13 >> 0x20) < (int)(uint)((uint)lVar13 < 5)) {
        func_020333ec(param_1,auStack_20,param_2,auStack_2c,param_3,param_4);
      }
      else {
        iVar3 = func_02002af4(auStack_20,auStack_38,(uint)lVar13 - 5);
        iVar7 = func_02033328(auStack_2c,auStack_38);
        lVar13 = func_0201e9b4(iVar2,iVar2 >> 0x1f,iVar7,iVar7 >> 0x1f);
        lVar14 = func_0201e9b4(iVar3,iVar3 >> 0x1f,iVar5,iVar6);
        lVar13 = (lVar13 >> 0xc) - (lVar14 >> 0xc);
        uVar11 = (uint)lVar13;
        do {
        } while (((uint)(*(unsigned int *)0x02033cd0) & (uint)((unsigned int)0x02033cd0) >> 0xb) != 0);
        (*(unsigned int *)0x02033cd0) = 2;
        piVar1 = ((unsigned int)0x02033cd4);
        (*(unsigned int *)0x02033cd4) = uVar11 * 0x1000;
        piVar1[1] = (int)((ulonglong)lVar13 >> 0x20) * 0x1000 | uVar11 >> 0x14;
        *(longlong *)(piVar1 + 2) = lVar12;
        do {
        } while (((uint)*(ushort *)(piVar1 + -4) & (uint)piVar1 >> 0xb) != 0);
        iVar7 = (*(unsigned int *)0x02033cd8);
        uVar15 = func_0201e9b4(iVar5,iVar6,iVar7,iVar7 >> 0x1f);
        iVar2 = func_020028c0(iVar3 - ((uint)uVar15 >> 0xc | (int)((ulonglong)uVar15 >> 0x20) << 0x14
                                     ),iVar2);
        func_02002e50(iVar2,auStack_20,param_1[1],param_3);
        func_02002e50(iVar7,auStack_2c,param_2[1],param_4);
        if ((((iVar2 < 0) || ((int)((uint)((unsigned int)0x02033cd8) >> 0xe) < iVar2)) || (iVar7 < 0)) ||
           ((int)((uint)((unsigned int)0x02033cd8) >> 0xe) < iVar7)) {
          func_02033504(param_1[1],auStack_20,param_2[1],auStack_2c,iVar2,iVar7,param_3,param_4);
        }
      }
      goto LAB_02033cc4;
    }
    *param_4 = *puVar8;
    param_4[1] = puVar8[1];
    param_4[2] = puVar8[2];
    uVar4 = param_1[1];
    puVar9 = auStack_20;
    uVar10 = param_2[1];
    puVar8 = param_3;
  }
  func_0203337c(uVar4,puVar9,uVar10,puVar8,0,auStack_3c);
LAB_02033cc4:
  func_02002ea8(param_3,param_4);
  return;
}
