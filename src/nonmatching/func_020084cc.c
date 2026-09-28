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

extern int func_02008384();
extern int func_02008424();
extern int func_0201e96c();

void func_020084cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong lVar11;

  lVar1 = CONCAT44(param_3,param_2);
  if (*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x1c) != 0) {
    uVar10 = func_02008384();
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar4 = (uint)uVar10;
    uVar8 = *(uint *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x24);
    lVar1 = *(longlong *)(param_1 + 0x24);
    bVar9 = uVar5 <= uVar8;
    if (uVar8 == uVar5) {
      bVar9 = uVar4 <= uVar7;
    }
    if (!bVar9) {
      lVar2 = *(longlong *)(param_1 + 0x1c);
      lVar11 = func_0201e96c(uVar4 - uVar7,uVar5 - (uVar8 + (uVar4 < uVar7)),
                            *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      lVar1 = (lVar11 + 1) * lVar2 + lVar1;
    }
  }
  iVar6 = ((unsigned int)0x020085f0);
  *(longlong *)(param_1 + 0xc) = lVar1;
  iVar3 = ((unsigned int)0x020085f0);
  for (iVar6 = *(int *)(iVar6 + 4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x18)) {
    if ((int)((int)((ulonglong)lVar1 >> 0x20) -
             (*(int *)(iVar6 + 0x10) + (uint)((uint)lVar1 < *(uint *)(iVar6 + 0xc)))) < 0) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
      *(int *)(iVar6 + 0x14) = param_1;
      *(int *)(param_1 + 0x18) = iVar6;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(int *)(*(int *)(param_1 + 0x14) + 0x18) = param_1;
        return;
      }
      *(int *)(((unsigned int)0x020085f0) + 4) = param_1;
      func_02008424(param_1);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar6 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = param_1;
  *(int *)(param_1 + 0x14) = iVar6;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 0x18) = param_1;
    return;
  }
  *(int *)(iVar3 + 8) = param_1;
  *(int *)(iVar3 + 4) = param_1;
  func_02008424(param_1);
  return;
}
