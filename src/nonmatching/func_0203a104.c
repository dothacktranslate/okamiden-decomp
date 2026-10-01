
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

extern int func_02041758();

void func_0203a104(int param_1,short param_2,short param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = *(int *)(param_1 + param_4 * 4 + ((unsigned int)0x0203a21c));
  iVar4 = *(int *)(iVar5 + 8);
  if (iVar4 == 0) {
LAB_0203a12a:
    if (0x17f < iVar4) goto LAB_0203a1d4;
    iVar4 = ((unsigned int *)0x0203a220)[2] + ((unsigned int *)0x0203a220)[1] * (*(unsigned int *)0x0203a220);
    (*(unsigned int *)0x0203a220) = iVar4;
    *(int *)(iVar5 + *(int *)(iVar5 + 8) * 4 + ((unsigned int)0x0203a224)) =
         (((short)(ushort)((uint)iVar4 >> 0x1e) + -2) * 0x10000 >> 0x10) + 2;
  }
  else {
    iVar1 = (iVar4 + -1) * 4;
    iVar3 = (int)*(short *)(*(int *)(iVar5 + 4) + iVar1);
    if (iVar3 == -1) goto LAB_0203a12a;
    iVar3 = iVar3 - param_2;
    iVar1 = (int)*(short *)(*(int *)(iVar5 + 4) + iVar1 + 2) - (int)param_3;
    if ((iVar3 * iVar3 + iVar1 * iVar1 < *(int *)(iVar5 + ((unsigned int)0x0203a21c) + -0x9c)) || (0x17f < iVar4))
    goto LAB_0203a1d4;
    puVar2 = (undefined4 *)func_02041758((int)param_2,(int)param_3,0x1000);
    iVar4 = *(int *)(iVar5 + 8) * 0xc;
    iVar1 = iVar5 + 0x610 + iVar4;
    *(undefined4 *)(iVar5 + 0x610 + iVar4) = *puVar2;
    *(undefined4 *)(iVar1 + 4) = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = puVar2[2];
  }
  *(short *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8) * 4) = param_2;
  *(short *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8) * 4 + 2) = param_3;
  *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
LAB_0203a1d4:
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 8)) {
    do {
      puVar2 = (undefined4 *)
               func_02041758((int)*(short *)(*(int *)(iVar5 + 4) + iVar4 * 4),
                            (int)*(short *)(*(int *)(iVar5 + 4) + iVar4 * 4 + 2),0x1000);
      iVar1 = iVar5 + iVar4 * 0xc;
      *(undefined4 *)(iVar1 + 0x610) = *puVar2;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar1 + 0x614) = puVar2[1];
      *(undefined4 *)(iVar1 + 0x618) = puVar2[2];
    } while (iVar4 < *(int *)(iVar5 + 8));
  }
  return;
}
