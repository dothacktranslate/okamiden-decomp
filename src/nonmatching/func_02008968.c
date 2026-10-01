
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

extern int func_0200656c();
extern int func_0200659c();
extern int func_0200879c();
extern int func_02008850();
extern int func_02008928();
extern int func_02008ad0();
extern int func_02008b1c();

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_02008968(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  bool bVar10;

  func_0200656c(4);
  uVar2 = (ushort)((unsigned int)0x02008ac4);
  _REG_A_DISPSTAT = _REG_A_DISPSTAT & uVar2;
  *(uint *)(((unsigned int)0x02008ac0) + 0x3ff8) = *(uint *)(((unsigned int)0x02008ac0) + 0x3ff8) | 4;
  func_02008b1c(((int)(uint)_REG_A_DISPSTAT >> 8 | (_REG_A_DISPSTAT & 0x80) << 1) - 1);
  puVar4 = ((unsigned int)0x02008acc);
  iVar3 = ((unsigned int)0x02008ac8);
  puVar9 = *(undefined4 **)(((unsigned int)0x02008ac8) + 0xc);
  if (puVar9 == (undefined4 *)0x0) {
    return;
  }
  do {
    uVar1 = *puVar4;
    uVar5 = func_02008b1c(uVar1);
    iVar6 = func_02008ad0(puVar9,uVar5,uVar1);
    if (iVar6 == 0) {
      func_02008928(puVar9);
      uVar7 = (uint)*(short *)(puVar9 + 4);
      bVar10 = uVar7 == *puVar4;
      if (bVar10) {
        uVar7 = puVar9[3];
      }
      if (!bVar10 || uVar7 != uVar5) {
        return;
      }
      func_0200656c(4);
      _REG_A_DISPSTAT = _REG_A_DISPSTAT & uVar2;
      func_0200659c(4);
LAB_02008a50:
      pcVar8 = (code *)*puVar9;
      func_02008850(puVar9);
      *puVar9 = 0;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(puVar9[1]);
      }
      if ((puVar9[7] != 0) && (puVar9[9] == 0)) {
        *puVar9 = pcVar8;
LAB_02008a9c:
        puVar9[3] = *(int *)(iVar3 + 8) + 1;
        func_0200879c(puVar9);
      }
    }
    else {
      if (iVar6 == 1) goto LAB_02008a50;
      if (iVar6 == 2) {
        func_02008850(puVar9);
        goto LAB_02008a9c;
      }
    }
    puVar9 = *(undefined4 **)(iVar3 + 0xc);
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}
