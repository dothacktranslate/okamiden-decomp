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

extern int func_0201e96c();
extern int func_0201ebe0();
extern int func_02064d30();
extern int func_02064fac();
extern int func_0206718c();
extern int func_02067218();
extern int func_02067608();
extern int func_02067640();
extern int func_02068314();
extern int func_020685ac();
extern int func_020685c4();

undefined4
func_02067244(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_r6;

  iVar4 = func_0206718c(param_1,param_3,param_4);
  if (iVar4 == 0) {
    return 0;
  }
  func_02068314(iVar4,*param_2);
  iVar5 = (**(code **)(iVar4 + 0x16c))(iVar4,*param_2);
  if (iVar5 != 0) {
    lVar3 = (ulonglong)param_6 * (ulonglong)*(ushort *)(iVar4 + 0xcc);
    iVar5 = func_0201e96c((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),1000,0);
    *(int *)(iVar4 + 0x168) = iVar5;
    if ((iVar5 == 0) || (*(char *)(iVar4 + 200) != '\x02')) {
      *(uint *)(iVar4 + 0x118) = *(uint *)(iVar4 + 0x118) & 0xffffffef;
    }
    else {
      *(uint *)(iVar4 + 0x118) = *(uint *)(iVar4 + 0x118) | 0x10;
    }
    *(undefined4 *)(iVar4 + 0x11c) = 4;
    *(uint *)(iVar4 + 0x118) = *(uint *)(iVar4 + 0x118) & 0xffffffdd;
    *(undefined4 *)(iVar4 + 0x120) = 0;
    *(uint *)(iVar4 + 0x118) = *(uint *)(iVar4 + 0x118) & 0xfffffff3;
    *(undefined4 *)(iVar4 + 0x124) = 0;
    *(undefined4 *)(iVar4 + 0x13c) = param_7;
    *(undefined4 *)(iVar4 + 0x140) = param_8;
    *(undefined4 *)(iVar4 + 0x144) = param_9;
    *(undefined4 *)(iVar4 + 0x148) = param_10;
    *(undefined4 *)(iVar4 + 0x14c) = param_5;
    bVar1 = *(byte *)(param_2 + 1);
    *(undefined4 *)(iVar4 + 0x164) = 0;
    *(uint *)(iVar4 + 0x15c) = (uint)bVar1;
    *(undefined4 *)(iVar4 + 0x160) = 0x7f;
    func_020685ac(iVar4 + 0xf0);
    func_020685c4(iVar4 + 0xf0,0x7f00,1);
    cVar2 = *(char *)(iVar4 + 200);
    if (cVar2 == '\0') {
      unaff_r6 = 0;
    }
    else if (cVar2 == '\x01' || cVar2 == '\x02') {
      unaff_r6 = 1;
    }
    uVar7 = (uint)*(byte *)(iVar4 + 0xca);
    if ((*(byte *)((int)param_2 + 7) & 1) != 0) {
      uVar7 = 2;
    }
    if (*(byte *)(iVar4 + 300) < uVar7) {
      uVar7 = (uint)*(byte *)(iVar4 + 300);
    }
    *(uint *)(iVar4 + 0x118) = *(uint *)(iVar4 + 0x118) & 0xffffffbf | (uint)(uVar7 == 1) << 6;
    iVar5 = func_02067608(iVar4,uVar7,iVar4 + 0x12e);
    if (iVar5 != 0) {
      uVar6 = func_0201ebe0(*(int *)(iVar4 + 0x138) * uVar7,*(undefined1 *)(iVar4 + 300));
      iVar5 = func_02064d30(iVar4,unaff_r6,*(undefined4 *)(iVar4 + 0x134),uVar6);
      if (iVar5 != 0) {
        if (uVar7 == 2) {
          func_02064fac(iVar4,0,0);
          func_02064fac(iVar4,1,0x7f);
        }
        return 1;
      }
      func_02067640(iVar4);
      (**(code **)(iVar4 + 0x170))(iVar4);
      func_02067218(iVar4);
      return 0;
    }
    (**(code **)(iVar4 + 0x170))(iVar4);
    func_02067218(iVar4);
    return 0;
  }
  func_02067218(iVar4);
  return 0;
}
