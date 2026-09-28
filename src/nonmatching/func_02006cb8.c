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

extern int func_02006e04();
extern int func_02007290();

void func_02006cb8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar2 = ((unsigned int)0x02006dd0);
  iVar1 = ((unsigned int)0x02006dcc);
  if (*(int *)(((unsigned int)0x02006dcc) + 0xc) != 0) {
    return;
  }
  *(undefined4 *)(((unsigned int)0x02006dcc) + 0xc) = 1;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  iVar4 = ((unsigned int)0x02006dd4);
  *(undefined4 *)(((unsigned int)0x02006dd4) + 0x70) = 0x10;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  *(undefined4 *)(iVar4 + 100) = 1;
  *(undefined4 *)(iVar4 + 0x68) = 0;
  *(undefined4 *)(iVar4 + 0x74) = 0;
  iVar3 = ((unsigned int)0x02006dd8);
  *(int *)(iVar1 + 0x24) = iVar4;
  *(int *)(iVar1 + 0x20) = iVar4;
  iVar1 = ((unsigned int)0x02006dd4);
  iVar4 = ((unsigned int)0x02006ddc);
  if (0 < iVar3) {
    iVar4 = (((unsigned int)0x02006de0) + 0x3f80) - ((unsigned int)0x02006de4);
  }
  iVar5 = (((unsigned int)0x02006de0) + 0x3f80) - ((unsigned int)0x02006de4);
  *(int *)(((unsigned int)0x02006dd4) + 0x94) = iVar5;
  *(int *)(iVar1 + 0x90) = iVar4 - iVar3;
  uVar2 = ((unsigned int)0x02006de8);
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar5 + -8) = uVar2;
  iVar4 = ((unsigned int)0x02006dcc);
  **(undefined4 **)(iVar1 + 0x90) = ((unsigned int)0x02006dec);
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined2 *)(iVar4 + 0x1c) = 0;
  *(undefined2 *)(iVar4 + 0x1e) = 0;
  (*(unsigned int *)0x02006df4) = ((unsigned int)0x02006df0);
  func_02007290(0);
  iVar1 = ((unsigned int)0x02006df8);
  func_02006e04(((unsigned int)0x02006df8),((unsigned int)0x02006dfc),0,((unsigned int)0x02006e00));
  *(undefined4 *)(iVar1 + 0x70) = 0x20;
  *(undefined4 *)(iVar1 + 100) = 1;
  return;
}
