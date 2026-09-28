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

extern int func_02030454();

void func_020307f8(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  uVar5 = 0;
  uStack_28 = param_4;
  do {
    uVar6 = 0;
    iVar4 = param_2 + uVar5 * 0x10;
    do {
      iVar3 = param_3 + uVar6 * 4;
      lVar1 = (longlong)*(int *)(iVar3 + 0x30) * (longlong)*(int *)(iVar4 + 0xc) +
              (longlong)*(int *)(iVar3 + 0x20) * (longlong)*(int *)(iVar4 + 8) +
              (longlong)*(int *)(param_3 + uVar6 * 4) * (longlong)*(int *)(param_2 + uVar5 * 0x10) +
              (longlong)*(int *)(iVar4 + 4) * (longlong)*(int *)(iVar3 + 0x10);
      uVar2 = func_02030454((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0xc);
      local_68[uVar5 * 4 + uVar6] = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  *param_1 = local_68[0];
  param_1[1] = local_68[1];
  param_1[2] = local_68[2];
  param_1[3] = local_68[3];
  param_1[4] = local_58;
  param_1[5] = uStack_54;
  param_1[6] = uStack_50;
  param_1[7] = uStack_4c;
  param_1[8] = local_48;
  param_1[9] = uStack_44;
  param_1[10] = uStack_40;
  param_1[0xb] = uStack_3c;
  param_1[0xc] = local_38;
  param_1[0xd] = uStack_34;
  param_1[0xe] = uStack_30;
  param_1[0xf] = uStack_2c;
  return;
}
