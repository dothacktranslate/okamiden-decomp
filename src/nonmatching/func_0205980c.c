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

void func_0205980c(int param_1,int param_2,short param_3,int param_4,int param_5,uint param_6,
                 short param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  uVar1 = ((unsigned int)0x02059890);
  iVar2 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    iVar3 = param_1 + iVar2 * 8;
    *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) & 0xf3ff | param_3 << 10;
    *(uint *)(param_1 + iVar2 * 8) = *(uint *)(param_1 + iVar2 * 8) & 0xfffff3ff | param_4 << 10;
    *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) & 0xfff | param_7 << 0xc;
    uVar4 = *(uint *)(param_1 + iVar2 * 8) & uVar1 | param_6;
    *(uint *)(param_1 + iVar2 * 8) = uVar4;
    if (param_5 == 0) {
      uVar4 = uVar4 & 0xffffefff;
    }
    else {
      uVar4 = uVar4 | 0x1000;
    }
    *(uint *)(param_1 + iVar2 * 8) = uVar4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_2);
  return;
}
