
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

extern int func_0201705c();
extern int func_0201b78c();
extern int func_0201d008();
extern int func_0201e344();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * func_02017580(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  undefined1 auStack_70 [2];
  undefined2 uStack_6e;
  char acStack_6c [2];
  undefined2 uStack_6a;
  char cStack_67;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  byte bStack_11;
  uint local_10;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;

  (*(unsigned char *)((unsigned char *)&uStack_4 + 3)) = (char)((uint)param_4 >> 0x18);
  cVar8 = (*(unsigned char *)((unsigned char *)&uStack_4 + 3));
  (*(unsigned char *)((unsigned char *)&uStack_4 + 1)) = (char)((uint)param_4 >> 8);
  cVar1 = (*(unsigned char *)((unsigned char *)&uStack_4 + 1));
  if (((unsigned int)0x02017a04) < param_7) {
    return (char *)0x0;
  }
  auStack_70[0] = 0;
  uStack_6e = 0x20;
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  uStack_4 = param_4;
  func_0201b78c(auStack_70,param_1,param_2,acStack_6c);
  pcVar7 = ((unsigned int)0x02017a24);
  pcVar6 = ((unsigned int)0x02017a20);
  pcVar5 = ((unsigned int)0x02017a1c);
  pcVar4 = ((unsigned int)0x02017a18);
  pcVar3 = ((unsigned int)0x02017a14);
  pcVar9 = ((unsigned int)0x02017a10);
  pcVar15 = ((unsigned int)0x02017a0c);
  pcVar14 = ((unsigned int)0x02017a08);
  if (cStack_67 == '0') {
    uStack_6a = 0;
  }
  else {
    if (cStack_67 == 'I') {
      if (acStack_6c[0] == '\0') {
        pcVar14 = (char *)(param_3 + -4);
        if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 'A') {
          cVar1 = ((unsigned int *)0x02017a10)[1];
          *pcVar14 = (*(unsigned int *)0x02017a10);
          *(char *)(param_3 + -3) = cVar1;
          cVar1 = pcVar9[3];
          *(char *)(param_3 + -2) = pcVar9[2];
          *(char *)(param_3 + -1) = cVar1;
          return pcVar14;
        }
        cVar1 = ((unsigned int *)0x02017a14)[1];
        *pcVar14 = (*(unsigned int *)0x02017a14);
        *(char *)(param_3 + -3) = cVar1;
        cVar1 = pcVar3[3];
        *(char *)(param_3 + -2) = pcVar3[2];
        *(char *)(param_3 + -1) = cVar1;
        return pcVar14;
      }
      pcVar9 = (char *)(param_3 + -5);
      if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 'A') {
        cVar1 = ((unsigned int *)0x02017a08)[1];
        *pcVar9 = (*(unsigned int *)0x02017a08);
        *(char *)(param_3 + -4) = cVar1;
        cVar1 = pcVar14[3];
        *(char *)(param_3 + -3) = pcVar14[2];
        *(char *)(param_3 + -2) = cVar1;
        *(char *)(param_3 + -1) = pcVar14[4];
        return pcVar9;
      }
      cVar1 = ((unsigned int *)0x02017a0c)[1];
      *pcVar9 = (*(unsigned int *)0x02017a0c);
      *(char *)(param_3 + -4) = cVar1;
      cVar1 = pcVar15[3];
      *(char *)(param_3 + -3) = pcVar15[2];
      *(char *)(param_3 + -2) = cVar1;
      *(char *)(param_3 + -1) = pcVar15[4];
      return pcVar9;
    }
    if (cStack_67 == 'N') {
      if (acStack_6c[0] == '\0') {
        pcVar14 = (char *)(param_3 + -4);
        if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 'A') {
          cVar1 = ((unsigned int *)0x02017a20)[1];
          *pcVar14 = (*(unsigned int *)0x02017a20);
          *(char *)(param_3 + -3) = cVar1;
          cVar1 = pcVar6[3];
          *(char *)(param_3 + -2) = pcVar6[2];
          *(char *)(param_3 + -1) = cVar1;
          return pcVar14;
        }
        cVar1 = ((unsigned int *)0x02017a24)[1];
        *pcVar14 = (*(unsigned int *)0x02017a24);
        *(char *)(param_3 + -3) = cVar1;
        cVar1 = pcVar7[3];
        *(char *)(param_3 + -2) = pcVar7[2];
        *(char *)(param_3 + -1) = cVar1;
        return pcVar14;
      }
      pcVar14 = (char *)(param_3 + -5);
      if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 'A') {
        cVar1 = ((unsigned int *)0x02017a18)[1];
        *pcVar14 = (*(unsigned int *)0x02017a18);
        *(char *)(param_3 + -4) = cVar1;
        cVar1 = pcVar4[3];
        *(char *)(param_3 + -3) = pcVar4[2];
        *(char *)(param_3 + -2) = cVar1;
        *(char *)(param_3 + -1) = pcVar4[4];
        return pcVar14;
      }
      cVar1 = ((unsigned int *)0x02017a1c)[1];
      *pcVar14 = (*(unsigned int *)0x02017a1c);
      *(char *)(param_3 + -4) = cVar1;
      cVar1 = pcVar5[3];
      *(char *)(param_3 + -3) = pcVar5[2];
      *(char *)(param_3 + -2) = cVar1;
      *(char *)(param_3 + -1) = pcVar5[4];
      return pcVar14;
    }
  }
  iVar12 = 0;
  uStack_44 = 0x101;
  uStack_3c = 0;
  uStack_38 = 1;
  uStack_40 = CONCAT22((*(unsigned short *)((unsigned char *)&uStack_40 + 2)),0x6400);
  do {
    iVar2 = -iVar12;
    uVar17 = *(undefined1 *)((int)&local_10 + iVar12);
    *(undefined1 *)((int)&local_10 + iVar12) = *(undefined1 *)((int)&local_c + iVar2 + 3);
    iVar12 = iVar12 + 1;
    *(undefined1 *)((int)&local_c + iVar2 + 3) = uVar17;
  } while (iVar12 < 4);
  uVar11 = ((unsigned int)0x02017a28) & ((local_10 >> 8 & 0xff) << 0x11 | local_10 << 0x19) >> 0x15;
  if (uVar11 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = uVar11 + (0x400 - ((unsigned int)0x02017a28));
  }
  iVar12 = func_0201705c(iVar12,param_3,0x101,uStack_40);
  pcVar14 = (char *)(iVar12 + -1);
  if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 'a') {
    cVar10 = 'p';
  }
  else {
    cVar10 = 'P';
  }
  *pcVar14 = cVar10;
  uVar11 = param_7 * 4 + 0xb;
  for (iVar12 = param_7; 0 < iVar12; iVar12 = iVar12 + -1) {
    if ((int)uVar11 < 0x40) {
      uVar13 = 7 - (uVar11 & 7);
      uVar16 = (int)(uint)*(byte *)((int)&local_10 + ((int)uVar11 >> 3)) >> (uVar13 & 0xff) & 0xff;
      if ((uVar11 & 0xfffffff8) != (uVar11 - 4 & 0xfffffff8)) {
        uVar16 = uVar16 | (int)((uint)(&bStack_11)[(int)uVar11 >> 3] << 8) >> (uVar13 & 0xff) &
                          0xffU;
      }
      cVar10 = (char)(uVar16 & 0xf);
      if ((uVar16 & 0xf) < 10) {
        cVar10 = cVar10 + '0';
      }
      else if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) == 'a') {
        cVar10 = cVar10 + 'W';
      }
      else {
        cVar10 = cVar10 + '7';
      }
    }
    else {
      cVar10 = '0';
    }
    pcVar14 = pcVar14 + -1;
    *pcVar14 = cVar10;
    uVar11 = uVar11 - 4;
  }
  uVar17 = param_7 == 0 && cVar8 == '\0';
  if (param_7 != 0 || cVar8 != '\0') {
    pcVar14 = pcVar14 + -1;
    *pcVar14 = '.';
  }
  uVar18 = func_0201d008(param_1,param_2);
  func_0201e344(0,0,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  if ((bool)uVar17) {
    cVar8 = '0';
  }
  else {
    cVar8 = '1';
  }
  pcVar14[-1] = cVar8;
  cVar8 = 'x';
  if ((*(unsigned char *)((unsigned char *)&param_5 + 1)) != 'a') {
    cVar8 = 'X';
  }
  pcVar14[-2] = cVar8;
  pcVar15 = pcVar14 + -3;
  *pcVar15 = '0';
  if (acStack_6c[0] == '\0') {
    if (cVar1 == '\x01') {
      pcVar15 = pcVar14 + -4;
      *pcVar15 = '+';
    }
    else if (cVar1 == '\x02') {
      pcVar15 = pcVar14 + -4;
      *pcVar15 = ' ';
    }
  }
  else {
    pcVar15 = pcVar14 + -4;
    *pcVar15 = '-';
  }
  return pcVar15;
}
