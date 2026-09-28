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

undefined4 func_02000950(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte bVar9;
  int iVar10;
  int iVar11;

  if (param_1 != 0) {
    puVar5 = (undefined1 *)(param_1 + *(int *)(param_1 + -4));
    puVar7 = (ushort *)(param_1 - (*(uint *)(param_1 + -8) >> 0x18));
    uVar4 = param_1 - (*(uint *)(param_1 + -8) & 0xffffff);
    puVar6 = puVar5;
    while ((int)uVar4 < (int)puVar7) {
      puVar7 = (ushort *)((int)puVar7 + -1);
      bVar9 = *(byte *)puVar7;
      iVar10 = 8;
      while (0 < iVar10) {
        if ((bVar9 & 0x80) == 0) {
          puVar7 = (ushort *)((int)puVar7 + -1);
          puVar6 = puVar6 + -1;
          *puVar6 = *(undefined1 *)puVar7;
        }
        else {
          pbVar8 = (byte *)((int)puVar7 + -1);
          puVar7 = puVar7 + -1;
          uVar3 = *puVar7;
          iVar11 = *pbVar8 + 0x20;
          do {
            puVar2 = puVar6 + (uVar3 & 0xffff0fff) + 2;
            puVar6 = puVar6 + -1;
            *puVar6 = *puVar2;
            bVar1 = 0xf < iVar11;
            iVar11 = iVar11 + -0x10;
          } while (bVar1);
        }
        bVar9 = bVar9 << 1;
        iVar10 = iVar10 + -1;
        if ((int)puVar7 <= (int)uVar4) goto LAB_020009d4;
      }
    }
LAB_020009d4:
    uVar4 = uVar4 & 0xffffffe0;
    do {
      coproc_moveto_Data_Synchronization(0);
      coproc_moveto_Invalidate_Instruction_Cache_by_MVA(uVar4);
      coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar4);
      uVar4 = uVar4 + 0x20;
    } while ((int)uVar4 < (int)puVar5);
  }
  return 0;
}
