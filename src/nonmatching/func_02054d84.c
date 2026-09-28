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

extern int func_0201be58();
extern int func_0201d028();
extern int func_0201df60();
extern int func_0201e61c();
extern int func_0201f190();
extern int func_0201f370();
extern int func_0201f5a0();
extern int func_0201f824();
extern int func_0204b820();
extern int func_0205411c();
extern int func_020546b0();

void func_02054d84(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];

  puVar1 = (undefined4 *)func_0205411c(param_3,auStack_24);
  if ((puVar1 == (undefined4 *)0x0) ||
     (puVar2 = (undefined4 *)func_0205411c(param_4,auStack_2c), puVar2 == (undefined4 *)0x0)) {
    iVar4 = func_020546b0(param_1,param_3,param_4,param_2,param_5);
    if (iVar4 != 0) {
      return;
    }
    func_0204b820(param_1,param_3,param_4);
  }
  else {
    uVar5 = *puVar1;
    uVar6 = *puVar2;
    switch(param_5) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      uVar5 = func_0201f370(uVar5,uVar6);
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    case 6:
      uVar5 = func_0201f5a0(uVar5,uVar6);
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    case 7:
      uVar5 = func_0201f190(uVar5,uVar6);
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    case 8:
      uVar5 = func_0201f824(uVar5,uVar6);
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    case 9:
      func_0201f824(uVar5,uVar6);
      func_0201e61c();
      func_0201d028();
      uVar3 = func_0201df60();
      uVar6 = func_0201f190(uVar6,uVar3);
      uVar5 = func_0201f5a0(uVar5,uVar6);
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    case 10:
      uVar7 = func_0201e61c(uVar5);
      uVar8 = func_0201e61c(uVar6);
      func_0201be58((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                         (int)((ulonglong)uVar8 >> 0x20));
      uVar5 = func_0201df60();
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    case 0xb:
      uVar5 = func_0201f5a0(0,uVar5);
      *param_2 = uVar5;
      param_2[1] = 3;
      return;
    }
  }
  return;
}
