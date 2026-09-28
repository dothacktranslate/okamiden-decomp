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

extern int func_02022ffc();
extern int func_0x020859b8();

uint func_02024bf8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar2 = *(int *)(*(int *)(*(unsigned int *)0x02024cc0) + 0x5c);
  iVar4 = *(int *)(iVar2 + 0x30);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(iVar2 + 0x58);
  uVar3 = 0;
  bVar1 = false;
  if (iVar2 == 0) {
    iVar2 = func_02022ffc((int *)(*(unsigned int *)0x02024cc0) + 0x3c,0x28,param_3,param_4,param_4);
    uVar3 = (uint)(iVar2 != 0);
    iVar2 = func_02022ffc((*(unsigned int *)0x02024cc0) + 0xf0,0x27);
    if (iVar2 != 0) {
      uVar3 = 7;
    }
    if (uVar3 != 0) goto LAB_02024c4e;
joined_r0x02024c4a:
    if (param_2 == 0) goto LAB_02024c4e;
  }
  else {
    iVar2 = func_0x020859b8(iVar2);
    if (iVar2 == 0) goto joined_r0x02024c4a;
  }
  bVar1 = true;
LAB_02024c4e:
  if (bVar1) {
    switch(*(undefined2 *)(iVar4 + 0xe8)) {
    default:
      iVar2 = func_02022ffc((*(unsigned int *)0x02024cc0) + 0xf0,0x28);
      if (iVar2 != 0) {
        uVar3 = 1;
      }
      iVar2 = func_02022ffc((*(unsigned int *)0x02024cc0) + 0xf0,0x27);
      if (iVar2 != 0) {
        uVar3 = 7;
      }
      break;
    case 1:
    case 9:
      uVar3 = 2;
      break;
    case 2:
    case 7:
      uVar3 = 3;
      break;
    case 3:
    case 4:
    case 10:
      uVar3 = 4;
      break;
    case 5:
    case 8:
      uVar3 = 5;
      break;
    case 6:
      uVar3 = 6;
    }
  }
  return uVar3;
}
