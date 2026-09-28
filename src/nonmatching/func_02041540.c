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

extern int func_02003774();
extern int func_0200395c();
extern int func_0200399c();
extern int func_02039454();
extern int func_02041650();
extern int func_020416a4();
extern int func_020418ec();
extern int func_02041930();
extern int func_0204195c();
extern int func_0205bb5c();
extern int func_0205df6c();

void func_02041540(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;

  func_02039454(param_1 + 0x10);
  func_02003774();
  func_0200399c();
  func_0205bb5c();
  iVar4 = 0;
  func_020416a4(param_1,0,((unsigned int)0x02041630));
  func_020416a4(param_1,1,0);
  func_020416a4(param_1,2,0);
  func_020416a4(param_1,3,0);
  func_020418ec(param_1,((unsigned int)0x02041634));
  func_02041650(param_1,((unsigned int)0x02041638));
  func_02041930(param_1,((unsigned int)0x0204163c));
  puVar2 = ((unsigned int)0x02041640);
  uVar1 = (ushort)((unsigned int)0x02041644);
  (*(unsigned int *)0x02041640) = (*(unsigned int *)0x02041640) & uVar1;
  func_0200395c(((unsigned int)0x02041648));
  *puVar2 = *puVar2 & uVar1 + 2 | 0x10;
  *puVar2 = uVar1 + 2 & *puVar2 | 8;
  *(undefined4 *)(param_1 + 0x194) = 1;
  *(undefined4 *)(param_1 + 0x198) = 1;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x19d) = 0;
  func_0205df6c(((unsigned int)0x0204164c));
  *(undefined2 *)(param_1 + 0x19e) = 0;
  *(undefined2 *)(param_1 + 0x1a0) = 0;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  func_0205df6c(((unsigned int)0x0204164c));
  func_0204195c(param_1);
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  do {
    iVar3 = param_1 + iVar4 * 4;
    *(undefined4 *)(iVar3 + 0x1e4) = 0;
    *(undefined4 *)(iVar3 + 0x1ec) = 0;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + 500) = 0;
  } while (iVar4 < 2);
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  return;
}
