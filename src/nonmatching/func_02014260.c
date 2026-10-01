
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
extern int func_02008e58();
extern int func_02012f40();
extern int func_02013150();
extern int func_02013168();
extern int func_02013288();
extern int func_02013348();
extern int func_0201340c();
extern int func_02013448();
extern int func_02013464();
extern int func_020140b4();
extern int func_02014160();

void func_02014260(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  iVar1 = ((unsigned int)0x020143cc);
  iVar4 = param_4;
  func_02012f40();
  uVar3 = func_02013150();
  if ((uVar3 & 4) == 0) {
    func_02008e58();
  }
  func_02013348(iVar1,1,param_5,param_6,iVar4);
  iVar4 = func_0201340c(param_1);
  *(int *)(iVar1 + 0x50c) = iVar4;
  if (iVar4 == 0) {
    param_1 = 0xffffffff;
  }
  else {
    param_1 = param_1 & 3;
  }
  *(uint *)(iVar1 + 0x508) = param_1;
  if (param_1 < 4) {
    (**(code **)(*(int *)(iVar1 + 0x50c) + 4))();
  }
  iVar4 = ((unsigned int)0x020143d4);
  piVar2 = ((unsigned int)0x020143d0);
  iVar6 = (*(unsigned int *)0x020143d0);
  *(int *)(iVar1 + 0x500) = param_3;
  param_2 = param_2 + iVar6;
  *(int *)(iVar1 + 0x4fc) = param_2;
  *(int *)(iVar1 + 0x504) = param_4;
  piVar2[5] = iVar4;
  piVar2[6] = 0;
  piVar2[7] = param_2;
  piVar2[8] = param_3;
  piVar2[9] = param_4;
  piVar2[10] = 0;
  if ((piVar2[3] == ((unsigned int)0x020143d8)) &&
     (iVar4 = func_02014160(*(undefined4 *)(iVar1 + 0x508),param_3,param_2,param_4), iVar4 != 0)) {
    uVar5 = func_02008b6c();
    if (piVar2[1] != 0) {
      func_02013448(*(undefined4 *)(iVar1 + 0x500),*(undefined4 *)(iVar1 + 0x504),
                   *(undefined4 *)(iVar1 + 0xc));
    }
    if (*(int *)(((unsigned int)0x020143dc) + 4) != 0) {
      func_02013464(*(undefined4 *)(iVar1 + 0x500),*(undefined4 *)(iVar1 + 0x504),
                   *(undefined4 *)(iVar1 + 0x10));
    }
    func_02008b80(uVar5);
    func_020140b4(((unsigned int)0x020143e0));
    if (param_7 == 0) {
      func_02013168();
      return;
    }
    return;
  }
  if (((unsigned int *)0x020143d0)[1] != 0) {
    func_02013448(*(undefined4 *)(iVar1 + 0x500),*(undefined4 *)(iVar1 + 0x504),
                 *(undefined4 *)(iVar1 + 0xc));
  }
  func_02013288(((unsigned int)0x020143e4),param_7);
  return;
}
