
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

extern int func_02017a2c();
extern int func_0201b78c();
extern int func_0201e21c();

byte * func_02017b40(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,
                   undefined4 param_5,undefined4 param_6,uint param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_60 [2];
  undefined2 uStack_5e;
  char acStack_5c [2];
  short sStack_5a;
  byte bStack_58;
  byte abStack_57 [35];
  char local_1;

  uVar8 = (uint)(*(unsigned char *)((unsigned char *)&param_5 + 1));
  local_1 = (char)(param_4 >> 0x18);
  uVar7 = param_4 >> 8 & 0xff;
  if (((unsigned int)0x02018224) < (int)param_7) {
    return (byte *)0x0;
  }
  auStack_60[0] = 0;
  uStack_5e = 0x20;
  func_0201b78c(auStack_60,param_1,param_2,acStack_5c);
  pbVar2 = ((unsigned int)0x02018248);
  pbVar1 = ((unsigned int)0x02018244);
  pbVar10 = ((unsigned int)0x02018240);
  pbVar9 = ((unsigned int)0x0201823c);
  pbVar5 = abStack_57 + bStack_58;
  while ((1 < bStack_58 && (pbVar5 = pbVar5 + -1, *pbVar5 == 0x30))) {
    bStack_58 = bStack_58 - 1;
    sStack_5a = sStack_5a + 1;
  }
  if (abStack_57[0] == 0x30) {
    sStack_5a = 0;
  }
  else {
    bVar13 = 0x48 < abStack_57[0];
    if (abStack_57[0] == 0x49) {
      func_0201e21c(param_1,param_2,0,0);
      pbVar2 = ((unsigned int)0x02018238);
      pbVar1 = ((unsigned int)0x02018234);
      pbVar10 = ((unsigned int)0x02018230);
      pbVar9 = ((unsigned int)0x0201822c);
      if (bVar13) {
        if (uVar8 < 0x80) {
          uVar4 = *(ushort *)(((unsigned int)0x02018228) + uVar8 * 2) & 0x200;
        }
        else {
          uVar4 = 0;
        }
        pbVar9 = (byte *)(param_3 + -4);
        if (uVar4 != 0) {
          bVar12 = ((unsigned int *)0x02018234)[1];
          *pbVar9 = (*(unsigned int *)0x02018234);
          *(byte *)(param_3 + -3) = bVar12;
          bVar12 = pbVar1[3];
          *(byte *)(param_3 + -2) = pbVar1[2];
          *(byte *)(param_3 + -1) = bVar12;
          return pbVar9;
        }
        bVar12 = ((unsigned int *)0x02018238)[1];
        *pbVar9 = (*(unsigned int *)0x02018238);
        *(byte *)(param_3 + -3) = bVar12;
        bVar12 = pbVar2[3];
        *(byte *)(param_3 + -2) = pbVar2[2];
        *(byte *)(param_3 + -1) = bVar12;
        return pbVar9;
      }
      if (uVar8 < 0x80) {
        uVar4 = *(ushort *)(((unsigned int)0x02018228) + uVar8 * 2) & 0x200;
      }
      else {
        uVar4 = 0;
      }
      pbVar1 = (byte *)(param_3 + -5);
      if (uVar4 != 0) {
        bVar12 = ((unsigned int *)0x0201822c)[1];
        *pbVar1 = (*(unsigned int *)0x0201822c);
        *(byte *)(param_3 + -4) = bVar12;
        bVar12 = pbVar9[3];
        *(byte *)(param_3 + -3) = pbVar9[2];
        *(byte *)(param_3 + -2) = bVar12;
        *(byte *)(param_3 + -1) = pbVar9[4];
        return pbVar1;
      }
      bVar12 = ((unsigned int *)0x02018230)[1];
      *pbVar1 = (*(unsigned int *)0x02018230);
      *(byte *)(param_3 + -4) = bVar12;
      bVar12 = pbVar10[3];
      *(byte *)(param_3 + -3) = pbVar10[2];
      *(byte *)(param_3 + -2) = bVar12;
      *(byte *)(param_3 + -1) = pbVar10[4];
      return pbVar1;
    }
    if (abStack_57[0] == 0x4e) {
      if (acStack_5c[0] == '\0') {
        if (uVar8 < 0x80) {
          uVar4 = *(ushort *)(((unsigned int)0x02018228) + uVar8 * 2) & 0x200;
        }
        else {
          uVar4 = 0;
        }
        pbVar9 = (byte *)(param_3 + -4);
        if (uVar4 != 0) {
          bVar12 = ((unsigned int *)0x02018244)[1];
          *pbVar9 = (*(unsigned int *)0x02018244);
          *(byte *)(param_3 + -3) = bVar12;
          bVar12 = pbVar1[3];
          *(byte *)(param_3 + -2) = pbVar1[2];
          *(byte *)(param_3 + -1) = bVar12;
          return pbVar9;
        }
        bVar12 = ((unsigned int *)0x02018248)[1];
        *pbVar9 = (*(unsigned int *)0x02018248);
        *(byte *)(param_3 + -3) = bVar12;
        bVar12 = pbVar2[3];
        *(byte *)(param_3 + -2) = pbVar2[2];
        *(byte *)(param_3 + -1) = bVar12;
        return pbVar9;
      }
      if (uVar8 < 0x80) {
        uVar4 = *(ushort *)(((unsigned int)0x02018228) + uVar8 * 2) & 0x200;
      }
      else {
        uVar4 = 0;
      }
      pbVar1 = (byte *)(param_3 + -5);
      if (uVar4 != 0) {
        bVar12 = ((unsigned int *)0x0201823c)[1];
        *pbVar1 = (*(unsigned int *)0x0201823c);
        *(byte *)(param_3 + -4) = bVar12;
        bVar12 = pbVar9[3];
        *(byte *)(param_3 + -3) = pbVar9[2];
        *(byte *)(param_3 + -2) = bVar12;
        *(byte *)(param_3 + -1) = pbVar9[4];
        return pbVar1;
      }
      bVar12 = ((unsigned int *)0x02018240)[1];
      *pbVar1 = (*(unsigned int *)0x02018240);
      *(byte *)(param_3 + -4) = bVar12;
      bVar12 = pbVar10[3];
      *(byte *)(param_3 + -3) = pbVar10[2];
      *(byte *)(param_3 + -2) = bVar12;
      *(byte *)(param_3 + -1) = pbVar10[4];
      return pbVar1;
    }
  }
  pbVar9 = (byte *)(param_3 + -1);
  sStack_5a = sStack_5a + (bStack_58 - 1);
  *pbVar9 = 0;
  if (uVar8 < 0x66) {
    if (uVar8 < 0x65) {
      if (0x47 < uVar8) {
        return pbVar9;
      }
      if (uVar8 < 0x45) {
        return pbVar9;
      }
      if (uVar8 != 0x45) {
        if (uVar8 != 0x46) {
          if (uVar8 != 0x47) {
            return pbVar9;
          }
          goto LAB_02017ef8;
        }
        goto LAB_020180a4;
      }
    }
LAB_02017f68:
    if ((int)(param_7 + 1) < (int)(uint)bStack_58) {
      func_02017a2c(acStack_5c);
    }
    iVar6 = ((unsigned int)0x0201824c);
    iVar3 = (int)sStack_5a;
    bVar12 = 0x2b;
    iVar11 = 0;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      bVar12 = 0x2d;
    }
    for (; (iVar3 != 0 || (iVar11 < 2)); iVar11 = iVar11 + 1) {
      pbVar9 = pbVar9 + -1;
      *pbVar9 = (char)iVar3 +
                ((char)(int)((longlong)iVar6 * (longlong)iVar3 >> 0x22) - (char)(iVar3 >> 0x1f)) *
                -10 + 0x30;
      iVar3 = (int)((longlong)iVar6 * (longlong)iVar3 >> 0x22) - (iVar3 >> 0x1f);
    }
    pbVar9[-1] = bVar12;
    pbVar10 = pbVar9 + -2;
    *pbVar10 = (*(unsigned char *)((unsigned char *)&param_5 + 1));
    if (((unsigned int)0x02018224) < (int)(param_7 + (param_3 - (int)pbVar10))) {
      return (byte *)0x0;
    }
    if ((int)(uint)bStack_58 < (int)(param_7 + 1)) {
      for (iVar3 = (param_7 - bStack_58) + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar10 = pbVar10 + -1;
        *pbVar10 = 0x30;
      }
    }
    uVar8 = (uint)bStack_58;
    pbVar9 = abStack_57 + uVar8;
    while (uVar8 = uVar8 - 1, uVar8 != 0) {
      pbVar9 = pbVar9 + -1;
      pbVar10 = pbVar10 + -1;
      *pbVar10 = *pbVar9;
    }
    if (param_7 != 0 || local_1 != '\0') {
      pbVar10 = pbVar10 + -1;
      *pbVar10 = 0x2e;
    }
    pbVar9 = pbVar10 + -1;
    *pbVar9 = abStack_57[0];
    if (acStack_5c[0] != '\0') {
      pbVar10[-2] = 0x2d;
      return pbVar10 + -2;
    }
    if (uVar7 == 1) {
      pbVar10[-2] = 0x2b;
      return pbVar10 + -2;
    }
  }
  else {
    if (uVar8 < 0x67) {
      if (uVar8 != 0x66) {
        return pbVar9;
      }
    }
    else {
      if (uVar8 != 0x67) {
        return pbVar9;
      }
LAB_02017ef8:
      if ((int)param_7 < (int)(uint)bStack_58) {
        func_02017a2c(acStack_5c,param_7);
      }
      iVar3 = (int)sStack_5a;
      if ((iVar3 < -4) || ((int)param_7 <= iVar3)) {
        if (local_1 == '\0') {
          param_7 = (uint)bStack_58;
        }
        param_7 = param_7 - 1;
        if (uVar8 == 0x67) {
          (*(unsigned char *)((unsigned char *)&param_5 + 1)) = 0x65;
        }
        else {
          (*(unsigned char *)((unsigned char *)&param_5 + 1)) = 0x45;
        }
        goto LAB_02017f68;
      }
      if (local_1 == '\0') {
        param_7 = (uint)bStack_58 - (iVar3 + 1);
        if ((int)param_7 < 0) {
          param_7 = 0;
        }
      }
      else {
        param_7 = param_7 - (iVar3 + 1);
      }
    }
LAB_020180a4:
    iVar3 = (int)sStack_5a;
    uVar8 = (uint)bStack_58;
    iVar6 = (uVar8 - iVar3) + -1;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if ((int)param_7 < iVar6) {
      func_02017a2c(acStack_5c,uVar8 - (iVar6 - param_7));
      iVar3 = (int)sStack_5a;
      uVar8 = (uint)bStack_58;
      iVar6 = (uVar8 - iVar3) + -1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    }
    iVar3 = iVar3 + 1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (((unsigned int)0x02018224) < iVar3 + iVar6) {
      return (byte *)0x0;
    }
    pbVar10 = abStack_57 + uVar8;
    iVar11 = 0;
    if (0 < (int)(param_7 - iVar6)) {
      do {
        iVar11 = iVar11 + 1;
        pbVar9 = pbVar9 + -1;
        *pbVar9 = 0x30;
      } while (iVar11 < (int)(param_7 - iVar6));
    }
    for (iVar11 = 0; (iVar11 < iVar6 && (iVar11 < (int)(uint)bStack_58)); iVar11 = iVar11 + 1) {
      pbVar10 = pbVar10 + -1;
      pbVar9 = pbVar9 + -1;
      *pbVar9 = *pbVar10;
    }
    for (; iVar11 < iVar6; iVar11 = iVar11 + 1) {
      pbVar9 = pbVar9 + -1;
      *pbVar9 = 0x30;
    }
    if (param_7 != 0 || local_1 != '\0') {
      pbVar9 = pbVar9 + -1;
      *pbVar9 = 0x2e;
    }
    if (iVar3 == 0) {
      pbVar9 = pbVar9 + -1;
      *pbVar9 = 0x30;
    }
    else {
      iVar6 = 0;
      if (0 < (int)(iVar3 - (uint)bStack_58)) {
        do {
          pbVar9 = pbVar9 + -1;
          *pbVar9 = 0x30;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(iVar3 - (uint)bStack_58));
      }
      for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
        pbVar10 = pbVar10 + -1;
        pbVar9 = pbVar9 + -1;
        *pbVar9 = *pbVar10;
      }
    }
    if (acStack_5c[0] != '\0') {
      pbVar9[-1] = 0x2d;
      return pbVar9 + -1;
    }
    if (uVar7 == 1) {
      pbVar9[-1] = 0x2b;
      return pbVar9 + -1;
    }
  }
  if (uVar7 == 2) {
    pbVar9 = pbVar9 + -1;
    *pbVar9 = 0x20;
  }
  return pbVar9;
}
