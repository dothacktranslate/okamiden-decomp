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

extern int func_02006484();
extern int func_0200659c();
extern int func_0x01ff92c0();

void func_02009670(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  int iVar3;
  uint uVar4;

  iVar1 = ((unsigned int)0x02009714);
  uVar4 = *(uint *)(((unsigned int)0x02009714) + 0xc);
  if (uVar4 == 0) {
    return;
  }
  if (0x1d7 < uVar4) {
    uVar4 = 0x1d8;
  }
  iVar3 = *(int *)(((unsigned int)0x02009714) + 8);
  iVar2 = *(int *)(((unsigned int)0x02009714) + 0xc) - uVar4;
  *(int *)(((unsigned int)0x02009714) + 0xc) = iVar2;
  *(uint *)(iVar1 + 8) = iVar3 + uVar4;
  if (iVar2 == 0) {
    func_02006484(*(undefined4 *)(iVar1 + 4),((unsigned int)0x02009718),0,in_r3,in_r3);
    func_0x01ff92c0(*(undefined4 *)(iVar1 + 4),iVar3,((unsigned int)0x0200971c),uVar4 >> 2 | 0xc4400000,0);
    func_0200659c(0x200000);
    return;
  }
  func_0x01ff92c0(*(undefined4 *)(iVar1 + 4),iVar3,((unsigned int)0x0200971c),((unsigned int)0x02009720) | uVar4 >> 2,0);
  func_0200659c(0x200000);
  return;
}
