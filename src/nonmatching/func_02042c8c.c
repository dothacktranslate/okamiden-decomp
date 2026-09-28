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

extern int func_0201ebe0();
extern int func_0204374c();

undefined4 func_02042c8c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint extraout_r1;
  int iVar3;
  uint uVar4;
  uint local_24;

  switch(*param_2) {
  default:
    uVar4 = 0;
    local_24 = 0;
    break;
  case 1:
  case 2:
  case 3:
    uVar4 = 0;
    local_24 = *(int *)(param_1 + 8) << 1;
    break;
  case 4:
    if ((int)param_2[1] < 0) {
      local_24 = 0;
      uVar4 = 0;
    }
    else {
      func_0201ebe0(param_2[1],*(undefined4 *)(param_1 + 8));
      local_24 = extraout_r1 + 1;
      uVar4 = extraout_r1;
    }
  }
  do {
    if (local_24 <= uVar4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 4) + uVar4 * 0xbc;
    bVar1 = false;
    switch(*param_2) {
    case 1:
LAB_02042d3c:
      bVar1 = true;
      break;
    case 2:
      if (*(int *)(iVar3 + 0x80) == param_2[1]) goto LAB_02042d3c;
      break;
    case 3:
      if (*(int *)(iVar3 + 0x78) == param_2[1]) goto LAB_02042d3c;
      break;
    case 4:
      if (*(int *)(iVar3 + 0x7c) == param_2[1]) goto LAB_02042d3c;
    }
    if (bVar1) {
      switch(param_3) {
      case 0:
        if (*(int *)(iVar3 + 8) == 2) {
          uVar2 = 1;
LAB_02042d94:
          *(undefined4 *)(iVar3 + 8) = uVar2;
        }
        break;
      case 1:
        if (*(int *)(iVar3 + 8) == 1) {
          uVar2 = 2;
          goto LAB_02042d94;
        }
        break;
      case 2:
        *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xfffffffe;
        if (*(int *)(iVar3 + 8) != 0) {
          if ((*(int *)(iVar3 + 0x74) == 0) || (param_2[7] == 1)) {
            uVar2 = 0;
            goto LAB_02042d94;
          }
          *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xfffffffe;
          func_0204374c(*(int *)(iVar3 + 0x74),0);
        }
        break;
      case 3:
        if (*(char *)(param_2 + 7) == '\0') {
          *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) | 2;
        }
        else {
          *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xfffffffd;
        }
        break;
      case 4:
        if (*(int *)(iVar3 + 8) != 0) {
          return 1;
        }
        break;
      case 5:
        if ((*(uint *)(iVar3 + 0x84) & 0x40) != 0) {
          return 1;
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}
