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

extern int func_020366f0();
extern int func_02044b5c();
extern int func_02044f30();

void func_02068758(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;

  if (param_4 == 0) {
    puVar3 = (ushort *)func_02044b5c(param_1,4,param_3,0,0);
  }
  else {
    puVar3 = (ushort *)func_020366f0(param_1,4);
  }
  if (param_2 != 0) {
    func_02044f30(puVar3,param_2);
  }
  if ((param_3 != 0) && (iVar4 = 0, *puVar3 != 0)) {
    do {
      uVar2 = ((unsigned int)0x020687e0);
      if ((puVar3[1] & 1) == 0) {
        iVar6 = *(int *)(puVar3 + 2);
        iVar5 = iVar4 << 3;
      }
      else {
        iVar6 = *(int *)(puVar3 + 2);
        iVar5 = iVar4 << 4;
      }
      puVar7 = (ushort *)(iVar6 + iVar5);
      iVar6 = 0;
      iVar5 = *(int *)(puVar7 + 2);
      if (*puVar7 != 0) {
        do {
          uVar1 = *(ushort *)(iVar5 + 4);
          iVar6 = iVar6 + 1;
          *(ushort *)(iVar5 + 4) = uVar1 & (ushort)uVar2;
          *(ushort *)(iVar5 + 4) =
               *(ushort *)(iVar5 + 4) |
               (ushort)(((uint)(uVar1 >> 0xc) + (param_3 >> 5) & 0xf) << 0xc);
          iVar5 = iVar5 + 6;
        } while (iVar6 < (int)(uint)*puVar7);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*puVar3);
  }
  return;
}
