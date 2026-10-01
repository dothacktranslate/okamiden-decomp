
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

extern int func_02006178();
extern int func_02006980();
extern int func_02008e58();
extern int func_02008fe4();
extern int func_020098a0();

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_02003208(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;

  iVar2 = ((unsigned int)0x02003338);
  puVar1 = ((unsigned int)0x02003334);
  (*(unsigned int *)0x02003334) = (*(unsigned int *)0x02003334) | 0x8000;
  *puVar1 = *puVar1 & (ushort)iVar2 | 0x20e;
  *puVar1 = *puVar1 | 1;
  func_02006178();
  iVar3 = ((unsigned int)0x0200333c);
  if (*(short *)(((unsigned int)0x0200333c) + 2) == 0) {
    do {
      iVar6 = func_02006980();
      if (iVar6 == iVar2 + 0x20c) {
        func_02008e58();
      }
      *(short *)(iVar3 + 2) = (short)iVar6;
    } while (*(short *)(iVar3 + 2) == 0);
  }
  (*(unsigned int *)0x02003340) = 0;
  iVar2 = ((unsigned int)0x02003344);
  _REG_A_DISPCNT = 0;
  if (*(int *)(((unsigned int)0x02003344) + 4) == -1) {
    func_020098a0(0,&_D_ENGINE_A,0x60);
    _REG_A_MASTER_BRIGHT = 0;
    func_020098a0(0,&REG_B_DISPCNT,0x70);
  }
  else {
    func_02008fe4(*(int *)(((unsigned int)0x02003344) + 4),&_D_ENGINE_A,0,0x60,1);
    _REG_A_MASTER_BRIGHT = 0;
    func_02008fe4(*(undefined4 *)(iVar2 + 4),&REG_B_DISPCNT,0,0x70,1);
  }
  puVar4 = ((unsigned int)0x02003348);
  (*(unsigned int *)0x02003348) = 0x100;
  puVar4[3] = 0x100;
  puVar4[8] = 0x100;
  puVar4[0xb] = 0x100;
  puVar5 = ((unsigned int)0x0200334c);
  puVar4[0x800] = 0x100;
  *puVar5 = 0x100;
  puVar5[5] = 0x100;
  puVar5[8] = 0x100;
  return;
}
