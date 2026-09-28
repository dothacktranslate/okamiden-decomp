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

extern int func_02044b5c();

/* WARNING: Removing unreachable block (ram,0x020233a8) */
/* WARNING: Removing unreachable block (ram,0x020233bc) */

void func_02023354(undefined4 param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int local_18;

  puVar4 = (ushort *)func_02044b5c(param_1,3);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  puVar4 = puVar4 + 6;
  local_18 = 0;
  if ((int)(uint)uVar2 >> 3 != 0) {
    do {
      iVar6 = 0;
      if ((int)(uint)uVar1 >> 3 != 0) {
        do {
          uVar3 = (ushort)((unsigned int)0x020233ec) & *puVar4;
          uVar5 = (uint)(*puVar4 >> 0xc);
          if (param_2 != 0) {
            uVar3 = uVar3 + (short)(param_2 >> 5);
          }
          if (param_3 != 0) {
            uVar5 = uVar5 + (param_3 >> 5) & 0xffff;
          }
          iVar6 = iVar6 + 1;
          *puVar4 = uVar3 & (ushort)((unsigned int)0x020233ec) | (ushort)(uVar5 << 0xc);
          puVar4 = puVar4 + 1;
        } while (iVar6 < (int)(uint)uVar1 >> 3);
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)(uint)uVar2 >> 3);
  }
  return;
}
