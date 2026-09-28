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

extern int func_020040d4();
extern int func_02004130();
extern int func_02004b54();
extern int func_02004b9c();
extern int func_02004c0c();
extern int func_02004d00();
extern int func_02004d18();
extern int func_02004d80();
extern int func_02004fa4();
extern int func_02004fd8();
extern int func_02005048();
extern int func_02007820();
extern int func_02057998();

void func_02057a9c(int *param_1,ushort *param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  iVar7 = 0x20;
  uVar1 = *param_2;
  if (*param_1 != 3) {
    iVar7 = 0x200;
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = param_1[3];
      iVar3 = iVar7 * uVar6;
      iVar5 = iVar7 * (uint)*(ushort *)(*(int *)(param_2 + 2) + uVar6 * 2);
      func_02007820(iVar4,param_1[2]);
      if (param_4 == 0) {
        func_02004fa4();
        func_02004fd8(iVar4 + iVar3,param_3 + iVar5,iVar7);
        func_02005048();
      }
      else if (param_4 == 1) {
        if (param_1[1] == 0) {
          func_020040d4(iVar4 + iVar3,param_3 + iVar5,iVar7);
        }
        else {
          func_02004b54();
          func_02004b9c(iVar4 + iVar3,param_3 + iVar5,iVar7);
          func_02004c0c();
        }
      }
      else if (param_4 == 2) {
        if (param_1[1] == 0) {
          func_02004130(iVar4 + iVar3,param_3 + iVar5,iVar7);
        }
        else {
          func_02004d00();
          func_02004d18(iVar4 + iVar3,param_3 + iVar5,iVar7);
          func_02004d80();
        }
      }
      uVar2 = uVar6 + 1;
      uVar6 = uVar2 & 0xffff;
    } while ((uVar2 & 0xffff) < (uint)uVar1);
  }
  iVar7 = param_1[1];
  *param_5 = *param_1;
  param_5[1] = iVar7;
  func_02057998(param_5,param_4,param_3);
  return;
}
