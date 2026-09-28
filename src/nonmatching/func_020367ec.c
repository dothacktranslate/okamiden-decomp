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
extern int func_02044b6c();
extern int func_02044bf4();

void func_020367ec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int aiStack_40 [6];
  int iStack_28;

  iVar1 = ((unsigned int)0x020368d8);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    return;
  }
  iStack_28 = param_4;
  func_0203660c(aiStack_40,((unsigned int)0x020368d8),6);
  uVar2 = ((unsigned int)0x020368dc);
  func_020098a0(0,((unsigned int)0x020368dc),0x24);
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 != 0) {
    do {
      uVar4 = 0;
      do {
        if (*(int *)(iVar3 + 4) == aiStack_40[uVar4]) {
          (**(code **)(iVar1 + uVar4 * 0x20 + 8))(iVar3 + 0x10,uVar2);
          if (uVar4 == 0) {
            func_02044b6c(uVar2,param_3,param_2);
            param_3 = param_3 + *(int *)(iVar3 + 8);
          }
          else if (uVar4 == 2) {
            func_02044bf4(uVar2,param_4,param_2);
            param_4 = param_4 + *(int *)(iVar3 + 8);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      iVar3 = *(int *)(iVar3 + 0xc);
    } while (iVar3 != 0);
    return;
  }
  return;
}
