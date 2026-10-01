
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

extern int func_0200bfb4();
extern int func_0200c114();
extern int func_0200c868();
extern int func_0200c89c();

undefined4 func_0200c174(char *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_2c;
  int local_28;

  pcVar4 = ((unsigned int)0x0200c454);
  puVar2 = ((unsigned int)0x0200c450);
  iVar6 = 0;
  local_28 = 0;
  if (((unsigned int *)0x0200c450)[1] == 0) {
    ((unsigned int *)0x0200c450)[1] = (*(unsigned int *)0x0200c450);
    *(undefined2 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    *pcVar4 = '\0';
  }
  if ((*param_1 == '/') || (*param_1 == '\\')) {
    local_2c = ((unsigned int *)0x0200c450)[1];
    param_1 = param_1 + 1;
LAB_0200c2b8:
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    for (iVar7 = 0;
        (uVar3 = (uint)(byte)param_1[iVar7], uVar3 != 0 && uVar3 != 0x2f && (uVar3 != 0x5c));
        iVar7 = iVar7 + 1 + (uint)((uVar3 ^ 0x20) - 0xa1 < 0x3c)) {
      if (uVar3 == 0x3a) {
        local_2c = func_0200bfb4(param_1,iVar7);
        param_1 = param_1 + iVar7 + 1;
        if (*param_1 == '/' || *param_1 == '\\') {
          param_1 = param_1 + 1;
        }
        goto LAB_0200c2b8;
      }
    }
    local_2c = ((unsigned int *)0x0200c450)[1];
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)*(ushort *)(((unsigned int)0x0200c450) + 2);
    }
    if (((param_3 != 0) && (*(short *)(((unsigned int)0x0200c450) + 2) == 0)) && ((*(unsigned int *)0x0200c454) != '\0')) {
      iVar6 = func_0200c114(param_3,0x104,((unsigned int)0x0200c454),0x104,&local_28);
      iVar7 = func_0200c114(param_3 + iVar6,0x104 - iVar6,((unsigned int)0x0200c458),1,&local_28);
      iVar6 = iVar6 + iVar7;
    }
  }
  if (param_3 != 0) {
    iVar7 = 0;
    if (local_28 == 0) {
      do {
        pcVar4 = param_1 + iVar7;
        bVar1 = param_1[iVar7];
        if ((bVar1 == 0) || (bVar1 == 0x2f || bVar1 == 0x5c)) {
          if ((iVar7 != 0) &&
             ((iVar7 != 1 || (pcVar4 = (char *)(int)*param_1, pcVar4 != (char *)0x2e)))) {
            bVar8 = iVar7 == 2;
            if (bVar8) {
              pcVar4 = (char *)(int)*param_1;
            }
            bVar9 = bVar8 && pcVar4 == (char *)0x2e;
            if (bVar8 && pcVar4 == (char *)0x2e) {
              bVar9 = param_1[1] == '.';
            }
            if (bVar9) {
              if (0 < iVar6) {
                iVar6 = iVar6 + -1;
              }
              iVar6 = func_0200c868(param_3,iVar6);
              iVar6 = iVar6 + 1;
            }
            else {
              iVar5 = func_0200c114(param_3 + iVar6,0x104 - iVar6,param_1,iVar7,&local_28);
              iVar6 = iVar6 + iVar5;
              if (bVar1 != 0) {
                iVar5 = func_0200c114(param_3 + iVar6,0x104 - iVar6,((unsigned int)0x0200c458),1,&local_28);
                iVar6 = iVar6 + iVar5;
              }
            }
          }
          if (bVar1 == 0) break;
          param_1 = param_1 + iVar7 + 1;
          iVar7 = 0;
        }
        else {
          bVar8 = false;
          if ((((bVar1 ^ 0x20) - 0xa1 < 0x3c) && (pcVar4[1] != 0x7f)) &&
             (((int)pcVar4[1] - 0x40U & 0xff) < 0xbd)) {
            bVar8 = true;
          }
          iVar5 = 2;
          if (!bVar8) {
            iVar5 = 1;
          }
          iVar7 = iVar7 + iVar5;
        }
      } while (local_28 == 0);
    }
    *(undefined1 *)(param_3 + iVar6) = 0;
    func_0200c89c(param_3);
  }
  if (local_28 != 0) {
    local_2c = 0;
  }
  return local_2c;
}
