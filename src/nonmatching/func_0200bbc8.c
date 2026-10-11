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

extern int func_02007050();
extern int func_02008b6c();
extern int func_02008b80();
extern int func_0200b74c();
extern int func_0200b848();
extern int func_0200c8e0();

int func_0200bbc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auStack_70 [8];
  int local_68;
  undefined4 uStack_28;

  iVar5 = 0;
  uStack_28 = param_4;
  piVar1 = (int *)func_02008b6c();
  bVar7 = (*(uint *)(param_1 + 0x14) & 0x20) != 0;
  piVar2 = piVar1;
  if (bVar7) {
    piVar2 = *(int **)(param_1 + 8);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffdf;
  }
  if (bVar7 && piVar2 != (int *)0x0) {
    do {
      piVar6 = (int *)*piVar2;
      if ((((piVar2[3] & 2U) != 0) && ((piVar2[3] & 0x40U) == 0)) &&
         (func_0200b74c(piVar2,3), piVar6 == (int *)0x0)) {
        piVar6 = *(int **)(param_1 + 8);
      }
      piVar2 = piVar6;
    } while (piVar2 != (int *)0x0);
  }
  func_02008b80(piVar1);
  uVar3 = func_02008b6c();
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((((uVar4 & 0x40) == 0) && ((uVar4 & 8) == 0)) && (*(int *)(param_1 + 8) != 0)) {
    if ((param_2 == 0) || ((uVar4 & 0x10) != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10;
    }
    func_02008b80(uVar3);
    if (bVar7) {
      func_0200b848(*(undefined4 *)(param_1 + 8),9);
    }
    uVar3 = func_02008b6c();
    if (param_2 != 0 || bVar7) {
      iVar5 = *(int *)(param_1 + 8);
      *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 0x40;
    }
    if ((param_2 != 0) && ((*(uint *)(iVar5 + 0xc) & 4) != 0)) {
      func_02007050(iVar5 + 0x18);
      iVar5 = 0;
    }
  }
  else if (param_2 != 0) {
    if ((uVar4 & 0x10) != 0) {
      func_0200c8e0(auStack_70);
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffef;
      local_68 = param_1;
      func_0200b848(auStack_70,10);
    }
    if ((*(uint *)(param_1 + 0x14) & 0x40) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf | 8;
      func_02007050(param_1 + 0xc);
    }
  }
  func_02008b80(uVar3);
  return iVar5;
}
