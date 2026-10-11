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

extern int func_0200986c();
extern int func_0205f0cc();

void func_02060bb4(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int unaff_r8;
  bool bVar4;

  bVar4 = param_3 != 0;
  iVar2 = param_1;
  if (bVar4) {
    iVar2 = *(int *)(param_3 + 8);
  }
  if (bVar4 && iVar2 != 0) {
    unaff_r8 = param_3 + iVar2;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xc) = (*(unsigned int *)0x02060c7c);
  bVar1 = *(byte *)(param_3 + 0x18);
  if (!bVar4 || iVar2 == 0) {
    unaff_r8 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar1;
  func_0200986c(0,param_1 + 0x1a,(uint)bVar1 << 1);
  if (*(char *)(param_2 + 9) == '\0') {
    return;
  }
  do {
    if (unaff_r8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = func_0205f0cc(unaff_r8 + 4);
    }
    if (-1 < iVar2) {
      *(ushort *)(param_1 + iVar2 * 2 + 0x1a) = (ushort)uVar3 | 0x100;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(byte *)(param_2 + 9));
  return;
}
