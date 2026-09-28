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

extern int func_0202cad8();
extern int func_0202d288();
extern int func_02032c20();
extern int func_020376dc();
extern int func_02037800();
extern int func_02037b8c();
extern int func_02037d90();
extern int func_0203af30();
extern int func_0203c264();
extern int func_02068b50();
extern int func_0x020952ac();
extern int func_0x0209d520();
extern int func_0x020ae848();
extern int func_0x020e1510();

undefined4 func_0202c7a8(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;

  if (*(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202ca24) + 0x5c) + 0x54) != 0) {
    func_0x020952ac(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202ca24) + 0x5c) + 0x50),param_1 + 0xb40,0
                   );
  }
  iVar10 = *(ushort *)(param_1 + ((unsigned int)0x0202ca28)) - 1;
  if (-1 < iVar10) {
    iVar3 = ((unsigned int)0x0202ca28) + 2;
    iVar4 = ((unsigned int)0x0202ca28) + 0x42;
    iVar5 = ((unsigned int)0x0202ca28) + 2;
    iVar12 = ((unsigned int)0x0202ca28) + 0x42;
    do {
      iVar8 = param_1 + iVar10 * 2;
      func_0202cad8(param_1,*(undefined2 *)(iVar8 + iVar3),*(undefined2 *)(iVar8 + iVar4));
      func_0202d288(param_1,*(undefined2 *)(iVar8 + iVar5),*(undefined2 *)(iVar8 + iVar12));
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (*(int *)(param_1 + ((unsigned int)0x0202ca2c)) != 0) {
    uVar6 = *(uint *)(*(int *)(param_1 + ((unsigned int)0x0202ca2c)) + 0x14);
    uVar9 = 0;
    uVar11 = (*(unsigned int *)0x0202ca30);
    if (uVar6 != 0) {
      piVar7 = (int *)(param_1 + ((unsigned int)0x0202ca2c));
      do {
        if (*piVar7 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar7 + uVar9 * 0x18;
        }
        if (*(short *)(iVar10 + 6) == 7) {
          uVar13 = *(undefined4 *)(iVar10 + 0xc);
          iVar10 = func_02037d90(uVar11,uVar13);
          if (iVar10 != 0) {
            func_020376dc(uVar11,uVar13,0,0);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
    }
  }
  puVar2 = ((unsigned int)0x0202ca24);
  uVar11 = (*(unsigned int *)0x0202ca30);
  if ((*(uint *)(param_1 + ((unsigned int)0x0202ca34)) & 1) == 0) {
    if ((*(uint *)(param_1 + ((unsigned int)0x0202ca34)) & 4) == 0) {
      func_02037800(uVar11,1,0);
      iVar10 = *(int *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30);
      *(uint *)(iVar10 + 0x14) = ((unsigned int)0x0202ca38) & *(uint *)(iVar10 + 0x14);
      func_0x0209d520(*(undefined4 *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30));
    }
    else {
      sVar1 = *(short *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202ca24) + 0x5c) + 0x30) + 0x100);
      if ((sVar1 == 0xff) || (sVar1 == -1)) {
        func_02037b8c(uVar11,0);
        iVar10 = *(int *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30);
        *(uint *)(iVar10 + 0x14) = *(uint *)(iVar10 + 0x14) | 0x1000;
      }
      else {
        func_02037b8c(uVar11,1);
        iVar10 = *(int *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30);
        *(uint *)(iVar10 + 0x14) = *(uint *)(iVar10 + 0x14) | 0x800;
      }
    }
    if (*(short *)(*(int *)*puVar2 + 0x54) == 0) {
      func_02037800(uVar11,1,0);
      iVar10 = *(int *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30);
      *(uint *)(iVar10 + 0x14) = ((unsigned int)0x0202ca38) & *(uint *)(iVar10 + 0x14);
      func_0x0209d520(*(undefined4 *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30));
    }
  }
  else {
    func_0x0209d520();
    func_02037800(uVar11,1,0);
  }
  func_02068b50(*(int *)*puVar2 + 0x4c,0x7f);
  iVar10 = 1;
  uVar6 = *(uint *)(*(int *)(param_1 + ((unsigned int)0x0202ca2c)) + 0x14) & 0xffff;
  if (1 < uVar6) {
    piVar7 = (int *)(param_1 + ((unsigned int)0x0202ca2c));
    do {
      iVar3 = *piVar7;
      iVar4 = iVar3 + iVar10 * 0x18;
      sVar1 = *(short *)(iVar4 + 6);
      if ((((sVar1 == 8) || (sVar1 == 9)) || (sVar1 == 10)) || (sVar1 == 0x22)) {
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        func_0203af30(*(uint *)(iVar4 + 8) & 0xffff,1);
        iVar3 = *piVar7;
        iVar4 = iVar3 + iVar10 * 0x18;
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        func_0203c264((*(unsigned int *)0x0202ca3c),*(uint *)(iVar4 + 8) & 0xffff);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar6);
  }
  *(uint *)((*(unsigned int *)0x0202ca40) + 0x124) = *(uint *)((*(unsigned int *)0x0202ca40) + 0x124) | 0x80000000;
  if (*(int *)(param_1 + 0xdf0) != 0) {
    func_02032c20();
    *(undefined4 *)(param_1 + 0xdf0) = 0;
  }
  iVar10 = ((unsigned int)0x0202ca2c);
  if (*(int *)(param_1 + ((unsigned int)0x0202ca2c)) != 0) {
    func_02032c20();
    *(undefined4 *)(param_1 + iVar10) = 0;
  }
  iVar10 = 0x1f;
  do {
    iVar3 = param_1 + iVar10 * 4;
    if (*(int *)(iVar3 + 0xd30) != 0) {
      func_02032c20();
      *(undefined4 *)(iVar3 + 0xd30) = 0;
    }
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  (*(unsigned int *)0x0202ca44) = 0;
  func_0x020e1510(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202ca24) + 0x5c) + 0x60));
  iVar10 = (*(unsigned int *)0x0202ca48);
  *(undefined2 *)(iVar10 + 8) = 0xe;
  *(undefined2 *)(iVar10 + 10) = 2;
  func_0x020ae848(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202ca24) + 0x5c) + 0x44),1);
  return 1;
}
