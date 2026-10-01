
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

extern int func_02001488();
extern int func_02001b14();
extern int func_02001c28();
extern int func_02001d88();
extern int func_02001f24();
extern int func_02002328();
extern int func_02002560();
extern int func_020026ac();
extern int func_02002ac4();
extern int func_02002bb0();
extern int func_02002c10();
extern int func_02002fdc();
extern int func_020396cc();
extern int func_020396d0();
extern int func_0205bdf4();

void func_020397a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;

  uStack_18 = param_4;
  if ((param_1[0x11] & 2) != 0) {
    func_020026ac(param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],
                 0x1000,((unsigned int)0x020399e8));
    puVar1 = ((unsigned int)0x020399f0);
    iVar5 = ((unsigned int)0x020399ec);
    *(uint *)(((unsigned int)0x020399ec) + 0x7c) = *(uint *)(((unsigned int)0x020399ec) + 0x7c) & 0xffffffaf;
    uVar6 = ((unsigned int)0x020399fc);
    iVar2 = ((unsigned int)0x020399f8);
    local_24 = *puVar1;
    local_20 = puVar1[1];
    local_1c = puVar1[2];
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_3c = (*(unsigned int *)0x020399f4);
    local_38 = ((unsigned int *)0x020399f4)[1];
    local_34 = ((unsigned int *)0x020399f4)[2];
    *(undefined4 *)(((unsigned int)0x020399f8) + 0x40) = local_24;
    *(undefined4 *)(iVar2 + 0x44) = local_20;
    *(undefined4 *)(iVar2 + 0x48) = local_1c;
    *(undefined4 *)(iVar2 + 0x4c) = local_3c;
    *(undefined4 *)(iVar2 + 0x50) = local_38;
    *(undefined4 *)(iVar2 + 0x54) = local_34;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    func_02001b14(&local_24,&local_3c,&local_30,uVar6);
    *(uint *)(iVar5 + 0x7c) = *(uint *)(iVar5 + 0x7c) & 0xffffff17;
    goto LAB_0203995e;
  }
  if ((param_1[0x11] & 1) == 0) {
    func_02002560(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],0x1000,((unsigned int)0x020399e8));
  }
  else {
    func_02002328(param_1[5],param_1[6],param_1[7],param_1[8],param_1[9],param_1[10],0x1000,
                 ((unsigned int)0x020399e8));
  }
  *(uint *)(((unsigned int)0x020399ec) + 0x7c) = *(uint *)(((unsigned int)0x020399ec) + 0x7c) & 0xffffffaf;
  switch(param_1[0x12]) {
  case 0:
    func_020396cc(param_1);
  case 2:
    uVar6 = 0;
    goto LAB_020398a2;
  case 1:
    func_02002ac4(param_1 + 0x16,param_1 + 0x13,&local_48);
    uVar6 = func_02002bb0(&local_48);
    param_1[0x24] = uVar6;
    func_02002c10(&local_48,&local_48);
    *(undefined2 *)(param_1 + 0x23) = 0;
    local_50 = local_44;
    local_54 = 0;
    local_4c = local_40;
    func_02002c10(&local_54,&local_54);
    uVar3 = func_02002fdc(local_44,local_40);
    *(undefined2 *)(param_1 + 0x22) = uVar3;
    local_54 = local_48;
    local_50 = 0;
    local_4c = local_40;
    func_02002c10(&local_54,&local_54);
    uVar3 = func_02002fdc(local_48,local_40);
    *(undefined2 *)((int)param_1 + 0x8a) = uVar3;
    break;
  case 3:
    uVar6 = 1;
LAB_020398a2:
    func_020396d0(param_1,uVar6);
  }
  iVar5 = ((unsigned int)0x020399f8);
  *(undefined4 *)(((unsigned int)0x020399f8) + 0x40) = param_1[0x13];
  uVar6 = ((unsigned int)0x020399fc);
  *(undefined4 *)(iVar5 + 0x44) = param_1[0x14];
  *(undefined4 *)(iVar5 + 0x48) = param_1[0x15];
  *(undefined4 *)(iVar5 + 0x4c) = param_1[0x19];
  *(undefined4 *)(iVar5 + 0x50) = param_1[0x1a];
  *(undefined4 *)(iVar5 + 0x54) = param_1[0x1b];
  *(undefined4 *)(iVar5 + 0x58) = param_1[0x16];
  *(undefined4 *)(iVar5 + 0x5c) = param_1[0x17];
  *(undefined4 *)(iVar5 + 0x60) = param_1[0x18];
  func_02001b14(param_1 + 0x13,param_1 + 0x19,param_1 + 0x16,uVar6);
  *(uint *)(((unsigned int)0x020399ec) + 0x7c) = *(uint *)(((unsigned int)0x020399ec) + 0x7c) & 0xffffff17;
LAB_0203995e:
  piVar4 = (int *)param_1[0x2b];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x48))(piVar4,param_1 + 0x16,0x1000);
  }
  iVar5 = ((unsigned int)0x02039a00);
  func_02001488(((unsigned int)0x020399fc),((unsigned int)0x02039a00));
  func_02001d88(iVar5,iVar5);
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  func_02002ac4(((unsigned int)0x02039a04),((unsigned int)0x02039a08),local_60);
  func_02002c10(local_60,local_60);
  if (local_60[0] == 0) {
    func_02001c28(((unsigned int)0x02039a0c));
  }
  else {
    iVar5 = func_02002fdc(local_58);
    iVar5 = (int)(0xffffc000U - iVar5 & 0xffff) >> 4;
    func_02001f24(((unsigned int)0x02039a0c),(int)*(short *)(((unsigned int)0x02039a10) + iVar5 * 4),
                 (int)*(short *)(((unsigned int)0x02039a10) + (iVar5 * 2 + 1) * 2));
  }
  uVar6 = func_0205bdf4();
  func_02001488(uVar6,((unsigned int)0x02039a14));
  return;
}
