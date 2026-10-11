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

extern int func_0205694c();
extern int func_02057024();
extern int func_02057bf8();
extern int func_02057c18();
extern int func_02057c34();
extern int func_02057c50();
extern int func_02058248();

void func_02057c88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;

  if (*(short *)(*(int *)(param_1 + 4) + 4) == 0) {
    return;
  }
  puVar3 = (ushort *)func_02057024();
  iVar6 = *(int *)(param_1 + 0x34);
  uVar4 = func_0205694c(iVar6,*puVar3);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  uVar7 = *(uint *)(*(int *)(param_1 + 0x1c) + 4) & 0xff;
  func_02057c50(param_1 + 0x3c,1);
  if (uVar7 != 0) {
    if (uVar7 == 2) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      func_02057c34(param_1 + 0x3c,*(undefined4 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 4));
      func_02057c18(param_1 + 0x3c,puVar3[1]);
      uVar1 = puVar3[6];
      uVar2 = puVar3[7];
    }
    func_02057bf8(param_1 + 0x3c,(int)(short)uVar1,(int)(short)uVar2);
  }
  iVar6 = *(int *)(iVar6 + 0xc);
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) == -1) {
    return;
  }
  puVar5 = (undefined4 *)(*(int *)(iVar6 + 4) + (uint)*puVar3 * 8);
  func_02058248(*(undefined4 *)(param_1 + 0x38),*puVar5,puVar5[1],puVar5,param_4);
  return;
}
