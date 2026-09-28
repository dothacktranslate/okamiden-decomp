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

extern int func_02053918();

int func_0204d340(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  piVar1 = *(int **)(iVar3 + 100);
  for (piVar5 = (int *)**(int **)(iVar3 + 100); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    if (((*(byte *)((int)piVar5 + 5) & 3) != 0 || param_2 != 0) &&
       ((*(byte *)((int)piVar5 + 5) & 8) == 0)) {
      iVar2 = piVar5[2];
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else if ((*(byte *)(iVar2 + 6) & 4) == 0) {
        iVar2 = func_02053918(iVar2,2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa8));
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        *(byte *)((int)piVar5 + 5) = *(byte *)((int)piVar5 + 5) | 8;
      }
      else {
        iVar2 = piVar5[4];
        *(byte *)((int)piVar5 + 5) = *(byte *)((int)piVar5 + 5) | 8;
        *piVar1 = *piVar5;
        iVar4 = iVar4 + iVar2 + 0x14;
        if (*(undefined4 **)(iVar3 + 0x30) == (undefined4 *)0x0) {
          *piVar5 = (int)piVar5;
          *(int **)(iVar3 + 0x30) = piVar5;
          piVar5 = piVar1;
        }
        else {
          *piVar5 = **(undefined4 **)(iVar3 + 0x30);
          **(int **)(iVar3 + 0x30) = (int)piVar5;
          *(int **)(iVar3 + 0x30) = piVar5;
          piVar5 = piVar1;
        }
      }
    }
    piVar1 = piVar5;
  }
  return iVar4;
}
