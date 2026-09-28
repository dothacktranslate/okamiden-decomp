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

extern int func_0201e9b4();

void func_0203b7a4(uint *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;

  uVar4 = param_2 >> 0xc;
  param_4 = param_4 + param_3[1];
  uVar3 = *param_3;
  if ((uVar3 & 0xc0000000) != 0) {
    uVar1 = ((unsigned int)0x0203b890) & uVar3;
    if ((uVar3 & 0x40000000) == 0) {
      if ((uVar4 & 3) == 0) {
        uVar4 = uVar4 >> 2;
      }
      else {
        if (uVar4 <= uVar1 >> 0x10) {
          if ((uVar4 & 1) != 0) {
            if ((uVar4 & 2) == 0) {
              uVar1 = uVar4 >> 2;
              uVar4 = uVar1 + 1;
            }
            else {
              uVar4 = uVar4 >> 2;
              uVar1 = uVar4 + 1;
            }
            if ((uVar3 & 0x20000000) != 0) {
              *param_1 = *(short *)(param_4 + uVar1 * 2) * 3 + (int)*(short *)(param_4 + uVar4 * 2)
                         >> 2;
              return;
            }
            iVar2 = *(int *)(param_4 + uVar1 * 4);
            lVar5 = func_0201e9b4(iVar2,iVar2 >> 0x1f,3,0);
            lVar5 = lVar5 + *(int *)(param_4 + uVar4 * 4);
            *param_1 = (uint)lVar5 >> 2 | (int)((ulonglong)lVar5 >> 0x20) * 0x40000000;
            return;
          }
          uVar4 = uVar4 >> 2;
          goto LAB_0203b84a;
        }
        uVar4 = (uVar1 >> 0x12) + (uVar4 & 3);
      }
    }
    else if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 >> 1;
    }
    else {
      if (uVar4 <= uVar1 >> 0x10) {
        uVar4 = uVar4 >> 1;
LAB_0203b84a:
        if ((uVar3 & 0x20000000) != 0) {
          *param_1 = (int)*(short *)(param_4 + uVar4 * 2) + (int)*(short *)(param_4 + uVar4 * 2 + 2)
                     >> 1;
          return;
        }
        *param_1 = (*(int *)(param_4 + uVar4 * 4) >> 1) + (*(int *)(param_4 + uVar4 * 4 + 4) >> 1);
        return;
      }
      uVar4 = (uVar1 >> 0x11) + 1;
    }
  }
  if ((uVar3 & 0x20000000) != 0) {
    *param_1 = (int)*(short *)(param_4 + uVar4 * 2);
    return;
  }
  *param_1 = *(uint *)(param_4 + uVar4 * 4);
  return;
}
