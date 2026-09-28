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

extern int func_0200c814();
extern int func_0200d32c();
extern int func_0200dbc4();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 func_0200d520(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  char acStack_a8 [128];
  undefined4 uStack_28;

  iVar10 = *(int *)(param_1 + 0x40);
  pcVar12 = *(char **)(param_1 + 0x3c);
  uStack_28 = param_4;
  func_0200dbc4(param_1,2);
  cVar1 = *pcVar12;
  while (cVar1 != '\0') {
    uVar2 = func_0200c814(pcVar12,0);
    iVar3 = (int)pcVar12[uVar2];
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = iVar10;
    }
    uVar13 = (uint)(iVar3 != 0 || iVar4 != 0);
    if (uVar2 == 0) {
      return 6;
    }
    if (*pcVar12 == '.') {
      if (uVar2 == 1) {
        pcVar12 = pcVar12 + 1;
      }
      else {
        cVar1 = '.';
        if (uVar2 == 2) {
          cVar1 = pcVar12[1];
        }
        if (uVar2 != 2 || cVar1 != '.') goto LAB_0200d5e0;
        if (*(short *)(param_1 + 0x24) != 0) {
          func_0200d32c(param_1,*(undefined4 *)(param_1 + 0x2c));
        }
        pcVar12 = pcVar12 + 2;
      }
    }
    else {
      if (*pcVar12 == '*') break;
LAB_0200d5e0:
      if (0x7f < (int)uVar2) {
        return 0xb;
      }
      *(undefined4 **)(param_1 + 0x30) = &uStack_bc;
      *(undefined4 *)(param_1 + 0x34) = 0;
      do {
        do {
          iVar4 = func_0200dbc4(param_1,3,1);
          if (iVar4 != 0) {
            return 0xb;
          }
          uVar5 = uStack_b0;
          if (uVar13 == uStack_b0) {
            uVar5 = uStack_ac;
          }
        } while (uVar13 != uStack_b0 || uVar2 != uVar5);
        iVar4 = 0;
        uVar5 = 0;
        if (uVar2 != 0) {
          do {
            uVar8 = (int)pcVar12[uVar5] - 0x41U & 0xff;
            uVar7 = (int)acStack_a8[uVar5] - 0x41U & 0xff;
            if (uVar8 < 0x1a) {
              uVar8 = uVar8 + 0x20;
            }
            if (uVar7 < 0x1a) {
              uVar7 = uVar7 + 0x20;
            }
            iVar4 = uVar8 - uVar7;
          } while ((iVar4 == 0) && (uVar5 = uVar5 + 1, uVar5 < uVar2));
        }
      } while (iVar4 != 0);
      if (uVar13 == 0) {
        if (iVar10 != 0) {
          return 0xb;
        }
        puVar11 = *(undefined4 **)(param_1 + 0x44);
        *puVar11 = uStack_bc;
        puVar11[1] = uStack_b8;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = uStack_bc;
      *(undefined4 *)(param_1 + 0x34) = uStack_b8;
      *(undefined4 *)(param_1 + 0x38) = uStack_b4;
      pcVar12 = pcVar12 + uVar2;
      func_0200dbc4(param_1,2);
    }
    pcVar12 = pcVar12 + (*pcVar12 != '\0');
    cVar1 = *pcVar12;
  }
  if (iVar10 == 0) {
    uVar6 = 0xb;
  }
  else {
    puVar11 = *(undefined4 **)(param_1 + 0x44);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x28);
    *puVar11 = *(undefined4 *)(param_1 + 0x20);
    puVar11[1] = uVar6;
    puVar11[2] = uVar9;
    uVar6 = 0;
  }
  return uVar6;
}
