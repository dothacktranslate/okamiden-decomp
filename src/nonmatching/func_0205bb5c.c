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

extern int func_02000c60();
extern int func_02001460();
extern int func_02001c28();

void func_0205bb5c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  puVar1 = ((unsigned int)0x0205bc60);
  (*(unsigned int *)0x0205bc60) = ((unsigned int)0x0205bc5c);
  puVar1[1] = 0;
  puVar1[0x12] = 2;
  uVar2 = ((unsigned int)0x0205bc68);
  puVar1[0x1f] = ((unsigned int)0x0205bc64);
  puVar1[0x24] = uVar2;
  uVar2 = ((unsigned int)0x0205bc70);
  puVar1[0x29] = ((unsigned int)0x0205bc6c);
  uVar3 = ((unsigned int)0x0205bc74);
  puVar1[0x2e] = uVar2;
  func_02001460(uVar3);
  func_02001c28(((unsigned int)0x0205bc78));
  iVar4 = ((unsigned int)0x0205bc80);
  puVar1[0x20] = ((unsigned int)0x0205bc7c);
  iVar5 = ((unsigned int)0x0205bc84);
  puVar1[0x21] = iVar4;
  puVar1[0x22] = iVar4 + 0x3fffffff;
  uVar2 = ((unsigned int)0x0205bc88);
  puVar1[0x23] = iVar5;
  puVar1[0x25] = uVar2;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = ((unsigned int)0x0205bc8c);
  puVar1[0x28] = iVar5 + -0x90000;
  puVar1[0x2a] = ((unsigned int)0x0205bc90);
  uVar2 = ((unsigned int)0x0205bc94);
  puVar1[0x2b] = 0x4000001f;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = 0x7e00 - iVar4;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  uVar2 = ((unsigned int)0x0205bc98);
  puVar1[0x3a] = 0;
  func_02000c60(uVar2);
  puVar1[0x3b] = 0x1000;
  puVar1[0x3c] = 0x1000;
  puVar1[0x3d] = 0x1000;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x92] = 0;
  puVar1[0x91] = 0;
  puVar1[0x90] = 0;
  puVar1[0x95] = 0;
  puVar1[0x93] = 0;
  puVar1[0x94] = 0x1000;
  puVar1[0x97] = 0;
  puVar1[0x96] = 0;
  puVar1[0x98] = 0xfffff000;
  return;
}
