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

extern int func_02015a9c();
extern int func_02015cbc();
extern int func_0205ef10();

void func_0204128c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;

  puVar3 = (uint *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  *(int *)(param_1 + 0x34) = param_2;
  uStack_18 = param_4;
  func_02015a9c(&local_28,param_3);
  if (param_2 != 0) {
    puVar3 = (uint *)func_0205ef10(param_2 + 0x3c,&local_28);
  }
  puVar4 = &local_28;
  if (puVar3 == (uint *)0x0) {
    puVar4 = &uStack_18;
  }
  *(uint **)(param_1 + 0x38) = puVar3;
  if (puVar3 != (uint *)0x0) {
    if ((*puVar3 & 0x1c000000) != 0x1c000000) {
      uVar1 = func_02015cbc(puVar4,((unsigned int)0x02041358));
      if (param_2 != 0) {
        uVar1 = (uint)*(ushort *)(param_2 + 0x34);
      }
      if (param_2 != 0 && uVar1 != 0) {
        uVar2 = func_0205ef10(param_2 + uVar1,puVar4);
      }
      else {
        uVar2 = 0;
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
    uVar1 = ((unsigned int)0x0204135c);
    *(uint *)(param_1 + 0x40) = *(uint *)(*(int *)(param_1 + 0x38) + 4) & ((unsigned int)0x0204135c);
    *(uint *)(param_1 + 0x44) = uVar1 & *(uint *)(*(int *)(param_1 + 0x38) + 4) >> 0xb;
    return;
  }
  return;
}
