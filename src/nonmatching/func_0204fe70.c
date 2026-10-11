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

extern int func_0204e544();
extern int func_0204e55c();

void func_0204fe70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;

  if (*(char *)(*(int *)(param_1 + 0x10) + 0x15) != '\x02') {
    if (param_2 + 1U < 0x3fffffff || param_2 == 0x3ffffffe) {
      iVar2 = func_0204e55c(param_1,0,0,param_2 << 2);
    }
    else {
      iVar2 = func_0204e544();
    }
    piVar5 = *(int **)(param_1 + 0x10);
    iVar3 = 0;
    if (0 < param_2) {
      do {
        *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
    iVar3 = piVar5[2];
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        piVar1 = (int *)*(int *)(*piVar5 + iVar6 * 4);
        while (piVar1 != (int *)0x0) {
          iVar3 = *piVar1;
          uVar4 = piVar1[2] & param_2 - 1U;
          *piVar1 = *(undefined4 *)(iVar2 + uVar4 * 4);
          *(int **)(iVar2 + uVar4 * 4) = piVar1;
          piVar1 = (int *)iVar3;
        }
        iVar3 = piVar5[2];
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    func_0204e55c(param_1,*piVar5,iVar3 << 2,0);
    piVar5[2] = param_2;
    *piVar5 = iVar2;
    return;
  }
  return;
}
