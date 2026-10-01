
#ifndef OKAMIDEN_GHIDRA_RECOVERY_HELPERS
#define OKAMIDEN_GHIDRA_RECOVERY_HELPERS

#ifndef SUB42
#define SUB42(x,o) \
    ((unsigned short)( \
        ((unsigned int)(x)) >> \
        ((unsigned int)(o) * 8U)))
#endif

#ifndef SUB43
#define SUB43(x,o) \
    ((((unsigned int)(x)) >> \
      ((unsigned int)(o) * 8U)) & \
     0x00ffffffU)
#endif

#endif


#ifndef OKAMIDEN_DS_REGISTER_COMPAT
#define OKAMIDEN_DS_REGISTER_COMPAT

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

#define _D_ENGINE_A \
    (*(volatile unsigned char *)0x04000000)

/*
 * DMA_CHANNEL_0_to_3 is deliberately byte-sized here:
 * existing Ghidra output takes its address and adds byte
 * offsets before casting back to uint *.
 */
#define DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned char *)0x040000b0)

#define _DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned int *)0x040000b0)

#endif


#ifndef OKAMIDEN_GHIDRA_ODD_TYPES
#define OKAMIDEN_GHIDRA_ODD_TYPES

typedef unsigned int undefined3;
typedef int int3;

#endif


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

extern int func_0200522c();

void func_020054c8(int param_1)

{
  ushort *puVar1;
  undefined1 *puVar2;

  puVar1 = ((unsigned int)0x020055e0);
  (*(unsigned int *)0x020055e0) = ~(ushort)param_1 & ((*(unsigned int *)0x020055e0) | ((unsigned int *)0x020055e0)[2]);
  puVar1[2] = (ushort)param_1;
  puVar2 = ((unsigned int)0x020055e4);
  if (0x30 < param_1) {
    if (param_1 < 0x51) {
      if (param_1 < 0x50) {
        if (param_1 == 0x40) {
          (*(unsigned int *)0x020055e4) = 0x82;
        }
      }
      else {
        (*(unsigned int *)0x020055e4) = 0x92;
        puVar2[-2] = 0x82;
      }
      goto switchD_02005510_default;
    }
    if (param_1 < 0x61) {
      if (param_1 != 0x60) goto switchD_02005510_default;
      (*(unsigned int *)0x020055e4) = 0x8a;
      puVar2 = ((unsigned int)0x020055f0);
      goto LAB_020055cc;
    }
    if (param_1 != 0x70) goto switchD_02005510_default;
    (*(unsigned int *)0x020055e4) = 0x9a;
LAB_02005594:
    (*(unsigned int *)0x020055f0) = 0x92;
    puVar2 = ((unsigned int)0x020055f4);
    goto LAB_020055cc;
  }
  if (0x2f < param_1) goto LAB_02005594;
  if (0x10 < param_1) {
    puVar2 = ((unsigned int)0x020055f0);
    if (param_1 != 0x20) goto switchD_02005510_default;
    goto LAB_020055cc;
  }
  puVar2 = ((unsigned int)0x020055f4);
  if (0xf < param_1) goto LAB_020055cc;
  switch(param_1) {
  case 0:
    goto switchD_02005510_default;
  case 1:
    puVar2 = ((unsigned int)0x020055ec);
    break;
  case 2:
    puVar2 = ((unsigned int)0x020055e8);
    break;
  case 3:
    (*(unsigned int *)0x020055e8) = 0x8a;
    puVar2 = ((unsigned int)0x020055ec);
    break;
  default:
    goto switchD_02005510_default;
  }
LAB_020055cc:
  *puVar2 = 0x82;
switchD_02005510_default:
  func_0200522c((*(unsigned int *)0x020055e0));
  return;
}
