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

extern int func_0204bce4();
extern int func_0204bd40();

void func_0204d814(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  param_2 = param_2 - *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28);
  param_2 = param_2 + ((uint)(param_2 >> 2) >> 0x1d);
  iVar2 = param_2 >> 3;
  iVar4 = *(int *)(param_1 + 0x30);
  iVar3 = (int)((longlong)((unsigned int)0x0204d898) * (longlong)iVar3 >> 0x22) - (iVar3 >> 0x1f);
  if (((unsigned int)0x0204d89c) < iVar4) {
    return;
  }
  iVar1 = iVar3 * 4;
  bVar6 = SBORROW4(iVar4,iVar1);
  iVar3 = iVar4 + iVar3 * -4;
  bVar5 = iVar4 == iVar1;
  if (iVar1 < iVar4) {
    bVar6 = SBORROW4(iVar4,0x10);
    iVar3 = iVar4 + -0x10;
    bVar5 = iVar4 == 0x10;
  }
  if (!bVar5 && iVar3 < 0 == bVar6) {
    func_0204bd40(param_1,iVar4 / 2,((unsigned int)0x0204d89c),param_2,param_4);
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar3 = iVar2 * 4;
  bVar6 = SBORROW4(iVar4,iVar3);
  iVar2 = iVar4 + iVar2 * -4;
  bVar5 = iVar4 == iVar3;
  if (iVar3 < iVar4) {
    bVar6 = SBORROW4(iVar4,0xaa);
    iVar2 = iVar4 + -0xaa;
    bVar5 = iVar4 == 0xaa;
  }
  if (bVar5 || iVar2 < 0 != bVar6) {
    return;
  }
  func_0204bce4(param_1,iVar4 / 2);
  return;
}
