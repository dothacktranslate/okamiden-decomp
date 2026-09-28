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

extern int func_0205b6ac();
extern int func_0205ef10();

undefined4 func_0205b788(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;

  iVar2 = param_2;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if (param_1 != 0 && iVar2 != 0) {
    param_1 = param_1 + iVar2;
  }
  else {
    param_1 = 0;
  }
  uVar5 = 1;
  uVar4 = 0;
  iVar2 = param_1 + (uint)*(ushort *)(param_1 + 2);
  uVar1 = (uint)*(byte *)(iVar2 + 1);
  if (uVar1 != 0) {
    do {
      if ((iVar2 == 0) || (uVar1 = (uint)*(byte *)(iVar2 + 1), uVar1 <= uVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar2 + (uint)*(ushort *)(iVar2 + 6);
        uVar1 = iVar3 + (uint)*(ushort *)(iVar3 + 2);
        iVar3 = uVar1 + uVar4 * 0x10;
      }
      if (param_2 != 0) {
        uVar1 = (uint)*(ushort *)(param_2 + 0x34);
      }
      if (param_2 != 0 && uVar1 != 0) {
        iVar3 = func_0205ef10(param_2 + uVar1,iVar3);
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        if ((iVar2 == 0) || (*(byte *)(iVar2 + 1) <= uVar4)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(ushort *)(iVar2 + (uint)*(ushort *)(iVar2 + 6)) * uVar4 +
                  iVar2 + (uint)*(ushort *)(iVar2 + 6) + 4;
        }
        if ((*(byte *)(iVar3 + 3) & 1) == 0) {
          func_0205b6ac(param_1,iVar3,param_2);
        }
      }
      uVar1 = (uint)*(byte *)(iVar2 + 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar5;
}
