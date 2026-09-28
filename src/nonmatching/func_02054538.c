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

extern int func_0204b744();
extern int func_0204b9e0();
extern int func_0204e410();
extern int func_02052c04();
extern int func_02053918();
extern int func_02053958();
extern int func_02054370();

void func_02054538(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_2c;
  int local_28;

  iVar3 = 0;
  do {
    if (param_2[1] == 5) {
      iVar4 = *param_2;
      piVar1 = (int *)func_02052c04(param_1,iVar4,param_3);
      if (piVar1[1] != 0) {
LAB_020545c0:
        *piVar1 = *param_4;
        piVar1[1] = param_4[1];
        if (param_4[1] < 4) {
          return;
        }
        if ((*(byte *)(*param_4 + 5) & 3) != 0) {
          if ((*(byte *)(iVar4 + 5) & 4) != 0) {
            func_0204e410(param_1,iVar4);
            return;
          }
          return;
        }
        return;
      }
      iVar2 = *(int *)(iVar4 + 8);
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else if ((*(byte *)(iVar2 + 6) & 2) == 0) {
        piVar5 = (int *)func_02053918(iVar2,1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa4));
      }
      else {
        piVar5 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) goto LAB_020545c0;
    }
    else {
      piVar5 = (int *)func_02053958(param_1,param_2,1);
      if (piVar5[1] == 0) {
        func_0204b744(param_1,param_2,((unsigned int)0x020546a8));
      }
    }
    if (piVar5[1] == 6) {
      func_02054370(param_1,piVar5,param_2,param_3,param_4);
      return;
    }
    iVar3 = iVar3 + 1;
    local_2c = *piVar5;
    param_2 = &local_2c;
    local_28 = piVar5[1];
    if (99 < iVar3) {
      func_0204b9e0(param_1,((unsigned int)0x020546ac));
      return;
    }
  } while( true );
}
