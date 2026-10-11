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

extern int func_02009b68();
extern int func_0200c580();
extern int func_0200c8e0();
extern int func_0200d32c();
extern int func_0200dbc4();
extern int func_02015c38();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 func_0200d734(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  undefined1 auStack_104 [8];
  undefined4 local_fc;
  ushort local_e0;
  uint local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  undefined1 auStack_bc [4];
  uint local_b8;
  uint local_b0;
  int iStack_ac;
  undefined1 auStack_a8 [128];
  undefined4 uStack_28;

  uVar3 = *(undefined4 *)(param_1 + 8);
  uStack_28 = param_4;
  func_0200c8e0(auStack_104);
  local_fc = uVar3;
  if ((*(uint *)(param_1 + 0xc) & 0x20) == 0) {
    uVar9 = 0;
    uVar7 = *(uint *)(param_1 + 0x20);
    uVar11 = 0;
    uVar8 = 0x10000;
    do {
      func_0200d32c(auStack_104,uVar9);
      local_d4 = auStack_bc;
      if (uVar9 == 0) {
        uVar11 = local_d8;
      }
      local_d0 = 1;
      iVar4 = func_0200dbc4(auStack_104,3,1);
      while (iVar4 == 0) {
        uVar1 = local_b0;
        if (local_b0 == 0) {
          uVar1 = local_b8;
        }
        if (local_b0 == 0 && uVar1 == uVar7) {
          uVar8 = (uint)local_e0;
          break;
        }
        iVar4 = func_0200dbc4(auStack_104,3,1);
      }
    } while ((uVar8 == 0x10000) && (uVar9 = uVar9 + 1, uVar9 < uVar11));
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 0x24);
    uVar7 = 0x10000;
  }
  if (uVar8 == 0x10000) {
    *(undefined2 *)(param_1 + 0x38) = 0;
    return 0xb;
  }
  func_0200c580(uVar3);
  iVar4 = func_02015c38();
  iVar4 = iVar4 + 2;
  func_0200d32c(auStack_104,uVar8);
  if (uVar7 != 0x10000) {
    iVar4 = iVar4 + iStack_ac;
  }
  sVar10 = (short)iVar4;
  uVar11 = uVar8;
  while (uVar11 != 0) {
    func_0200d32c(auStack_104,local_d8);
    local_d4 = auStack_bc;
    local_d0 = 1;
    iVar5 = func_0200dbc4(auStack_104,3,1);
    while (iVar5 == 0) {
      if ((local_b0 != 0) && ((local_b8 & 0xffff) == uVar11)) {
        iVar4 = iVar4 + iStack_ac + 1;
        break;
      }
      iVar5 = func_0200dbc4(auStack_104,3,1);
    }
    sVar10 = (short)iVar4;
    uVar11 = (uint)local_e0;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  *(short *)(param_1 + 0x38) = sVar10 + 1;
  *(short *)(param_1 + 0x3a) = (short)uVar8;
  if ((iVar4 != 0) &&
     (uVar11 = (uint)*(ushort *)(param_1 + 0x38), uVar11 <= *(uint *)(param_1 + 0x34))) {
    uVar3 = func_0200c580(uVar3);
    iVar5 = func_02015c38();
    func_02009b68(uVar3,iVar4,iVar5);
    func_02009b68(((unsigned int)0x0200daac),iVar4 + iVar5,2);
    func_0200d32c(auStack_104,uVar8);
    if (uVar7 == 0x10000) {
      *(undefined1 *)(iVar4 + uVar11 + -1) = 0;
      iVar5 = -1;
    }
    else {
      local_d4 = auStack_bc;
      local_d0 = 0;
      iVar5 = func_0200dbc4(auStack_104,3,1);
      while (iVar5 == 0) {
        uVar9 = local_b0;
        if (local_b0 == 0) {
          uVar9 = local_b8;
        }
        if (local_b0 == 0 && uVar9 == uVar7) break;
        iVar5 = func_0200dbc4(auStack_104,3,1);
      }
      iVar5 = iStack_ac + 1;
      func_02009b68(auStack_a8,(iVar4 + uVar11) - iVar5,iVar5);
      iVar5 = -iVar5;
    }
    iVar5 = uVar11 + iVar5;
    if (uVar8 != 0) {
      do {
        func_0200d32c(auStack_104,local_d8);
        local_d0 = 0;
        *(undefined1 *)(iVar4 + iVar5 + -1) = 0x2f;
        iVar5 = iVar5 + -1;
        local_d4 = auStack_bc;
        iVar6 = func_0200dbc4(auStack_104,3,1);
        while (iVar2 = iStack_ac, iVar6 == 0) {
          if ((local_b0 != 0) && ((local_b8 & 0xffff) == uVar8)) {
            func_02009b68(auStack_a8,(iVar4 + iVar5) - iStack_ac,iStack_ac);
            iVar5 = iVar5 - iVar2;
            break;
          }
          iVar6 = func_0200dbc4(auStack_104,3,1);
        }
        uVar8 = (uint)local_e0;
      } while (uVar8 != 0);
    }
  }
  return 0;
}
