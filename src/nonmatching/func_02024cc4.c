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

extern int func_020465d8();
extern int func_02046654();
extern int func_02046868();
extern int func_0x020c065c();
extern int func_0x020c27fc();
extern int func_0x020c2bcc();
extern int func_0x020c2c88();
extern int func_0x020c2cdc();
extern int func_0x020c2d38();
extern int func_0x020c2df8();
extern int func_0x020c3158();
extern int func_0x020dc488();
extern int func_0x020dca48();
extern int func_0x020dfdfc();
extern int func_0x020e15ec();

undefined4 func_02024cc4(undefined4 param_1)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  iVar7 = (*(unsigned int *)0x02024f8c);
  iVar8 = *(int *)(iVar7 + 0xa4);
  iVar4 = func_020465d8(param_1,2);
  bVar1 = true;
  uVar5 = func_020465d8(param_1,1);
  switch(uVar5) {
  case 0x101:
    if (iVar4 == 0) {
      if ((*(uint *)(iVar7 + 0xbc) & 0x800) == 0) {
        if ((*(int *)(iVar8 + 0x218) != 3) && (*(int *)(iVar8 + 0x218) != 1)) {
          bVar1 = false;
        }
        if (bVar1) {
          uVar2 = func_020465d8(param_1,3);
          func_0x020e15ec(iVar8,uVar2);
          uVar5 = func_02046654(param_1,4,0);
          func_0x020dfdfc(iVar8,uVar5,0);
          iVar4 = 1;
        }
      }
      else {
        uVar2 = func_020465d8(param_1,3);
        func_0x020e15ec(iVar8,uVar2);
        uVar5 = func_02046654(param_1,4,0);
        func_0x020dfdfc(iVar8,uVar5,1);
        *(undefined1 *)(iVar8 + 0x288) = 1;
        *(undefined1 *)(iVar8 + 0x289) = 0;
        iVar4 = -1;
      }
    }
    else if (iVar4 != 1) goto switchD_02024d02_default;
    bVar1 = true;
    if ((*(int *)(iVar8 + 0x218) != 3) && (*(int *)(iVar8 + 0x218) != 1)) {
      bVar1 = false;
    }
    goto joined_r0x020250ae;
  case 0x102:
    if ((iVar4 == 0) || (iVar4 != 5)) {
LAB_02024ddc:
      iVar4 = iVar4 + 1;
      goto switchD_02024d02_default;
    }
    if ((*(int *)(iVar8 + 0x218) != 3) && (*(int *)(iVar8 + 0x218) != 1)) {
      bVar1 = false;
    }
    goto joined_r0x020250ae;
  case 0x103:
    iVar8 = *(int *)(*(int *)(*(unsigned int *)0x02024f8c) + 0x5c);
    iVar7 = *(int *)(*(int *)(iVar8 + 0x60) + 0x218);
    if ((iVar7 != 3) && (iVar7 != 1)) {
      bVar1 = false;
    }
    if (bVar1) {
      sVar3 = func_020465d8(param_1,3);
      iVar7 = *(int *)(iVar8 + 0x48);
      if (iVar4 == 0) {
        if ((*(uint *)(iVar7 + 0x14) & 0x8000) == 0) {
          func_0x020c2bcc(iVar7,(int)sVar3);
          uVar6 = *(uint *)(iVar7 + 0x14) | 0x8000;
        }
        else {
          iVar8 = func_0x020c2c88(iVar7,(int)sVar3);
          if (iVar8 == 0) {
            func_0x020c065c(sVar3,0);
            iVar4 = -1;
            goto switchD_02024d02_default;
          }
          iVar8 = func_0x020c2cdc(iVar7,(int)sVar3);
          if (iVar8 == 0) goto switchD_02024d02_default;
          iVar4 = func_0x020c27fc(iVar7,sVar3,0);
          uVar6 = ((unsigned int)0x02024f90) & *(uint *)(iVar7 + 0x14);
        }
        *(uint *)(iVar7 + 0x14) = uVar6;
      }
      else if (iVar4 == 1) {
        iVar4 = func_0x020c27fc(iVar7,sVar3,1);
      }
      else if (iVar4 == 4) {
        func_0x020c2d38(iVar7,(int)sVar3);
        iVar4 = -1;
      }
    }
    goto switchD_02024d02_default;
  case 0x104:
    if (iVar4 != 0) goto switchD_02024d02_default;
    iVar8 = *(int *)(iVar7 + 0xac);
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x02024f8c) + 0x5c) + 0x48);
    sVar3 = func_020465d8(param_1,3);
    uVar6 = func_020465d8(param_1,4);
    uVar6 = uVar6 & 0xffff;
    if (sVar3 == 5) {
      if (uVar6 != 0) {
        func_0x020c3158(uVar5,uVar6);
      }
      if ((*(char *)(((unsigned int)0x02024f94) + uVar6 * 0x18 + 6) == '\x01') &&
         (iVar4 = func_0x020c2df8(uVar5,uVar6,0), iVar4 != 0)) goto LAB_02024fa6;
    }
    else if (sVar3 == 3) {
      iVar4 = *(int *)(*(int *)(iVar7 + 0xa4) + 0x218);
      if ((iVar4 != 3) && (iVar4 != 1)) {
        bVar1 = false;
      }
      if (bVar1) {
LAB_02024fa6:
        func_0x020dca48(iVar8,sVar3,uVar6);
      }
    }
    else if (sVar3 != 1) {
      if (sVar3 == 0) {
        iVar7 = func_0x020dc488(iVar8,*(undefined2 *)(iVar8 + 0x3a),4);
        if (iVar7 == 0) {
          iVar7 = func_0x020dc488(iVar8,*(undefined2 *)(iVar8 + 0x3c),4);
          if (iVar7 == 0) {
            func_0x020dca48(iVar8,0,uVar6);
          }
        }
        else {
          iVar7 = func_0x020dc488(iVar8,*(undefined2 *)(iVar8 + 0x3c),0);
          if (iVar7 == 0) {
            iVar4 = -1;
          }
        }
        goto switchD_02024d02_default;
      }
      if (sVar3 == 7) {
        iVar4 = *(int *)(*(int *)(iVar7 + 0xa4) + 0x218);
        if ((iVar4 != 3) && (iVar4 != 1)) {
          bVar1 = false;
        }
        if (!bVar1) break;
      }
      else if (uVar6 != 0) {
        func_0x020c3158(uVar5,uVar6);
      }
      goto LAB_02024fa6;
    }
    break;
  case 0x105:
    iVar7 = *(int *)(iVar7 + 0xac);
    iVar4 = func_0x020dc488(iVar7,*(undefined2 *)(iVar7 + 0x3c),4);
    if ((iVar4 == 0) && (iVar4 = func_0x020dc488(iVar7,*(undefined2 *)(iVar7 + 0x3a),4), iVar4 == 0)
       ) {
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
    }
    goto switchD_02024d02_default;
  case 0x106:
    iVar4 = func_020465d8(param_1,3);
    iVar7 = *(int *)(iVar7 + 0xa4);
    if (iVar4 == 1) {
      *(uint *)(iVar7 + 0x214) = *(uint *)(iVar7 + 0x214) & 0xffffffef;
    }
    else {
      *(uint *)(iVar7 + 0x214) = *(uint *)(iVar7 + 0x214) | 0x10;
    }
    break;
  case 0x107:
    iVar4 = func_020465d8(param_1,3);
    if (iVar4 < 1) {
      *(uint *)(iVar7 + 0xbc) = *(uint *)(iVar7 + 0xbc) | 0x10;
    }
    else {
      *(uint *)(iVar7 + 0xbc) = *(uint *)(iVar7 + 0xbc) & 0xffffffef;
    }
    break;
  case 0x108:
    iVar4 = func_020465d8(param_1,3);
    if (iVar4 < 1) {
      uVar6 = ((unsigned int)0x02025108) & *(uint *)(iVar8 + 0x214);
    }
    else {
      uVar6 = *(uint *)(iVar8 + 0x214) | 0x20000;
    }
    *(uint *)(iVar8 + 0x214) = uVar6;
    break;
  case 0x109:
    *(uint *)(iVar8 + 0x214) = *(uint *)(iVar8 + 0x214) | 0x40000;
    goto LAB_02025074;
  case 0x10a:
    sVar3 = func_020465d8(param_1,3);
    if ((*(int *)(*(int *)(*(unsigned int *)0x02025110) + 0x5c) != 0) &&
       (iVar4 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x02025110) + 0x5c) + 100), iVar4 != 0)) {
      if (sVar3 == 0) {
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffb;
      }
      else {
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 4;
      }
    }
    break;
  case 0x10b:
    if (iVar4 == 0) {
      *(uint *)(iVar7 + 0xbc) = ((unsigned int)0x0202510c) & *(uint *)(iVar7 + 0xbc);
      *(undefined1 *)(iVar8 + 0x288) = 1;
      *(undefined1 *)(iVar8 + 0x289) = 1;
      goto LAB_02024ddc;
    }
    if (iVar4 != 1) goto switchD_02024d02_default;
    if ((*(int *)(iVar8 + 0x218) != 3) && (*(int *)(iVar8 + 0x218) != 1)) {
      bVar1 = false;
    }
joined_r0x020250ae:
    if (!bVar1) goto switchD_02024d02_default;
    break;
  case 0x10c:
    *(uint *)(iVar7 + 0xbc) = *(uint *)(iVar7 + 0xbc) | 0x800;
LAB_02025074:
    iVar4 = -1;
  default:
    goto switchD_02024d02_default;
  }
  iVar4 = -1;
switchD_02024d02_default:
  func_02046868(param_1,iVar4);
  return 1;
}
