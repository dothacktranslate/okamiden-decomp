
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

extern int func_0206388c();
extern int func_02063898();
extern int func_020638dc();
extern int func_02063a84();

void func_02063ce8(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_r3;
  uint uVar8;
  uint uVar9;
  uint local_48 [12];
  undefined4 uStack_18;

  uVar3 = ((unsigned int)0x02063ef4);
  local_48[0] = (*(unsigned int *)0x02063eec);
  local_48[1] = ((unsigned int *)0x02063eec)[1];
  local_48[2] = ((unsigned int *)0x02063eec)[2];
  local_48[3] = ((unsigned int *)0x02063eec)[3];
  local_48[4] = ((unsigned int *)0x02063eec)[4];
  local_48[5] = ((unsigned int *)0x02063eec)[5];
  local_48[6] = ((unsigned int *)0x02063eec)[6];
  local_48[7] = ((unsigned int *)0x02063eec)[7];
  local_48[8] = ((unsigned int *)0x02063eec)[8];
  local_48[9] = ((unsigned int *)0x02063eec)[9];
  local_48[10] = ((unsigned int *)0x02063eec)[10];
  local_48[0xb] = ((unsigned int *)0x02063eec)[0xb];
  uVar7 = *(uint *)(((unsigned int)0x02063ef0) + 0x10);
  uVar5 = *(int *)(((unsigned int)0x02063ef0) + 0xc) - (uVar7 + (uVar7 >> 1));
  uVar1 = uVar7 >> 1;
  uVar8 = 0;
  do {
    if ((uVar8 == 0) || (uVar8 == 2)) {
      uVar9 = local_48[uVar8 * 3];
      if (uVar9 != 0 && uVar7 != 0) {
        if (uVar7 < uVar9) {
          uVar9 = uVar7;
        }
        local_48[uVar8 * 3 + 2] = local_48[uVar8 * 3 + 2] + uVar9;
        uVar7 = uVar7 - uVar9;
        local_48[uVar8 * 3] = local_48[uVar8 * 3] - uVar9;
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  uVar7 = 0;
  local_48[3] = local_48[3] - uVar1;
  do {
    uVar8 = local_48[uVar7 * 3];
    if (uVar8 != 0 && uVar5 != 0) {
      if (uVar5 < uVar8) {
        uVar8 = uVar5;
      }
      local_48[uVar7 * 3 + 1] = local_48[uVar7 * 3 + 1] + uVar8;
      uVar5 = uVar5 - uVar8;
      local_48[uVar7 * 3] = local_48[uVar7 * 3] - uVar8;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uStack_18 = in_r3;
  func_0206388c(((unsigned int)0x02063ef8));
  uVar4 = ((unsigned int)0x02063efc);
  func_0206388c(((unsigned int)0x02063efc));
  iVar2 = ((unsigned int)0x02063ef0);
  uVar6 = func_02063898(*(undefined4 *)(((unsigned int)0x02063ef0) + 0x14),*(uint *)(((unsigned int)0x02063ef0) + 0x18) >> 4);
  uVar5 = local_48[2];
  *(undefined4 *)(iVar2 + 8) = uVar6;
  if (local_48[2] != 0) {
    func_020638dc(uVar4,((unsigned int)0x02063ef4),0,local_48[2]);
  }
  if (local_48[1] != 0) {
    func_020638dc(((unsigned int)0x02063ef8),((unsigned int)0x02063ef4),uVar5);
  }
  uVar5 = local_48[8];
  if (local_48[8] != 0) {
    func_020638dc(((unsigned int)0x02063efc),((unsigned int)0x02063ef4),0x40000,local_48[8]);
  }
  if (local_48[7] != 0) {
    func_020638dc(((unsigned int)0x02063ef8),((unsigned int)0x02063ef4),uVar5 + 0x40000);
  }
  if (local_48[10] != 0) {
    func_020638dc(((unsigned int)0x02063ef8),((unsigned int)0x02063ef4),0x60000);
  }
  if (local_48[4] != 0) {
    func_020638dc(((unsigned int)0x02063ef8),((unsigned int)0x02063ef4),uVar1 + 0x20000);
  }
  func_02063a84(((unsigned int)0x02063ef8),uVar3);
  func_02063a84(((unsigned int)0x02063efc),uVar3);
  return;
}
