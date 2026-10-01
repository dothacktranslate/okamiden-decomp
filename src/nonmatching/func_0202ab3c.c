
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef signed char sbyte;

typedef unsigned short ushort;
typedef unsigned short undefined2;
typedef signed short short2;

typedef unsigned int uint;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned int uint3;
typedef signed int int3;
typedef signed int int4;

typedef unsigned long long ulonglong;
typedef unsigned long long undefined8;
typedef signed long long longlong;

typedef unsigned char bool;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

typedef int code();

#define SUB21(x,o) \
    ((unsigned char)(((unsigned short)(x)) >> ((o) * 8)))

#define SUB22(x,o) \
    ((unsigned short)(((unsigned short)(x)) >> ((o) * 8)))

#define SUB31(x,o) \
    ((unsigned char)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB32(x,o) \
    ((unsigned short)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB33(x,o) \
    ((((unsigned int)(x)) >> ((o) * 8)) & 0x00ffffffU)

#define SUB41(x,o) \
    ((unsigned char)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB42(x,o) \
    ((unsigned short)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB43(x,o) \
    ((((unsigned int)(x)) >> ((o) * 8)) & 0x00ffffffU)

#define SUB44(x,o) \
    ((unsigned int)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB81(x,o) \
    ((unsigned char)(((unsigned long long)(x)) >> ((o) * 8)))

#define SUB82(x,o) \
    ((unsigned short)(((unsigned long long)(x)) >> ((o) * 8)))

#define SUB84(x,o) \
    ((unsigned int)(((unsigned long long)(x)) >> ((o) * 8)))

#define CONCAT11(a,b) \
    ((((unsigned short)(a)) << 8) | ((unsigned char)(b)))

#define CONCAT12(a,b) \
    ((((unsigned int)(a)) << 16) | ((unsigned short)(b)))

#define CONCAT21(a,b) \
    ((((unsigned int)(a)) << 8) | ((unsigned char)(b)))

#define CONCAT22(a,b) \
    ((((unsigned int)(a)) << 16) | ((unsigned short)(b)))

#define CONCAT13(a,b) \
    ((((unsigned int)(a)) << 24) | ((unsigned int)(b) & 0x00ffffffU))

#define CONCAT31(a,b) \
    ((((unsigned int)(a) & 0x00ffffffU) << 8) | ((unsigned char)(b)))

#define CONCAT44(a,b) \
    ((((unsigned long long)(a)) << 32) | ((unsigned int)(b)))

#define CARRY1(a,b) \
    (((unsigned int)(unsigned char)(a) + \
      (unsigned int)(unsigned char)(b)) > 0xffU)

#define CARRY2(a,b) \
    (((unsigned int)(unsigned short)(a) + \
      (unsigned int)(unsigned short)(b)) > 0xffffU)

#define CARRY4(a,b) \
    (((unsigned int)(a)) > (0xffffffffU - (unsigned int)(b)))

#define BORROW1(a,b) \
    ((unsigned char)(a) < (unsigned char)(b))

#define BORROW2(a,b) \
    ((unsigned short)(a) < (unsigned short)(b))

#define BORROW4(a,b) \
    ((unsigned int)(a) < (unsigned int)(b))

#define SBORROW4(a,b) \
    (((int)(a) < 0 && (int)(b) > 0 && (int)((a)-(b)) > 0) || \
     ((int)(a) > 0 && (int)(b) < 0 && (int)((a)-(b)) < 0))

#define SCARRY4(a,b) \
    (((int)(a) > 0 && (int)(b) > 0 && (int)((a)+(b)) < 0) || \
     ((int)(a) < 0 && (int)(b) < 0 && (int)((a)+(b)) > 0))

#define _REG_A_DISPCNT \
    (*(volatile unsigned int *)0x04000000)

#define _REG_A_DISPSTAT \
    (*(volatile unsigned short *)0x04000004)

#define _REG_VCOUNT \
    (*(volatile unsigned short *)0x04000006)

#define _REG_A_MASTER_BRIGHT \
    (*(volatile unsigned short *)0x0400006c)

#define REG_B_DISPCNT \
    (*(volatile unsigned int *)0x04001000)

#define _REG_B_DISPCNT \
    (*(volatile unsigned int *)0x04001000)

#define VRAMCNT_E \
    (*(volatile unsigned char *)0x04000244)

#define _IPCFIFORECV \
    (*(volatile unsigned int *)0x04100000)

#define DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned char *)0x040000b0)

#define _DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned int *)0x040000b0)


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


undefined4 func_0202ab3c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  func_020461e8();
  iVar1 = func_020465d8(param_1,1);
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
