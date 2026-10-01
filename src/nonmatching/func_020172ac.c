
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

extern int func_0201e96c();
extern int func_0201e978();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * func_020172ac(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
                   int param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  longlong lVar11;
  uint local_44;
  int local_40;
  uint local_3c;
  char local_4;

  lVar11 = CONCAT44(param_2,param_1);
  pcVar5 = (char *)(param_3 + -1);
  *pcVar5 = '\0';
  local_40 = param_7;
  uVar3 = param_4 >> 0x18;
  bVar10 = param_2 == 0 && param_1 == 0;
  local_3c = 0;
  local_44 = param_4 >> 8 & 0xff;
  iVar7 = 0;
  if (param_2 == 0 && param_1 == 0) {
    bVar10 = param_7 == 0;
  }
  if ((bVar10) && ((uVar3 == 0 || ((*(unsigned char *)((unsigned char *)&param_5 + 1)) != 0x6f)))) {
    return pcVar5;
  }
  if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) < 0x6a) {
    if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) < 0x69) {
      if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) < 0x59) {
        lVar11 = CONCAT44(param_2,param_1);
        if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) != 0x58) goto LAB_020173ec;
        goto LAB_020173e0;
      }
      if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) != 100) goto LAB_020173ec;
    }
    unaff_r6 = 10;
    unaff_r5 = 0;
    lVar11 = CONCAT44(param_2,param_1);
    if (param_2 < 0) {
      if (param_2 != -0x80000000 || param_1 != 0) {
        bVar10 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(param_2 + (uint)bVar10);
      }
      local_3c = 1;
      lVar11 = CONCAT44(param_2,param_1);
    }
  }
  else {
    if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) < 0x70) {
      lVar11 = CONCAT44(param_2,param_1);
      if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 0x6f) {
        unaff_r5 = 0;
        local_44 = 0;
        unaff_r6 = 8;
        lVar11 = CONCAT44(param_2,param_1);
      }
      goto LAB_020173ec;
    }
    lVar11 = CONCAT44(param_2,param_1);
    if ((0x78 < (*(unsigned char *)((unsigned char *)&param_5 + 1))) || (lVar11 = CONCAT44(param_2,param_1), (*(unsigned char *)((unsigned char *)&param_5 + 1)) < 0x75))
    goto LAB_020173ec;
    if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 0x75) {
      unaff_r5 = 0;
      local_44 = 0;
      unaff_r6 = 10;
      lVar11 = CONCAT44(param_2,param_1);
      goto LAB_020173ec;
    }
    lVar11 = CONCAT44(param_2,param_1);
    if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) != 0x78) goto LAB_020173ec;
LAB_020173e0:
    unaff_r5 = 0;
    local_44 = 0;
    unaff_r6 = 0x10;
    lVar11 = CONCAT44(param_2,param_1);
  }
LAB_020173ec:
  do {
    iVar8 = iVar7;
    pcVar6 = pcVar5;
    uVar9 = (undefined4)((ulonglong)lVar11 >> 0x20);
    iVar7 = func_0201e978((int)lVar11,uVar9,unaff_r6,unaff_r5);
    lVar11 = func_0201e96c((int)lVar11,uVar9,unaff_r6,unaff_r5);
    cVar1 = (char)iVar7;
    if (iVar7 < 10) {
      cVar4 = cVar1 + '0';
    }
    else {
      cVar4 = cVar1 + 'W';
      if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) != 0x78) {
        cVar4 = cVar1 + '7';
      }
    }
    pcVar5 = pcVar6 + -1;
    *pcVar5 = cVar4;
    iVar7 = iVar8 + 1;
  } while (lVar11 != 0);
  if (unaff_r5 == 0 && unaff_r6 == 8) {
    cVar1 = '\0';
    if (uVar3 != 0) {
      cVar1 = *pcVar5;
    }
    if (uVar3 != 0 && cVar1 != '0') {
      pcVar5 = pcVar6 + -2;
      *pcVar5 = '0';
      iVar7 = iVar8 + 2;
    }
  }
  local_4 = (char)param_4;
  if (local_4 == '\x02') {
    local_40 = param_6;
    uVar2 = local_3c;
    if (local_3c == 0) {
      uVar2 = local_44;
    }
    if (local_3c != 0 || uVar2 != 0) {
      local_40 = param_6 + -1;
    }
    if ((unaff_r5 == 0 && unaff_r6 == 0x10) && (uVar3 != 0)) {
      local_40 = local_40 + -2;
    }
  }
  if (((unsigned int)0x0201757c) < local_40 + (param_3 - (int)pcVar5)) {
    return (char *)0x0;
  }
  for (; iVar7 < local_40; iVar7 = iVar7 + 1) {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = '0';
  }
  if ((unaff_r5 == 0 && unaff_r6 == 0x10) && (uVar3 != 0)) {
    pcVar5[-1] = (*(unsigned char *)((unsigned char *)&param_5 + 1));
    pcVar5 = pcVar5 + -2;
    *pcVar5 = '0';
  }
  if (local_3c == 0) {
    if (local_44 == 1) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = '+';
    }
    else if (local_44 == 2) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = ' ';
    }
  }
  else {
    pcVar5 = pcVar5 + -1;
    *pcVar5 = '-';
  }
  return pcVar5;
}
