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

extern int func_02015440();
extern int func_020154bc();
extern int func_02021e90();
extern int func_02021eb0();
extern int func_02021f44();
extern int func_02032e4c();

undefined4 func_02022244(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char local_42c [24];
  undefined1 auStack_414 [1024];

  iVar1 = ((unsigned int)0x020223a0);
  iVar2 = func_02032e4c((*(unsigned int *)0x02022398),((unsigned int)0x0202239c),local_42c,0x18,1);
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      if (local_42c[uVar4] != *(char *)(((unsigned int)0x020223a4) + uVar4)) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    if (uVar4 == 0x10) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  func_02015440(auStack_414,((unsigned int)0x020223a8));
  iVar6 = 0;
  iVar5 = 0x18;
  iVar3 = func_02032e4c((*(unsigned int *)0x02022398),0,((unsigned int)0x020223ac),0x18,1);
  iVar2 = ((unsigned int)0x020223ac);
  if (iVar3 == 0) {
    return 3;
  }
  iVar3 = *(int *)(((unsigned int)0x020223ac) + 0x14);
  *(undefined4 *)(((unsigned int)0x020223ac) + 0x14) = 0;
  iVar2 = func_02021f44(param_1,iVar2,0);
  if (iVar2 != 0) {
    iVar2 = func_020154bc(auStack_414,((unsigned int)0x020223ac),0x18);
    if (iVar3 != iVar2) {
      return 2;
    }
    func_02021e90(param_1,((unsigned int)0x020223ac));
    while( true ) {
      iVar2 = func_02032e4c((*(unsigned int *)0x02022398),iVar5,iVar1,0xf20,1);
      if (iVar2 == 0) {
        func_02021eb0(param_1,iVar1);
        return 3;
      }
      func_02015440(auStack_414,((unsigned int)0x020223a8));
      iVar2 = *(int *)(iVar1 + 0xf1c);
      *(undefined4 *)(iVar1 + 0xf1c) = 0;
      iVar3 = func_02021f44(param_1,iVar1,1);
      if (((iVar3 != 0) || (iVar3 = func_02021f44(param_1,iVar1,2), iVar3 != 0)) &&
         (iVar3 = func_020154bc(auStack_414,iVar1,0xf20), iVar2 == iVar3)) break;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xf20;
      if (1 < iVar6) {
        func_02021eb0(param_1,iVar1);
        return 2;
      }
    }
    return 0;
  }
  return 1;
}
