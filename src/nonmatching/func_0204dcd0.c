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

extern int func_0204dc30();

undefined4 * func_0204dcd0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;

  iVar3 = *(int *)(param_1 + 0x10);
  bVar1 = *(byte *)(iVar3 + 0x14);
  while ((puVar2 = (undefined4 *)*param_2, puVar2 != (undefined4 *)0x0 &&
         (bVar4 = param_3 != 0, param_3 = param_3 + -1, bVar4))) {
    if (*(char *)(puVar2 + 1) == '\b') {
      func_0204dcd0(param_1,puVar2 + 0x16,0xfffffffd);
    }
    if ((byte)((*(byte *)((int)puVar2 + 5) ^ 3) & (bVar1 ^ 3)) == 0) {
      *param_2 = *puVar2;
      if (puVar2 == *(undefined4 **)(iVar3 + 0x1c)) {
        *(undefined4 *)(iVar3 + 0x1c) = *puVar2;
      }
      func_0204dc30(param_1,puVar2);
    }
    else {
      *(byte *)((int)puVar2 + 5) = *(byte *)((int)puVar2 + 5) & 0xf8 | *(byte *)(iVar3 + 0x14) & 3;
      param_2 = puVar2;
    }
  }
  return param_2;
}
