
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

extern int func_020028c0();
extern int func_0201e9b4();
extern int func_0205c030();

undefined4 func_02041758(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;

  if ((((unsigned int *)0x020418e4)[1] & 1U) == 0) {
    ((unsigned int *)0x020418e4)[1] = ((unsigned int *)0x020418e4)[1] | 1;
  }
  piVar3 = (int *)func_0205c030();
  piVar2 = ((unsigned int)0x020418e4);
  puVar1 = (uint *)(((unsigned int)0x020418e4) + 2);
  param_3 = param_3 + 0x1000;
  if ((*puVar1 & 1) == 0) {
    ((unsigned int *)0x020418e4)[5] = 0x80000;
    piVar2[2] = *puVar1 | 1;
  }
  piVar2 = ((unsigned int)0x020418e4);
  puVar1 = (uint *)(((unsigned int)0x020418e4) + 3);
  if ((*puVar1 & 1) == 0) {
    (*(unsigned int *)0x020418e4) = 0x60000;
    piVar2[3] = *puVar1 | 1;
  }
  iVar4 = func_020028c0(param_1 * 0x1000 - ((unsigned int *)0x020418e4)[5]);
  iVar5 = func_020028c0(-(param_2 * 0x1000 - (*(unsigned int *)0x020418e4)));
  iVar6 = param_3 >> 0x1f;
  lVar9 = func_0201e9b4(param_3,iVar6,piVar3[8],piVar3[8] >> 0x1f);
  iVar7 = iVar5 >> 0x1f;
  lVar10 = func_0201e9b4(iVar5,iVar7,piVar3[4],piVar3[4] >> 0x1f);
  iVar8 = iVar4 >> 0x1f;
  lVar11 = func_0201e9b4(iVar4,iVar8,*piVar3,*piVar3 >> 0x1f);
  ((unsigned int *)0x020418e4)[6] =
       piVar3[0xc] +
       ((uint)(lVar9 + 0x800) >> 0xc | (int)((ulonglong)(lVar9 + 0x800) >> 0x20) * 0x100000) +
       ((uint)(lVar10 + 0x800) >> 0xc | (int)((ulonglong)(lVar10 + 0x800) >> 0x20) * 0x100000) +
       ((uint)(lVar11 + 0x800) >> 0xc | (int)((ulonglong)(lVar11 + 0x800) >> 0x20) * 0x100000);
  lVar9 = func_0201e9b4(param_3,iVar6,piVar3[9],piVar3[9] >> 0x1f);
  lVar10 = func_0201e9b4(iVar5,iVar7,piVar3[5],piVar3[5] >> 0x1f);
  lVar11 = func_0201e9b4(iVar4,iVar8,piVar3[1],piVar3[1] >> 0x1f);
  ((unsigned int *)0x020418e4)[7] =
       piVar3[0xd] +
       ((uint)(lVar9 + 0x800) >> 0xc | (int)((ulonglong)(lVar9 + 0x800) >> 0x20) * 0x100000) +
       ((uint)(lVar10 + 0x800) >> 0xc | (int)((ulonglong)(lVar10 + 0x800) >> 0x20) * 0x100000) +
       ((uint)(lVar11 + 0x800) >> 0xc | (int)((ulonglong)(lVar11 + 0x800) >> 0x20) * 0x100000);
  lVar9 = func_0201e9b4(param_3,iVar6,piVar3[10],piVar3[10] >> 0x1f);
  lVar10 = func_0201e9b4(iVar5,iVar7,piVar3[6],piVar3[6] >> 0x1f);
  lVar11 = func_0201e9b4(iVar4,iVar8,piVar3[2],piVar3[2] >> 0x1f);
  ((unsigned int *)0x020418e4)[8] =
       piVar3[0xe] +
       ((uint)(lVar9 + 0x800) >> 0xc | (int)((ulonglong)(lVar9 + 0x800) >> 0x20) * 0x100000) +
       ((uint)(lVar10 + 0x800) >> 0xc | (int)((ulonglong)(lVar10 + 0x800) >> 0x20) * 0x100000) +
       ((uint)(lVar11 + 0x800) >> 0xc | (int)((ulonglong)(lVar11 + 0x800) >> 0x20) * 0x100000);
  return ((unsigned int)0x020418e8);
}
