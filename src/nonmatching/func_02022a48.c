
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

extern int func_02022b34();
extern int func_02022f48();
extern int func_02022ffc();

void func_02022a48(void)

{
  undefined2 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r3;
  int iVar8;
  uint uVar9;

  piVar3 = ((unsigned int)0x02022b28);
  piVar2 = ((unsigned int)0x02022b24);
  iVar7 = ((unsigned int)0x02022b20);
  iVar8 = ((unsigned int *)0x02022b1c)[1];
  (*(unsigned int *)0x02022b24) = (*(unsigned int *)0x02022b1c);
  piVar2[1] = iVar8;
  iVar4 = ((unsigned int)0x02022b2c);
  piVar2[2] = *(int *)(((unsigned int)0x02022b2c) + 0x24);
  piVar2[3] = *(int *)(iVar4 + 0x28);
  piVar2[4] = *(int *)(iVar4 + 0x2c);
  piVar2[5] = *(int *)(iVar4 + 0x34);
  piVar2[6] = *(int *)(iVar4 + 0x38);
  piVar2[7] = *(int *)(iVar4 + 0x3c);
  piVar2[8] = *(int *)(iVar4 + 0x40);
  iVar4 = ((unsigned int)0x02022b30);
  *(undefined2 *)(piVar2 + 9) = *(undefined2 *)(((unsigned int)0x02022b30) + 2);
  uVar1 = *(undefined2 *)(iVar4 + 4);
  *(undefined2 *)((int)piVar2 + 0x26) = uVar1;
  *(char *)(iVar7 + 10) = (char)*(undefined2 *)(iVar4 + 8);
  *(undefined1 *)(iVar7 + 0xb) = *(undefined1 *)(iVar4 + 10);
  uVar5 = func_02022ffc(*piVar3 + 0xf0,0x28,uVar1,iVar8,in_r3);
  *(undefined1 *)(iVar7 + 0xc) = uVar5;
  uVar5 = func_02022ffc(*piVar3 + 0xf0,0x27);
  *(undefined1 *)(iVar7 + 0xd) = uVar5;
  uVar5 = func_02022f48(*piVar3 + 0xf0,0,0,5);
  *(undefined1 *)(iVar7 + 0xe) = uVar5;
  uVar5 = func_02022f48(*piVar3 + 0xf0,0,0,3);
  *(undefined1 *)(iVar7 + 0xf) = uVar5;
  piVar2 = ((unsigned int)0x02022b24);
  if (*(char *)(iVar7 + 0xf) != '\0') {
    if ((*(unsigned int *)0x02022b24) == 1 && ((unsigned int *)0x02022b24)[1] == 0) {
      *(undefined2 *)(((unsigned int)0x02022b24) + 9) = 5;
      *(undefined2 *)((int)piVar2 + 0x26) = 1;
    }
  }
  piVar3 = ((unsigned int)0x02022b28);
  piVar2 = ((unsigned int)0x02022b24);
  uVar9 = 0;
  *(undefined2 *)(((unsigned int)0x02022b24) + 10) = 0;
  do {
    uVar6 = func_02022b34(uVar9);
    iVar7 = func_02022f48(*piVar3 + 0xf0,1,0,uVar6);
    if (iVar7 != 0) {
      *(ushort *)(piVar2 + 10) = *(ushort *)(piVar2 + 10) | (ushort)(1 << (uVar9 & 0xff));
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0xb);
  return;
}
