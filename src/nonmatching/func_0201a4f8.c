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

extern int func_0201ebe0();

/* WARNING: Removing unreachable block (ram,0x0201a5cc) */

uint func_0201a4f8(int param_1,int param_2,code *param_3,undefined4 param_4,int *param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r6;
  uint uVar4;
  uint uVar5;
  uint local_2c;
  int local_28;

  *param_7 = 0;
  local_2c = 0;
  *param_6 = 0;
  local_28 = 0;
  iVar3 = 0;
  uVar5 = 0;
  uVar2 = 1;
  if ((((param_1 < 0) || (param_1 == 1)) || (0x24 < param_1)) || (param_2 < 1)) {
    uVar2 = 0x40;
  }
  else {
    iVar3 = 1;
    unaff_r6 = (*param_3)(param_4,0,0);
  }
  if (param_1 != 0) {
    local_2c = func_0201ebe0(0xffffffff,param_1);
  }
LAB_0201a804:
  if (((param_2 < iVar3) || (unaff_r6 == 0xffffffff)) || ((uVar2 & 0x60) != 0)) {
    if ((uVar2 & 0x34) == 0) {
      uVar5 = 0;
      *param_5 = 0;
    }
    else {
      *param_5 = iVar3 + -1 + local_28;
    }
    (*param_3)(param_4,unaff_r6,1);
    return uVar5;
  }
  switch(uVar2) {
  case 0:
    goto LAB_0201a804;
  case 1:
    if (unaff_r6 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x0201a860) + unaff_r6 * 2) & 0x100;
    }
    else {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      if (unaff_r6 == 0x2b) {
        iVar3 = iVar3 + 1;
        unaff_r6 = (*param_3)(param_4,0,0);
      }
      else if (unaff_r6 == 0x2d) {
        iVar3 = iVar3 + 1;
        unaff_r6 = (*param_3)(param_4,0,0);
        *param_6 = 1;
      }
      uVar2 = 2;
    }
    else {
      unaff_r6 = (*param_3)(param_4,0,0);
      local_28 = local_28 + 1;
    }
    goto LAB_0201a804;
  case 2:
    if (((param_1 == 0) || (param_1 == 0x10)) && (unaff_r6 == 0x30)) {
      uVar2 = 4;
      break;
    }
    uVar2 = 8;
    goto LAB_0201a804;
  case 3:
    goto LAB_0201a804;
  case 4:
    if (unaff_r6 != 0x58 && unaff_r6 != 0x78) {
      if (param_1 == 0) {
        param_1 = 8;
      }
      uVar2 = 0x10;
      goto LAB_0201a804;
    }
    param_1 = 0x10;
    uVar2 = 8;
    break;
  case 5:
    goto LAB_0201a804;
  case 6:
    goto LAB_0201a804;
  case 7:
    goto LAB_0201a804;
  case 8:
    goto LAB_0201a6ec;
  default:
    goto LAB_0201a5f4;
  }
  goto LAB_0201a7ec;
LAB_0201a5f4:
  if (uVar2 != 0x10) goto LAB_0201a804;
LAB_0201a6ec:
  if (param_1 == 0) {
    param_1 = 10;
  }
  if (local_2c == 0) {
    local_2c = func_0201ebe0(0xffffffff,param_1);
  }
  if (unaff_r6 < 0x80) {
    uVar1 = *(ushort *)(((unsigned int)0x0201a860) + unaff_r6 * 2) & 8;
  }
  else {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    if (unaff_r6 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x0201a860) + unaff_r6 * 2) & 1;
    }
    else {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
LAB_0201a78c:
      if (uVar2 == 0x10) {
        uVar2 = 0x20;
      }
      else {
        uVar2 = 0x40;
      }
      goto LAB_0201a804;
    }
    uVar4 = unaff_r6;
    if (unaff_r6 < 0x80) {
      uVar4 = (uint)*(byte *)(((unsigned int)0x0201a864) + unaff_r6);
    }
    if (param_1 <= (int)(uVar4 - 0x37)) goto LAB_0201a78c;
    if ((-1 < (int)unaff_r6) && ((int)unaff_r6 < 0x80)) {
      unaff_r6 = (uint)*(byte *)(((unsigned int)0x0201a864) + unaff_r6);
    }
    uVar4 = unaff_r6 - 0x37;
  }
  else {
    uVar4 = unaff_r6 - 0x30;
    if (param_1 <= (int)uVar4) {
      if (uVar2 == 0x10) {
        uVar2 = 0x20;
      }
      else {
        uVar2 = 0x40;
      }
      goto LAB_0201a804;
    }
  }
  uVar2 = 0x10;
  if (local_2c < uVar5) {
    *param_7 = 1;
  }
  if (-(uVar5 * param_1) - 1 < uVar4) {
    *param_7 = 1;
  }
  uVar5 = uVar5 * param_1 + uVar4;
LAB_0201a7ec:
  iVar3 = iVar3 + 1;
  unaff_r6 = (*param_3)(param_4,0,0);
  goto LAB_0201a804;
}
