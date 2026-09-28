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

extern int func_02003614();
extern int func_02024020();
extern int func_0202404c();
extern int func_02069300();
extern int func_0206937c();
extern int func_0x0209f100();

void func_020690f8(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  piVar3 = (int *)(*(unsigned int *)0x020692d8);
  iVar4 = *(int *)(*(int *)(*piVar3 + 0x5c) + 0x60);
  if (((*(unsigned int *)0x020692dc) != 0) && ((*(uint *)((*(unsigned int *)0x020692dc) + 0x124) & 0x10000) != 0)) {
    param_2 = 0;
  }
  bVar5 = false;
  if ((iVar4 != 0) &&
     (iVar4 = *(int *)(iVar4 + 0x218), bVar5 = iVar4 == 3 || iVar4 == 1, iVar4 != 3 && iVar4 != 1))
  {
    param_2 = 0;
  }
  uVar1 = piVar3[0xe];
  bVar6 = uVar1 != 0;
  if (!bVar6) {
    uVar1 = (uint)*(byte *)(piVar3 + 9);
  }
  if ((bVar6 || uVar1 != 0) || ((piVar3[0x2f] & 0x180U) != 0)) {
    param_2 = 0;
  }
  iVar4 = func_0202404c(*piVar3,0,piVar3,bVar5,param_4);
  uVar1 = 0;
  if (((iVar4 == 0) || (uVar1 = func_02024020(*(undefined4 *)(*(unsigned int *)0x020692d8),0), (int)uVar1 < -0xf)) ||
     (uVar1 = func_02024020(*(undefined4 *)(*(unsigned int *)0x020692d8),0), 0xf < (int)uVar1)) {
    param_2 = 0;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
    uVar1 = param_1[1];
  }
  if (param_2 == 0 && uVar1 == 0) {
    *param_1 = uVar2 | 4;
    return;
  }
  if ((uVar2 & 4) != 0) {
    *param_1 = *param_1 & 0xfffffffb;
    return;
  }
  func_0206937c(param_1);
  if (param_1[1] < 0xf) {
    iVar4 = param_1[1] * 0x13;
    iVar4 = ((iVar4 + (int)((ulonglong)((longlong)((unsigned int)0x020692e0) * (longlong)iVar4) >> 0x20) >> 3) -
            (iVar4 >> 0x1f)) + 0xc;
  }
  else {
    iVar4 = 0x1f;
  }
  func_02003614(((unsigned int)0x020692e4),2,0x1d);
  if (param_1[1] == 0) {
    func_0x0209f100(0,7,0,0,iVar4);
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  if (uVar1 + 1 < 0x1e) {
    return;
  }
  param_1[1] = 0;
  if (param_2 != 0) {
    return;
  }
  func_02069300(param_1);
  return;
}
