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
extern int func_02052b58();
extern int func_02053918();
extern int func_02053958();
extern int func_020542c0();

void func_02054408(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;

  iVar2 = 0;
  puVar5 = param_4;
  do {
    if (param_2[1] == 5) {
      iVar3 = *param_2;
      puVar1 = (undefined4 *)func_02052b58(iVar3,param_3);
      if (puVar1[1] != 0) {
LAB_02054494:
        *param_4 = *puVar1;
        param_4[1] = puVar1[1];
        return;
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else if ((*(byte *)(iVar3 + 6) & 1) == 0) {
        piVar4 = (int *)func_02053918(iVar3,0,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa0));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (piVar4 == (int *)0x0) goto LAB_02054494;
    }
    else {
      piVar4 = (int *)func_02053958(param_1,param_2,0);
      if (piVar4[1] == 0) {
        func_0204b744(param_1,param_2,((unsigned int)0x02054530));
      }
    }
    if (piVar4[1] == 6) {
      func_020542c0(param_1,param_4,piVar4,param_2,param_3,param_4,puVar5);
      return;
    }
    iVar2 = iVar2 + 1;
    param_2 = piVar4;
    if (99 < iVar2) {
      func_0204b9e0(param_1,((unsigned int)0x02054534));
      return;
    }
  } while( true );
}
