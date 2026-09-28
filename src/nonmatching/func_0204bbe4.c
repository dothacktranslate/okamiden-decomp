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

void func_0204bbe4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;

  piVar1 = *(int **)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 8) - param_2;
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 0x20) + ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) * 8;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    piVar1[2] = *(int *)(param_1 + 0x20) +
                ((int)((piVar1[2] - param_2) + ((uint)(piVar1[2] - param_2 >> 2) >> 0x1d)) >> 3) * 8
    ;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 <= *(int **)(param_1 + 0x14)) {
    do {
      piVar1[2] = *(int *)(param_1 + 0x20) +
                  ((int)((piVar1[2] - param_2) + ((uint)(piVar1[2] - param_2 >> 2) >> 0x1d)) >> 3) *
                  8;
      *piVar1 = *(int *)(param_1 + 0x20) +
                ((int)((*piVar1 - param_2) + ((uint)(*piVar1 - param_2 >> 2) >> 0x1d)) >> 3) * 8;
      piVar1[1] = *(int *)(param_1 + 0x20) +
                  ((int)((piVar1[1] - param_2) + ((uint)(piVar1[1] - param_2 >> 2) >> 0x1d)) >> 3) *
                  8;
      piVar1 = piVar1 + 6;
    } while (piVar1 <= *(int **)(param_1 + 0x14));
  }
  param_2 = *(int *)(param_1 + 0xc) - param_2;
  *(int *)(param_1 + 0xc) =
       *(int *)(param_1 + 0x20) + ((int)(param_2 + ((uint)(param_2 >> 2) >> 0x1d)) >> 3) * 8;
  return;
}
