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

extern int func_02003530();
extern int func_02005ae0();
extern int func_02005fd8();
extern int func_020098e4();
extern int func_02032bcc();
extern int func_02038b2c();
extern int func_02038ba0();
extern int func_0203933c();
extern int func_02063b98();
extern int func_02063f00();

int func_02038f34(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;

  if ((*(unsigned int *)0x02039050) == 0) {
    func_02005ae0(((unsigned int)0x02039054));
    func_020098e4(0,0x6800000,0xa4000);
    func_02005fd8();
    func_020098e4(0xc0,0x7000000,0x400);
    func_020098e4(0xc0,((unsigned int)0x02039058),0x400);
    func_020098e4(0,0x5000000,0x400);
    func_020098e4(0,((unsigned int)0x0203905c),0x400);
    func_02003530(param_1);
    if (param_2 < 0x80) {
      param_2 = 0x80;
    }
    if (param_3 == 0) {
      param_3 = 1;
    }
    iVar1 = func_02038ba0(0x1c,param_2,4);
    iVar2 = func_02063b98(param_4);
    iVar3 = func_02063f00(param_4);
    iVar10 = param_3 * 0x28 + 0x38;
    iVar4 = iVar10 + param_3 * 8;
    iVar9 = iVar4 + 0x800;
    iVar5 = iVar9 + iVar1;
    iVar6 = iVar5 + iVar2;
    iVar7 = func_02032bcc(iVar6 + iVar3,4,((unsigned int)0x02039060));
    if (iVar7 != 0) {
      uVar8 = func_02038b2c((*(unsigned int *)0x02039064),iVar9 + iVar7,iVar1,0x1c,4,0);
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar1 = func_0203933c(iVar7,uVar8,iVar4 + iVar7,param_3,iVar7 + 0x38,iVar10 + iVar7,
                             iVar5 + iVar7,iVar2,iVar6 + iVar7,iVar3);
      }
      (*(unsigned int *)0x02039050) = iVar1;
      return iVar1;
    }
  }
  return 0;
}
