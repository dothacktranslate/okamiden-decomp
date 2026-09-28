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

extern int func_0204ad20();
extern int func_0204adbc();
extern int func_0204ae0c();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 func_0204ae84(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int local_28;

  local_28 = *(int *)(param_1 + 0x2c) + -1;
  iVar3 = func_0204ad20();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      uVar11 = 0;
      uVar5 = *(uint *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      uVar9 = 0;
      uVar4 = uVar5 & 0x3f;
      uVar10 = 0;
      uVar8 = uVar5 >> 6 & 0xff;
      if (0x25 < uVar4) {
        return 0;
      }
      if (*(byte *)(param_1 + 0x4b) <= uVar8) {
        return 0;
      }
      bVar2 = *(byte *)(((unsigned int)0x0204b484) + uVar4);
      uVar12 = (uint)bVar2;
      uVar1 = (int)uVar12 >> 4;
      if ((bVar2 & 3) == 0) {
        uVar9 = ((unsigned int)0x0204b488) & uVar5 >> 0x17;
        uVar10 = ((unsigned int)0x0204b488) & uVar5 >> 0xe;
        iVar7 = func_0204ae0c(param_1,uVar9,uVar1 & 3);
        if (iVar7 == 0) {
          return 0;
        }
        iVar7 = func_0204ae0c(param_1,uVar10,(int)uVar12 >> 2 & 3);
        if (iVar7 == 0) {
          return 0;
        }
      }
      else if ((uVar12 & 3) == 1) {
        uVar9 = ((unsigned int)0x0204b48c) & uVar5 >> 0xe;
        if (((uVar1 & 3) == 3) && (*(int *)(param_1 + 0x28) <= (int)uVar9)) {
          return 0;
        }
      }
      else if (((uVar12 & 3) == 2) &&
              (uVar9 = (((unsigned int)0x0204b48c) & uVar5 >> 0xe) + (0x20000 - ((unsigned int)0x0204b48c)), (uVar1 & 3) == 2))
      {
        iVar7 = iVar3 + 1 + uVar9;
        if ((iVar7 < 0) || (*(int *)(param_1 + 0x2c) <= iVar7)) {
          return 0;
        }
        if (0 < iVar7) {
          if (0 < iVar7) {
            do {
              uVar5 = *(uint *)(*(int *)(param_1 + 0xc) + ((iVar7 + -1) - uVar11) * 4);
              if (((uVar5 & 0x3f) != 0x22) || ((uVar5 >> 0xe & ((unsigned int)0x0204b48c) >> 9) != 0)) break;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < iVar7);
          }
          if ((uVar11 & 1) != 0) {
            return 0;
          }
        }
      }
      if (((bVar2 & 0x40) != 0) && (uVar8 == param_3)) {
        local_28 = iVar3;
      }
      if ((bVar2 & 0x80) != 0) {
        if (*(int *)(param_1 + 0x2c) <= iVar3 + 2) {
          return 0;
        }
        if ((*(uint *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + 4) & 0x3f) != 0x16) {
          return 0;
        }
      }
      switch(uVar4) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        if (uVar10 == 1) {
          if (*(int *)(param_1 + 0x2c) <= iVar3 + 2) {
            return 0;
          }
          uVar8 = *(uint *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + 4);
          if (((uVar8 & 0x3f) == 0x22) && ((((unsigned int)0x0204b488) & uVar8 >> 0xe) == 0)) {
            return 0;
          }
        }
        break;
      case 3:
        bVar13 = SBORROW4(uVar8,param_3);
        iVar7 = uVar8 - param_3;
        if ((int)uVar8 <= (int)param_3) {
          bVar13 = SBORROW4(param_3,uVar9);
          iVar7 = param_3 - uVar9;
          uVar8 = uVar9;
        }
        if (uVar8 == param_3 || iVar7 < 0 != bVar13) {
          local_28 = iVar3;
        }
        break;
      case 4:
        goto LAB_0204b1a8;
      case 5:
        goto LAB_0204b1c0;
      case 6:
        break;
      case 7:
LAB_0204b1c0:
        if (*(int *)(*(int *)(param_1 + 8) + uVar9 * 8 + 4) != 4) {
          return 0;
        }
        break;
      case 8:
LAB_0204b1a8:
        if ((int)(uint)*(byte *)(param_1 + 0x48) <= (int)uVar9) {
          return 0;
        }
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        if ((uint)*(byte *)(param_1 + 0x4b) <= uVar8 + 1) {
          return 0;
        }
        if (param_3 == uVar8 + 1) {
          local_28 = iVar3;
        }
        break;
      case 0xc:
        break;
      case 0xd:
        break;
      case 0xe:
        break;
      case 0xf:
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
        if ((int)uVar10 <= (int)uVar9) {
          return 0;
        }
        break;
      case 0x16:
        goto LAB_0204b264;
      case 0x17:
        break;
      case 0x18:
        break;
      case 0x19:
        break;
      case 0x1a:
        break;
      case 0x1b:
        break;
      case 0x1c:
        goto LAB_0204b288;
      case 0x1d:
LAB_0204b288:
        if ((uVar9 != 0) && ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)(uVar8 + uVar9 + -1))) {
          return 0;
        }
        if (uVar10 == 0) {
          iVar7 = func_0204adbc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + 4));
          if (iVar7 == 0) {
            return 0;
          }
        }
        else if ((uVar10 != 1) &&
                ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)((uVar10 - 2) + uVar8))) {
          return 0;
        }
LAB_0204b300:
        if ((int)uVar8 <= (int)param_3) {
          local_28 = iVar3;
        }
        break;
      case 0x1e:
        if ((0 < (int)(uVar9 - 1)) &&
           ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)((uVar9 - 2) + uVar8))) {
          return 0;
        }
        break;
      case 0x1f:
        goto LAB_0204b24c;
      case 0x20:
LAB_0204b24c:
        if ((uint)*(byte *)(param_1 + 0x4b) <= uVar8 + 3) {
          return 0;
        }
LAB_0204b264:
        iVar6 = iVar3 + 1 + uVar9;
        bVar13 = SBORROW4(param_3,0xff);
        iVar7 = param_3 - 0xff;
        if (param_3 != 0xff) {
          bVar13 = SBORROW4(iVar3,iVar6);
          iVar7 = iVar3 - iVar6;
        }
        if ((iVar7 < 0 != bVar13) && (iVar6 <= param_2)) {
          iVar3 = iVar3 + uVar9;
        }
        break;
      case 0x21:
        if (uVar10 == 0) {
          return 0;
        }
        uVar8 = uVar8 + 2;
        if ((uint)*(byte *)(param_1 + 0x4b) <= uVar8 + uVar10) {
          return 0;
        }
        goto LAB_0204b300;
      case 0x22:
        if ((0 < (int)uVar9) && ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)(uVar8 + uVar9))) {
          return 0;
        }
        if ((uVar10 == 0) && (iVar3 = iVar3 + 1, *(int *)(param_1 + 0x2c) + -1 <= iVar3)) {
          return 0;
        }
        break;
      case 0x23:
        break;
      case 0x24:
        if (*(int *)(param_1 + 0x34) <= (int)uVar9) {
          return 0;
        }
        uVar8 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + uVar9 * 4) + 0x48);
        if (*(int *)(param_1 + 0x2c) <= (int)(iVar3 + uVar8)) {
          return 0;
        }
        iVar7 = 1;
        if (uVar8 != 0) {
          do {
            uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + iVar7 * 4) & 0x3f;
            if (uVar4 != 4 && uVar4 != 0) {
              return 0;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 <= (int)uVar8);
        }
        if (param_3 != 0xff) {
          iVar3 = iVar3 + uVar8;
        }
        break;
      case 0x25:
        if (((*(byte *)(param_1 + 0x4a) & 2) == 0) || ((*(byte *)(param_1 + 0x4a) & 4) != 0)) {
          return 0;
        }
        if ((uVar9 == 0) &&
           (iVar7 = func_0204adbc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + 4)),
           iVar7 == 0)) {
          return 0;
        }
        if ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)((uVar9 - 2) + uVar8)) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + local_28 * 4);
}
