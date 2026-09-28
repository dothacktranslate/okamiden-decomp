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

extern int func_02039090();

void func_0203a508(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint local_20;

  if (((param_2 == 0) || (iVar2 = param_2 + 0x3c, iVar2 == 0)) ||
     (*(byte *)(param_2 + 0x3d) <= param_3)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)(iVar2 + (uint)*(ushort *)(param_2 + 0x42) + 4 +
                     param_3 * *(ushort *)(iVar2 + (uint)*(ushort *)(param_2 + 0x42)));
  }
  if (puVar3 != (uint *)0x0) {
    iVar2 = (*puVar3 & 0xffff) * 8;
    if ((*(uint *)(*(unsigned int *)0x0203a5e4) & 0x80000000) != 0) {
      puVar5 = (ushort *)(iVar2 + param_2 + *(int *)(param_2 + 0x14));
      uVar4 = (puVar3[1] & ((unsigned int)0x0203a5e8)) * ((((unsigned int)0x0203a5e8) << 0xb & puVar3[1]) >> 0xb);
      uVar7 = 1;
      uVar8 = 3;
      uVar10 = 1;
      local_20 = 0;
      puVar6 = puVar5;
      if (uVar4 != 0) {
        do {
          uVar9 = (ushort)uVar10;
          if ((*param_1 & uVar7) == 0) {
            uVar9 = 0;
          }
          *puVar6 = ~uVar8 & *puVar6 | uVar9;
          uVar8 = uVar8 * 4;
          uVar10 = (uVar10 & 0x3fff) << 2;
          if (uVar8 == 0) {
            uVar8 = 3;
            uVar10 = 1;
            puVar6 = puVar6 + 1;
          }
          uVar1 = uVar7 & 0x7f;
          uVar7 = uVar1 << 1;
          if (uVar1 == 0) {
            param_1 = param_1 + 1;
            uVar7 = 1;
          }
          local_20 = local_20 + 1 & 0xffff;
        } while (local_20 < uVar4);
      }
      func_02039090((*(unsigned int *)0x0203a5ec),0,iVar2 + (*(uint *)(param_2 + 8) & 0xffff) * 8,puVar5,uVar4 >> 2);
    }
  }
  return;
}
