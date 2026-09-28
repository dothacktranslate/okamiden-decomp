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

void func_0205b6ac(int param_1,ushort *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;

  uVar1 = *param_2;
  uVar5 = *(uint *)(param_3 + 0x2c) & 0xffff;
  uVar2 = *param_4;
  if ((param_4[1] & 1) == 0) {
    uVar2 = uVar2 >> 1;
    uVar5 = uVar5 >> 1;
  }
  uVar4 = 0;
  if ((char)param_2[1] != '\0') {
    iVar3 = param_1 + 4;
    do {
      uVar8 = (uint)*(byte *)(param_1 + (uint)uVar1 + uVar4);
      if (param_1 == 0) {
LAB_0205b760:
        iVar7 = 0;
      }
      else {
        if ((iVar3 == 0) || (*(byte *)(param_1 + 5) <= uVar8)) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)(*(ushort *)(iVar3 + (uint)*(ushort *)(param_1 + 10)) * uVar8 +
                          iVar3 + (uint)*(ushort *)(param_1 + 10) + 4);
        }
        if (piVar6 == (int *)0x0) goto LAB_0205b760;
        iVar7 = param_1 + *piVar6;
      }
      *(short *)(iVar7 + 0x1c) = (short)((uVar2 + uVar5) * 0x10000 >> 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (byte)param_2[1]);
  }
  *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) | 1;
  return;
}
