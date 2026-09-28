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

uint func_02062fdc(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;

  if (param_1 == 0) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = param_1 + 0xfU & 0xfffffff0;
  }
  if (((unsigned int)0x02063130) <= uVar2) {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = 0;
    do {
      piVar6 = *(int **)(((unsigned int)0x02063140) + iVar3 * 4);
      if ((piVar6[2] != 0) && (uVar2 <= (uint)(piVar6[1] - *piVar6))) {
        iVar4 = piVar6[1] - uVar2;
        piVar6[1] = iVar4;
        iVar3 = piVar6[5];
        goto LAB_020630a4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  else {
    iVar3 = 0;
    do {
      piVar6 = *(int **)(((unsigned int)0x0206313c) + iVar3 * 4);
      if ((piVar6[2] != 0) && (uVar2 <= (uint)(piVar6[1] - *piVar6))) {
        piVar5 = ((unsigned int)0x02063138);
        if (((short)piVar6[4] != 0) && (piVar5 = ((unsigned int)0x02063134), (short)piVar6[4] != 3)) {
          piVar5 = (int *)0x0;
        }
        if ((piVar5[2] != 0) && (uVar2 >> 1 <= (uint)(piVar5[1] - *piVar5))) {
          iVar4 = *piVar6;
          *piVar6 = iVar4 + uVar2;
          *piVar5 = *piVar5 + (uVar2 >> 1);
          iVar3 = piVar6[5];
LAB_020630a4:
          bVar1 = true;
          param_3 = iVar4 + iVar3;
          goto LAB_0206310c;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  bVar1 = false;
LAB_0206310c:
  if (!bVar1) {
    return 0;
  }
  return (param_3 & 0x7ffff) >> 3 | (uVar2 >> 4) << 0x10 | param_2 << 0x1f;
}
