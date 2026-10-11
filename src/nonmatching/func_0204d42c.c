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

extern int func_02019064();
extern int func_0204d1c4();
extern int func_0204d1d8();
extern int func_02053918();

bool func_0204d42c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;

  bVar4 = false;
  bVar5 = false;
  if ((*(int *)(param_2 + 8) != 0) && ((*(byte *)(*(int *)(param_2 + 8) + 5) & 3) != 0)) {
    func_0204d1d8();
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else if ((*(byte *)(iVar1 + 6) & 8) == 0) {
    piVar2 = (int *)func_02053918(iVar1,3,*(undefined4 *)(param_1 + 0xac));
  }
  else {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (piVar2[1] == 4)) {
    iVar3 = *piVar2;
    iVar1 = func_02019064(iVar3 + 0x10,0x6b);
    bVar4 = iVar1 != 0;
    iVar1 = func_02019064(iVar3 + 0x10,0x76);
    bVar5 = iVar1 != 0;
    if (bVar4 || bVar5) {
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xe7 | bVar5 << 4 | bVar4 << 3;
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = param_2;
    }
  }
  if (!bVar4 || !bVar5) {
    if (!bVar5) {
      iVar1 = *(int *)(param_2 + 0x1c);
      while (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        if ((3 < *(int *)(*(int *)(param_2 + 0xc) + iVar1 * 8 + 4)) &&
           ((*(byte *)(*(int *)(*(int *)(param_2 + 0xc) + iVar1 * 8) + 5) & 3) != 0)) {
          func_0204d1d8(param_1);
        }
      }
    }
    iVar1 = 1 << *(sbyte *)(param_2 + 7);
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      piVar2 = (int *)(iVar1 * 0x14 + *(int *)(param_2 + 0x10));
      if (piVar2[1] == 0) {
        func_0204d1c4(piVar2);
      }
      else {
        if (((!bVar4) && (3 < piVar2[3])) && ((*(byte *)(piVar2[2] + 5) & 3) != 0)) {
          func_0204d1d8(param_1);
        }
        if (((!bVar5) && (3 < piVar2[1])) && ((*(byte *)(*piVar2 + 5) & 3) != 0)) {
          func_0204d1d8(param_1);
        }
      }
    }
    return bVar4 || bVar5;
  }
  return true;
}
