
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

extern int func_02027ec2();
extern int func_020465d8();


extern int func_020be4fc();
extern int func_020be114();
extern int func_020a0d78();
extern int func_020a0d5c();
extern int func_020be530();
extern int func_020be360();
extern int func_020974f0();
extern int func_02027ebe();
extern int func_020a0de8();
extern int func_020a0df4();
extern int func_020bd4b4();

void func_02027220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;

  int initial_result = func_020465d8(param_1,2,param_3,param_4,2,
               *(undefined4 *)(*(int *)(*(int *)(*(int *)0x02078d0cU) + 0x5c) + 0x3c));
  iVar1 = func_020465d8(param_1,1);
  uVar2 = iVar1 - 0x00000d01U;
  if (0x23 < uVar2) {
    uVar2 = func_02027ec2();
  }
                    /* WARNING: Could not recover jumptable at 0x02027262. Too many branches */
                    /* WARNING: Treating indirect jump as call */

  if (uVar2 == 0) {
    unsigned int object_id = (unsigned short)func_020465d8(param_1, 3);
    int enabled = (func_020465d8(param_1, 4) != 0);
    int engine = *(int *)(*(int *)(*(int *)0x02078d0cU) + 0x5c);
    int manager = *(int *)(engine + 0x3c);
    if (object_id != 0) {
      unsigned int *object = (unsigned int *)func_020be4fc(manager, object_id);
      if (object != 0) {
        if (enabled) object[0x344 / 4] |= 0x06000001U;
        else object[0x344 / 4] &= 0xfffef9ffU;
        func_020974f0(object, enabled ? 0 : 1);
      }
    } else {
      func_020be360(manager, enabled ? 0 : 1);
    }
    func_02027ebe(param_1, -1);
    return;
  }

  if (uVar2 == 1) {
    unsigned int object_id = (unsigned short)func_020465d8(param_1, 3);
    int engine = *(int *)(*(int *)(*(int *)0x02078d0cU) + 0x5c);
    int manager = *(int *)(engine + 0x3c);
    int object = func_020be4fc(manager, object_id);
    int result = initial_result;
    /* The original stores the result of the first query in a local slot. */
    if (object != 0) {
      if (result == 0) {
        int count0, count1;
        unsigned short value = (unsigned short)func_020465d8(param_1, 4);
        *(unsigned short *)(object + 0x34a) = value;
        count0 = func_020a0de8(engine + 0x88, 4);
        count1 = func_020a0df4(engine + 0x88, 1);
        if (count0 > 0 || count1 > 0) {
          int global0 = *(int *)(*(int *)0x02078d44U);
          if ((global0 & 1) == 0) {
            *(unsigned short *)(object + 0x34a) = 0;
            func_020bd4b4(object, value, 0);
          }
          result = -1;
        } else {
          result += 1;
        }
      } else if (result == 1) {
        unsigned short requested = (unsigned short)func_020465d8(param_1, 4);
        if (*(int *)(object + 0x310) == requested) result = -1;
      }
    }
    func_02027ebe(param_1, result);
    return;
  }

  if (uVar2 == 2) {
    unsigned int object_id = (unsigned short)func_020465d8(param_1, 3);
    int engine = *(int *)(*(int *)(*(int *)0x02078d0cU) + 0x5c);
    int object = func_020be4fc(*(int *)(engine + 0x3c), object_id);
    if (object != 0) {
      int attribute = func_020465d8(param_1, 4);
      int value = attribute > 0 ? 7 : 2;
      *(int *)(object + 0x318) = *(int *)(engine + 0x54) + 24;
      *(unsigned short *)(object + 0x34a) = (unsigned short)value;
    }
    func_02027ebe(param_1, -1);
    return;
  }


  if (uVar2 == 3) {
    /* 0x020273FE: queued entity update. */
    unsigned short id = (unsigned short)func_020465d8(param_1, 3);
    unsigned short value = (unsigned short)func_020465d8(param_1, 4);
    int *counter = (int *)(*(int *)0x02078d0cU + 0x40);
    int engine = *(int *)(*(int *)(*(int *)0x02078d0cU) + 0x5c);
    int manager = *(int *)(engine + 0x3c);
    int result = initial_result;
    if (result == 0) *counter = 0;
    if (id != 0 || value != 0) {
      int count = func_020a0de8(engine + 0x88, 32);
      if (count > 0) {
        int j;
        for (j = 0; j < count; ++j) func_020a0d78(engine + 0x88, 32);
        *counter += count;
      }
      func_020be114(manager, &result, id, value);
      if (result == -1 && *counter > 0) {
        int j;
        int total = *counter;
        for (j = 0; j < total; ++j) func_020a0d5c(engine + 0x88, 32);
        *counter = 0;
      }
    } else {
      result = -1;
    }
    func_02027ebe(param_1, result);
    return;
  }

  if (uVar2 == 4) {
    /* 0x020274A8: query entity metadata. */
    unsigned short id = (unsigned short)func_020465d8(param_1, 3);
    int engine = *(int *)(*(int *)(*(int *)0x02078d0cU) + 0x5c);
    int manager = *(int *)(engine + 0x3c);
    int object = func_020be530(manager, id);
    unsigned short value = 0;
    if (object != 0) {
      int nested = *(int *)(object + 0x398);
      value = *(unsigned short *)(nested + 0x1a);
    }
    func_02027ebe(param_1, value);
    return;
  }

  (*(code *)(*(short *)(((unsigned char *)0x02027264) + uVar2 * 2) + 0x2027266))();
  return;
}
