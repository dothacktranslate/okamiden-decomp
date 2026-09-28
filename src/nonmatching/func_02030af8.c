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

extern int func_0x01ff9a30();
extern int func_0x01ff9a74();
extern int func_0x01ff9bf0();
extern int func_0x01ff9c94();
extern int func_0x01ff9d2c();

undefined4 *
func_02030af8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  func_0x01ff9d2c(&local_20,param_2,param_1);
  func_0x01ff9d2c(auStack_2c,param_3,param_1);
  func_0x01ff9bf0(auStack_38,&local_20,auStack_2c);
  func_0x01ff9c94(&local_20,auStack_38);
  uVar6 = func_0x01ff9a30(&local_20);
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  bVar5 = 0x19 < (uint)uVar6;
  if ((int)(-(uint)bVar5 - iVar1) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5))) {
    puVar2 = (undefined4 *)*param_4;
    uVar3 = param_1[1];
    *puVar2 = *param_1;
    uVar4 = param_1[2];
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    func_0x01ff9a74(&local_20);
    puVar2 = (undefined4 *)param_4[1];
    *puVar2 = local_20;
    puVar2[1] = local_1c;
    puVar2[2] = local_18;
    func_0x01ff9c94(auStack_2c,param_1);
    param_4[2] = 0;
    return param_4;
  }
  return (undefined4 *)0x0;
}
