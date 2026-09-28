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

extern int func_020028c0();
extern int func_02011bbc();

int func_02011974(int param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5,
                undefined4 *param_6,uint param_7,int *param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;

  iVar3 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(param_1 + iVar3 * 4) = 0;
      *(undefined4 *)(param_2 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  iVar3 = param_6[0xe];
  if ((int)param_6[0xe] < *(int *)(param_5 + 0x1a)) {
    iVar3 = *(int *)(param_5 + 0x1a);
  }
  if (param_8 == (int *)0x0) {
    local_3c = 3;
    local_38 = iVar3;
  }
  else {
    local_38 = *param_8;
    local_3c = param_8[1];
  }
  local_34 = 0;
  local_40 = 0;
  puVar7 = (ushort *)*param_6;
  if (0 < (int)param_6[1]) {
    iVar2 = param_3 + -1;
    uStack_28 = param_4;
    do {
      if (((**(int **)(puVar7 + 0x1a) != 0) && (((*(int **)(puVar7 + 0x1a))[1] & param_7) != 0)) &&
         (*param_5 == *puVar7)) {
        iVar9 = 0;
        local_34 = local_34 + 1;
        iVar10 = 0;
        iVar8 = 0;
        if (*param_5 != 0) {
          do {
            local_2c = 0;
            func_02011bbc(&local_2c,&local_30,param_5,puVar7,iVar3,local_38,local_3c,iVar8,param_4);
            iVar10 = iVar10 + local_30;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + local_2c;
          } while (iVar8 < (int)(uint)*param_5);
        }
        iVar8 = func_020028c0(iVar9 << 2,iVar10 * iVar3);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar9 = (int)*(short *)(*(int *)(puVar7 + 0x1a) + 10);
        if (0xfff < iVar8) {
          iVar8 = 0x1000;
        }
        if (iVar9 != 0) {
          lVar1 = (longlong)iVar8 * (longlong)(0x1000 - iVar9) + 0x800;
          iVar8 = iVar9 + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000);
        }
        if (*(int *)(param_2 + iVar2 * 4) < iVar8) {
          *(int *)(param_2 + iVar2 * 4) = iVar8;
          *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(puVar7 + 0x1a);
          for (iVar8 = param_3 + -2; -1 < iVar8; iVar8 = iVar8 + -1) {
            iVar5 = param_2 + iVar8 * 4;
            iVar10 = *(int *)(iVar5 + 4);
            iVar9 = *(int *)(param_2 + iVar8 * 4);
            if (iVar9 < iVar10) {
              *(int *)(param_2 + iVar8 * 4) = iVar10;
              *(int *)(iVar5 + 4) = iVar9;
              puVar4 = (undefined4 *)(param_1 + iVar8 * 4);
              uVar6 = *(undefined4 *)(param_1 + iVar8 * 4);
              *puVar4 = puVar4[1];
              puVar4[1] = uVar6;
            }
          }
        }
      }
      puVar7 = puVar7 + 0x1c;
      local_40 = local_40 + 1;
    } while (local_40 < (int)param_6[1]);
  }
  return local_34;
}
