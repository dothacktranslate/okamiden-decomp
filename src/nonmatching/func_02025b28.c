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

extern int func_020465d8();
extern int func_02046868();
extern int func_0x020be4fc();

undefined4 func_02025b28(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar2 = func_020465d8(param_1,1);
  switch(iVar2 - ((unsigned int)0x02025be0)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    iVar2 = 0;
    iVar4 = *(int *)(*(int *)(*(unsigned int *)0x02025be4) + 0x5c);
    uVar3 = func_020465d8(param_1,3);
    switch(uVar3) {
    case 1:
      iVar2 = *(int *)(iVar4 + 0x54);
      break;
    case 2:
      iVar2 = *(int *)(iVar4 + 0x58);
      break;
    case 3:
      uVar3 = *(undefined4 *)(iVar4 + 0x3c);
      uVar1 = func_020465d8(param_1,4);
      iVar2 = func_0x020be4fc(uVar3,uVar1);
    }
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x88), iVar2 != 0)) {
      iVar4 = func_020465d8(param_1,5);
      if (iVar4 == 0) {
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffffe;
      }
      else {
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 1;
      }
    }
    goto LAB_02025bd8;
  default:
    goto switchD_02025b46_default;
  }
LAB_02025bd8:
  func_02046868(param_1,0xffffffff);
switchD_02025b46_default:
  return 1;
}
