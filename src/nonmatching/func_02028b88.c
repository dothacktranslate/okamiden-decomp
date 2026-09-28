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

extern int func_020231e8();
extern int func_0202322c();
extern int func_0202326c();
extern int func_020232bc();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x0209da3c();
extern int func_0x0209eb78();

undefined4 func_02028b88(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint local_20;

  piVar8 = (int *)(*(unsigned int *)0x02028ddc);
  iVar9 = *(int *)(*piVar8 + 0x5c);
  piVar10 = piVar8;
  uVar2 = func_020465d8(param_1,2);
  iVar3 = func_020465d8(param_1,1);
  switch(iVar3 - ((unsigned int)0x02028de0)) {
  case 0:
    uVar2 = func_020465d8(param_1,3);
    func_0202322c(piVar10 + 0x3c,uVar2);
    local_20 = 0xffffffff;
    break;
  case 1:
    goto LAB_02028bfc;
  case 2:
    func_020465d8(param_1,2);
LAB_02028bfc:
    local_20 = 0xffffffff;
    break;
  case 3:
    local_20 = func_020231e8();
    break;
  case 4:
    local_20 = (uint)*(byte *)(piVar8 + 0x3a);
    break;
  case 5:
    piVar8[0x2f] = piVar8[0x2f] | 0x1000;
    uVar4 = func_020465d8(param_1,3);
    local_20 = func_0x0209da3c(uVar2,uVar4);
    break;
  case 6:
    uVar2 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    local_20 = func_0202326c(piVar10 + 0x3c,uVar2,uVar4);
    break;
  case 7:
    uVar2 = func_020465d8(param_1,3);
    uVar4 = func_020465d8(param_1,4);
    uVar5 = func_020465d8(param_1,5);
    func_020232bc(piVar10 + 0x3c,uVar2,uVar4,uVar5,piVar10 + 0x3c);
    local_20 = 0xffffffff;
    break;
  case 8:
    local_20 = func_020465d8(param_1,2);
    iVar3 = func_020465d8(param_1,3);
    iVar6 = func_020465d8(param_1,4);
    if (local_20 == 0) {
      *(undefined2 *)((int)piVar8 + 0xea) = 0;
      *(ushort *)((int)piVar8 + 0xea) = *(ushort *)((int)piVar8 + 0xea) | 1;
      *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x10000;
      if (0 < iVar6) {
        piVar8[0x2c] = iVar6;
      }
      piVar8[0x3b] = iVar3;
      if (*(int *)(iVar9 + 0x54) == 0) {
        *(ushort *)((int)piVar8 + 0xea) = *(ushort *)((int)piVar8 + 0xea) | 8;
      }
      local_20 = 1;
    }
    else if (local_20 == 1) {
      iVar3 = func_0x0209eb78(iVar9);
      bVar1 = false;
      if ((*(ushort *)((int)piVar8 + 0xea) & 4) == 0) {
        if (iVar3 != 0) {
          *(ushort *)((int)piVar8 + 0xea) = *(ushort *)((int)piVar8 + 0xea) | 4;
        }
      }
      else if (iVar3 == 0) {
        iVar7 = (int)*(short *)(*(int *)(iVar9 + 0x5c) + 0x2ec);
        if ((iVar7 != -1) && ((iVar7 == piVar8[0x3b] || (piVar8[0x3b] == -1)))) {
          *(ushort *)((int)piVar8 + 0xea) = *(ushort *)((int)piVar8 + 0xea) | 2;
        }
        bVar1 = true;
      }
      iVar7 = 0;
      if ((0 < iVar6) && (iVar3 == 0)) {
        if ((char)piVar8[0x2d] != '\0') {
          do {
            if (piVar8[0x2c] != 0) {
              piVar8[0x2c] = piVar8[0x2c] + -1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)(uint)*(byte *)(piVar8 + 0x2d));
        }
        iVar7 = 1;
        if (piVar8[0x2c] != 0) {
          iVar7 = 0;
        }
      }
      if ((iVar7 != 0) || (bVar1)) {
        *(undefined2 *)((int)piVar8 + 0xea) = 0;
        local_20 = 0xffffffff;
        *(uint *)(iVar9 + 0x1c) = ((unsigned int)0x02028de4) & *(uint *)(iVar9 + 0x1c);
      }
    }
    break;
  default:
    goto switchD_02028bc2_default;
  }
  func_02046868(param_1,local_20);
switchD_02028bc2_default:
  return 1;
}
