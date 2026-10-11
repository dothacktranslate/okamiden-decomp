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

extern int func_02008e58();
extern int func_02056b88();
extern int func_0205aac4();

undefined4 func_0205a900(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if (param_1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    if ((param_1 == (int *)0x0) || (*param_1 != ((unsigned int)0x0205aab4))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((param_1 == (int *)0x0) || (*(ushort *)((int)param_1 + 6) < ((unsigned int)0x0205aab8))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
  }
  if (!bVar2) {
    if (param_1 == (int *)0x0) {
      bVar2 = false;
    }
    else if (*param_1 == ((unsigned int)0x0205aab4)) {
      if ((param_1 == (int *)0x0) || (*(ushort *)((int)param_1 + 6) < ((unsigned int)0x0205aabc))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (param_1 == (int *)0x0) {
        bVar1 = false;
      }
      else if (*param_1 == ((unsigned int)0x0205aab4)) {
        if ((param_1 == (int *)0x0) || (*(ushort *)((int)param_1 + 6) < 0x100)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        func_02008e58();
      }
      bVar1 = true;
    }
  }
  func_0205aac4(param_1);
  iVar3 = func_02056b88(param_1,((unsigned int)0x0205aac0));
  if (iVar3 != 0) {
    *param_2 = iVar3 + 8;
    if (bVar1) {
      *(undefined1 *)(*(int *)(iVar3 + 0x10) + 7) = 0;
    }
    return 1;
  }
  *param_2 = 0;
  return 0;
}
