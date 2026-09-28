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

extern int func_0202fec0();

void func_0202fc7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  uVar1 = *(uint *)(param_1 + 0xf8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 4) != 0) {
          iVar2 = (*(unsigned int *)0x0202fe0c);
          iVar4 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202fe08) + 0x5c) + 0x50);
          piVar3 = (int *)(iVar2 + 0x68);
          *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x80000000;
          if ((*(uint *)(param_1 + 0xf8) & 0x400) == 0) {
            if ((*(uint *)(param_1 + 0xf8) & 0x100) != 0) {
              func_0202fec0(param_1,piVar3,param_1 + 200,0x100,param_4);
            }
          }
          else {
            *piVar3 = *piVar3 + *(int *)(param_1 + 0xec);
            *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + *(int *)(param_1 + 0xf0);
            *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + *(int *)(param_1 + 0xf4);
          }
        }
        if ((*(uint *)(param_1 + 0xf8) & 8) != 0) {
          iVar2 = (*(unsigned int *)0x0202fe0c);
          piVar3 = (int *)(iVar2 + 0x5c);
          iVar4 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202fe08) + 0x5c) + 0x50);
          *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x80000000;
          uVar1 = *(uint *)(param_1 + 0xf8);
          if ((uVar1 & 0x400) != 0) {
            *piVar3 = *piVar3 + *(int *)(param_1 + 0xe0);
            *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + *(int *)(param_1 + 0xe4);
            *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + *(int *)(param_1 + 0xe8);
            return;
          }
          if ((uVar1 & 0x100) != 0) {
            func_0202fec0(param_1,piVar3,param_1 + 0xbc,uVar1,param_4);
          }
        }
      }
      else {
        iVar2 = (*(unsigned int *)0x0202fe0c);
        iVar4 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202fe08) + 0x5c) + 0x50);
        *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x80000000;
        if ((*(uint *)(param_1 + 0xf8) & 0x400) != 0) {
          *(int *)(*(int *)(param_1 + 0x48) + 100) =
               *(int *)(*(int *)(param_1 + 0x48) + 100) + *(int *)(param_1 + 0xd4);
          *(int *)(*(int *)(param_1 + 0x48) + 0x68) =
               *(int *)(*(int *)(param_1 + 0x48) + 0x68) + *(int *)(param_1 + 0xd8);
          *(int *)(*(int *)(param_1 + 0x48) + 0x6c) =
               *(int *)(*(int *)(param_1 + 0x48) + 0x6c) + *(int *)(param_1 + 0xdc);
          return;
        }
        if ((*(uint *)(param_1 + 0xf8) & 0x100) != 0) {
          func_0202fec0(param_1,iVar2 + 0x5c,param_1 + 0xa4,0x100,param_4);
          return;
        }
      }
    }
    else {
      if ((uVar1 & 0x400) != 0) {
        *(int *)(*(int *)(param_1 + 0x48) + 100) =
             *(int *)(*(int *)(param_1 + 0x48) + 100) + *(int *)(param_1 + 0xd4);
        *(int *)(*(int *)(param_1 + 0x48) + 0x68) =
             *(int *)(*(int *)(param_1 + 0x48) + 0x68) + *(int *)(param_1 + 0xd8);
        *(int *)(*(int *)(param_1 + 0x48) + 0x6c) =
             *(int *)(*(int *)(param_1 + 0x48) + 0x6c) + *(int *)(param_1 + 0xdc);
        return;
      }
      if ((uVar1 & 0x100) != 0) {
        func_0202fec0(param_1,*(int *)(param_1 + 0x48) + 100,param_1 + 0xa4,0x100,param_4);
        return;
      }
    }
  }
  return;
}
