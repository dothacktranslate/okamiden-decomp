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

extern int func_0203c024();
extern int func_0203c3bc();
extern int func_02042960();
extern int func_020433d4();
extern int func_020433dc();
extern int func_0204362c();

undefined4 func_02042bc4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_18;

  param_2 = param_2 * 0xbc;
  local_18 = param_4;
  iVar1 = func_0203c3bc((*(unsigned int *)0x02042c80),*(undefined4 *)(*(int *)(param_1 + 4) + param_2 + 0x78));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) != 6)) {
    func_0203c024();
    local_18 = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = *(int *)(param_1 + 4) + 0x84;
    *(uint *)(iVar1 + param_2) = ((unsigned int)0x02042c84) & *(uint *)(iVar1 + param_2);
    *(undefined4 *)(((unsigned int)0x02042c88) + 4) = 0;
    uVar2 = func_020433dc(&local_18,*(undefined4 *)(*(int *)(param_1 + 4) + param_2 + 0x7c));
    *(undefined4 *)(*(int *)(param_1 + 4) + param_2 + 0x74) = uVar2;
    iVar5 = *(int *)(param_1 + 4) + param_2;
    iVar1 = *(int *)(iVar5 + 0x74);
    if (iVar1 == 0) {
      *(undefined4 *)(iVar5 + 8) = 0;
      func_02042960(param_1,*(int *)(param_1 + 4) + param_2);
      return 0;
    }
    func_0204362c(iVar1,0);
    if (*(int *)(((unsigned int)0x02042c88) + 4) != 0) {
      iVar1 = *(int *)(param_1 + 4) + 0x84;
      *(uint *)(iVar1 + param_2) = *(uint *)(iVar1 + param_2) | 0x100;
    }
    piVar3 = (int *)func_020433d4(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 + 0x74));
    uVar6 = 4;
    if ((*(uint *)(*piVar3 + 0x24) & 4) == 0) {
      if ((*(uint *)(*piVar3 + 0x24) & 8) == 0) {
        return 1;
      }
      iVar1 = *(int *)(param_1 + 4) + 0x84;
      uVar4 = *(uint *)(iVar1 + param_2);
    }
    else {
      uVar4 = 8;
      iVar1 = *(int *)(param_1 + 4) + 0x84;
      uVar6 = *(uint *)(iVar1 + param_2);
    }
    *(uint *)(iVar1 + param_2) = uVar4 | uVar6;
    return 1;
  }
  return 0;
}
