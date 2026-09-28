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

extern int func_0202027c();
extern int func_02020300();
extern int func_02021b58();
extern int func_02021b78();

void func_02020364(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iStack_28;
  int iStack_24;
  int iStack_20;

  param_2[1] = 0;
  param_2[2] = 0;
  iVar1 = func_02021b58(param_2,param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = param_2[4] - param_2[3];
  piVar2 = (int *)func_02020300(param_2[3],
                               (int)((longlong)((unsigned int)0x02020468) * (longlong)iVar1 >> 0x21) -
                               (iVar1 >> 0x1f),param_1);
  if (piVar2 != (int *)0x0) {
    if ((piVar2[1] & 1U) == 0) {
      piVar4 = (int *)piVar2[2];
    }
    else {
      piVar4 = piVar2 + 2;
    }
    param_2[1] = (int)piVar4;
    *param_2 = *piVar2;
    iVar1 = *piVar2;
    uVar3 = func_02021b78(param_2[1]);
    uVar5 = 0;
    while( true ) {
      uVar3 = func_0202027c(uVar3,&iStack_20);
      if (iStack_20 == 0) {
        return;
      }
      uVar3 = func_0202027c(uVar3,&iStack_24);
      uVar3 = func_0202027c(uVar3,&iStack_28);
      if ((uint)(param_1 - iVar1) < uVar5 + iStack_20) break;
      uVar5 = uVar5 + iStack_20 + iStack_24;
      if ((uint)(param_1 - iVar1) <= uVar5) {
        param_2[2] = param_2[1] + iStack_28;
        return;
      }
    }
    return;
  }
  return;
}
