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

ushort func_02050840(uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;

  uVar3 = param_2;
  if (param_2 < 0x80) {
    uVar3 = (uint)*(byte *)(((unsigned int)0x020509ec) + param_2);
  }
  if ((int)uVar3 < 0x6d) {
    if ((int)uVar3 < 0x6c) {
      if ((100 < (int)uVar3) || ((int)uVar3 < 0x61)) goto switchD_020508a0_default;
      if (uVar3 == 0x61) {
        if (param_1 < 0x80) {
          uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else if (uVar3 == 99) {
        if (param_1 < 0x80) {
          uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 4;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        if (uVar3 != 100) goto switchD_020508a0_default;
        if (param_1 < 0x80) {
          uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 8;
        }
        else {
          uVar1 = 0;
        }
      }
    }
    else if (param_1 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 0x20;
    }
    else {
      uVar1 = 0;
    }
    goto LAB_020509c0;
  }
  if ((int)uVar3 < 0x71) {
    if (uVar3 != 0x70) goto switchD_020508a0_default;
    if (param_1 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 0x80;
    }
    else {
      uVar1 = 0;
    }
    goto LAB_020509c0;
  }
  switch(uVar3) {
  case 0x73:
    if (param_1 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 0x100;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 0x74:
  default:
switchD_020508a0_default:
    return (ushort)(param_2 == param_1);
  case 0x75:
    if (param_1 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 0x200;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 0x76:
    goto switchD_020508a0_default;
  case 0x77:
    if (param_1 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 9;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 0x78:
    if (param_1 < 0x80) {
      uVar1 = *(ushort *)(((unsigned int)0x020509f0) + param_1 * 2) & 0x400;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 0x79:
    goto switchD_020508a0_default;
  case 0x7a:
    uVar1 = (ushort)(param_1 == 0);
  }
LAB_020509c0:
  if (param_2 < 0x80) {
    uVar2 = *(ushort *)(((unsigned int)0x020509f0) + param_2 * 2) & 0x20;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    return uVar1;
  }
  return (ushort)(uVar1 == 0);
}
