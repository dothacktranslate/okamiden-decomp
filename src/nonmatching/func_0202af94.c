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

extern int func_0202af54();
extern int func_02038728();
extern int func_020450bc();
extern int func_0204560c();

int func_0202af94(undefined2 *param_1,undefined4 param_2,uint *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  iVar6 = 0;
  uVar5 = 0;
  iVar2 = func_0202af54(param_1 + 8,((unsigned int)0x0202b0cc));
  if ((*(uint *)(param_1 + 6) & 1) != 0) {
    uVar5 = 2;
  }
  if ((*(uint *)(param_1 + 6) & 4) != 0) {
    iVar6 = func_0202af54(param_1 + 8,((unsigned int)0x0202b0d0));
    uVar5 = uVar5 | 0x100;
  }
  if ((*(uint *)(param_1 + 6) & 0x8000) == 0) {
    if ((*(uint *)(param_1 + 6) & 0x4000) == 0) goto LAB_0202afec;
    uVar3 = 0x10000;
  }
  else {
    uVar3 = 0x30000;
  }
  uVar5 = uVar5 | uVar3;
LAB_0202afec:
  iVar4 = func_0204560c((*(unsigned int *)0x0202b0d4),(uVar5 & 0x100) != 0,0,1,param_2);
  if (iVar2 != 0) {
    if ((uVar5 & 0x100) == 0) {
      *(int *)(iVar4 + 0x28) = iVar2;
      *(undefined2 *)(iVar4 + 0x10) = *param_1;
    }
    else if (iVar6 != 0) {
      func_020450bc(iVar4,iVar2,iVar6,*param_1);
    }
  }
  sVar1 = param_1[3];
  *(int *)(iVar4 + 0x14) = (int)(short)param_1[2] << 0xc;
  *(int *)(iVar4 + 0x18) = (int)sVar1 << 0xc;
  *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) | uVar5;
  if ((*(uint *)(param_1 + 6) & 2) != 0) {
    *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xfffffffe;
  }
  if (param_1[1] != 0) {
    uVar3 = (uint)(ushort)param_1[2];
    uVar5 = (uint)(ushort)param_1[3];
    if ((*(uint *)(param_1 + 6) & 8) == 0) {
      uVar3 = (int)(short)param_1[2] - ((int)(uint)(ushort)param_1[4] >> 1) & 0xffff;
      uVar5 = (int)(short)param_1[3] - ((int)(uint)(ushort)param_1[5] >> 1) & 0xffff;
    }
    func_02038728((*(unsigned int *)0x0202b0d8),param_1[1],0,uVar3,uVar5,param_1[4],param_1[5]);
    if ((param_3 != (uint *)0x0) && ((*(uint *)(iVar4 + 0xc) & 1) != 0)) {
      *param_3 = 1 << ((ushort)param_1[1] & 0xff) | *param_3;
    }
  }
  return iVar4;
}
