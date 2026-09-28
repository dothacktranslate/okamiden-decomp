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

extern int func_0205b248();
extern int func_0205ef10();

undefined4 func_0205b430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;

  iVar1 = param_2;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (param_1 != 0 && iVar1 != 0) {
    puVar5 = (ushort *)(param_1 + iVar1);
  }
  else {
    puVar5 = (ushort *)0x0;
  }
  uVar4 = 1;
  uVar3 = 0;
  iVar1 = (int)puVar5 + (uint)*puVar5;
  if (*(char *)(iVar1 + 1) != '\0') {
    do {
      if ((iVar1 == 0) || (*(byte *)(iVar1 + 1) <= uVar3)) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar1 + (uint)*(ushort *)(iVar1 + 6);
        iVar2 = iVar2 + (uint)*(ushort *)(iVar2 + 2) + uVar3 * 0x10;
      }
      if (param_2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = func_0205ef10(param_2 + 0x3c,iVar2);
      }
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        if ((iVar1 == 0) || (*(byte *)(iVar1 + 1) <= uVar3)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(ushort *)(iVar1 + (uint)*(ushort *)(iVar1 + 6)) * uVar3 +
                  iVar1 + (uint)*(ushort *)(iVar1 + 6) + 4;
        }
        if ((*(byte *)(iVar2 + 3) & 1) == 0) {
          func_0205b248(puVar5,iVar2,param_2);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(iVar1 + 1));
  }
  return uVar4;
}
