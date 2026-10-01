
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

static unsigned int cVar1;
static unsigned int stack0xffffffcc;


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

extern int func_02016a4c();
extern int func_02016ae4();
extern int func_02016b50();
extern int func_0201705c();
extern int func_020172ac();
extern int func_02017580();
extern int func_02017b40();
extern int func_02018c48();
extern int func_02018d9c();
extern int func_02019064();

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int func_02018250(code *param_1,undefined4 param_2,char *param_3,uint *param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  uint uStack_250;
  uint uStack_24c;
  undefined1 uStack_248;
  char local_247 [3];
  undefined4 uStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  undefined1 *puStack_238;
  byte abStack_234 [511];
  undefined1 uStack_35;
  uint *puStack_4;

  local_247[0] = ' ';
  cVar1 = *param_3;
  iVar8 = 0;
  puStack_4 = param_4;
joined_r0x02018284:
  if (cVar1 == '\0') {
    return iVar8;
  }
  iVar3 = func_02019064(param_3,0x25);
  if (iVar3 == 0) {
    iVar3 = func_02018d9c(param_3);
    if (iVar3 == 0) {
      return iVar8 + iVar3;
    }
    iVar4 = (*param_1)(param_2,param_3);
    if (iVar4 != 0) {
      return iVar8 + iVar3;
    }
    return -1;
  }
  iVar8 = iVar8 + (iVar3 - (int)param_3);
  if ((iVar3 - (int)param_3 != 0) && (iVar4 = (*param_1)(param_2,param_3), iVar4 == 0)) {
    return -1;
  }
  param_3 = (char *)func_02016b50(iVar3,&puStack_4,&uStack_244);
  uVar6 = uStack_240 >> 8 & 0xff;
  if (uVar6 < 0x62) {
    if (0x60 < uVar6) {
code_r0x02018694:
      pbVar12 = (byte *)func_02017580(*puStack_4,puStack_4[1],&stack0xffffffcc,uStack_244);
      puStack_4 = puStack_4 + 2;
      goto joined_r0x02018668;
    }
    if (0x47 < uVar6) {
      if (uVar6 != 0x58) goto LAB_020188d8;
      goto LAB_0201850c;
    }
    switch(uVar6) {
    case 0x41:
      goto code_r0x02018694;
    case 0x42:
      goto LAB_020188d8;
    case 0x43:
      goto LAB_020188d8;
    case 0x44:
      goto LAB_020188d8;
    case 0x45:
      break;
    case 0x46:
      break;
    case 0x47:
      break;
    default:
      if (uVar6 != 0x25) goto LAB_020188d8;
      abStack_234[0] = 0x25;
      puVar9 = (undefined1 *)0x1;
      pbVar12 = abStack_234;
      goto LAB_02018924;
    }
    goto code_r0x0201863c;
  }
  if (0x75 < uVar6) {
    if ((0x78 < uVar6) || (uVar6 != 0x78)) goto LAB_020188d8;
    goto LAB_0201850c;
  }
  switch(uVar6) {
  case 100:
    goto LAB_020183f0;
  case 0x65:
    goto code_r0x0201863c;
  case 0x66:
    goto code_r0x0201863c;
  case 0x67:
code_r0x0201863c:
    pbVar12 = (byte *)func_02017b40(*puStack_4,puStack_4[1],&stack0xffffffcc,uStack_244);
    puStack_4 = puStack_4 + 2;
joined_r0x02018668:
    if (pbVar12 == (byte *)0x0) break;
    puVar9 = &uStack_35 + -(int)pbVar12;
LAB_02018924:
    puVar10 = puVar9;
    if ((char)uStack_244 != '\0') {
      local_247[0] = '0';
      if ((char)uStack_244 != '\x02') {
        local_247[0] = ' ';
      }
      bVar2 = *pbVar12;
      if (((bVar2 == 0x2b || bVar2 == 0x2d) || (bVar2 == 0x20)) && (local_247[0] == '0')) {
        iVar3 = (*param_1)(param_2,pbVar12,1);
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0201898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return iVar8;
        }
        pbVar12 = pbVar12 + 1;
        puVar10 = puVar9 + -1;
      }
      if (((char)uStack_244 == '\x02') && (((*(unsigned char *)((unsigned char *)&uStack_240 + 1)) == 'a' || ((*(unsigned char *)((unsigned char *)&uStack_240 + 1)) == 'A'))))
      {
        if ((int)puVar10 < 2) {
                    /* WARNING: Could not recover jumptable at 0x020189cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return iVar8;
        }
        iVar3 = (*param_1)(param_2,pbVar12,2);
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x020189f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return iVar8;
        }
        puVar10 = puVar10 + -2;
        pbVar12 = pbVar12 + 2;
      }
      if ((int)puVar9 < iStack_23c) {
        do {
          iVar3 = (*param_1)(param_2,local_247,1);
          if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02018a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
            return iVar8;
          }
          puVar9 = puVar9 + 1;
        } while ((int)puVar9 < iStack_23c);
      }
    }
    if ((puVar10 != (undefined1 *)0x0) && (iVar3 = (*param_1)(param_2,pbVar12,puVar10), iVar3 == 0))
    {
                    /* WARNING: Could not recover jumptable at 0x02018a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
      return iVar8;
    }
    if (((char)uStack_244 == '\0') && ((int)puVar9 < iStack_23c)) {
      do {
        uStack_248 = 0x20;
        iVar3 = (*param_1)(param_2,&uStack_248,1);
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02018abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return iVar8;
        }
        puVar9 = puVar9 + 1;
      } while ((int)puVar9 < iStack_23c);
    }
    iVar8 = iVar8 + (int)puVar9;
    goto switchD_02018848_default;
  case 0x68:
    break;
  case 0x69:
LAB_020183f0:
    if ((char)uStack_240 == '\x03') {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    else if (((char)uStack_240 == '\x04') || ((char)uStack_240 == '\x06')) {
      uStack_250 = *puStack_4;
      uStack_24c = puStack_4[1];
      puStack_4 = puStack_4 + 2;
    }
    else if ((char)uStack_240 == '\a') {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    else if ((char)uStack_240 == '\b') {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    else {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    if ((char)uStack_240 == '\x02') {
      unaff_r10 = (uint)(short)unaff_r10;
    }
    if ((char)uStack_240 == '\x01') {
      unaff_r10 = (uint)(char)unaff_r10;
    }
    if (((char)uStack_240 == '\x04') || ((char)uStack_240 == '\x06')) {
      pbVar12 = (byte *)func_020172ac(uStack_250,uStack_24c,&stack0xffffffcc,uStack_244);
    }
    else {
      pbVar12 = (byte *)func_0201705c(unaff_r10,&stack0xffffffcc,uStack_244,uStack_240);
    }
    goto joined_r0x02018668;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    break;
  case 0x6e:
    puVar5 = puStack_4 + 1;
    piVar7 = (int *)*puStack_4;
    if (param_5 != 0) {
      func_02018c48(0,0,0xffffffff);
      return -1;
    }
    puStack_4 = puVar5;
    switch(uStack_240 & 0xff) {
    case 0:
      goto LAB_02018874;
    case 1:
      break;
    case 2:
      *(short *)piVar7 = (short)iVar8;
      break;
    case 3:
      goto LAB_02018874;
    case 4:
      goto LAB_02018888;
    case 5:
      break;
    case 6:
LAB_02018888:
      *piVar7 = iVar8;
      piVar7[1] = iVar8 >> 0x1f;
      break;
    case 7:
      goto LAB_02018874;
    case 8:
LAB_02018874:
      *piVar7 = iVar8;
    }
switchD_02018848_default:
    cVar1 = *param_3;
    goto joined_r0x02018284;
  case 0x6f:
    goto LAB_0201850c;
  case 0x70:
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    if ((char)uStack_240 == '\x05') {
      uVar6 = *puStack_4;
      if ((param_5 != 0) && (uVar6 == 0)) {
        func_02018c48(0,0,0xffffffff);
        return -1;
      }
      pbVar11 = abStack_234;
      if (uVar6 == 0) {
        uVar6 = ((unsigned int)0x02018af4);
      }
      iVar4 = func_02016a4c(pbVar11,uVar6,0x200);
      if (iVar4 < 0) break;
    }
    else {
      pbVar11 = (byte *)*puStack_4;
    }
    puVar9 = puStack_238;
    puStack_4 = puStack_4 + 1;
    if ((param_5 != 0) && (pbVar11 == (byte *)0x0)) {
      func_02018c48(0,0,0xffffffff);
      return -1;
    }
    if (pbVar11 == (byte *)0x0) {
      pbVar11 = ((unsigned int)0x02018af8);
    }
    if ((*(unsigned char *)((unsigned char *)&uStack_244 + 3)) == '\0') {
      pbVar12 = pbVar11;
      if ((*(unsigned char *)((unsigned char *)&uStack_244 + 2)) == '\0') {
        puVar9 = (undefined1 *)func_02018d9c(pbVar11);
      }
      else {
        iVar3 = func_02016ae4(pbVar11,0,puStack_238);
        if (iVar3 != 0) {
          puVar9 = (undefined1 *)(iVar3 - (int)pbVar11);
        }
      }
    }
    else {
      pbVar12 = pbVar11 + 1;
      puVar10 = (undefined1 *)0x0;
      if ((*(unsigned char *)((unsigned char *)&uStack_244 + 2)) != '\0') {
        puVar10 = puStack_238;
      }
      puVar9 = (undefined1 *)(uint)*pbVar11;
      if ((*(unsigned char *)((unsigned char *)&uStack_244 + 2)) != '\0' && (int)puVar10 < (int)(uint)*pbVar11) {
        puVar9 = puVar10;
      }
    }
    goto LAB_02018924;
  case 0x74:
    break;
  case 0x75:
LAB_0201850c:
    if ((char)uStack_240 == '\x03') {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    else if (((char)uStack_240 == '\x04') || ((char)uStack_240 == '\x06')) {
      uStack_250 = *puStack_4;
      uStack_24c = puStack_4[1];
      puStack_4 = puStack_4 + 2;
    }
    else if ((char)uStack_240 == '\a') {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    else if ((char)uStack_240 == '\b') {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    else {
      unaff_r10 = *puStack_4;
      puStack_4 = puStack_4 + 1;
    }
    if ((char)uStack_240 == '\x02') {
      unaff_r10 = unaff_r10 & 0xffff;
    }
    if ((char)uStack_240 == '\x01') {
      unaff_r10 = unaff_r10 & 0xff;
    }
    if (((char)uStack_240 == '\x04') || ((char)uStack_240 == '\x06')) {
      pbVar12 = (byte *)func_020172ac(uStack_250,uStack_24c,&stack0xffffffcc,uStack_244);
    }
    else {
      pbVar12 = (byte *)func_0201705c(unaff_r10,&stack0xffffffcc,uStack_244,uStack_240);
    }
    goto joined_r0x02018668;
  default:
    if (uVar6 != 99) break;
    abStack_234[0] = (byte)*puStack_4;
    puVar9 = (undefined1 *)0x1;
    pbVar12 = abStack_234;
    puStack_4 = puStack_4 + 1;
    goto LAB_02018924;
  }
LAB_020188d8:
  iVar4 = func_02018d9c(iVar3);
  if ((iVar4 != 0) && (iVar3 = (*param_1)(param_2,iVar3), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0201890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar8 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
    return iVar8;
  }
  return iVar8 + iVar4;
}
