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

extern int func_02002964();
extern int func_020029f4();

void func_02061b08(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;

  iVar6 = (uint)*(ushort *)(param_2 + 0x2c) << 0xc;
  iVar1 = (uint)*(ushort *)(param_2 + 0x2e) << 0xc;
  func_020029f4(iVar1,iVar6,(uint)*(ushort *)(param_2 + 0x2c),param_4,param_4);
  sVar3 = *(short *)(param_2 + 0x22);
  *param_1 = (int)sVar3;
  param_1[5] = (int)sVar3;
  iVar5 = func_02002964();
  param_1[1] = -(int)*(short *)(param_2 + 0x20) * iVar5 >> 0xc;
  func_020029f4(iVar6,iVar1);
  sVar3 = *(short *)(param_2 + 0x20);
  sVar4 = *(short *)(param_2 + 0x22);
  uVar2 = *(ushort *)(param_2 + 0x2e);
  param_1[0xc] = (uint)*(ushort *)(param_2 + 0x2c) * (0x1000 - ((int)sVar3 + (int)sVar4)) * 8;
  param_1[0xd] = (uint)uVar2 * (((int)sVar3 - (int)sVar4) + 0x1000) * 8;
  iVar6 = func_02002964();
  param_1[4] = *(short *)(param_2 + 0x20) * iVar6 >> 0xc;
  return;
}
