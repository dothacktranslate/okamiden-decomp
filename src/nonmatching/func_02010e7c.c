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

extern int func_02011548();

undefined4 func_02010e7c(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;

  iVar3 = 0;
  iVar4 = ((undefined4 *)param_1[0xf])[1];
  iVar2 = 0;
  iVar1 = 0;
  piVar5 = *(int **)param_1[0xf];
  puVar6 = (undefined2 *)*param_1;
  if (0 < iVar4) {
    do {
      if (((*piVar5 != 0) || (param_3 == 0)) && ((piVar5[1] & param_2) != 0)) {
        *(int **)(puVar6 + 0x1a) = piVar5;
        *puVar6 = *(undefined2 *)((int)piVar5 + 0x16);
        puVar6[1] = (short)piVar5[5];
        *(int *)(puVar6 + 2) = *(int *)(param_1[0xf] + 8) + piVar5[4] * 4;
        *(int *)(puVar6 + 4) = param_1[6] + iVar3 * 4;
        *(int *)(puVar6 + 6) = param_1[7] + iVar3 * 4;
        *(int *)(puVar6 + 0xe) = param_1[8] + iVar3 * 4;
        *(int *)(puVar6 + 0x10) = param_1[9] + iVar3 * 2;
        *(int *)(puVar6 + 0x14) = param_1[10] + iVar3 * 8;
        *(int *)(puVar6 + 8) = param_1[2] + iVar2 * 4;
        *(int *)(puVar6 + 10) = param_1[3] + iVar2 * 2;
        *(int *)(puVar6 + 0xc) = param_1[4] + iVar2 * 2;
        func_02011548(puVar6);
        puVar6 = puVar6 + 0x1c;
        iVar2 = iVar2 + (uint)*(ushort *)(piVar5 + 5);
        iVar3 = iVar3 + (uint)*(ushort *)((int)piVar5 + 0x16);
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar1 < iVar4);
  }
  return 1;
}
