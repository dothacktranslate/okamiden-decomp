
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

extern int func_02008b6c();
extern int func_02008b80();

undefined2 *
func_0200f0a4(undefined2 *param_1,undefined2 *param_2,uint param_3,uint param_4,ushort param_5,
            ushort param_6,ushort param_7,ushort param_8,ushort param_9)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *unaff_r4;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;

  bVar9 = (undefined2 *)0xfff < param_2;
  bVar10 = 0xfff < param_3;
  if (!bVar9 && !bVar10) {
    unaff_r4 = (undefined2 *)(uint)param_6;
  }
  bVar11 = unaff_r4 < (undefined2 *)0x1000;
  uVar8 = param_4;
  if ((!bVar9 && !bVar10) && bVar11) {
    uVar8 = (uint)param_7;
  }
  puVar4 = param_1;
  if (((bVar9 || bVar10) || !bVar11) || 0xfff < uVar8) {
    puVar4 = (undefined2 *)0x1;
  }
  if (((bVar9 || bVar10) || !bVar11) || 0xfff < uVar8) {
    return puVar4;
  }
  bVar9 = 0xff < param_4;
  uVar6 = param_3;
  if (!bVar9) {
    uVar6 = (uint)param_8;
  }
  bVar10 = 0xff < uVar6;
  puVar5 = param_2;
  if (!bVar9 && !bVar10) {
    puVar5 = (undefined2 *)(uint)param_5;
  }
  bVar11 = puVar5 < (undefined2 *)0xc0;
  if ((!bVar9 && !bVar10) && bVar11) {
    puVar4 = (undefined2 *)(uint)param_9;
  }
  bVar12 = (undefined2 *)0xbf < puVar4;
  if (((bVar9 || bVar10) || !bVar11) || bVar12) {
    puVar4 = (undefined2 *)0x1;
  }
  if (((bVar9 || bVar10) || !bVar11) || bVar12) {
    return puVar4;
  }
  bVar9 = puVar5 == puVar4;
  if (((param_4 == uVar6 || bVar9) || param_2 == unaff_r4) || param_3 == uVar8) {
    puVar4 = (undefined2 *)0x1;
  }
  if (((param_4 == uVar6 || bVar9) || param_2 == unaff_r4) || param_3 == uVar8) {
    return puVar4;
  }
  func_02008b6c(puVar4);
  puVar2 = ((unsigned int)0x0200f288);
  (*(unsigned int *)0x0200f288) = 0;
  *(uint *)(puVar2 + 8) = ((int)param_2 - (uint)param_6) * 0x100;
  *(uint *)(puVar2 + 0xc) = param_4 - param_8;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  do {
  } while ((*puVar2 & 0x8000) != 0);
  iVar7 = (*(unsigned int *)0x0200f28c);
  *puVar2 = 0;
  piVar3 = ((unsigned int)0x0200f28c);
  ((unsigned int *)0x0200f28c)[-4] = (param_3 - param_7) * 0x100;
  piVar3[-2] = (uint)param_5 - (uint)param_9;
  piVar3[-1] = 0;
  if ((0x7fff < iVar7) || (iVar7 < -0x8000)) {
    func_02008b80();
    return (undefined2 *)0x1;
  }
  param_1[2] = (short)iVar7;
  piVar3 = ((unsigned int)0x0200f28c);
  iVar7 = (((int)param_2 + (uint)param_6) * 0x100 - (int)(short)param_1[2] * (param_4 + param_8)) *
          0x200;
  iVar1 = iVar7 >> 0x10;
  if ((0x7fff < iVar1) || (iVar1 < -0x8000)) {
    func_02008b80();
    return (undefined2 *)0x1;
  }
  *param_1 = (short)((uint)iVar7 >> 0x10);
  do {
  } while ((*(ushort *)(piVar3 + -8) & 0x8000) != 0);
  iVar7 = (*(unsigned int *)0x0200f28c);
  func_02008b80();
  if ((iVar7 < 0x8000) && (-0x8001 < iVar7)) {
    param_1[3] = (short)iVar7;
    iVar7 = ((param_3 + param_7) * 0x100 - (int)(short)param_1[3] * ((uint)param_5 + (uint)param_9))
            * 0x200;
    iVar1 = iVar7 >> 0x10;
    if ((iVar1 < 0x8000) && (-0x8001 < iVar1)) {
      param_1[1] = (short)((uint)iVar7 >> 0x10);
      return (undefined2 *)0x0;
    }
    return (undefined2 *)0x1;
  }
  return (undefined2 *)0x1;
}
