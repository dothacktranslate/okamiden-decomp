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

int func_02018f50(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  uVar1 = (uint)(byte)*param_1;
  iVar3 = uVar1 - (byte)*param_2;
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar4 = (uint)param_1 & 3;
  if (((uint)param_2 & 3) == uVar4) {
    if (uVar4 != 0) {
      if (uVar1 == 0) {
        return 0;
      }
      for (iVar3 = 3 - uVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        iVar2 = (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
        if (iVar2 != 0) {
          return iVar2;
        }
        if (*(byte *)param_1 == 0) {
          return 0;
        }
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
    }
    uVar1 = *param_1;
    if ((uVar1 + ((unsigned int)0x0201905c) & ~uVar1 & ((unsigned int)0x02019060)) == 0) {
      if (uVar1 == *param_2) {
        do {
          param_1 = param_1 + 1;
          uVar1 = *param_1;
          param_2 = param_2 + 1;
          if ((uVar1 + ((unsigned int)0x0201905c) & ((unsigned int)0x02019060)) != 0) goto LAB_02019018;
        } while (uVar1 == *param_2);
      }
      param_1 = (uint *)((int)param_1 + -1);
      param_2 = (uint *)((int)param_2 + -1);
    }
    else {
LAB_02019018:
      uVar1 = (uint)(byte)*param_1;
      iVar3 = uVar1 - (byte)*param_2;
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  if (uVar1 == 0) {
    return 0;
  }
  do {
    param_1 = (uint *)((int)param_1 + 1);
    param_2 = (uint *)((int)param_2 + 1);
    iVar3 = (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
    if (iVar3 != 0) {
      return iVar3;
    }
  } while (*(byte *)param_1 != 0);
  return 0;
}
