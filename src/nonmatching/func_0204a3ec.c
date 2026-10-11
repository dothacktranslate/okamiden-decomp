
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

extern int func_020461e8();
extern int func_02046204();
extern int func_020464b0();
extern int func_020464e8();
extern int func_020465d8();
extern int func_02046898();
extern int func_02046960();
extern int func_020472dc();
extern int func_020499ac();
extern int func_0204a77c();
extern int func_0204ac2c();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 func_0204a3ec(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int local_80;
  undefined1 auStack_7c [8];
  char *local_74;
  char *local_70;
  int local_68;
  undefined1 auStack_58 [64];

  bVar2 = true;
  iVar3 = func_020499ac(param_1,&local_80);
  iVar4 = func_020464b0(param_1,local_80 + 2);
  if (iVar4 == 0) {
    iVar4 = 1;
    if (param_1 != iVar3) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = func_020465d8(param_1,local_80 + 2);
    func_02046204(param_1,0xfffffffe);
  }
  iVar6 = local_80;
  iVar5 = func_020461e8(param_1);
  if (iVar6 == iVar5) {
    uVar8 = 0;
    puVar7 = ((unsigned int)0x0204a658);
  }
  else {
    iVar6 = func_020464e8(param_1,iVar6 + 1);
    if (iVar6 == 0) {
      return 1;
    }
    uVar8 = 1;
    puVar7 = ((unsigned int)0x0204a65c);
  }
  func_02046898(param_1,puVar7,uVar8);
  func_02046898(param_1,((unsigned int)0x0204a660),0x10);
  iVar6 = func_0204a77c(iVar3,iVar4,auStack_7c);
  while (iVar6 != 0) {
    iVar5 = iVar4 + 1;
    if ((iVar5 < 0xd) || (!bVar2)) {
      func_02046898(param_1,((unsigned int)0x0204a668),2);
      func_0204ac2c(iVar3,((unsigned int)0x0204a66c),auStack_7c);
      func_02046960(param_1,((unsigned int)0x0204a670),auStack_58);
      if (0 < local_68) {
        func_02046960(param_1,((unsigned int)0x0204a674));
      }
      puVar7 = ((unsigned int)0x0204a678);
      if (((*local_74 == '\0') &&
          (cVar1 = *local_70, puVar7 = ((unsigned int)0x0204a67c), cVar1 != 'm')) &&
         (puVar7 = ((unsigned char *)0x0204a684), cVar1 == 'C' || cVar1 == 't')) {
        func_02046898(param_1,((unsigned int)0x0204a680),2);
      }
      else {
        func_02046960(param_1,puVar7);
      }
      iVar4 = func_020461e8(param_1);
      func_020472dc(param_1,iVar4 - local_80);
    }
    else {
      iVar6 = func_0204a77c(iVar3,iVar4 + 0xb,auStack_7c);
      if (iVar6 != 0) {
        func_02046898(param_1,((unsigned int)0x0204a664),5);
        iVar6 = func_0204a77c(iVar3,iVar4 + 0xb,auStack_7c);
        iVar4 = iVar5;
        while (iVar6 != 0) {
          iVar6 = func_0204a77c(iVar3,iVar4 + 0xb,auStack_7c);
          iVar4 = iVar4 + 1;
        }
      }
      bVar2 = false;
      iVar5 = iVar4;
    }
    iVar6 = func_0204a77c(iVar3,iVar5,auStack_7c);
    iVar4 = iVar5;
  }
  iVar3 = func_020461e8(param_1);
  func_020472dc(param_1,iVar3 - local_80);
  return 1;
}
