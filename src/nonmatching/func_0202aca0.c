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

extern int func_02024cc4();
extern int func_02025114();
extern int func_02025260();
extern int func_020252e8();
extern int func_02025708();
extern int func_0202582c();
extern int func_02025950();
extern int func_02025b28();
extern int func_02025be8();
extern int func_02025c38();
extern int func_02026000();
extern int func_02026540();
extern int func_02027220();
extern int func_02027ed8();
extern int func_02028460();
extern int func_020287c0();
extern int func_02028918();
extern int func_02028b88();
extern int func_02028de8();
extern int func_02028e80();
extern int func_02028fac();
extern int func_02029178();
extern int func_0202952c();
extern int func_02029920();
extern int func_02029954();
extern int func_02029c94();
extern int func_02029ea4();
extern int func_02029f18();
extern int func_0202a2c4();
extern int func_0202a788();
extern int func_0202a8f0();
extern int func_020461e8();
extern int func_020465d8();

undefined4 func_0202aca0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  iVar1 = func_020465d8(param_1,1);
  func_020461e8(param_1);
  switch(iVar1 >> 8) {
  case 1:
    uVar2 = func_02024cc4(param_1);
    break;
  case 2:
    uVar2 = func_02025114(param_1);
    break;
  case 3:
    uVar2 = func_02025260(param_1);
    break;
  case 4:
    uVar2 = func_020252e8(param_1);
    break;
  case 5:
    uVar2 = func_02025708(param_1);
    break;
  case 6:
    uVar2 = func_0202582c(param_1);
    break;
  case 7:
    uVar2 = func_02025950(param_1);
    break;
  case 8:
    uVar2 = func_02025b28(param_1);
    break;
  case 9:
    uVar2 = func_02025be8(param_1);
    break;
  case 10:
    uVar2 = func_02025c38(param_1);
    break;
  case 0xb:
    uVar2 = func_02026000(param_1);
    break;
  case 0xc:
    uVar2 = func_02026540(param_1);
    break;
  case 0xd:
    uVar2 = func_02027220(param_1);
    break;
  case 0xe:
    uVar2 = func_02027ed8(param_1);
    break;
  case 0xf:
    uVar2 = func_02028460(param_1);
    break;
  case 0x10:
    uVar2 = func_020287c0(param_1);
    break;
  case 0x11:
    uVar2 = func_02028918(param_1);
    break;
  case 0x12:
    uVar2 = func_02028b88(param_1);
    break;
  case 0x13:
    uVar2 = func_02028de8(param_1);
    break;
  case 0x14:
    uVar2 = func_02028e80(param_1);
    break;
  case 0x15:
    uVar2 = func_02028fac(param_1);
    break;
  case 0x16:
    uVar2 = func_02029178(param_1);
    break;
  case 0x17:
    uVar2 = func_0202952c(param_1);
    break;
  case 0x18:
    uVar2 = func_02029920(param_1);
    break;
  case 0x19:
    uVar2 = func_02029954(param_1);
    break;
  case 0x1a:
    uVar2 = func_02029c94(param_1);
    break;
  case 0x1b:
    uVar2 = func_02029ea4(param_1);
    break;
  case 0x1c:
    uVar2 = func_02029f18(param_1);
    break;
  case 0x1d:
    uVar2 = func_0202a2c4(param_1);
    break;
  case 0x1e:
    uVar2 = func_0202a788(param_1);
    break;
  case 0x1f:
    uVar2 = func_0202a8f0(param_1);
  }
  return uVar2;
}
