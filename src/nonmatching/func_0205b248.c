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

void func_0205b248(int param_1,ushort *param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  uVar1 = *param_2;
  uVar8 = 0;
  if ((*param_4 & 0x1c000000) == 0x14000000) {
    uVar2 = *(uint *)(param_3 + 0x18);
  }
  else {
    uVar2 = *(uint *)(param_3 + 8);
  }
  if ((char)param_2[1] != '\0') {
    iVar7 = param_1 + 4;
    do {
      uVar5 = (uint)*(byte *)(param_1 + (uint)uVar1 + uVar8);
      if (param_1 == 0) {
LAB_0205b2e8:
        iVar9 = 0;
      }
      else {
        if ((iVar7 == 0) || (*(byte *)(param_1 + 5) <= uVar5)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(*(ushort *)(iVar7 + (uint)*(ushort *)(param_1 + 10)) * uVar5 +
                          iVar7 + (uint)*(ushort *)(param_1 + 10) + 4);
        }
        if (piVar4 == (int *)0x0) goto LAB_0205b2e8;
        iVar9 = param_1 + *piVar4;
      }
      *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) | *param_4 + (uVar2 & 0xffff);
      uVar6 = param_4[1] & ((unsigned int)0x0205b374);
      uVar5 = (param_4[1] & ((unsigned int)0x0205b374) << 0xb) >> 0xb;
      if (uVar6 == *(ushort *)(iVar9 + 0x20)) {
        uVar3 = 0x1000;
      }
      else {
        uVar3 = func_020028c0(uVar6 << 0xc,(uint)*(ushort *)(iVar9 + 0x20) << 0xc);
      }
      *(undefined4 *)(iVar9 + 0x24) = uVar3;
      if (uVar5 == *(ushort *)(iVar9 + 0x22)) {
        uVar3 = 0x1000;
      }
      else {
        uVar3 = func_020028c0(uVar5 << 0xc,(uint)*(ushort *)(iVar9 + 0x22) << 0xc);
      }
      *(undefined4 *)(iVar9 + 0x28) = uVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (byte)param_2[1]);
  }
  *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) | 1;
  return;
}
