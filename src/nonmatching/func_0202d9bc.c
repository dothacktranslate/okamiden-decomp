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

extern int func_0202c774();
extern int func_0202ca98();
extern int func_0202cd5c();
extern int func_0202db38();
extern int func_0203aed4();

void func_0202d9bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;

  uVar10 = 1;
  piVar12 = (int *)(param_1 + ((unsigned int)0x0202db28));
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  while( true ) {
    iVar2 = *piVar12;
    iVar11 = 0;
    if (iVar2 != 0) {
      iVar11 = iVar2;
    }
    if (*(uint *)(iVar11 + 0x14) <= uVar10) break;
    iVar11 = iVar2 + uVar10 * 0x18;
    sVar1 = *(short *)(iVar11 + 6);
    if ((((sVar1 == 8) || (sVar1 == 9)) || (sVar1 == 10)) || (sVar1 == 0x22)) {
      if (iVar2 == 0) {
        iVar11 = 0;
      }
      func_0203aed4((int)(((unsigned int)0x0202db2c) & *(uint *)(iVar11 + 8)) >> 0x10,1);
      iVar11 = *(int *)(param_1 + ((unsigned int)0x0202db28)) + uVar10 * 0x18;
      if (*(int *)(param_1 + ((unsigned int)0x0202db28)) == 0) {
        iVar11 = 0;
      }
      *(uint *)(iVar11 + 8) = *(uint *)(iVar11 + 8) & 0xffff;
    }
    uVar10 = uVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(param_1 + 0xdf0);
  iVar11 = 0;
  if (*(short *)(param_1 + ((unsigned int)0x0202db30)) != 0) {
    iVar2 = ((unsigned int)0x0202db30) + 2;
    iVar3 = ((unsigned int)0x0202db30) + 0x42;
    iVar4 = ((unsigned int)0x0202db30) + 0x82;
    puVar5 = (ushort *)(param_1 + ((unsigned int)0x0202db30));
    iVar6 = ((unsigned int)0x0202db30) + 2;
    iVar7 = ((unsigned int)0x0202db30) + 0x42;
    do {
      iVar13 = param_1 + iVar11 * 2;
      iVar8 = func_0202c774(param_1,(uint)*(ushort *)(iVar13 + iVar6) +
                                   (uint)*(ushort *)(iVar13 + iVar7) * 0x10000);
      if (iVar8 != 0) {
        func_0202ca98(param_1,iVar8);
        *(uint *)(iVar8 + 0x114) = *(uint *)(iVar8 + 0x114) ^ 1;
        func_0202ca98(param_1,iVar8);
        if (*(int *)(iVar8 + 0x114) != 0) {
          *(uint *)(iVar8 + 0x114) = *(uint *)(iVar8 + 0x114) ^ 1;
        }
      }
      iVar8 = param_1 + iVar11 * 2;
      *(undefined2 *)(iVar8 + 0xdb0) = 0;
      *(undefined2 *)(iVar8 + iVar4) = 0;
      puVar9 = *(undefined2 **)(param_1 + iVar11 * 4 + 0xd30);
      if (puVar9 != (undefined2 *)0x0) {
        func_0202cd5c(param_1,*(undefined2 *)(iVar13 + iVar2),*(undefined2 *)(iVar13 + iVar3),*puVar9
                    );
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)*puVar5);
  }
  iVar11 = ((unsigned int)0x0202db34);
  *(undefined4 *)(param_1 + ((unsigned int)0x0202db34)) = 0;
  func_0202db38(param_1,&uStack_c,1);
  *(int *)(param_1 + iVar11 + 0xc) = *(int *)(param_1 + iVar11 + 4) + 0x1000;
  return;
}
