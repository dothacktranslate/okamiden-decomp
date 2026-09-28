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

extern int func_020168c4();
extern int func_02016958();
extern int func_02016974();
extern int func_0201ab4c();
extern int func_0201ac10();
extern int func_0201ae2c();
extern int func_0201d1ec();
extern int func_0201d2ac();
extern int func_0201d848();
extern int func_0201e2b8();
extern int func_0201ee84();

void func_0201b60c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_70;
  undefined1 auStack_6c [38];
  undefined1 auStack_46 [38];
  undefined4 uStack_20;

  uVar8 = CONCAT44(param_3,param_2);
  uStack_20 = param_4;
  iVar3 = func_02016958(param_2,param_3);
  bVar7 = iVar3 == 0;
  bVar1 = !bVar7;
  func_0201e2b8(0,0,param_2,param_3);
  if (bVar7) {
    *(bool *)param_1 = bVar1;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  iVar3 = func_02016974(param_2,param_3);
  if (2 < iVar3) {
    if (bVar1) {
      uVar8 = func_0201d848(0,0,param_2,param_3);
    }
    uVar8 = func_0201d1ec((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),&local_70);
    uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar4 = (uint)uVar8;
    uVar6 = uVar5 | 0x100000;
    uVar6 = uVar6 & -(uVar6 + (uVar4 != 0));
    iVar3 = func_020168c4((uVar4 & -uVar4) - 1,(uVar6 - 1) + (uint)((uVar4 & -uVar4) != 0),0xffffffff
                         ,uVar6,uVar8);
    func_0201ae2c(auStack_6c,local_70 - (0x35 - iVar3));
    func_0201d2ac(uVar4,uVar5,0x35 - iVar3);
    uVar8 = func_0201ee84();
    func_0201ab4c(auStack_46,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    func_0201ac10(param_1,auStack_46,auStack_6c);
    *(bool *)param_1 = bVar1;
    return;
  }
  *(bool *)param_1 = bVar1;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  iVar3 = func_02016974(param_2,param_3);
  if (iVar3 == 1) {
    uVar2 = 0x4e;
  }
  else {
    uVar2 = 0x49;
  }
  *(undefined1 *)(param_1 + 5) = uVar2;
  return;
}
