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

extern int func_020217d4();
extern int func_020312bc();
extern int func_020314f0();
extern int func_02032098();
extern int func_0x01ff99dc();
extern int func_0x01ff9a30();
extern int func_0x01ff9cf4();
extern int func_0x01ff9d2c();
extern int func_0x01ff9dcc();

void func_020319c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;

  uStack_18 = param_4;
  func_020314f0();
  func_02032098(param_1,param_2);
  *(int *)(param_1 + 0x104) = (int)*(short *)(param_2 + 0x34);
  *(int *)(param_1 + 0x108) = param_2 + *(int *)(param_2 + 0x38);
  func_0x01ff99dc(param_1 + 0xd8);
  iVar3 = *(int *)(param_1 + 0x104);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = iVar5 * 0xc;
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + iVar4);
      if (iVar3 < *(int *)(param_1 + 0xec)) {
        *(int *)(param_1 + 0xec) = iVar3;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + iVar4 + 4);
      if (iVar3 < *(int *)(param_1 + 0xf0)) {
        *(int *)(param_1 + 0xf0) = iVar3;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + iVar4 + 8);
      if (iVar3 < *(int *)(param_1 + 0xf4)) {
        *(int *)(param_1 + 0xf4) = iVar3;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + iVar4);
      if (*(int *)(param_1 + 0xf8) < iVar3) {
        *(int *)(param_1 + 0xf8) = iVar3;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + iVar4 + 4);
      if (*(int *)(param_1 + 0xfc) < iVar3) {
        *(int *)(param_1 + 0xfc) = iVar3;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x108) + iVar4 + 8);
      if (*(int *)(param_1 + 0x100) < iVar3) {
        *(int *)(param_1 + 0x100) = iVar3;
      }
      func_0x01ff9cf4(param_1 + 0xd8,*(int *)(param_1 + 0x108) + iVar4);
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(param_1 + 0x104);
    } while (iVar5 < iVar3);
  }
  func_0x01ff9dcc(param_1 + 0xd8,iVar3 << 0xc);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x104)) {
    do {
      func_0x01ff9d2c(auStack_24,*(int *)(param_1 + 0x108) + iVar3 * 0xc,param_1 + 0xd8);
      uVar7 = func_0x01ff9a30(auStack_24);
      iVar5 = (int)((ulonglong)uVar7 >> 0x20);
      iVar4 = *(int *)(param_1 + 0xe8);
      bVar6 = *(uint *)(param_1 + 0xe4) < (uint)uVar7;
      if ((int)((iVar4 - iVar5) - (uint)bVar6) < 0 !=
          (SBORROW4(iVar4,iVar5) != SBORROW4(iVar4 - iVar5,(uint)bVar6))) {
        *(undefined8 *)(param_1 + 0xe4) = uVar7;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x104));
  }
  *(int *)(param_1 + 0x10c) = (int)*(short *)(param_2 + 0x3c);
  *(int *)(param_1 + 0x110) = param_2 + *(int *)(param_2 + 0x40);
  uVar1 = ((unsigned int)0x02031c04);
  *(int *)(param_1 + 0x114) = (int)*(short *)(param_2 + 0x4c);
  uVar1 = func_020217d4(*(undefined4 *)(param_1 + 0x114),0x14,8,uVar1,((unsigned int)0x02031c08));
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  iVar3 = 0;
  param_2 = param_2 + *(int *)(param_2 + 0x50);
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      func_020312bc(*(int *)(param_1 + 0x118) + iVar3 * 0x14,param_2 + *(int *)(param_2 + iVar3 * 4),
                   param_3,param_4,param_5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x114));
  }
  uVar1 = ((unsigned int)0x02031c0c);
  uVar2 = func_020217d4(*(undefined4 *)(param_1 + 0x104),0xc,0,((unsigned int)0x02031c0c),0);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  uVar1 = func_020217d4(*(undefined4 *)(param_1 + 0x10c),0xc,0,uVar1,0);
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  return;
}
