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

extern int func_0204c980();
extern int func_0204c9c8();
extern int func_0204c9fc();

void func_0204cb40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (*(int *)(param_2 + 0xc) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  func_0204c9c8(*(undefined4 *)(param_1 + 0x14),uVar1,4,param_2,param_4);
  iVar4 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = *(int *)(param_1 + 0x38);
  }
  func_0204c980(iVar4,param_2);
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      iVar3 = iVar2 * 0xc;
      func_0204c9fc(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3),param_2);
      func_0204c980(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 + 4),param_2);
      func_0204c980(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  iVar4 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = *(int *)(param_1 + 0x24);
  }
  func_0204c980(iVar4,param_2);
  iVar2 = 0;
  if (iVar4 < 1) {
    return;
  }
  do {
    func_0204c9fc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4),param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar4);
  return;
}
