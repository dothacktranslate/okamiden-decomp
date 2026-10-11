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

extern int func_0200cb94();
extern int func_0200cbc0();

int func_02065a48(uint param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;

  iVar6 = (*(unsigned int *)0x02065b0c);
  if (*(uint *)(*(int *)(iVar6 + 0x90) + 8) <= param_1) {
    return -1;
  }
  uVar4 = *(uint *)(iVar6 + 0x9c);
  if (*(uint *)(iVar6 + 0x9c) == 0) {
    uVar4 = param_3;
  }
  piVar7 = (int *)(*(int *)(iVar6 + 0x90) + 0xc + param_1 * 0x10);
  iVar3 = 0;
  if (0 < (int)param_3) {
    do {
      uVar5 = param_3 - iVar3;
      if ((int)uVar4 < (int)(param_3 - iVar3)) {
        uVar5 = uVar4;
      }
      uVar1 = piVar7[1] - param_4;
      if (uVar1 < uVar5) {
        uVar5 = uVar1;
      }
      if (uVar5 == 0) {
        return iVar3;
      }
      iVar2 = func_0200cb94(iVar6 + 0x34,*piVar7 + param_4,0);
      if (iVar2 == 0) {
        return -1;
      }
      iVar2 = func_0200cbc0(iVar6 + 0x34,param_2,uVar5);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar3 = iVar3 + iVar2;
      param_4 = param_4 + iVar2;
      param_2 = param_2 + iVar2;
    } while (iVar3 < (int)param_3);
  }
  return iVar3;
}
