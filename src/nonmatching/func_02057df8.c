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

uint func_02057df8(int param_1,uint param_2,ushort *param_3,int *param_4,int *param_5,ushort param_6,
                 int param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_48;
  int local_30;
  int local_2c;

  if (*param_3 <= param_2) {
    param_2 = (uint)*param_3;
  }
  local_48 = 0;
  if (param_2 != 0) {
    do {
      puVar5 = (uint *)(param_1 + local_48 * 8);
      iVar6 = *(int *)(param_3 + 2) + local_48 * 6;
      *(undefined2 *)(param_1 + local_48 * 8) =
           *(undefined2 *)(*(int *)(param_3 + 2) + local_48 * 6);
      *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)(iVar6 + 2);
      *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(iVar6 + 4);
      if ((param_4 != (int *)0x0) || (param_5 != (int *)0x0)) {
        local_30 = (int)(*puVar5 & ((unsigned int)0x02058144)) >> 0x10;
        if (0xff < local_30) {
          local_30 = (int)(short)((ushort)((*puVar5 & ((unsigned int)0x02058144)) >> 0x10) | 0xff00);
        }
        local_30 = local_30 * 0x1000;
        uVar4 = *puVar5 & 0xff;
        if (0x7f < uVar4) {
          uVar4 = (uint)(short)((ushort)uVar4 | 0xff00);
        }
        local_2c = uVar4 * 0x1000;
        if (param_4 != (int *)0x0) {
          uVar7 = *puVar5;
          uVar4 = uVar7 & 0x300;
          if (uVar4 != 0x100 && uVar4 != 0x300) {
            uVar4 = uVar7 & 0x30000300;
          }
          if (uVar4 == 0x300) {
            iVar8 = (int)(uVar7 & ((unsigned int)0x02058148) & 0xc000) >> 0xe;
            iVar6 = ((uVar7 & ((unsigned int)0x02058148)) >> 0x1e) * 2;
            local_30 = local_30 + (uint)*(ushort *)(iVar6 + ((unsigned int)0x0205814c) + iVar8 * 8) * 0x800;
            local_2c = local_2c + (uint)*(ushort *)(iVar6 + ((unsigned int)0x02058150) + iVar8 * 8) * 0x800;
          }
          uVar4 = 0x300;
          if (param_7 == 0) {
            uVar4 = 0x100;
          }
          lVar2 = (longlong)local_30 * (longlong)*param_4 +
                  (longlong)param_4[2] * (longlong)local_2c + 0x1000;
          lVar3 = (longlong)local_30 * (longlong)param_4[1] +
                  (longlong)param_4[3] * (longlong)local_2c + 0x1000;
          if (uVar4 == 0x100 || uVar4 == 0x300) {
            uVar7 = *puVar5 & ((unsigned int)0x02058154) | uVar4 | (uint)param_6 << 0x19;
          }
          else {
            uVar7 = *puVar5 & ((unsigned int)0x02058154) | uVar4;
          }
          *puVar5 = uVar7;
          iVar8 = (int)(*puVar5 & ((unsigned int)0x02058148) & 0xc000) >> 0xe;
          iVar6 = ((*puVar5 & ((unsigned int)0x02058148)) >> 0x1e) * 2;
          iVar1 = (int)(uint)*(ushort *)(iVar6 + ((unsigned int)0x0205814c) + iVar8 * 8) >> 1;
          iVar6 = (int)(uint)*(ushort *)(iVar6 + ((unsigned int)0x02058150) + iVar8 * 8) >> 1;
          local_30 = ((uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14) +
                     param_4[2] * iVar6 + *param_4 * iVar1 + iVar1 * -0x1000;
          iVar8 = local_30;
          if (uVar4 == 0x300) {
            iVar8 = local_30 + iVar1 * -0x1000;
          }
          local_2c = ((uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14) +
                     param_4[3] * iVar6 + param_4[1] * iVar1 + iVar6 * -0x1000;
          if (uVar4 == 0x300) {
            local_2c = local_2c + iVar6 * -0x1000;
            local_30 = iVar8;
          }
        }
        if (param_5 != (int *)0x0) {
          local_30 = local_30 + *param_5;
          local_2c = local_2c + param_5[1];
        }
        *puVar5 = *puVar5 & ((unsigned int)0x02058158) | local_2c + 0x800 >> 0xc & 0xffU |
                  (local_30 + 0x800 >> 0xc & 0x1ffU) << 0x10;
      }
      uVar4 = local_48 + 1;
      local_48 = uVar4 & 0xffff;
    } while ((uVar4 & 0xffff) < param_2);
  }
  return param_2;
}
