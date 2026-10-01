
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

extern int func_02015ce0();
extern int func_02035834();
extern int func_0203de6c();

int func_02040dc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_2c [20];
  undefined4 uStack_18;

  if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x1c)) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
    puVar1 = ((unsigned int)0x02040f24);
    uVar3 = 0;
    uVar4 = 0xe;
    uStack_18 = param_4;
    iVar2 = func_02015ce0(param_2,((unsigned int *)0x02040f24)[10]);
    if (iVar2 == 0) {
      uVar3 = 0x88;
      uVar4 = 0;
    }
    else {
      iVar2 = func_02015ce0(param_2,puVar1[3]);
      if (iVar2 == 0) {
        uVar3 = 0x48;
        uVar4 = 1;
      }
      else {
        iVar2 = func_02015ce0(param_2,puVar1[1]);
        if (iVar2 == 0) {
          uVar3 = 0x34;
          uVar4 = 2;
        }
        else {
          iVar2 = func_02015ce0(param_2,puVar1[8]);
          if (iVar2 == 0) {
            uVar3 = 100;
            uVar4 = 3;
          }
          else {
            iVar2 = func_02015ce0(param_2,*puVar1);
            if (iVar2 == 0) {
              uVar3 = 0x80;
              uVar4 = 4;
            }
            else {
              iVar2 = func_02015ce0(param_2,puVar1[7]);
              if (iVar2 == 0) {
                uVar3 = 0x68;
                uVar4 = 5;
              }
              else {
                iVar2 = func_02015ce0(param_2,puVar1[6]);
                if (iVar2 == 0) {
                  uVar3 = 0xa0;
                  uVar4 = 6;
                }
                else {
                  iVar2 = func_02015ce0(param_2,puVar1[0xb]);
                  if (iVar2 == 0) {
                    uVar3 = 0x118;
                    uVar4 = 7;
                  }
                  else {
                    iVar2 = func_02015ce0(param_2,puVar1[2]);
                    if (iVar2 == 0) {
                      uVar3 = 0xc0;
                      uVar4 = 8;
                    }
                    else {
                      iVar2 = func_02015ce0(param_2,puVar1[0xc]);
                      if (iVar2 == 0) {
                        uVar3 = 0x124;
                        uVar4 = 9;
                      }
                      else {
                        iVar2 = func_02015ce0(param_2,puVar1[4]);
                        if (iVar2 == 0) {
                          uVar3 = 0x98;
                          uVar4 = 10;
                        }
                        else {
                          iVar2 = func_02015ce0(param_2,puVar1[5]);
                          if (iVar2 == 0) {
                            uVar3 = 0xf0;
                            uVar4 = 0xb;
                          }
                          else {
                            iVar2 = func_02015ce0(param_2,puVar1[9]);
                            if (iVar2 == 0) {
                              uVar3 = 0x120;
                              uVar4 = 0xc;
                            }
                            else {
                              iVar2 = func_02015ce0(param_2,puVar1[0xd]);
                              if (iVar2 == 0) {
                                uVar3 = 0x6c;
                                uVar4 = 0xd;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),uVar3,4,param_2);
    if ((iVar2 != 0) && (iVar2 = func_0203de6c(iVar2,uVar4), iVar2 != 0)) {
      func_02035834(auStack_2c,param_1 + 0xc,param_1 + 0x10,iVar2 + 4,param_1 + 0xc);
      return iVar2;
    }
  }
  return 0;
}
