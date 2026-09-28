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

extern int func_02002a94();
extern int func_02002ac4();
extern int func_02002c10();
extern int func_0201e9b4();

void func_0203f31c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;

  iVar3 = *(int *)(param_1 + 100);
  iVar1 = (param_3 + 1) * 0xc;
  *(int *)(param_1 + 0x70) = param_3;
  iVar2 = iVar3 + iVar1;
  local_28 = *(undefined4 *)(iVar2 + 8);
  local_2c = *(undefined4 *)(iVar2 + 4);
  local_30 = *(undefined4 *)(iVar3 + iVar1);
  param_3 = param_3 * 0xc;
  iVar1 = iVar3 + param_3;
  local_44 = *(undefined4 *)(iVar1 + 8);
  local_48 = *(undefined4 *)(iVar1 + 4);
  local_4c = *(undefined4 *)(iVar3 + param_3);
  local_60 = *(undefined4 *)(iVar1 + 8);
  local_64 = *(undefined4 *)(iVar1 + 4);
  local_68 = *(undefined4 *)(iVar3 + param_3);
  func_02002ac4(&local_30,&local_4c,&local_24);
  local_84 = local_24;
  local_80 = local_20;
  local_7c = local_1c;
  func_02002c10(&local_84,&local_84);
  iVar2 = local_7c;
  iVar1 = local_80;
  iVar3 = param_2 >> 0x1f;
  local_74 = local_80;
  local_70 = local_7c;
  local_78 = local_84;
  func_0201e9b4(local_84,local_84 >> 0x1f,param_2,iVar3);
  func_0201e9b4(iVar1,iVar1 >> 0x1f,param_2,iVar3);
  func_0201e9b4(iVar2,iVar2 >> 0x1f,param_2,iVar3);
  local_9c = local_74;
  local_a0 = local_78;
  local_98 = local_70;
  func_02002a94(&local_a0,&local_68,&local_94);
  *(undefined4 *)(param_1 + 0x74) = local_94;
  *(undefined4 *)(param_1 + 0x78) = local_90;
  *(undefined4 *)(param_1 + 0x7c) = local_8c;
  return;
}
