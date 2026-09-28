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

extern int func_0204d968();
extern int func_0204dcd0();
extern int func_0204dd80();
extern int func_0204ddf8();
extern int func_0204df84();
extern int func_0204e080();

undefined4 func_0204e148(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;

  piVar3 = *(int **)(param_1 + 0x10);
  switch(*(undefined1 *)((int)piVar3 + 0x15)) {
  case 0:
    func_0204df84();
    return 0;
  case 1:
    break;
  case 2:
    iVar5 = piVar3[6];
    iVar4 = piVar3[0x11];
    piVar3[6] = iVar5 + 1;
    func_0204dcd0(param_1,*piVar3 + iVar5 * 4,0xfffffffd);
    if (piVar3[2] <= piVar3[6]) {
      *(undefined1 *)((int)piVar3 + 0x15) = 3;
    }
    piVar3[0x12] = piVar3[0x12] - (iVar4 - piVar3[0x11]);
    return 10;
  case 3:
    iVar5 = piVar3[0x11];
    piVar2 = (int *)func_0204dcd0(param_1,piVar3[8],0x28);
    piVar3[8] = (int)piVar2;
    if (*piVar2 == 0) {
      func_0204dd80(param_1);
      *(undefined1 *)((int)piVar3 + 0x15) = 4;
    }
    piVar3[0x12] = piVar3[0x12] - (iVar5 - piVar3[0x11]);
    return 400;
  case 4:
    if (piVar3[0xc] != 0) {
      func_0204ddf8();
      if (100 < (uint)piVar3[0x12]) {
        piVar3[0x12] = piVar3[0x12] - 100;
      }
      return 100;
    }
    *(undefined1 *)((int)piVar3 + 0x15) = 0;
    piVar3[0x13] = 0;
    return 0;
  default:
    return 0;
  }
  if (piVar3[9] != 0) {
    uVar1 = func_0204d968(piVar3);
    return uVar1;
  }
  func_0204e080();
  return 0;
}
