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

extern int func_020034f0();
extern int func_0201e9d4();
extern int func_02022fc0();
extern int func_02022ffc();

void func_02023f04(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r5;

  piVar1 = ((unsigned int)0x02023fd4);
  if ((param_2 == 0) && (iVar2 = func_02022ffc((*(unsigned int *)0x02023fd4) + 0xf0,0xa5), iVar2 != 0)) {
    func_02022fc0(*piVar1 + 0xf0,0xa5);
    return;
  }
  uVar3 = ((unsigned int)0x02023fdc);
  if (param_2 != 1) {
    uVar3 = ((unsigned int)0x02023fd8);
  }
  iVar2 = func_020034f0(uVar3);
  switch(param_3) {
  case 0:
    break;
  case 1:
    goto LAB_02023f8c;
  case 2:
LAB_02023f8c:
    unaff_r5 = iVar2 * -0x1000;
    break;
  case 3:
    unaff_r5 = iVar2 * -0x1000 + -0x10000;
    break;
  case 4:
    unaff_r5 = iVar2 * -0x1000 + 0x10000;
  }
  *(short *)(param_1 + param_2 * 2 + 0x34) = (short)param_3;
  *(int *)(param_1 + param_2 * 4 + 0x3c) = iVar2 * 0x1000;
  uVar3 = func_0201e9d4(unaff_r5,param_4);
  *(undefined4 *)(param_1 + param_2 * 4 + 0x44) = uVar3;
  return;
}
