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

extern int func_0201ebe0();

void func_0203a3a0(byte *param_1,uint param_2,int param_3,int param_4,ushort param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *local_50;
  uint local_2c;
  uint local_28;
  uint local_24;

  local_24 = 1;
  local_28 = 0;
  if (param_2 != 0) {
    param_3 = param_3 * 0x1000;
    local_50 = param_1;
    do {
      uVar2 = func_0201ebe0(local_28 * param_3,param_2);
      uVar2 = (uVar2 & 0xfffffff) >> 0xc;
      uVar3 = func_0201ebe0((local_28 + 1) * param_3,param_2);
      uVar3 = (uVar3 & 0xfffffff) >> 0xc;
      local_2c = 0;
      if (param_2 != 0) {
        do {
          uVar4 = func_0201ebe0(local_2c * param_3,param_2);
          uVar4 = (uVar4 & 0xfffffff) >> 0xc;
          uVar5 = func_0201ebe0((local_2c + 1) * param_3,param_2);
          uVar5 = (uVar5 & 0xfffffff) >> 0xc;
          iVar9 = 0;
          uVar10 = 0;
          if (uVar2 < uVar3) {
            uVar8 = uVar2;
            do {
              if (uVar4 < uVar5) {
                uVar11 = uVar4;
                do {
                  uVar1 = *(ushort *)
                           (((unsigned int)0x0203a504) + (param_4 + uVar11) * 2 + (param_5 + uVar8) * 0x200);
                  if ((*(uint *)(*(unsigned int *)0x0203a500) & 0x80000000) == 0) {
                    if ((uVar1 & 0x4000) < 0x4000) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 3;
                    }
                  }
                  else {
                    uVar6 = (uint)((uVar1 & 0x4000) < 0x4000);
                  }
                  iVar9 = iVar9 + uVar6;
                  uVar11 = uVar11 + 1;
                  uVar10 = uVar10 + 1;
                } while (uVar11 < uVar5);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar3);
          }
          if ((*(uint *)(*(unsigned int *)0x0203a500) & 0x80000000) != 0) {
            iVar9 = func_0201ebe0(iVar9 + (uVar10 >> 1),uVar10);
            if (iVar9 == 0) {
              bVar7 = *local_50 & ~(byte)local_24;
            }
            else {
              bVar7 = *local_50 | (byte)local_24;
            }
            *local_50 = bVar7;
            uVar4 = local_24 & 0x7f;
            local_24 = uVar4 << 1;
            if (uVar4 == 0) {
              local_24 = 1;
              local_50 = local_50 + 1;
            }
          }
          local_2c = local_2c + 1;
        } while (local_2c < param_2);
      }
      local_28 = local_28 + 1;
    } while (local_28 < param_2);
  }
  return;
}
