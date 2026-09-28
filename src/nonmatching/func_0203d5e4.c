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

extern int func_02009884();
extern int func_02035834();
extern int func_0203d3f8();
extern int func_0203d884();
extern int func_0203d9a0();
extern int func_0203dc34();
extern int func_0205f240();

undefined4 * func_0203d5e4(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_2c [20];
  uint uStack_18;

  uStack_18 = param_4;
  iVar2 = func_0205f240(*(undefined4 *)(param_2 + 0x10));
  iVar8 = 0x34;
  puVar3 = (undefined4 *)func_0203d884(param_1,param_2);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = (((unsigned int)0x0203d764) & *(uint *)(iVar2 + 0x2c)) >> 0x10;
    iVar5 = uVar4 * 8;
    if (uVar4 == 0) {
      return (undefined4 *)0x0;
    }
    bVar10 = (param_4 & 1) != 0;
    if (!bVar10) {
      iVar8 = iVar5 + 0x34;
    }
    uVar7 = (uint)bVar10;
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),iVar8,4,param_3);
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = ((unsigned int)0x0203d768);
        func_0203d3f8();
      }
      iVar8 = iVar2 + *(int *)(iVar2 + 0x38);
      puVar3[10] = iVar5;
      puVar3[0xb] = param_2;
      puVar3[3] = *(undefined4 *)(iVar2 + 0x2c);
      if (uVar7 == 0) {
        puVar3[6] = puVar3 + 0xd;
        func_02009884(iVar8,puVar3 + 0xd,iVar5);
      }
      else {
        puVar3[0xc] = puVar3[0xc] | uVar7;
        puVar3[6] = iVar8;
      }
      if ((param_4 & 2) != 0) {
        uVar6 = func_0203d9a0(param_1,iVar5,((unsigned int)0x0203d76c));
        puVar3[8] = uVar6;
        uVar7 = 0;
        if (uVar4 != 0) {
          do {
            iVar9 = uVar7 * 2;
            uVar1 = func_0203dc34(*(undefined2 *)(iVar8 + iVar9),((unsigned int)0x0203d770),((unsigned int)0x0203d774),0);
            uVar7 = uVar7 + 1;
            *(undefined2 *)(puVar3[8] + iVar9) = uVar1;
          } while (uVar7 < uVar4 << 2);
        }
        uVar6 = (*(code *)(*(unsigned int *)0x0203d778))(iVar5,*(ushort *)(iVar2 + 0x20) & 0x8000,0);
        puVar3[4] = uVar6;
        puVar3[0xc] = puVar3[0xc] | 2;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffd7;
      }
      if ((param_4 & 4) != 0) {
        uVar6 = func_0203d9a0(param_1,iVar5,((unsigned int)0x0203d77c));
        puVar3[9] = uVar6;
        uVar7 = 0;
        if (uVar4 != 0) {
          do {
            iVar8 = uVar7 * 2;
            uVar7 = uVar7 + 1;
            *(undefined2 *)(puVar3[9] + iVar8) = 0;
          } while (uVar7 < uVar4 << 2);
        }
        uVar6 = (*(code *)(*(unsigned int *)0x0203d778))(iVar5,*(ushort *)(iVar2 + 0x20) & 0x8000,0);
        puVar3[5] = uVar6;
        puVar3[0xc] = puVar3[0xc] | 4;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffaf;
      }
      func_02035834(auStack_2c,param_1 + 0xc,param_1 + 0x10,puVar3 + 1,param_1 + 0xc);
      return puVar3;
    }
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}
