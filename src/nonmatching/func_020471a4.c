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

extern int func_0204e284();
extern int func_0204e32c();

uint func_020471a4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  switch(param_2) {
  case 0:
    uVar1 = 0xfffffffd;
    goto LAB_020471e4;
  case 1:
    uVar1 = *(undefined4 *)(iVar3 + 0x44);
LAB_020471e4:
    *(undefined4 *)(iVar3 + 0x40) = uVar1;
    break;
  case 2:
    func_0204e32c();
    break;
  case 3:
    uVar2 = *(uint *)(iVar3 + 0x44) >> 10;
    break;
  case 4:
    uVar2 = *(uint *)(iVar3 + 0x44) & ((unsigned int)0x02047290);
    break;
  case 5:
    if (*(uint *)(iVar3 + 0x44) < (uint)(param_3 << 10)) {
      *(undefined4 *)(iVar3 + 0x40) = 0;
    }
    else {
      *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x44) + param_3 * -0x400;
    }
    if (*(uint *)(iVar3 + 0x40) <= *(uint *)(iVar3 + 0x44)) {
      do {
        func_0204e284(param_1);
        if (*(char *)(iVar3 + 0x15) == '\0') {
          return 1;
        }
      } while (*(uint *)(iVar3 + 0x40) <= *(uint *)(iVar3 + 0x44));
    }
    break;
  case 6:
    uVar2 = *(uint *)(iVar3 + 0x50);
    *(int *)(iVar3 + 0x50) = param_3;
    break;
  case 7:
    uVar2 = *(uint *)(iVar3 + 0x54);
    *(int *)(iVar3 + 0x54) = param_3;
    break;
  default:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
