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

extern int func_02037ba4();

void func_0202b2b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  iVar2 = ((unsigned int)0x0202b354);
  iVar5 = 0;
  uVar1 = (*(unsigned int *)0x0202b350);
  uVar7 = *(uint *)(param_2 + 0x14);
  do {
    iVar3 = iVar5 * 2;
    iVar5 = iVar5 + 1;
    *(undefined2 *)(param_1 + iVar3 + iVar2) = 0;
  } while (iVar5 < 0x20);
  func_02037ba4(uVar1,0x5c,0,0,param_2,uVar1,param_4);
  uVar6 = 1;
  if (1 < uVar7) {
    do {
      iVar2 = param_2 + uVar6 * 0x18;
      if (*(short *)(iVar2 + 6) == 6) {
        iVar5 = (int)(short)*(undefined4 *)(iVar2 + 8);
        if (iVar5 < 0) {
          uVar4 = *(uint *)(iVar2 + 0xc) & 0xffff;
        }
        else {
          uVar4 = (uint)*(ushort *)(((unsigned int)0x0202b358) + iVar5 * 2);
        }
        iVar2 = 0;
        while( true ) {
          iVar5 = param_1 + iVar2 * 2;
          if (uVar4 == *(ushort *)(iVar5 + ((unsigned int)0x0202b354))) break;
          if (*(ushort *)(iVar5 + ((unsigned int)0x0202b354)) == 0) {
            *(short *)(iVar5 + ((unsigned int)0x0202b354)) = (short)uVar4;
            iVar2 = func_02037ba4(uVar1,uVar4,0,0,param_2,uVar1,param_4);
            if (iVar2 != 0) {
              *(undefined2 *)(iVar5 + ((unsigned int)0x0202b354)) = 0;
            }
            break;
          }
          iVar2 = iVar2 + 1;
          if (0x1f < iVar2) break;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return;
}
