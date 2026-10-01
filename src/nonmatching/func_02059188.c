
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

static unsigned int stack0xffffffdc;


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

extern int func_02058b8c();
extern int func_02058dc0();

void func_02059188(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,int *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;

  bVar1 = *(byte *)(param_1 + 3);
  uVar10 = (uint)*(byte *)(*param_6 + 1);
  uVar11 = (uint)*(byte *)(*(int *)(*param_2 + 8) + 1);
  local_68 = param_3;
  local_64 = param_4;
  puVar14 = (uint *)auStack_70;
  if (uVar10 == 0) {
    puVar14 = (uint *)&stack0xffffffdc;
  }
  uVar5 = param_1[1];
  uVar7 = param_1[2];
  if (uVar10 == 0) {
    return;
  }
  if ((int)(puVar14[2] + uVar10) < 0) {
    return;
  }
  iVar12 = puVar14[3] + uVar11;
  if (iVar12 < 0) {
    return;
  }
  uVar8 = puVar14[2] + uVar10 + 7;
  if ((int)puVar14[2] < 1) {
    puVar14[4] = 0;
  }
  else {
    puVar14[4] = puVar14[2] >> 3;
  }
  if ((int)puVar14[3] < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = puVar14[3] >> 3;
  }
  uVar9 = uVar8 >> 3;
  if (uVar5 <= uVar8 >> 3) {
    uVar9 = uVar5;
  }
  uVar8 = iVar12 + 7;
  uVar6 = puVar14[4];
  uVar5 = uVar8 >> 3;
  if (uVar7 <= uVar8 >> 3) {
    uVar5 = uVar7;
  }
  if ((int)(uVar9 - uVar6) < 0) {
    return;
  }
  if ((int)(uVar5 - uVar13) < 0) {
    return;
  }
  uVar7 = param_6[1];
  if (-1 < (int)puVar14[2]) {
    puVar14[2] = puVar14[2] & 7;
  }
  puVar14[0xd] = uVar10;
  if (-1 < (int)puVar14[3]) {
    puVar14[3] = puVar14[3] & 7;
  }
  puVar14[0xe] = uVar11;
  puVar14[0x12] = puVar14[0x1c] - 1;
  iVar12 = *param_2;
  puVar14[10] = uVar7;
  bVar2 = *(byte *)(*(int *)(iVar12 + 8) + 6);
  bVar3 = *(byte *)(param_1 + 3);
  puVar14[0x10] = (uint)bVar2;
  puVar14[0x11] = (uint)bVar3;
  uVar7 = param_1[4];
  bVar3 = **(byte **)(iVar12 + 8);
  puVar14[7] = puVar14[3] + (uVar5 - uVar13) * -8;
  puVar14[0xf] = (int)(short)(ushort)bVar2 * (int)(short)(ushort)bVar3;
  uVar11 = puVar14[2];
  iVar12 = *param_1;
  uVar10 = param_1[2];
  puVar14[5] = param_1[1];
  puVar14[6] = uVar10;
  if ((int)puVar14[3] <= (int)puVar14[7]) {
    return;
  }
  do {
    uVar10 = puVar14[4];
    puVar14[0xc] = puVar14[3];
    for (uVar5 = puVar14[2]; (int)(uVar11 + (uVar9 - uVar6) * -8) < (int)uVar5; uVar5 = uVar5 - 8) {
      *puVar14 = uVar7 & 0xff;
      puVar14[1] = (uVar7 & 0xffff) >> 8;
      iVar4 = func_02058b8c(uVar10,uVar13,puVar14[5],puVar14[6]);
      puVar14[0xb] = uVar5;
      puVar14[9] = iVar4 * ((int)((uint)bVar1 * 0x40) >> 3) + iVar12;
      func_02058dc0(puVar14 + 9);
      uVar10 = uVar10 + 1;
    }
    uVar10 = puVar14[3];
    uVar13 = uVar13 + 1;
    puVar14[3] = uVar10 - 8;
  } while ((int)puVar14[7] < (int)(uVar10 - 8));
  return;
}
