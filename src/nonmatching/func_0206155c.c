
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





void func_0206155c(undefined1 *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint uVar2;
  uint uVar1;

  if ((param_4 & 4) == 0) {
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    param_1[1] = *param_2;
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  *param_1 = *param_1 | 0x18;
  return;
}
