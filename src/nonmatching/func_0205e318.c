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

extern int func_0205b078();
extern int func_0205b08c();
extern int func_0205b0a0();
extern int func_0205b0b4();
extern int func_0205b1bc();
extern int func_0205b1d0();
extern int func_0205b1d8();
extern int func_0205ba18();
extern int func_0205f230();
extern int func_0205f240();

undefined4 func_0205e318(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;

  uVar7 = *param_1;
  if (((unsigned int)0x0205e53c) < uVar7) {
    if (((unsigned int)0x0205e540) < uVar7) {
      uVar1 = ((unsigned int)0x0205e540) + 0x80000;
    }
    else {
      uVar1 = ((unsigned int)0x0205e544);
      if (((unsigned int)0x0205e540) <= uVar7) {
        return 1;
      }
    }
    if (uVar7 != uVar1) {
      return 0;
    }
    bVar8 = true;
    bVar9 = true;
    bVar10 = true;
    iVar2 = func_0205f240(param_1);
    if (iVar2 != 0) {
      iVar3 = func_0205b078();
      iVar4 = func_0205b08c(iVar2);
      iVar5 = func_0205b1bc(iVar2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(code *)(*(unsigned int *)0x0205e548))(iVar3,0,0);
        bVar8 = iVar3 != 0;
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(code *)(*(unsigned int *)0x0205e548))(iVar4,1,0);
        bVar9 = iVar4 != 0;
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(code *)(*(unsigned int *)0x0205e54c))(iVar5,*(ushort *)(iVar2 + 0x20) & 0x8000,0);
        bVar10 = iVar5 != 0;
      }
      if ((!bVar8 || !bVar9) || (!bVar10)) {
        if (bVar10) {
          (*(code *)(*(unsigned int *)0x0205e550))(iVar5);
        }
        if (bVar9) {
          (*(code *)(*(unsigned int *)0x0205e554))(iVar4);
        }
        if (bVar8) {
          (*(code *)(*(unsigned int *)0x0205e554))(iVar3);
        }
        return 0;
      }
      func_0205b0a0(iVar2,iVar3,iVar4);
      func_0205b1d0(iVar2,iVar5);
      func_0205b0b4(iVar2,1);
      func_0205b1d8(iVar2,1);
    }
    if ((*param_1 == ((unsigned int)0x0205e544)) && (uVar6 = func_0205f230(param_1), iVar2 != 0)) {
      func_0205ba18(uVar6,iVar2);
    }
    return 1;
  }
  if (uVar7 < ((unsigned int)0x0205e53c)) {
    if (((unsigned int)0x0205e53c) - 0x900 < uVar7) {
      uVar1 = ((unsigned int)0x0205e53c) - 0x200;
    }
    else {
      if (((unsigned int)0x0205e53c) - 0x900 <= uVar7) {
        return 1;
      }
      uVar1 = ((unsigned int)0x0205e53c) - 0x1300;
    }
    if (uVar7 != uVar1) {
      return 0;
    }
  }
  return 1;
}
