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

extern int func_02022fc0();
extern int func_02024910();
extern int func_02039564();
extern int func_02040f28();
extern int func_020465d8();
extern int func_02046868();
extern int func_020471a4();
extern int func_0x020855a0();
extern int func_0x020859b8();
extern int func_0x02095770();
extern int func_0x02095830();
extern int func_0x0209cee8();
extern int func_0x0209cfb0();
extern int func_0x0209d1e4();
extern int func_0x020a0d78();
extern int func_0x020a0db4();
extern int func_0x020ae730();
extern int func_0x020ae848();
extern int func_0x020be3ac();
extern int func_0x020d3638();
extern int func_0x020d37ec();
extern int func_0x020db7ac();
extern int func_0x020ddc50();
extern int func_0x020e21b4();

undefined4 func_0202952c(undefined4 param_1)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  short sVar8;
  int *piVar9;
  int iVar10;

  piVar9 = (int *)(*(unsigned int *)0x02029798);
  iVar6 = *(int *)(*piVar9 + 0x5c);
  piVar7 = piVar9 + 5;
  iVar4 = func_020465d8(param_1,2);
  switch(iVar4) {
  case 0:
    *(undefined1 *)(piVar9 + 9) = 2;
    func_0x020d3638(*(undefined4 *)(iVar6 + 0x5c));
    func_0x020d37ec(*(undefined4 *)(iVar6 + 0x5c),0x200);
    *(undefined4 *)(*(int *)(iVar6 + 0x5c) + ((unsigned int)0x0202979c)) = 0x1000;
    func_02022fc0((*(unsigned int *)0x02029798) + 0xf0,0x51);
    if ((piVar9[0x2f] & 0x80U) == 0) {
      func_0x020be3ac(*(undefined4 *)(iVar6 + 0x3c),2);
    }
    *(undefined2 *)(*(int *)(iVar6 + 0x3c) + ((unsigned int)0x020297a0)) = 0xf8;
    if ((piVar9[0x2f] & 0x80U) == 0) {
      *(uint *)(iVar6 + 0x1c) = ((unsigned int)0x020297a4) & *(uint *)(iVar6 + 0x1c);
    }
    if (*(char *)((int)piVar9 + 0xdf) != '\0') {
      func_0x020ddc50(*(undefined4 *)(iVar6 + 0x80),0x33);
      *(undefined1 *)((int)piVar9 + 0xdf) = 0;
    }
    func_02022fc0((*(unsigned int *)0x02029798) + 0xf0,0xa1);
    iVar4 = iVar4 + 1;
  case 1:
    iVar10 = *(int *)(*(int *)(iVar6 + 0x60) + 0x218);
    bVar2 = true;
    if ((iVar10 != 3) && (iVar10 != 1)) {
      bVar2 = false;
    }
    if (bVar2) {
      iVar4 = iVar4 + 1;
switchD_02029556_caseD_2:
      if ((piVar9[0x2f] & 0x80U) == 0) {
        if (piVar9[0x32] != 0) {
          piVar9[0x32] = 0;
        }
        iVar10 = *(int *)(iVar6 + 0x50);
        if ((*(uint *)(iVar10 + 0x14) & 0x1000000) == 0) {
          if ((*(uint *)(iVar10 + 0x14) & 0x2000000) != 0) {
            func_0x02095830(iVar10);
          }
        }
        else {
          iVar5 = func_0x020ae730(*(undefined4 *)(iVar6 + 0x44));
          if (iVar5 != 0) {
            func_0x02095770(iVar10,0x1800);
          }
        }
        if (*(short *)((int)piVar9 + 0x62) != 0) {
          func_02024910(piVar7);
          *(undefined2 *)((int)piVar9 + 0x62) = 0;
        }
      }
      iVar4 = iVar4 + 1;
      goto switchD_02029556_caseD_3;
    }
    break;
  case 2:
    goto switchD_02029556_caseD_2;
  case 3:
switchD_02029556_caseD_3:
    if ((((piVar9[0x2f] & 0x80U) != 0) ||
        ((*(uint *)(*(int *)(iVar6 + 0x50) + 0x14) & 0x3000000) == 0)) && (piVar9[8] == 0)) {
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xffffffef | 0x10000;
      if (((piVar9[0x2f] & 0x80U) == 0) && ((piVar9[0x2f] & 2U) != 0)) {
        piVar9[0x2f] = piVar9[0x2f] & 0xfffffffd;
        func_0x020a0db4(iVar6 + 0x88,1);
      }
      if (piVar9[0xf] != 0) {
        func_0x020a0d78(iVar6 + 0x88);
        piVar9[0xf] = 0;
      }
      if (*(int *)(iVar6 + 0x54) != 0) {
        *(uint *)(*(int *)(iVar6 + 0x34) + 0x14) =
             ((unsigned int)0x020297a8) & *(uint *)(*(int *)(iVar6 + 0x34) + 0x14);
      }
      func_02039564((*(unsigned int *)0x020297ac) + 0x10,0x3c000);
      *(undefined4 *)(*(int *)((*(unsigned int *)0x020297b0) + ((unsigned int)0x020297b4)) + ((unsigned int)0x020297b4) + -0x9c) = 4;
      if (((*(int *)(iVar6 + 0x58) != 0) && (iVar4 = func_0x020859b8(), iVar4 == 0)) &&
         (*(short *)((int)piVar9 + 0x26) == 0)) {
        if (*(int *)(iVar6 + 0x74) == 0) {
          *(uint *)(*(int *)(iVar6 + 0x58) + 0x30c) =
               ((unsigned int)0x020297b8) & *(uint *)(*(int *)(iVar6 + 0x58) + 0x30c);
        }
        else {
          func_0x020855a0(*(undefined4 *)(iVar6 + 0x58));
        }
      }
      iVar4 = 0;
      do {
        if (piVar7[iVar4 * 4 + 0x17] != 0) {
          func_02040f28((*(unsigned int *)0x020297bc));
          piVar7[iVar4 * 4 + 0x17] = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *(undefined1 *)(piVar9 + 9) = 0;
      sVar8 = 0;
      if ((*(short *)((int)piVar9 + 0x26) != 0) && ((short)piVar9[10] != 0)) {
        sVar8 = (short)piVar9[0xb];
        func_0x0209cfb0(*(undefined4 *)(iVar6 + 0x30),*(short *)((int)piVar9 + 0x26),
                        (short)piVar9[10],*(undefined2 *)((int)piVar9 + 0x2a),sVar8);
        *(undefined2 *)(piVar9 + 0xb) = 0;
        uVar1 = (undefined2)piVar9[0xb];
        *(undefined2 *)((int)piVar9 + 0x2a) = uVar1;
        *(undefined2 *)(piVar9 + 10) = uVar1;
        *(undefined2 *)((int)piVar9 + 0x26) = uVar1;
      }
      iVar4 = *(int *)(iVar6 + 0x30);
      if (*(short *)((int)piVar9 + 0x32) == 0) {
        if ((*(uint *)(iVar4 + 0x14) & 0x2000) != 0) {
          *(uint *)(iVar4 + 0x14) = ((unsigned int)0x020297c0) & *(uint *)(iVar4 + 0x14);
        }
      }
      else {
        func_0x0209cee8(iVar4,(int)*(short *)((int)piVar9 + 0x32));
        *(undefined2 *)((int)piVar9 + 0x32) = 0;
      }
      if ((short)piVar9[0xd] != 0) {
        *(short *)(*(int *)(iVar6 + 0x30) + 0xe6) = (short)piVar9[0xd];
        *(undefined2 *)(piVar9 + 0xd) = 0;
      }
      if (*(short *)((int)piVar9 + 0x2e) != 0) {
        if ((short)piVar9[0xc] != 0) {
          *(short *)(*(int *)(iVar6 + 0x38) + 0x1b8) = (short)piVar9[0xc];
        }
        *(undefined4 *)(*(int *)(iVar6 + 0x38) + 0x2c) = 0;
        if (*(int *)(iVar6 + 0x54) == 0) {
          *(uint *)(*(int *)(iVar6 + 0x30) + 0x14) =
               *(uint *)(*(int *)(iVar6 + 0x30) + 0x14) & 0xffffff7f;
        }
        *(uint *)(*(int *)(iVar6 + 0x30) + 0x14) =
             *(uint *)(*(int *)(iVar6 + 0x30) + 0x14) | 0x100000;
        func_0x0209d1e4(*(undefined4 *)(iVar6 + 0x30),*(undefined2 *)((int)piVar9 + 0x2e));
        iVar4 = *(int *)(*(int *)(iVar6 + 0x30) + 0xa4) +
                (*(ushort *)(*(int *)(iVar6 + 0x30) + 0xfe) - 1) * 0x34;
        *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 1;
        *(undefined2 *)(piVar9 + 0xc) = 0;
        *(short *)((int)piVar9 + 0x2e) = (short)piVar9[0xc];
        if (sVar8 != 0) {
          *(uint *)(*(int *)(iVar6 + 0x30) + 0x14) =
               *(uint *)(*(int *)(iVar6 + 0x30) + 0x14) | 0x200000;
        }
      }
      func_0x020a0db4(iVar6 + 0x88,0x10);
      if (((piVar9[0x2f] & 0x20U) != 0) && ((piVar9[0x2f] & 0x80U) == 0)) {
        func_0x020ae848(*(undefined4 *)(iVar6 + 0x44),1);
        piVar9[0x2f] = piVar9[0x2f] & 0xffffffdf;
      }
      iVar4 = *(int *)(iVar6 + 0x60);
      if ((*(uint *)(iVar4 + 0x214) & 0x800) != 0) {
        func_0x020e21b4(iVar4,*(undefined2 *)(iVar4 + 0x254),0);
      }
      uVar3 = ((unsigned int)0x02029918);
      piVar9[0x2f] = piVar9[0x2f] & ((unsigned int)0x02029918);
      if ((piVar9[0x2f] & 0x200U) != 0) {
        piVar9[0x2f] = (int)uVar3 >> 3 & piVar9[0x2f];
        func_0x020db7ac(*(undefined4 *)(iVar6 + 100));
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x8000000;
      }
      if ((piVar9[0x2f] & 0x400U) != 0) {
        piVar9[0x2f] = ((unsigned int)0x0202991c) & piVar9[0x2f];
        func_0x020db7ac(*(undefined4 *)(iVar6 + 100));
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x20000000;
      }
      func_020471a4(param_1,2,0);
      iVar4 = -1;
    }
    break;
  default:
    break;
  }
  func_02046868(param_1,iVar4);
  return 1;
}
