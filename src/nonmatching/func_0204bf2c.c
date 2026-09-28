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

extern int func_0201e6a0();
extern int func_0204e284();
extern int func_02050028();
extern int func_02052828();
extern int func_02052c8c();
extern int func_02052cec();

void func_0204bf2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;

  uVar9 = (uint)*(byte *)(param_2 + 0x49);
  iVar10 = 0;
  for (; param_3 < (int)uVar9; param_3 = param_3 + 1) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar4 + 8;
    *(undefined4 *)(iVar4 + 4) = 0;
  }
  if ((*(byte *)(param_2 + 0x4a) & 4) != 0) {
    iVar4 = param_3 - uVar9;
    if (*(uint *)(*(int *)(param_1 + 0x10) + 0x40) <= *(uint *)(*(int *)(param_1 + 0x10) + 0x44)) {
      func_0204e284(param_1);
    }
    iVar10 = func_02052828(param_1,iVar4,1);
    iVar8 = 0;
    if (0 < iVar4) {
      do {
        iVar7 = *(int *)(param_1 + 8) + iVar4 * -8;
        iVar1 = iVar8 * 8;
        puVar2 = (undefined4 *)func_02052c8c(param_1,iVar10,iVar8 + 1);
        iVar5 = iVar8 * 8;
        iVar8 = iVar8 + 1;
        *puVar2 = *(undefined4 *)(iVar7 + iVar5);
        puVar2[1] = *(undefined4 *)(iVar7 + iVar1 + 4);
      } while (iVar8 < iVar4);
    }
    uVar3 = func_02050028(param_1,((unsigned int)0x0204c098),1);
    puVar2 = (undefined4 *)func_02052cec(param_1,iVar10,uVar3);
    uVar3 = func_0201e6a0(iVar4);
    *puVar2 = uVar3;
    puVar2[1] = 3;
  }
  iVar4 = *(int *)(param_1 + 8) + param_3 * -8;
  iVar8 = 0;
  if (uVar9 != 0) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 8);
      iVar5 = iVar4 + iVar8 * 8;
      *(undefined4 **)(param_1 + 8) = puVar2 + 2;
      iVar1 = iVar8 * 8;
      iVar8 = iVar8 + 1;
      *puVar2 = *(undefined4 *)(iVar4 + iVar1);
      puVar2[1] = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar5 + 4) = 0;
    } while (iVar8 < (int)uVar9);
  }
  if (iVar10 != 0) {
    piVar6 = *(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar6 + 2;
    *piVar6 = iVar10;
    piVar6[1] = 5;
    return;
  }
  return;
}
