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

extern int func_02015c38();
extern int func_02034c68();
extern int func_02035038();
extern int func_02035834();
extern int func_02036c04();
extern int func_02036cac();
extern int func_02036edc();

int func_02036db8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_2c [20];

  func_02015c38(param_2);
  iVar1 = func_02036edc(param_1,param_2);
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x20) = *(short *)(iVar1 + 0x20) + 1;
    return iVar1;
  }
  iVar1 = func_02036cac(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 = func_02035038((*(unsigned int *)0x02036eb4),param_2), iVar2 != 0)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),0x24,4,0);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = func_02036c04(iVar3,param_3,iVar1);
    }
    if (iVar2 != 0) {
      iVar1 = func_02034c68((*(unsigned int *)0x02036eb4),param_2,param_3 & 5,*(undefined4 *)(iVar1 + 8));
      *(int *)(iVar2 + 0x1c) = iVar1;
      if (iVar1 != 0) {
        func_02035834(auStack_2c,param_1 + 0xc,param_1 + 0x10,iVar2 + 4);
        return iVar2;
      }
    }
  }
  return 0;
}
