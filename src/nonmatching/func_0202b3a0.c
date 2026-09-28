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

extern int func_02018ba4();
extern int func_0202c198();
extern int func_0202ca4c();
extern int func_02034c68();
extern int func_0x020a0e04();

undefined4 func_0202b3a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_54 [64];

  iVar2 = param_1 + 0x130;
  iVar3 = 0;
  do {
    func_0x020a0e04(iVar2);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x4c;
  } while (iVar3 < 0x20);
  func_0202c198(param_1,1);
  iVar2 = ((unsigned int)0x0202b4dc);
  func_02018ba4(auStack_54,((unsigned int)0x0202b4e0),*(undefined2 *)(param_1 + ((unsigned int)0x0202b4dc)),
               *(undefined2 *)(param_1 + ((unsigned int)0x0202b4dc)));
  func_02018ba4(auStack_54,((unsigned int)0x0202b4e4),auStack_54);
  iVar1 = func_02034c68((*(unsigned int *)0x0202b4e8),auStack_54,0,0,0);
  iVar3 = ((unsigned int)0x0202b4ec);
  *(int *)(param_1 + ((unsigned int)0x0202b4ec)) = iVar1;
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(uint *)((*(unsigned int *)0x0202b4f0) + 0x124) = *(uint *)((*(unsigned int *)0x0202b4f0) + 0x124) | 0x80000000;
  *(undefined2 *)(param_1 + iVar2 + -4) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202b4f4) + 0x5c) + 0x50);
  *(char *)(param_1 + iVar3 + -0x6f) = (char)*(undefined2 *)(iVar1 + 0x1c);
  *(char *)(param_1 + iVar3 + -0x70) = (char)*(undefined2 *)(iVar1 + 0x1e);
  *(undefined4 *)(param_1 + iVar3 + -0x58) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + iVar3 + -0x54) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_1 + iVar3 + -0x50) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_1 + iVar3 + -0x4c) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_1 + iVar3 + -0x48) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + iVar3 + -0x44) = *(undefined4 *)(iVar1 + 0x3c);
  iVar2 = ((unsigned int)0x0202b4f8);
  *(bool *)(param_1 + ((unsigned int)0x0202b4f8)) = (*(uint *)(iVar1 + 0x14) & 0x80000000) != 0;
  *(undefined4 *)(param_1 + iVar2 + 0x30) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x2c) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x28) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x20) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x1c) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x18) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x14) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0x10) = 0;
  *(undefined4 *)(param_1 + iVar2 + 0xc) = 0;
  *(undefined4 *)(param_1 + iVar2 + 8) = 0;
  *(undefined4 *)(param_1 + iVar2 + 4) = 0;
  *(uint *)((*(unsigned int *)0x0202b4f0) + 0x124) = *(uint *)((*(unsigned int *)0x0202b4f0) + 0x124) | 0x80000000;
  func_0202ca4c(param_1,1);
  return 1;
}
