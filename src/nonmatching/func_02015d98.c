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

int func_02015d98(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 != 0) {
    uVar3 = param_1 & 3;
    iVar1 = 0;
    if (uVar3 == (param_2 & 3)) {
      if (uVar3 != 0) {
        for (; (iVar1 + uVar3 < 4 && (iVar1 < param_3)); iVar1 = iVar1 + 1) {
          uVar2 = (uint)*(byte *)(param_1 + iVar1);
          if ((uVar2 != *(byte *)(param_2 + iVar1)) || (uVar2 == 0)) {
            return uVar2 - *(byte *)(param_2 + iVar1);
          }
        }
      }
      while (((iVar1 <= param_3 + -4 &&
              (uVar3 = *(uint *)(param_1 + iVar1), uVar3 == *(uint *)(param_2 + iVar1))) &&
             (((uVar3 & ((unsigned int)0x02015e7c)) + ((unsigned int)0x02015e7c) | uVar3 | ((unsigned int)0x02015e7c)) == 0xffffffff))) {
        iVar1 = iVar1 + 4;
      }
    }
    for (; iVar1 < param_3; iVar1 = iVar1 + 1) {
      uVar3 = (uint)*(byte *)(param_1 + iVar1);
      if ((uVar3 != *(byte *)(param_2 + iVar1)) || (uVar3 == 0)) {
        return uVar3 - *(byte *)(param_2 + iVar1);
      }
    }
  }
  return 0;
}
