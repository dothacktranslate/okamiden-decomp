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

extern int func_0201e9b4();
extern int func_020300ac();
extern int func_0203011c();
extern int func_02030144();
extern int func_02030454();
extern int func_0x01ff9a30();
extern int func_0x01ff9bc4();
extern int func_0x01ff9bf0();
extern int func_0x01ff9d2c();

undefined4
func_02031904(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];

  uVar6 = func_0201e9b4(param_3,param_3 >> 0x1f,param_3,param_3 >> 0x1f);
  lVar7 = func_02030454((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xc);
  lVar7 = lVar7 + CONCAT44(param_7,param_6);
  uVar4 = (uint)lVar7;
  iVar3 = (int)((ulonglong)lVar7 >> 0x20);
  func_0x01ff9d2c(auStack_34,param_5,param_1);
  func_020300ac(auStack_28,auStack_34);
  func_0x01ff9bf0(auStack_40,auStack_28,param_4);
  uVar6 = func_0x01ff9a30(auStack_40);
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  bVar5 = (uint)uVar6 < uVar4;
  if ((int)((iVar2 - iVar3) - (uint)bVar5) < 0 ==
      (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar5))) {
    return 0;
  }
  uVar6 = func_0x01ff9a30(auStack_28);
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  bVar5 = (uint)uVar6 < uVar4;
  if ((int)((iVar2 - iVar3) - (uint)bVar5) < 0 ==
      (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar5))) {
    uVar1 = func_0203011c(auStack_28);
    uVar6 = func_0x01ff9bc4(param_4,uVar1);
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    bVar5 = (int)uVar6 != 0;
    if ((int)(-(uint)bVar5 - iVar2) < 0 == (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar5))) {
      return 0;
    }
  }
  func_0x01ff9d2c(auStack_4c,param_5,param_2);
  func_02030144(auStack_28,auStack_4c);
  uVar6 = func_0x01ff9a30(auStack_28);
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  bVar5 = (uint)uVar6 < uVar4;
  if ((int)((iVar2 - iVar3) - (uint)bVar5) < 0 ==
      (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar5))) {
    uVar1 = func_0203011c(auStack_28);
    func_0x01ff9bc4(param_4,uVar1);
    if (-1 < extraout_r1) {
      return 0;
    }
  }
  return 1;
}
