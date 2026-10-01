
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

extern int func_02000148();
extern int func_02006510();
extern int func_020077b4();
extern int func_020077e8();
extern int func_0200910c();
extern int func_020098b4();
extern int func_02014674();
extern int func_02014778();
extern int func_020147c0();
extern int func_020147f4();
extern int func_02014850();
extern int func_02014874();

void func_02014a04(void)

{
  ushort uVar1;
  ushort uVar2;
  short *psVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];

  puVar10 = ((unsigned int)0x02014bc4);
  if ((*(unsigned int *)0x02014bc0) != 0) {
    return;
  }
  uVar1 = (*(unsigned int *)0x02014bc4);
  (*(unsigned int *)0x02014bc0) = 1;
  if ((uVar1 & 1) != 0) {
    uVar6 = func_02006510(0x40000);
    psVar3 = ((unsigned int)0x02014bc8);
    puVar8 = puVar10 + -0x7c;
    uVar1 = *puVar8;
    *puVar8 = 1;
    func_020147f4(psVar3[1],auStack_2c);
    puVar10 = puVar10 + -0x7e;
    uVar2 = *puVar10;
    func_02014778(auStack_34);
    iVar7 = ((unsigned int)0x02014bcc);
    *puVar10 = *puVar10 & 0x7fff;
    func_020077e8(iVar7 + 0x80,0x40);
    func_0200910c(1,((unsigned int)0x02014bd0),iVar7 + 0x80,0x40);
    *puVar10 = *puVar10 & 0x7fff | (ushort)(((int)(uVar2 & 0x8000) >> 0xf) << 0xf);
    func_020147c0(auStack_34);
    func_02014850(psVar3[1],auStack_2c);
    puVar5 = ((unsigned int)0x02014bd8);
    iVar7 = ((unsigned int)0x02014bcc);
    if (((*(unsigned int *)0x02014bd4) != '\0') || (((unsigned int *)0x02014bd4)[-1] == '\0')) {
      (*(unsigned int *)0x02014bd8) = *(undefined2 *)(((unsigned int)0x02014bcc) + 0xbe);
      for (iVar9 = 0; iVar9 < 3; iVar9 = iVar9 + 1) {
        *(undefined1 *)((int)puVar5 + iVar9 + 2) = *(undefined1 *)(iVar7 + iVar9 + 0xb5);
      }
      puVar5[3] = *(undefined2 *)(iVar7 + 0xb0);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(iVar7 + 0xac);
      iVar7 = func_02014674();
      pcVar4 = ((unsigned int)0x02014bd4);
      (*(unsigned int *)0x02014bd4) = iVar7 != 0;
      pcVar4[-1] = '\x01';
    }
    func_020098b4(((unsigned int)0x02014bdc),((unsigned int)0x02014be0),0x9c);
    func_020077b4();
    func_02014874((((unsigned int)0x02014bcc) + 0xfe000000U >> 5) << 6 | 1);
    psVar3 = ((unsigned int)0x02014bc8);
    while (*psVar3 != 1) {
      func_02000148(1);
    }
    uVar2 = (*(unsigned int *)0x02014be4);
    (*(unsigned int *)0x02014be4) = uVar1;
    func_02006510(uVar6,uVar2);
    return;
  }
  return;
}
