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

extern int func_0202cd5c();
extern int func_0202d100();
extern int func_02035064();

undefined4 func_0202c488(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  uint local_48;
  undefined1 local_34 [32];

  iVar1 = func_02035064((*(unsigned int *)0x0202c588));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  local_48 = 0;
  do {
    local_34[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  iVar1 = *(int *)(param_1 + ((unsigned int)0x0202c58c));
  uVar2 = *(uint *)(iVar1 + 0x14);
  if (uVar2 != 0) {
    do {
      iVar10 = iVar1 + local_48 * 0x18;
      if (*(short *)(iVar10 + 6) == 0x1e) {
        uVar7 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202c590) + -2);
        iVar3 = 0;
        if (uVar7 != 0) {
          uVar11 = *(uint *)(iVar10 + 8);
          do {
            if ((uint)*(ushort *)(param_1 + iVar3 * 2 + ((unsigned int)0x0202c590)) == (uVar11 & 0xffff)) {
              local_34[iVar3] = 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)uVar7);
        }
      }
      local_48 = local_48 + 1;
    } while (local_48 < uVar2);
  }
  iVar1 = 0;
  if (*(short *)(param_1 + ((unsigned int)0x0202c594)) != 0) {
    iVar10 = ((unsigned int)0x0202c594) + 0x42;
    puVar4 = (ushort *)(param_1 + ((unsigned int)0x0202c594));
    iVar3 = ((unsigned int)0x0202c594) + 2;
    iVar5 = ((unsigned int)0x0202c594) + 0x42;
    iVar14 = ((unsigned int)0x0202c594) + 2;
    do {
      iVar13 = param_1 + iVar1 * 2;
      func_0202d100(param_1,*(undefined2 *)(iVar13 + iVar3),*(undefined2 *)(iVar13 + iVar5),
                   local_34[iVar1]);
      sVar6 = *(short *)(iVar13 + iVar14);
      if ((sVar6 == 0) && (*(char *)(param_1 + ((unsigned int)0x0202c598)) == '\0')) {
        sVar6 = 0;
        uVar8 = 0;
        uVar9 = 0;
LAB_0202c574:
        func_0202cd5c(param_1,sVar6,uVar8,uVar9);
      }
      else {
        puVar12 = *(undefined2 **)(param_1 + iVar1 * 4 + 0xd30);
        if (puVar12 != (undefined2 *)0x0) {
          uVar9 = *puVar12;
          uVar8 = *(undefined2 *)(param_1 + iVar1 * 2 + iVar10);
          goto LAB_0202c574;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*puVar4);
  }
  return 1;
}
