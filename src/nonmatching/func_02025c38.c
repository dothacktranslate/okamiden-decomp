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

extern int func_0202b294();
extern int func_0202b4fc();
extern int func_0202bce4();
extern int func_0202c468();
extern int func_0202d6ac();
extern int func_0202d878();
extern int func_0202d8a0();
extern int func_0202d8f0();
extern int func_0202e104();
extern int func_0202e164();
extern int func_02032ac4();
extern int func_020381cc();
extern int func_020465d8();
extern int func_02046868();
extern int func_020471a4();
extern int func_0x02095770();
extern int func_0x02095830();
extern int func_0x020a0d5c();
extern int func_0x020a0d78();
extern int func_0x020a0d94();
extern int func_0x020a0db4();
extern int func_0x020ae6c8();

undefined4 func_02025c38(undefined4 param_1)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;

  iVar4 = func_020465d8(param_1,2);
  bVar1 = true;
  piVar9 = (int *)(*(unsigned int *)0x02025f1c);
  iVar10 = piVar9[8];
  iVar5 = *(int *)(*piVar9 + 0x5c);
  iVar6 = func_020465d8(param_1,1);
  iVar7 = ((unsigned int)0x02025f20);
  switch(iVar6 - ((unsigned int)0x02025f20)) {
  case 0:
    if (iVar4 == 0) {
      iVar5 = func_02032ac4(((unsigned int)0x02025f24),((unsigned int)0x02025f28),((unsigned int)0x02025f2c),0x1e);
      iVar7 = 0;
      if (iVar5 != 0) {
        uVar2 = func_020465d8(param_1,3);
        iVar7 = func_0202e164(iVar5,uVar2);
      }
      func_020381cc((*(unsigned int *)0x02025f34),iVar7,0xb,0,0,((unsigned int)0x02025f30));
      iVar4 = 1;
      piVar9[8] = iVar7;
    }
    else if ((iVar4 == 1) && (*(int *)(iVar10 + ((unsigned int)0x02025f38)) != 0)) {
      iVar4 = -1;
    }
    goto LAB_02025ff0;
  case 1:
    if (iVar10 == 0) goto LAB_02025d28;
    iVar5 = func_020465d8(param_1,3);
    iVar5 = iVar5 << 0xc;
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar10 + iVar7 + 199);
    }
    if (*(int *)(iVar10 + ((unsigned int)0x02025f3c)) < iVar5) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    goto LAB_02025ff0;
  case 2:
    iVar5 = func_020465d8(param_1,3);
    if ((*(int *)(iVar10 + iVar7 + 0xc3) < iVar5 * 0x1000) || ((char)piVar9[0x24] == '\0')) {
      *(int *)(iVar10 + ((unsigned int)0x02025f40)) = iVar5 * 0x1000;
    }
    break;
  case 3:
    if (iVar10 == 0) {
      iVar4 = -1;
    }
    else {
      iVar7 = func_020465d8(param_1,3);
      switch(iVar7 - ((unsigned int)0x02025f44)) {
      case 0:
      case 2:
        if ((char)piVar9[0x24] == '\0') {
          func_0202e104(iVar10);
        }
        iVar4 = -1;
        break;
      case 1:
        iVar7 = func_0202b294(iVar10);
        if (iVar7 != 0) goto LAB_02025daa;
        break;
      case 4:
        func_0202bce4(iVar10);
LAB_02025daa:
        iVar4 = -1;
      }
    }
    goto LAB_02025ff0;
  case 4:
LAB_02025d28:
    iVar4 = -1;
    goto LAB_02025ff0;
  case 5:
    if (iVar4 == 0) {
      iVar7 = *(int *)(*(int *)(iVar5 + 0x60) + 0x218);
      if ((iVar7 != 3) && (iVar7 != 1)) {
        bVar1 = false;
      }
      if (bVar1) {
        if (piVar9[0x32] != 0) {
          piVar9[0x32] = 0;
        }
        iVar7 = *(int *)(iVar5 + 0x50);
        if ((*(uint *)(iVar7 + 0x14) & 0x1000000) == 0) {
          if ((*(uint *)(iVar7 + 0x14) & 0x2000000) != 0) {
            func_0x02095830(iVar7);
          }
        }
        else {
          iVar5 = func_0x020ae6c8(*(undefined4 *)(iVar5 + 0x44));
          if (iVar5 == 0) {
            func_0x02095770(iVar7,0x1800);
          }
        }
        iVar4 = 1;
      }
    }
    else if ((iVar4 == 1) && ((*(uint *)(*(int *)(iVar5 + 0x50) + 0x14) & 0x3000000) == 0)) {
      uVar2 = func_020465d8(param_1,3);
      *(undefined2 *)((int)piVar9 + 0x26) = uVar2;
      uVar2 = func_020465d8(param_1,4);
      *(undefined2 *)(piVar9 + 10) = uVar2;
      *(undefined2 *)((int)piVar9 + 0x2a) = *(undefined2 *)((*(unsigned int *)0x02025f1c) + ((unsigned int)0x02025f48));
      uVar2 = func_020465d8(param_1,6);
      iVar4 = -1;
      *(undefined2 *)(piVar9 + 0xb) = uVar2;
    }
    goto LAB_02025ff0;
  case 6:
    if (iVar10 == 0) {
LAB_02025eaa:
      iVar4 = -1;
    }
    else if (iVar4 == 0) {
      iVar7 = func_020465d8(param_1,3);
      func_0202d8f0(iVar10,iVar7 << 0xc);
      func_020471a4(param_1,2,0);
      iVar4 = 1;
    }
    else if ((iVar4 == 1) && (*(short *)(iVar10 + ((unsigned int)0x02025f20) + 0xaf) != 6)) goto LAB_02025eaa;
    goto LAB_02025ff0;
  case 7:
    if (iVar10 != 0) {
      func_0202b4fc(iVar10);
    }
    break;
  case 8:
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + ((unsigned int)0x02025f4c)) = 0;
    }
    break;
  case 9:
    if (iVar10 != 0) {
      func_0202d6ac(iVar10);
    }
    break;
  case 10:
    if (iVar10 != 0) {
      func_0202d878(iVar10);
    }
    break;
  case 0xb:
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + ((unsigned int)0x02025f50)) = 0;
    }
    break;
  case 0xc:
    iVar7 = func_020465d8(param_1,3);
    if (iVar10 != 0) {
      if (iVar7 < 1) {
        func_0x020a0d78(iVar5 + 0x88,0x800);
        func_0x020a0db4(iVar5 + 0x88,0x20);
      }
      else {
        func_0x020a0d5c(iVar5 + 0x88,0x800);
        func_0x020a0d94(iVar5 + 0x88,0x20);
      }
    }
    break;
  case 0xd:
    if (iVar10 != 0) {
      uVar2 = func_020465d8(param_1,3);
      *(undefined2 *)(iVar10 + 0xbe0) = uVar2;
    }
    break;
  case 0xe:
    if (iVar10 != 0) {
      *(undefined1 *)(iVar10 + ((unsigned int)0x02025ffc)) = 1;
    }
    break;
  case 0xf:
    iVar5 = func_020465d8(param_1,3);
    sVar3 = func_020465d8(param_1,4);
    iVar4 = 0;
    if (iVar10 != 0) {
      if (iVar5 == -1) {
        if (sVar3 != 0) {
          iVar4 = *(int *)(iVar10 + iVar7 + 199) >> 0xc;
        }
      }
      else {
        iVar4 = func_0202d8a0(iVar10,iVar5);
      }
    }
    goto LAB_02025ff0;
  default:
    goto switchD_02025c7a_caseD_10;
  case 0x11:
    if (iVar10 != 0) {
      uVar8 = func_020465d8(param_1,3);
      func_0202c468(iVar10,uVar8);
    }
    break;
  case 0x12:
    iVar4 = 0;
    if (iVar10 != 0) {
      iVar4 = *(int *)(iVar10 + ((unsigned int)0x02025f20) + 0xc3);
    }
    goto LAB_02025ff0;
  }
  iVar4 = -1;
LAB_02025ff0:
  func_02046868(param_1,iVar4);
switchD_02025c7a_caseD_10:
  return 1;
}
