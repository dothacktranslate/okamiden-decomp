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

extern int func_020300ac();
extern int func_0203011c();
extern int func_02030144();
extern int func_0x01ff9a30();
extern int func_0x01ff9bc4();
extern int func_0x01ff9bf0();
extern int func_0x01ff9d2c();

undefined4
func_02031848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  undefined4 uStack_18;

  uStack_18 = param_4;
  func_0x01ff9d2c(auStack_38,param_4,param_1);
  func_020300ac(auStack_2c,auStack_38);
  func_0x01ff9bf0(auStack_44,auStack_2c,param_3);
  uVar4 = func_0x01ff9a30(auStack_44);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = (uint)uVar4 < param_5;
  if ((int)((iVar2 - param_6) - (uint)bVar3) < 0 ==
      (SBORROW4(iVar2,param_6) != SBORROW4(iVar2 - param_6,(uint)bVar3))) {
    return 0;
  }
  uVar4 = func_0x01ff9a30(auStack_2c);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = (uint)uVar4 < param_5;
  if ((int)((iVar2 - param_6) - (uint)bVar3) < 0 ==
      (SBORROW4(iVar2,param_6) != SBORROW4(iVar2 - param_6,(uint)bVar3))) {
    uVar1 = func_0203011c(auStack_2c);
    uVar4 = func_0x01ff9bc4(param_3,uVar1);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    bVar3 = (int)uVar4 != 0;
    if ((int)(-(uint)bVar3 - iVar2) < 0 == (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar3))) {
      return 0;
    }
  }
  func_0x01ff9d2c(auStack_50,param_4,param_2);
  func_02030144(auStack_2c,auStack_50);
  uVar4 = func_0x01ff9a30(auStack_2c);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  bVar3 = (uint)uVar4 < param_5;
  if ((int)((iVar2 - param_6) - (uint)bVar3) < 0 ==
      (SBORROW4(iVar2,param_6) != SBORROW4(iVar2 - param_6,(uint)bVar3))) {
    uVar1 = func_0203011c(auStack_2c);
    func_0x01ff9bc4(param_3,uVar1);
    if (-1 < extraout_r1) {
      return 0;
    }
  }
  return 1;
}
