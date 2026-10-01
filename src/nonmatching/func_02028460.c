
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

extern int func_0203aed4();
extern int func_02041a64();
extern int func_02041a80();
extern int func_02041a98();
extern int func_02041ab4();
extern int func_02041acc();
extern int func_02041b00();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x020859b8();
extern int func_0x020982e4();
extern int func_0x020be4fc();
extern int func_0x020d9f10();
extern int func_0x020d9f40();
extern int func_0x020da9e4();
extern int func_0x020ddbbc();
extern int func_0x020ddc20();
extern int func_0x020ddc50();
extern int func_0x020f57e8();
extern int func_0x020f57fc();
extern int func_0x020f582c();
extern int func_0x020f5890();
extern int func_0x020f58bc();

undefined4 func_02028460(undefined4 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint local_30;
  uint local_24;
  byte local_18 [4];

  uVar10 = (*(unsigned int *)0x0202874c);
  piVar8 = (int *)(*(unsigned int *)0x02028750);
  iVar9 = *(int *)(*piVar8 + 0x5c);
  iVar5 = func_020465d8(param_1,2);
  iVar6 = func_020465d8(param_1,1);
  switch(iVar6 - ((unsigned int)0x02028754)) {
  case 0:
    iVar6 = func_020465d8(param_1,3);
    if (iVar6 == 0) {
      func_02041a80(uVar10);
    }
    else {
      func_02041a64(uVar10);
    }
    break;
  case 1:
    iVar6 = func_020465d8(param_1,3);
    if (iVar6 == 0) {
      func_02041ab4(uVar10);
    }
    else {
      func_02041a98(uVar10);
    }
    break;
  case 2:
    iVar6 = func_020465d8(param_1,3);
    if (iVar6 == 0) {
      func_02041b00(uVar10);
    }
    else {
      func_02041acc(uVar10);
    }
    break;
  case 3:
    if (iVar5 == 0) {
      iVar6 = 0;
      uVar10 = func_020465d8(param_1,3);
      switch(uVar10) {
      case 1:
        if ((*(int *)(iVar9 + 0x58) != 0) && (iVar6 = func_0x020859b8(), iVar6 == 1))
        goto LAB_0202853c;
        iVar6 = *(int *)(iVar9 + 0x54);
        break;
      case 2:
LAB_0202853c:
        iVar6 = *(int *)(iVar9 + 0x58);
        break;
      case 3:
        uVar10 = *(undefined4 *)(iVar9 + 0x3c);
        uVar2 = func_020465d8(param_1,4);
        iVar6 = func_0x020be4fc(uVar10,uVar2);
      }
      if (iVar6 != 0) {
        iVar5 = func_020465d8(param_1,5);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar6 = func_0x020982e4(iVar6,iVar5);
        piVar8[0x10] = iVar6;
      }
      iVar5 = 1;
    }
    else {
      local_18[0] = (*(unsigned int *)0x02028758);
      local_18[1] = ((unsigned int *)0x02028758)[1];
      local_18[2] = ((unsigned int *)0x02028758)[2];
      local_18[3] = ((unsigned int *)0x02028758)[3];
      iVar6 = func_020465d8(param_1,5);
      iVar5 = iVar5 + 1;
      if ((int)(uint)local_18[iVar6] < iVar5) {
        func_0203aed4(piVar8[0x10],1);
        iVar5 = -1;
      }
    }
    goto LAB_020287ae;
  case 4:
    uVar10 = *(undefined4 *)(iVar9 + 0x80);
    iVar6 = func_020465d8(param_1,4);
    bVar1 = func_020465d8(param_1,3);
    uVar11 = (uint)bVar1;
    if (uVar11 == 0) {
      if (iVar6 == 0) {
        *(undefined1 *)((int)piVar8 + 0xdf) = 0;
LAB_02028646:
        func_0x020ddc50(uVar10,0x33);
      }
      else {
        *(undefined1 *)((int)piVar8 + 0xdf) = 1;
      }
    }
    else {
      if (iVar6 == 0) goto LAB_02028646;
      local_24 = ((unsigned int)0x0202875c);
      if (uVar11 == 1) {
        local_24 = 7;
      }
      else if (uVar11 == 2) {
        local_24 = 8;
      }
      else if (uVar11 == 3) {
        local_24 = 9;
      }
      if (local_24 != ((unsigned int)0x0202875c)) {
        uVar7 = func_0x020da9e4((int)(char)bVar1);
        uVar7 = func_0x020d9f10(*(undefined4 *)(iVar9 + 0x7c),local_24 & 0xff,uVar7);
        uVar2 = func_0x020ddbbc(uVar10,uVar7,0x33);
        *(undefined2 *)((int)piVar8 + uVar11 * 2 + 0xe0) = uVar2;
      }
    }
    break;
  case 5:
    uVar10 = *(undefined4 *)(iVar9 + 0x80);
    bVar1 = func_020465d8(param_1,3);
    uVar11 = (uint)bVar1;
    iVar6 = func_020465d8(param_1,4);
    iVar5 = func_020465d8(param_1,5);
    local_30 = ((unsigned int)0x0202875c);
    if (uVar11 == 1) {
      local_30 = 7;
    }
    else if (uVar11 == 2) {
      local_30 = 8;
    }
    else if (uVar11 == 3) {
      local_30 = 9;
    }
    if (local_30 != ((unsigned int)0x0202875c)) {
      uVar7 = func_0x020da9e4((int)(char)bVar1);
      sVar3 = *(short *)((int)piVar8 + uVar11 * 2 + 0xe0);
      func_0x020d9f10(*(undefined4 *)(iVar9 + 0x7c),local_30 & 0xff,uVar7);
      uVar7 = func_0x020d9f10(*(undefined4 *)(iVar9 + 0x7c),local_30 & 0xff,uVar7);
      func_0x020ddc20(uVar10,uVar7,(int)sVar3,iVar6 << 0xc,iVar5 << 0xc);
    }
    break;
  case 6:
    iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)0x02028750) + 0x5c) + 100) + 0x14);
    iVar5 = func_020465d8(param_1,2);
    sVar3 = func_020465d8(param_1,3);
    sVar4 = func_020465d8(param_1,4);
    if (iVar5 == 0) {
      func_0x020d9f40(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x02028750) + 0x5c) + 0x7c),0);
      func_0x020f57e8(iVar6);
LAB_02028736:
      iVar5 = iVar5 + 1;
    }
    else if (iVar5 == 1) {
      iVar9 = func_0x020f5890(iVar6);
      if (iVar9 != 0) {
        func_0x020f57fc(iVar6);
        goto LAB_02028736;
      }
    }
    else if (iVar5 == 2) {
      func_0x020f582c(iVar6,(int)sVar3,(int)sVar4);
      *(ushort *)(iVar6 + 0x28) = *(ushort *)(iVar6 + 0x28) | 8;
      iVar5 = -1;
    }
    goto LAB_020287ae;
  case 7:
    iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)0x020287b8) + 0x5c) + 100) + 0x14);
    func_0x020f58bc(iVar6);
    *(ushort *)(iVar6 + 0x28) = (ushort)((unsigned int)0x020287bc) & *(ushort *)(iVar6 + 0x28);
    func_0x020d9f40(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x020287b8) + 0x5c) + 0x7c),1);
    iVar5 = -1;
    goto LAB_020287ae;
  default:
    goto switchD_0202849e_default;
  }
  iVar5 = -1;
LAB_020287ae:
  func_02046868(param_1,iVar5);
switchD_0202849e_default:
  return 1;
}
