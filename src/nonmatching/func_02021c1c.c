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

extern int func_02021df4();
extern int func_020239d8();
extern int func_02032bcc();
extern int func_02037fb4();
extern int func_020688f8();

int func_02021c1c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  undefined4 *puVar4;

  if (((*(unsigned int *)0x02021cbc) == 0) && (iVar2 = func_02032bcc(0x1b4,4,((unsigned int)0x02021cc0),in_r3,in_r3), iVar2 != 0))
  {
    puVar4 = (undefined4 *)(iVar2 + 0x154);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar2 + 0x158) = 0;
      uVar1 = ((unsigned int)0x02021cc4);
      *(undefined4 *)(iVar2 + 0x15c) = 0;
      *puVar4 = uVar1;
      func_02037fb4(iVar2 + 0x160,0,0,0);
      *puVar4 = ((unsigned int)0x02021cc8);
      func_020688f8(iVar2 + 0x1a0);
      func_020239d8(puVar4);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = func_02021df4(iVar2,puVar4);
    }
    (*(unsigned int *)0x02021cbc) = iVar3;
    return iVar3;
  }
  return 0;
}
