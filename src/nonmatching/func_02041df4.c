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

extern int func_0203d1f0();
extern int func_02040f74();
extern int func_02041a4c();
extern int func_020423ac();
extern int func_0204586c();
extern int func_0205bc9c();
extern int func_0x01ffa824();
extern int func_0x01ffb39c();
extern int func_0x01ffd7ec();

void func_02041df4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;

  if ((*(uint *)(param_1 + 0x124) & 0x80000000) == 0) {
    if ((*(uint *)(param_1 + 0x124) & 1) != 0) {
      iVar1 = func_020423ac();
      if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x124) & 0x8000) == 0)) {
        if (*(int *)(param_1 + 0x1dc) == 0) {
          func_02040f74((*(unsigned int *)0x02041f54));
          func_0x01ffd7ec((*(unsigned int *)0x02041f58));
          piVar2 = ((unsigned int)0x02041f5c);
          if ((*(uint *)(param_1 + 0x124) & 0x8000) == 0) {
            *(uint *)((*(unsigned int *)0x02041f5c) + 0x1c) = *(uint *)((*(unsigned int *)0x02041f5c) + 0x1c) & 0xfffffff7;
            func_0203d1f0(*piVar2);
          }
        }
        else {
          iVar1 = 0;
          do {
            piVar2 = *(int **)(param_1 + iVar1 * 4 + 0x1e4);
            if ((piVar2 != (int *)0x0) && ((piVar2[3] & 1U) != 0)) {
              (**(code **)(*piVar2 + 0x10))();
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 2);
          func_0x01ffd7ec((*(unsigned int *)0x02041f58));
        }
        func_0205bc9c();
        uVar4 = 0;
        do {
          iVar1 = param_1 + uVar4 * 4;
          *(undefined4 *)(iVar1 + 500) = *(undefined4 *)(iVar1 + 0x1ec);
          uVar3 = *(uint *)(iVar1 + 0x1ec) & 0xffffffe9;
          *(uint *)(iVar1 + 0x1ec) = uVar3;
          if (uVar3 == 0) {
            func_02041a4c(param_1,uVar4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
      }
      else {
        iVar1 = func_020423ac(param_1);
        if (iVar1 == 0) {
          func_0x01ffd7ec((*(unsigned int *)0x02041f58));
        }
      }
      if (((*(uint *)(*(unsigned int *)0x02041f60) & 1) != 0) || ((*(uint *)(param_1 + 0x124) & 0x100000) != 0)) {
        func_0x01ffb39c((uint *)(*(unsigned int *)0x02041f60),0,0);
      }
      if ((*(uint *)(param_1 + 0x124) & 0x200000) != 0) {
        func_0x01ffb39c((*(unsigned int *)0x02041f60),0,1);
      }
      if (((*(uint *)(*(unsigned int *)0x02041f60) & 1) == 0) && ((*(uint *)(param_1 + 0x124) & 0x100000) == 0)) {
        func_0x01ffa824((uint *)(*(unsigned int *)0x02041f60),0);
      }
      if ((*(uint *)(param_1 + 0x124) & 0x200000) == 0) {
        func_0x01ffa824((*(unsigned int *)0x02041f60),1);
      }
      func_0205bc9c();
    }
    if ((*(uint *)(param_1 + 0x124) & 4) != 0) {
      func_0204586c((*(unsigned int *)0x02041f64));
    }
  }
  return;
}
