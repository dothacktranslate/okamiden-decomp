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

void func_0205facc(uint *param_1,int param_2,uint *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = *param_3;
  uVar3 = param_2 >> 0xc;
  param_4 = param_4 + param_3[1];
  if ((uVar4 & 0xc0000000) != 0) {
    uVar2 = uVar4 & ((unsigned int)0x0205fc18);
    if ((uVar4 & 0x40000000) == 0) {
      if ((uVar3 & 3) == 0) {
        uVar3 = uVar3 >> 2;
      }
      else {
        if (uVar3 <= uVar2 >> 0x10) {
          if ((uVar3 & 1) != 0) {
            if ((uVar3 & 2) == 0) {
              uVar2 = uVar3 >> 2;
              uVar3 = uVar2 + 1;
            }
            else {
              uVar3 = uVar3 >> 2;
              uVar2 = uVar3 + 1;
            }
            if ((uVar4 & 0x20000000) == 0) {
              uVar4 = *(uint *)(param_4 + uVar2 * 4);
              lVar1 = (ulonglong)uVar4 * 3;
              uVar2 = (uint)lVar1;
              uVar3 = *(uint *)(param_4 + uVar3 * 4);
              *param_1 = uVar2 + uVar3 >> 2 |
                         (((int)uVar4 >> 0x1f) * 3 + (int)((ulonglong)lVar1 >> 0x20) +
                          ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3)) * 0x40000000;
              return;
            }
            *param_1 = *(short *)(param_4 + uVar2 * 2) * 3 + (int)*(short *)(param_4 + uVar3 * 2) >>
                       2;
            return;
          }
          uVar3 = uVar3 >> 2;
          goto LAB_0205fbc0;
        }
        uVar3 = (uVar3 & 3) + (uVar2 >> 0x12);
      }
    }
    else if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 >> 1;
    }
    else {
      if (uVar3 <= uVar2 >> 0x10) {
        uVar3 = uVar3 >> 1;
LAB_0205fbc0:
        if ((uVar4 & 0x20000000) == 0) {
          uVar3 = (*(int *)(param_4 + uVar3 * 4 + 4) >> 1) + (*(int *)(param_4 + uVar3 * 4) >> 1);
        }
        else {
          uVar3 = (int)*(short *)(param_4 + uVar3 * 2) + (int)*(short *)(param_4 + uVar3 * 2 + 2) >>
                  1;
        }
        *param_1 = uVar3;
        return;
      }
      uVar3 = (uVar2 >> 0x11) + 1;
    }
  }
  if ((uVar4 & 0x20000000) == 0) {
    *param_1 = *(uint *)(param_4 + uVar3 * 4);
  }
  else {
    *param_1 = (int)*(short *)(param_4 + uVar3 * 2);
  }
  return;
}
