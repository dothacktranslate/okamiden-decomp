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

extern int func_02058974();
extern int func_020589bc();

int func_02059aa8(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                undefined2 param_6)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  char *local_20;
  int local_1c;

  uVar1 = func_02058974(param_2,param_6);
  if (uVar1 == ((unsigned int)0x02059bc0)) {
    uVar1 = (uint)*(ushort *)(*param_2 + 2);
  }
  local_20 = (char *)func_020589bc(param_2,uVar1);
  iVar2 = *(int *)(*param_2 + 8);
  local_1c = uVar1 * *(ushort *)(iVar2 + 2) + iVar2 + 8;
  pbVar3 = *(byte **)(*param_2 + 8);
  switch(pbVar3[7]) {
  case 0:
    break;
  case 1:
    goto LAB_02059b48;
  case 2:
LAB_02059b48:
    param_3 = param_3 - (uint)*pbVar3;
    param_4 = param_4 + *local_20;
    goto switchD_02059b14_default;
  case 3:
    goto LAB_02059b5c;
  case 4:
LAB_02059b5c:
    uVar1 = (uint)pbVar3[1];
    param_3 = param_3 - ((int)*local_20 + (uint)(byte)local_20[1]);
LAB_02059b80:
    param_4 = param_4 - uVar1;
    goto switchD_02059b14_default;
  case 5:
    goto LAB_02059b74;
  case 6:
LAB_02059b74:
    uVar1 = (int)*local_20 + (uint)pbVar3[1];
    goto LAB_02059b80;
  case 7:
    break;
  default:
    goto switchD_02059b14_default;
  }
  param_3 = param_3 + *local_20;
switchD_02059b14_default:
  (*(code *)**(undefined4 **)(param_1 + 0x14))(param_1,param_2,param_3,param_4,param_5,&local_20);
  return (int)local_20[2];
}
