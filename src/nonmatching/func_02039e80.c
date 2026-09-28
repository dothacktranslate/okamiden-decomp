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

extern int func_02002c10();
extern int func_0201e9b4();
extern int func_02041758();

void func_02039e80(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int local_18;

  iVar2 = ((unsigned int)0x02039fb8);
  iVar7 = *(int *)(param_1 + param_2 * 4 + ((unsigned int)0x02039fb8));
  piVar4 = (int *)func_02041758(0x81,0,0x1000);
  plVar3 = ((unsigned int)0x02039fbc);
  local_30 = *piVar4;
  iStack_2c = piVar4[1];
  local_28 = piVar4[2];
  local_24 = piVar4[3];
  iStack_20 = piVar4[4];
  local_1c = piVar4[5];
  local_18 = piVar4[6];
  puVar5 = *(uint **)(param_1 + param_2 * 4 + iVar2);
  *puVar5 = *puVar5 | 0x10000;
  lVar9 = func_0201e9b4((int)plVar3[1],*(undefined4 *)((int)plVar3 + 0xc),(int)*plVar3,
                       *(undefined4 *)((int)plVar3 + 4));
  lVar1 = plVar3[2];
  *plVar3 = lVar9 + lVar1;
  lVar10 = func_0201e9b4((int)plVar3[1],*(undefined4 *)((int)plVar3 + 0xc));
  local_48 = (uint)((ulonglong)(lVar10 + plVar3[2]) >> 0x33) - 0x1000;
  local_44 = 0;
  *plVar3 = lVar10 + plVar3[2];
  local_4c = (uint)((ulonglong)(lVar9 + lVar1) >> 0x33) - 0x1000;
  func_02002c10(&local_4c,&local_4c);
  iVar6 = local_30 / 2;
  iVar8 = iVar6 >> 0x1f;
  uVar11 = func_0201e9b4(local_4c,(int)local_4c >> 0x1f,iVar6,iVar8);
  local_4c = (uint)uVar11 + 0x800 >> 0xc |
             ((int)((ulonglong)uVar11 >> 0x20) + ((unsigned int)0x02039fc0) + (uint)(0xfffff7ff < (uint)uVar11)) *
             0x100000;
  uVar11 = func_0201e9b4(local_48,(int)local_48 >> 0x1f,iVar6,iVar8);
  local_48 = (uint)uVar11 + 0x800 >> 0xc |
             ((int)((ulonglong)uVar11 >> 0x20) + ((unsigned int)0x02039fc0) + (uint)(0xfffff7ff < (uint)uVar11)) *
             0x100000;
  func_0201e9b4(local_44,local_44 >> 0x1f,iVar6,iVar8);
  *(uint *)(iVar7 + iVar2 + -0x80) = local_4c;
  *(uint *)(iVar7 + iVar2 + -0x7c) = local_48;
  *(undefined4 *)(iVar7 + iVar2 + -0x88) = 0;
  *(undefined4 *)(iVar7 + iVar2 + -0x8c) = 0;
  return;
}
