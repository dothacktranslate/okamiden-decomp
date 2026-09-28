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

extern int func_02065994();
extern int func_0206605c();
extern int func_020660e0();
extern int func_02066140();
extern int func_02066280();

int func_02065f60(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;

  puVar1 = (uint *)func_02065994();
  if (puVar1 == (uint *)0x0) {
    return 1;
  }
  uVar3 = 0;
  if (*puVar1 != 0) {
    do {
      iVar2 = uVar3 * 8;
      switch((char)puVar1[uVar3 * 2 + 1]) {
      case '\0':
        iVar2 = func_0206605c(puVar1[uVar3 * 2 + 2],*(undefined1 *)((int)puVar1 + iVar2 + 5),param_2,
                             1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      case '\x01':
        iVar2 = func_02066140(puVar1[uVar3 * 2 + 2],*(undefined1 *)((int)puVar1 + iVar2 + 5),param_2,
                             1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      case '\x02':
        iVar2 = func_02066280(puVar1[uVar3 * 2 + 2],*(undefined1 *)((int)puVar1 + iVar2 + 5),param_2,
                             1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
        break;
      case '\x03':
        iVar2 = func_020660e0(puVar1[uVar3 * 2 + 2],*(undefined1 *)((int)puVar1 + iVar2 + 5),param_2,
                             1,0);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar1);
  }
  return 0;
}
