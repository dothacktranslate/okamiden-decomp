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

extern int func_0204d1d8();
extern int func_0204d814();

void func_0204d8a0(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;

  if ((3 < *(int *)(param_2 + 0x4c)) && ((*(byte *)(*(int *)(param_2 + 0x48) + 5) & 3) != 0)) {
    func_0204d1d8();
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  piVar2 = *(int **)(param_2 + 8);
  while (uVar3 <= *(uint *)(param_2 + 0x14)) {
    puVar1 = (uint *)(uVar3 + 8);
    uVar3 = uVar3 + 0x18;
    if (piVar2 < (int *)*puVar1) {
      piVar2 = (int *)*puVar1;
    }
  }
  piVar4 = *(int **)(param_2 + 0x20);
  if (piVar4 < *(int **)(param_2 + 8)) {
    do {
      if ((3 < piVar4[1]) && ((*(byte *)(*piVar4 + 5) & 3) != 0)) {
        func_0204d1d8(param_1);
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 < *(int **)(param_2 + 8));
  }
  for (; piVar4 <= piVar2; piVar4 = piVar4 + 2) {
    piVar4[1] = 0;
  }
  func_0204d814(param_2,piVar2);
  return;
}
