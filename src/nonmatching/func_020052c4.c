
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

void func_020052c4(int param_1)

{
  ushort *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;

  puVar3 = ((unsigned int)0x020054ac);
  puVar1 = ((unsigned int)0x020054a8);
  (*(unsigned int *)0x020054a8) = ~(ushort)param_1 & ((*(unsigned int *)0x020054a8) | ((unsigned int *)0x020054a8)[1]);
  puVar1[1] = (ushort)param_1;
  puVar2 = ((unsigned int)0x020054bc);
  puVar4 = ((unsigned int)0x020054b0);
  if (0x40 < param_1) {
    if (0x60 < param_1) {
      if (param_1 != 0x70) goto switchD_02005314_default;
      (*(unsigned int *)0x020054b0) = 0x99;
LAB_0200546c:
      (*(unsigned int *)0x020054c0) = 0x91;
LAB_02005474:
      (*(unsigned int *)0x020054c4) = 0x81;
      goto switchD_02005314_default;
    }
    if (param_1 < 0x60) {
      if (param_1 == 0x50) {
        (*(unsigned int *)0x020054b0) = 0x91;
        puVar4[-2] = 0x81;
      }
      goto switchD_02005314_default;
    }
    (*(unsigned int *)0x020054b0) = 0x89;
    puVar4 = ((unsigned int)0x020054c0);
    goto LAB_02005494;
  }
  if (0x3f < param_1) goto LAB_02005494;
  if (0x20 < param_1) {
    if (param_1 != 0x30) goto switchD_02005314_default;
    goto LAB_0200546c;
  }
  switch(param_1) {
  case 0:
    break;
  case 1:
    puVar4 = ((unsigned int)0x020054bc);
    goto LAB_02005494;
  case 2:
    puVar4 = ((unsigned int)0x020054b8);
    goto LAB_02005494;
  case 3:
    goto LAB_02005410;
  case 4:
    puVar4 = ((unsigned int)0x020054b4);
    goto LAB_02005494;
  case 5:
    puVar3 = ((unsigned int)0x020054bc);
    goto LAB_0200543c;
  case 6:
    goto LAB_020053f0;
  case 7:
    goto LAB_02005408;
  case 8:
    *puVar3 = 0x81;
    break;
  case 9:
    (*(unsigned int *)0x020054bc) = 0x81;
    puVar2[3] = 0x89;
    break;
  case 10:
    puVar3 = ((unsigned int)0x020054b8);
    goto LAB_0200543c;
  case 0xb:
    (*(unsigned int *)0x020054bc) = 0x81;
    puVar2[1] = 0x89;
    puVar2[3] = 0x91;
    break;
  case 0xc:
    *puVar3 = 0x89;
    puVar4 = ((unsigned int)0x020054b4);
    goto LAB_02005494;
  case 0xd:
    *puVar3 = 0x91;
    puVar3 = ((unsigned int)0x020054bc);
LAB_0200543c:
    *puVar3 = 0x81;
    puVar3[2] = 0x89;
    break;
  case 0xe:
    *puVar3 = 0x91;
LAB_020053f0:
    (*(unsigned int *)0x020054b4) = 0x89;
    puVar4 = ((unsigned int)0x020054b8);
    goto LAB_02005494;
  case 0xf:
    *puVar3 = 0x99;
LAB_02005408:
    (*(unsigned int *)0x020054b4) = 0x91;
LAB_02005410:
    (*(unsigned int *)0x020054b8) = 0x89;
    puVar4 = ((unsigned int)0x020054bc);
    goto LAB_02005494;
  case 0x10:
    goto LAB_02005474;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    puVar4 = ((unsigned int)0x020054c0);
LAB_02005494:
    *puVar4 = 0x81;
  }
switchD_02005314_default:
  func_0200522c((*(unsigned int *)0x020054a8));
  return;
}
