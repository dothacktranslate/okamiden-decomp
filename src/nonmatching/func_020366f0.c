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

extern int func_020098a0();
extern int func_0203660c();
extern int func_020366a0();

undefined4 func_020366f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  bool bVar3;
  int aiStack_30 [6];
  undefined4 uStack_18;

  uStack_18 = param_4;
  iVar2 = func_020366a0();
  iVar1 = ((unsigned int)0x0203679c);
  bVar3 = iVar2 != 0;
  if (bVar3) {
    unaff_r5 = *(int *)(iVar2 + 0x10);
  }
  if (bVar3 && unaff_r5 != 0) {
    if (bVar3 && unaff_r5 != 0) {
      func_0203660c(aiStack_30,((unsigned int)0x0203679c),6);
      func_020098a0(0,((unsigned int)0x020367a0),0x24);
      iVar2 = *(int *)(unaff_r5 + 0xc);
      if (iVar2 != 0) {
        do {
          if (*(int *)(iVar2 + 4) == aiStack_30[param_2]) {
            (**(code **)(iVar1 + param_2 * 0x20 + 8))(iVar2 + 0x10,((unsigned int)0x020367a0));
            return *(undefined4 *)(((unsigned int)0x020367a4) + 0x10);
          }
          iVar2 = *(int *)(iVar2 + 0xc);
        } while (iVar2 != 0);
      }
    }
    return 0;
  }
  return 0;
}
