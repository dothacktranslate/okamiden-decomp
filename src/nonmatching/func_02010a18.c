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

undefined8 func_02010a18(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = param_1[1] + -2;
  iVar4 = *param_1 + 2000;
  if (iVar2 < 1) {
    iVar4 = *param_1 + 1999;
  }
  iVar3 = -(iVar4 >> 0x1f) + (int)((longlong)((unsigned int)0x02010ac8) * (longlong)iVar4 >> 0x25);
  iVar4 = iVar4 + (-(iVar4 >> 0x1f) + (int)((longlong)((unsigned int)0x02010ac8) * (longlong)iVar4 >> 0x25)) *
                  -100;
  if (iVar2 < 1) {
    iVar2 = param_1[1] + 10;
  }
  iVar2 = iVar2 * 0x1a + -2;
  iVar2 = iVar4 + param_1[2] +
                  ((int)((longlong)((unsigned int)0x02010acc) * (longlong)iVar2 >> 0x22) - (iVar2 >> 0x1f)) +
          ((int)(iVar4 + ((uint)(iVar4 >> 1) >> 0x1e)) >> 2) +
          ((int)(iVar3 + ((uint)(iVar3 >> 1) >> 0x1e)) >> 2) + iVar3 * 5;
  lVar1 = (longlong)
          ((iVar2 + (int)((ulonglong)((longlong)((unsigned int)0x02010ad0) * (longlong)iVar2) >> 0x20) >> 2) -
          (iVar2 >> 0x1f)) * 7;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20),iVar2 - (int)lVar1);
}
