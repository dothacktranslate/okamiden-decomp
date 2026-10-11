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

extern int func_020071d0();
extern int func_020099f0();
extern int func_02013c84();
extern int func_02021f80();
extern int func_02033028();

undefined4 func_02022930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_21c;
  undefined1 auStack_218 [512];
  undefined4 uStack_18;

  uStack_18 = param_4;
  iVar1 = func_02021f80();
  if (iVar1 == 0) {
    func_020071d0(1000);
    return 9;
  }
  iVar1 = 0;
  func_020099f0(auStack_218,0,0x200);
  uVar2 = func_02013c84();
  uVar2 = uVar2 >> 9;
  uVar3 = func_02013c84();
  uVar6 = 0;
  if (uVar2 != 0) {
    local_21c = 0x1fc;
    do {
      uVar5 = 0x200;
      if (uVar6 == uVar2 - 1) {
        uVar5 = local_21c;
      }
      iVar4 = func_02033028((*(unsigned int *)0x02022a04),iVar1,auStack_218,uVar5,1);
      if (iVar4 == 0) {
        iVar1 = func_02021f80(param_1);
        if (iVar1 != 0) {
          return 4;
        }
        return 9;
      }
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + 0x200;
    } while (uVar6 < uVar2);
  }
  if ((uVar3 & 0x1ff) != 0) {
    iVar1 = func_02033028((*(unsigned int *)0x02022a04),iVar1,auStack_218,uVar3 & 0x1ff,1);
    if (iVar1 == 0) {
      iVar1 = func_02021f80(param_1);
      if (iVar1 != 0) {
        return 4;
      }
      return 9;
    }
  }
  return 0;
}
