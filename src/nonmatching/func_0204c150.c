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

extern int func_0204bdc4();
extern int func_0204bdec();
extern int func_0204be48();
extern int func_0204bf2c();
extern int func_0204c09c();
extern int func_0204c408();

undefined4 func_0204c150(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if (param_2[1] != 6) {
    param_2 = (int *)func_0204c09c();
  }
  iVar5 = *(int *)(param_1 + 0x20);
  iVar3 = *param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = *(undefined4 *)(param_1 + 0x18);
  if (*(char *)(iVar3 + 6) == '\0') {
    iVar3 = *(int *)(iVar3 + 0x10);
    if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) <= (int)((uint)*(byte *)(iVar3 + 0x4b) * 8)
       ) {
      func_0204bdc4(param_1);
    }
    iVar7 = (int)param_2 + (*(int *)(param_1 + 0x20) - iVar5);
    if (*(char *)(iVar3 + 0x4a) == '\0') {
      iVar6 = iVar7 + 8;
      uVar2 = iVar6 + (uint)*(byte *)(iVar3 + 0x49) * 8;
      if (uVar2 < *(uint *)(param_1 + 8)) {
        *(uint *)(param_1 + 8) = uVar2;
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 8) - iVar7;
      iVar6 = func_0204bf2c(param_1,iVar3,((int)(iVar7 + ((uint)(iVar7 >> 2) >> 0x1d)) >> 3) + -1);
      iVar7 = (int)param_2 + (*(int *)(param_1 + 0x20) - iVar5);
    }
    if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x24)) {
      piVar1 = (int *)func_0204bdec(param_1);
    }
    else {
      piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
      *(int **)(param_1 + 0x14) = piVar1;
    }
    *piVar1 = iVar6;
    piVar1[1] = iVar7;
    *(int *)(param_1 + 0xc) = iVar6;
    piVar1[2] = iVar6 + (uint)*(byte *)(iVar3 + 0x4b) * 8;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0xc);
    piVar1[5] = 0;
    piVar1[4] = param_3;
    uVar2 = *(uint *)(param_1 + 8);
    uVar4 = piVar1[2];
    if (uVar2 < uVar4) {
      do {
        *(undefined4 *)(uVar2 + 4) = 0;
        uVar4 = piVar1[2];
        uVar2 = uVar2 + 8;
      } while (uVar2 < uVar4);
    }
    *(uint *)(param_1 + 8) = uVar4;
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      func_0204be48(param_1,0,0xffffffff);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
    }
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x141) {
    func_0204bdc4(param_1,0x28);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x24)) {
    piVar1 = (int *)func_0204bdec(param_1);
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int **)(param_1 + 0x14) = piVar1;
  }
  iVar3 = (int)param_2 + (*(int *)(param_1 + 0x20) - iVar5);
  piVar1[1] = iVar3;
  iVar3 = iVar3 + 8;
  *piVar1 = iVar3;
  *(int *)(param_1 + 0xc) = iVar3;
  piVar1[2] = *(int *)(param_1 + 8) + 0x140;
  piVar1[4] = param_3;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    func_0204be48(param_1,0,0xffffffff);
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0x10))(param_1);
  if (iVar3 < 0) {
    return 2;
  }
  func_0204c408(param_1,*(int *)(param_1 + 8) + iVar3 * -8);
  return 1;
}
