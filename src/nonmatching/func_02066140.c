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

extern int func_0200b040();
extern int func_020657a0();
extern int func_02065804();
extern int func_02065b30();
extern int func_02066280();
extern int func_02066480();
extern int func_02066890();

int func_02066140(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_2c;

  puVar1 = (undefined4 *)func_020657a0();
  if (puVar1 == (undefined4 *)0x0) {
    return 4;
  }
  if ((param_2 & 2) == 0) {
    iVar2 = func_02065b30(*puVar1);
  }
  else {
    iVar2 = func_02066480(*puVar1,param_3,param_4);
    if (iVar2 == 0) {
      return 8;
    }
  }
  iVar6 = 0;
  do {
    if (*(ushort *)((int)puVar1 + iVar6 * 2 + 4) != ((unsigned int)0x0206627c)) {
      puVar3 = (uint *)func_02065804();
      if (puVar3 == (uint *)0x0) {
        return 5;
      }
      iVar5 = param_3;
      iVar4 = func_02066280(*(undefined2 *)((int)puVar1 + iVar6 * 2 + 4),param_2,param_3,param_4);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (((*puVar3 >> 0x18 & 1) != 0 && (param_2 & 4) != 0) &&
         (iVar5 = iVar6, iVar4 = func_02066890(iStack_2c,iVar2,iVar6,*puVar3 & 0xffffff), iVar4 == 0)
         ) {
        return 9;
      }
      if (iVar2 != 0) {
        iVar5 = iStack_2c;
      }
      if (iVar2 != 0 && iVar5 != 0) {
        func_0200b040(iVar2,iVar6);
      }
    }
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      if (param_5 != (int *)0x0) {
        *param_5 = iVar2;
      }
      return 0;
    }
  } while( true );
}
