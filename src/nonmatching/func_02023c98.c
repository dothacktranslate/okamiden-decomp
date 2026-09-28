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

extern int func_020034c8();

void func_02023c98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r7;
  uint uVar5;

  uVar5 = 0;
  iVar4 = ((unsigned int)0x02023dcc) + -0x1000;
  do {
    iVar2 = param_1 + uVar5 * 2;
    switch(*(undefined2 *)(iVar2 + 0x34)) {
    case 0:
      goto LAB_02023cec;
    case 1:
      iVar3 = param_1 + uVar5 * 4;
      iVar1 = *(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x44);
      *(int *)(iVar3 + 0x3c) = iVar1;
      if (-1 < iVar1) {
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined2 *)(iVar2 + 0x34) = 0;
      }
      break;
    case 2:
      iVar3 = param_1 + uVar5 * 4;
      iVar1 = *(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x44);
      *(int *)(iVar3 + 0x3c) = iVar1;
      if (iVar1 < 1) {
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined2 *)(iVar2 + 0x34) = 0;
      }
      break;
    case 3:
      iVar3 = param_1 + uVar5 * 4;
      iVar1 = *(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x44);
      *(int *)(iVar3 + 0x3c) = iVar1;
      if (iVar1 < -0xffff) {
        *(undefined4 *)(iVar3 + 0x3c) = 0xffff0000;
        *(undefined2 *)(iVar2 + 0x34) = 0;
      }
      break;
    case 4:
      iVar1 = param_1 + uVar5 * 4;
      iVar3 = *(int *)(iVar1 + 0x3c) + *(int *)(iVar1 + 0x44);
      *(int *)(iVar1 + 0x3c) = iVar3;
      if (0xffff < iVar3) {
        *(undefined4 *)(iVar1 + 0x3c) = 0x10000;
        *(undefined2 *)(iVar2 + 0x34) = 0;
      }
      break;
    case 5:
LAB_02023cec:
      unaff_r7 = 0;
    default:
      goto switchD_02023ccc_default;
    }
    unaff_r7 = 1;
switchD_02023ccc_default:
    if (unaff_r7 != 0) {
      iVar2 = ((unsigned int)0x02023dcc);
      if (uVar5 != 1) {
        iVar2 = iVar4;
      }
      func_020034c8(iVar2,*(int *)(param_1 + uVar5 * 4 + 0x3c) >> 0xc);
    }
    uVar5 = uVar5 + 1 & 0xffff;
    if (1 < uVar5) {
      return;
    }
  } while( true );
}
