#pragma thumb on

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

extern int func_0203fdc0();
extern int func_0203fdd4();
extern int func_02040dbc();

undefined4 func_02068ce8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  piVar4 = (int *)func_02040dbc((*(unsigned int *)0x02068d74),(*(unsigned int *)0x02068d78),1,param_4,param_4);
  *(int **)(param_1 + 0x6c) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x84))(piVar4,param_1 + 0x88,(int)*(short *)(param_1 + 0xbe0));
    iVar3 = ((unsigned int)0x02068d84);
    uVar2 = ((unsigned int)0x02068d80);
    uVar1 = ((unsigned int)0x02068d7c);
    iVar5 = 0;
    iVar7 = *(int *)(param_1 + 0x6c);
    if (0 < *(short *)(param_1 + 0xbe0)) {
      do {
        iVar6 = param_1 + iVar5 * 2;
        *(short *)(iVar6 + 0xbf4) = (short)uVar1;
        *(short *)(iVar6 + iVar3) = (short)uVar2;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)(param_1 + 0xbe0));
    }
    *(int *)(iVar7 + 0xd0) = param_1 + ((unsigned int)0x02068d88);
    *(int *)(iVar7 + 0xdc) = param_1 + ((unsigned int)0x02068d84);
    *(undefined2 *)(iVar7 + 0x10) = 0x1f;
    func_0203fdc0(iVar7,((unsigned int)0x02068d8c));
    func_0203fdd4(iVar7,((unsigned int)0x02068d90));
    *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xfffffffe;
  }
  return 1;
}
