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

extern int func_0200653c();
extern int func_0200656c();
extern int func_02039068();
extern int func_02063740();

void func_020390f8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_34 [2];
  undefined4 *local_2c [2];
  int local_24 [4];

  if ((*(uint *)(param_1 + 8) & 1) == 1) {
    uVar5 = 0;
    piVar3 = (int *)*(int *)(param_1 + 0x10);
    while (piVar3 != (int *)(param_1 + 0x10)) {
      if (piVar3[2] < 4) {
        uVar5 = uVar5 + piVar3[5];
        if (((unsigned int)0x020391f4) <= uVar5) break;
        func_0200656c(1);
        iVar1 = func_02063740(piVar3[2],piVar3[3],piVar3[4],piVar3[5]);
        func_0200653c(1);
        if (iVar1 == 0) {
          return;
        }
        func_02039068(local_24,param_1,piVar3 + -1);
        piVar3 = (int *)local_24[0];
      }
      else {
        piVar3 = (int *)*piVar3;
      }
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    if (puVar4 != (undefined4 *)(param_1 + 0x10)) {
      do {
        if ((int)puVar4[2] < 4) {
          puVar4 = (undefined4 *)*puVar4;
        }
        else {
          uVar5 = uVar5 + puVar4[5];
          if (((unsigned int)0x020391f8) <= uVar5) {
            return;
          }
          func_0200656c(1);
          iVar1 = func_02063740(puVar4[2],puVar4[3],puVar4[4],puVar4[5]);
          func_0200653c(1);
          if (iVar1 == 0) {
            return;
          }
          func_02039068(local_2c,param_1,puVar4 + -1);
          puVar4 = local_2c[0];
        }
        if (puVar4 == (undefined4 *)(param_1 + 0x10)) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    while (iVar1 != param_1 + 0x10) {
      func_0200656c(1);
      iVar2 = func_02063740(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                           *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
      func_0200653c(1);
      if (iVar2 == 0) {
        return;
      }
      func_02039068(local_34,param_1,iVar1 + -4);
      iVar1 = local_34[0];
    }
  }
  return;
}
