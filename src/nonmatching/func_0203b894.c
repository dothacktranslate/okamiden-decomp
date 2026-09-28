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

extern int func_0203b6f8();
extern int func_0203b778();
extern int func_0205b078();
extern int func_0205b08c();
extern int func_0205b0a0();
extern int func_0205b1bc();
extern int func_0205b1d0();
extern int func_0205ba18();
extern int func_0205bac8();
extern int func_0205f230();
extern int func_0205f240();

undefined4 func_0203b894(uint *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int local_1c;

  uVar5 = *param_1;
  if (((unsigned int)0x0203b9f4) < uVar5) {
    uVar4 = ((unsigned int)0x0203ba0c);
    if ((uVar5 <= ((unsigned int)0x0203ba04)) && (uVar4 = ((unsigned int)0x0203ba08), ((unsigned int)0x0203ba04) <= uVar5)) {
      return 1;
    }
    if (uVar5 == uVar4) {
      bVar1 = true;
      bVar2 = true;
      bVar3 = true;
      iVar6 = func_0205f240(param_1);
      if (iVar6 != 0) {
        iVar7 = func_0205b078();
        iVar8 = func_0205b08c(iVar6);
        iVar9 = func_0205b1bc(iVar6);
        if (iVar7 == 0) {
          local_1c = 0;
        }
        else {
          local_1c = (*(code *)(*(unsigned int *)0x0203ba10))(iVar7,0,0);
          if (local_1c == 0) {
            bVar1 = false;
          }
        }
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*(code *)(*(unsigned int *)0x0203ba10))(iVar8,1,0);
          if (iVar7 == 0) {
            bVar2 = false;
          }
        }
        if (iVar9 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*(code *)(*(unsigned int *)0x0203ba14))(iVar9,*(ushort *)(iVar6 + 0x20) & 0x8000,0);
          if (iVar8 == 0) {
            bVar3 = false;
          }
        }
        if (((!bVar1) || (!bVar2)) || (!bVar3)) {
          if (iVar8 != 0) {
            (*(code *)(*(unsigned int *)0x0203ba18))(iVar8);
          }
          if (iVar7 != 0) {
            (*(code *)(*(unsigned int *)0x0203ba1c))(iVar7);
          }
          if (local_1c != 0) {
            (*(code *)(*(unsigned int *)0x0203ba1c))();
          }
          return 0;
        }
        func_0205b0a0(iVar6,local_1c,iVar7);
        func_0205b1d0(iVar6,iVar8);
        func_0203b6f8(iVar6);
        func_0203b778(iVar6);
      }
      if ((*param_1 == ((unsigned int)0x0203ba08)) && (uVar10 = func_0205f230(param_1), iVar6 != 0)) {
        if (param_2 != 0) {
          func_0205bac8();
        }
        func_0205ba18(uVar10,iVar6);
      }
      return 1;
    }
  }
  else {
    if (((unsigned int)0x0203b9f4) <= uVar5) {
      return 1;
    }
    uVar4 = ((unsigned int)0x0203ba00);
    if ((uVar5 <= ((unsigned int)0x0203b9f8)) && (uVar4 = ((unsigned int)0x0203b9fc), ((unsigned int)0x0203b9f8) <= uVar5)) {
      return 1;
    }
    if (uVar5 == uVar4) {
      return 1;
    }
  }
  return 0;
}
