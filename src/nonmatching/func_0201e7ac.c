
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef signed char sbyte;

typedef unsigned short ushort;
typedef unsigned short undefined2;
typedef signed short short2;

typedef unsigned int uint;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned int uint3;
typedef signed int int3;
typedef signed int int4;

typedef unsigned long long ulonglong;
typedef unsigned long long undefined8;
typedef signed long long longlong;

typedef unsigned char bool;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

typedef int code();

#define SUB21(x,o) \
    ((unsigned char)(((unsigned short)(x)) >> ((o) * 8)))

#define SUB22(x,o) \
    ((unsigned short)(((unsigned short)(x)) >> ((o) * 8)))

#define SUB31(x,o) \
    ((unsigned char)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB32(x,o) \
    ((unsigned short)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB33(x,o) \
    ((((unsigned int)(x)) >> ((o) * 8)) & 0x00ffffffU)

#define SUB41(x,o) \
    ((unsigned char)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB42(x,o) \
    ((unsigned short)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB43(x,o) \
    ((((unsigned int)(x)) >> ((o) * 8)) & 0x00ffffffU)

#define SUB44(x,o) \
    ((unsigned int)(((unsigned int)(x)) >> ((o) * 8)))

#define SUB81(x,o) \
    ((unsigned char)(((unsigned long long)(x)) >> ((o) * 8)))

#define SUB82(x,o) \
    ((unsigned short)(((unsigned long long)(x)) >> ((o) * 8)))

#define SUB84(x,o) \
    ((unsigned int)(((unsigned long long)(x)) >> ((o) * 8)))

#define CONCAT11(a,b) \
    ((((unsigned short)(a)) << 8) | ((unsigned char)(b)))

#define CONCAT12(a,b) \
    ((((unsigned int)(a)) << 16) | ((unsigned short)(b)))

#define CONCAT21(a,b) \
    ((((unsigned int)(a)) << 8) | ((unsigned char)(b)))

#define CONCAT22(a,b) \
    ((((unsigned int)(a)) << 16) | ((unsigned short)(b)))

#define CONCAT13(a,b) \
    ((((unsigned int)(a)) << 24) | ((unsigned int)(b) & 0x00ffffffU))

#define CONCAT31(a,b) \
    ((((unsigned int)(a) & 0x00ffffffU) << 8) | ((unsigned char)(b)))

#define CONCAT44(a,b) \
    ((((unsigned long long)(a)) << 32) | ((unsigned int)(b)))

#define CARRY1(a,b) \
    (((unsigned int)(unsigned char)(a) + \
      (unsigned int)(unsigned char)(b)) > 0xffU)

#define CARRY2(a,b) \
    (((unsigned int)(unsigned short)(a) + \
      (unsigned int)(unsigned short)(b)) > 0xffffU)

#define CARRY4(a,b) \
    (((unsigned int)(a)) > (0xffffffffU - (unsigned int)(b)))

#define BORROW1(a,b) \
    ((unsigned char)(a) < (unsigned char)(b))

#define BORROW2(a,b) \
    ((unsigned short)(a) < (unsigned short)(b))

#define BORROW4(a,b) \
    ((unsigned int)(a) < (unsigned int)(b))

#define SBORROW4(a,b) \
    (((int)(a) < 0 && (int)(b) > 0 && (int)((a)-(b)) > 0) || \
     ((int)(a) > 0 && (int)(b) < 0 && (int)((a)-(b)) < 0))

#define SCARRY4(a,b) \
    (((int)(a) > 0 && (int)(b) > 0 && (int)((a)+(b)) < 0) || \
     ((int)(a) < 0 && (int)(b) < 0 && (int)((a)+(b)) > 0))

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

#define DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned char *)0x040000b0)

#define _DMA_CHANNEL_0_to_3 \
    (*(volatile unsigned int *)0x040000b0)


extern int func_0201e9d4();


/* WARNING: Removing unreachable block (ram,0x0201e900) */
/* WARNING: Removing unreachable block (ram,0x0201e904) */

ulonglong func_0201e7ac(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;

  uVar6 = param_2 | 1;
  if (param_4 == 0 && param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == (int)param_1 >> 0x1f && param_4 == (int)param_3 >> 0x1f) {
    func_0201e9d4(param_1,param_3);
    return (longlong)extraout_r1;
  }
  if ((int)param_2 < 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar10);
  }
  if ((int)param_4 < 0) {
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar10);
  }
  if (param_2 == 0 && param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    iVar8 = 1;
    if (-1 < (int)param_4) {
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
        bVar10 = CARRY4(param_3,param_3);
        param_3 = param_3 * 2;
        param_4 = param_4 * 2 + (uint)bVar10;
      } while (-1 < (int)param_4);
      iVar8 = uVar3 + 2;
    }
    for (; (-1 < (int)param_2 && (iVar8 != 1)); iVar8 = iVar8 + -1) {
      bVar10 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      param_2 = param_2 * 2 + (uint)bVar10;
    }
    iVar9 = 0;
    while( true ) {
      uVar3 = param_1 - param_3;
      uVar4 = param_2 - (param_4 + (param_3 > param_1));
      for (iVar9 = iVar9 - (uint)(param_2 <= param_4 &&
                                 (uint)(param_3 <= param_1) <= param_2 - param_4); iVar9 < 0;
          iVar9 = iVar9 * 2 + (uint)(bVar10 || CARRY4(uVar2,(uint)bVar11)) +
                  (uint)(CARRY4(uVar5,param_4) ||
                        CARRY4(uVar5 + param_4,(uint)CARRY4(uVar1,param_3)))) {
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          bVar10 = CARRY4(uVar3,param_3);
          uVar3 = uVar3 + param_3;
          uVar4 = uVar4 + param_4 + (uint)bVar10;
          goto LAB_0201e8fc;
        }
        bVar11 = CARRY4(uVar3,uVar3);
        uVar1 = uVar3 * 2;
        uVar2 = uVar4 * 2;
        bVar10 = CARRY4(uVar4,uVar4);
        uVar5 = uVar4 * 2 + (uint)bVar11;
        uVar3 = uVar1 + param_3;
        uVar4 = uVar5 + param_4 + (uint)CARRY4(uVar1,param_3);
      }
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      param_1 = uVar3 * 2;
      param_2 = uVar4 * 2 + (uint)CARRY4(uVar3,uVar3);
      iVar9 = iVar9 * 2 + (uint)(CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)CARRY4(uVar3,uVar3)))
      ;
    }
LAB_0201e8fc:
    if ((int)uVar7 < 0x20) {
      uVar3 = uVar3 >> (uVar7 & 0xff) | uVar4 << (0x20 - uVar7 & 0xff);
      uVar4 = uVar4 >> (uVar7 & 0xff);
      if (-1 < (int)uVar6) {
        return CONCAT44(uVar4,uVar3);
      }
      goto LAB_0201e944;
    }
    uVar3 = uVar4 >> (uVar7 - 0x20 & 0xff);
  }
  uVar4 = 0;
  if (-1 < (int)uVar6) {
    return (ulonglong)uVar3;
  }
LAB_0201e944:
  return CONCAT44(-(uVar4 + (uVar3 != 0)),-uVar3);
}
