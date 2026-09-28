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

extern int func_02009f88();

void func_0205f5f8(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;

  iVar7 = ((int *)(*(unsigned int *)0x0205f764))[0x35];
  uVar6 = (uint)*(byte *)(*(int *)(*(unsigned int *)0x0205f764) + 1);
  if (iVar7 != 0) {
    if (uVar6 < *(byte *)(iVar7 + 1)) {
      piVar4 = (int *)(*(ushort *)(iVar7 + (uint)*(ushort *)(iVar7 + 6)) * uVar6 +
                      iVar7 + (uint)*(ushort *)(iVar7 + 6) + 4);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      puVar8 = (ushort *)(iVar7 + *piVar4);
      goto LAB_0205f65c;
    }
  }
  puVar8 = (ushort *)0x0;
LAB_0205f65c:
  uVar3 = *puVar8;
  puVar5 = puVar8 + 2;
  if ((uVar3 & 1) == 0) {
    puVar5 = puVar8 + 8;
  }
  if ((uVar3 & 2) == 0) {
    if ((uVar3 & 8) != 0) {
      iVar7 = (int)(uVar3 & 0xf0) >> 4;
      uVar10 = (uint)(short)*puVar5;
      uVar9 = (uint)(short)puVar5[1];
      func_02009f88(param_1 + 10);
      uVar6 = 0x1000;
      bVar1 = *(byte *)(((unsigned int)0x0205f768) + iVar7 * 4);
      bVar2 = *(byte *)(((unsigned int)0x0205f76c) + iVar7 * 4);
      if ((*puVar8 & 0x100) != 0) {
        uVar6 = 0xfffff000;
      }
      param_1[iVar7 + 10] = uVar6;
      param_1[bVar1 + 10] = uVar10;
      param_1[bVar2 + 10] = uVar9;
      if ((*puVar8 & 0x200) != 0) {
        uVar9 = -uVar9;
      }
      param_1[*(byte *)(((unsigned int)0x0205f770) + iVar7 * 4) + 10] = uVar9;
      if ((*puVar8 & 0x400) != 0) {
        uVar10 = -uVar10;
      }
      param_1[*(byte *)(((unsigned int)0x0205f774) + iVar7 * 4) + 10] = uVar10;
      return;
    }
    param_1[10] = (int)(short)puVar8[1];
    param_1[0xb] = (int)(short)*puVar5;
    param_1[0xc] = (int)(short)puVar5[1];
    param_1[0xd] = (int)(short)puVar5[2];
    param_1[0xe] = (int)(short)puVar5[3];
    param_1[0xf] = (int)(short)puVar5[4];
    param_1[0x10] = (int)(short)puVar5[5];
    param_1[0x11] = (int)(short)puVar5[6];
    param_1[0x12] = (int)(short)puVar5[7];
    return;
  }
  *param_1 = *param_1 | 2;
  return;
}
