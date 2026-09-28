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

uint * func_02009a84(uint *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;

  if (param_3 == 0) {
    return param_1;
  }
  uVar1 = (undefined1)param_2;
  puVar2 = param_1;
  puVar3 = param_1;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    puVar3 = (uint *)((int)param_1 + 1);
    *(undefined1 *)param_1 = uVar1;
  case 7:
    puVar2 = (uint *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = uVar1;
  case 6:
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = uVar1;
  case 5:
    puVar2 = (uint *)((int)param_1 + 1);
    *(undefined1 *)param_1 = uVar1;
  case 4:
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = uVar1;
  case 3:
    puVar2 = (uint *)((int)param_1 + 1);
    *(undefined1 *)param_1 = uVar1;
  case 2:
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = uVar1;
  case 1:
    *(undefined1 *)param_1 = uVar1;
    return (uint *)((int)param_1 + 1);
  default:
    param_2 = param_2 | param_2 << 8;
    uVar4 = param_2 | param_2 << 0x10;
    puVar2 = param_1;
    if (((uint)param_1 & 1) != 0) {
      param_3 = param_3 + -1;
      puVar2 = (uint *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar1;
    }
    puVar3 = puVar2;
    if (((uint)puVar2 & 2) != 0) {
      param_3 = param_3 + -2;
      puVar3 = (uint *)((int)puVar2 + 2);
      *(short *)puVar2 = (short)param_2;
    }
    puVar2 = puVar3;
    if (((uint)puVar3 & 4) != 0) {
      param_3 = param_3 + -4;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar4;
    }
    if (0x1f < param_3) {
      bVar7 = SBORROW4(param_3,0x20);
      param_3 = param_3 + -0x20;
      bVar6 = param_3 < 0;
      do {
        if (bVar6 == bVar7) {
          *puVar2 = uVar4;
          puVar2[1] = uVar4;
          puVar2[2] = uVar4;
          puVar2[3] = uVar4;
          puVar2[4] = uVar4;
          puVar2[5] = uVar4;
          puVar2[6] = uVar4;
          puVar2[7] = uVar4;
          puVar2 = puVar2 + 8;
          bVar7 = SBORROW4(param_3,0x20);
          param_3 = param_3 + -0x20;
          bVar6 = param_3 < 0;
        }
      } while (bVar6 == bVar7);
      param_3 = param_3 + 0x20;
    }
    while (3 < param_3) {
      iVar5 = param_3 + -4;
      bVar6 = 3 < param_3;
      param_3 = iVar5;
      if (bVar6) {
        *puVar2 = uVar4;
        puVar2 = puVar2 + 1;
      }
    }
    iVar5 = param_3 + -1;
    puVar3 = puVar2;
    if (0 < param_3) {
      puVar3 = (uint *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = uVar1;
      iVar5 = param_3 + -2;
      param_3 = param_3 + -1;
    }
    bVar7 = SBORROW4(param_3,1);
    bVar6 = iVar5 < 0;
    puVar2 = puVar3;
    if (bVar6 == bVar7) {
      puVar2 = (uint *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = uVar1;
      bVar7 = SBORROW4(iVar5,1);
      bVar6 = iVar5 + -1 < 0;
    }
    puVar3 = puVar2;
    if (bVar6 == bVar7) {
      puVar3 = (uint *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = uVar1;
    }
    return puVar3;
  }
}
