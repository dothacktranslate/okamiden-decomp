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

uint func_020575a0(int *param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  uVar6 = (uint)*(ushort *)(param_1 + 3);
  bVar2 = false;
  if (((uint)*(ushort *)((int)param_1 + 0xe) <= uVar6 + 1) &&
     (*(ushort *)((int)param_1 + 10) <= uVar6)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar6 = (uVar6 - *(ushort *)((int)param_1 + 0xe)) + 1 & 0xffff;
  }
  else {
    uVar6 = 0;
  }
  if (uVar6 == 0) {
    return ((unsigned int)0x02057654);
  }
  uVar1 = *(ushort *)((int)param_1 + 0xe);
  iVar7 = param_2[1];
  iVar4 = param_2[2];
  iVar3 = param_2[3];
  iVar5 = *param_1 * 0x540 + ((unsigned int)0x02057658) + 0x100 + (uint)uVar1 * 0x20;
  *(short *)(iVar5 + 6) = (short)(*param_2 >> 4);
  *(short *)(iVar5 + 0xe) = (short)(iVar7 >> 4);
  *(short *)(iVar5 + 0x16) = (short)(iVar4 >> 4);
  *(short *)(iVar5 + 0x1e) = (short)(iVar3 >> 4);
  *(ushort *)((int)param_1 + 0xe) = uVar1 + 1;
  return (uint)uVar1;
}
