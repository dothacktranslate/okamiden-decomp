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

void func_0202fe10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if ((*(uint *)(param_1 + 0xf8) != 0) && ((*(uint *)(param_1 + 0xf8) & 0x10) != 0)) {
    *(short *)(*(int *)(param_1 + 0x48) + 0x7c) =
         *(short *)(*(int *)(param_1 + 0x48) + 0x7c) + *(short *)(param_1 + 0xb6);
    *(short *)(*(int *)(param_1 + 0x48) + 0x7e) =
         *(short *)(*(int *)(param_1 + 0x48) + 0x7e) + *(short *)(param_1 + 0xb8);
    *(short *)(*(int *)(param_1 + 0x48) + 0x80) =
         *(short *)(*(int *)(param_1 + 0x48) + 0x80) + *(short *)(param_1 + 0xba);
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = (int)*(short *)(param_1 + 0xb0);
    iVar1 = iVar3 - *(short *)(iVar2 + 0x7c);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x80) {
      iVar1 = iVar3 - *(short *)(iVar2 + 0x7e);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < 0x80) {
        iVar3 = iVar3 - *(short *)(iVar2 + 0x80);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x80) {
          *(short *)(iVar2 + 0x7c) = *(short *)(param_1 + 0xb0);
          *(undefined2 *)(*(int *)(param_1 + 0x48) + 0x7e) = *(undefined2 *)(param_1 + 0xb2);
          *(undefined2 *)(*(int *)(param_1 + 0x48) + 0x80) = *(undefined2 *)(param_1 + 0xb4);
          *(undefined2 *)(param_1 + 0xb0) = 0;
          *(undefined2 *)(param_1 + 0xb2) = 0;
          *(undefined2 *)(param_1 + 0xb4) = 0;
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) & 0xffffffe0;
        }
      }
    }
  }
  return;
}
