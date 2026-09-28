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

extern int func_0x01ff99b4();
extern int func_0x01ff99c8();
extern int func_0x01ff9a0c();
extern int func_0x01ff9a30();
extern int func_0x01ff9bc4();
extern int func_0x01ff9c94();
extern int func_0x01ff9cac();
extern int func_0x01ff9d2c();
extern int func_0x01ff9d74();

undefined4 func_02030cbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];

  puVar5 = (undefined4 *)param_1[1];
  func_0x01ff99c8(auStack_20,*puVar5,puVar5[1],puVar5[2]);
  func_0x01ff99b4(auStack_2c);
  func_0x01ff99b4(auStack_38);
  uVar6 = func_0x01ff9a30(param_3);
  if ((int)((ulonglong)uVar6 >> 0x20) < (int)(uint)((uint)uVar6 < 0x19)) {
    param_1 = (undefined4 *)*param_1;
    func_0x01ff9a0c(auStack_2c,*param_1,param_1[1],param_1[2]);
    func_0x01ff9d2c(auStack_44,param_2,auStack_2c);
    func_0x01ff9c94(auStack_2c,auStack_44);
    iVar3 = func_0x01ff9bc4(auStack_20,auStack_2c);
    func_0x01ff9d74(auStack_50,auStack_20,-iVar3);
    func_0x01ff9c94(auStack_38,auStack_50);
    func_0x01ff9cac(auStack_5c,param_2,auStack_38);
    func_0x01ff9c94(param_4,auStack_5c);
    return 1;
  }
  lVar7 = func_0x01ff9bc4(auStack_20,param_3);
  lVar1 = lVar7;
  if (lVar7 < 0) {
    lVar1 = CONCAT44(-(uint)((int)lVar7 != 0) - (int)((ulonglong)lVar7 >> 0x20),-(int)lVar7);
  }
  if ((int)(uint)((uint)lVar1 < 5) <= (int)((ulonglong)lVar1 >> 0x20)) {
    if (param_4 != 0) {
      param_1 = (undefined4 *)*param_1;
      func_0x01ff9a0c(auStack_2c,*param_1,param_1[1],param_1[2]);
      func_0x01ff9d2c(auStack_68,param_2,auStack_2c);
      func_0x01ff9c94(auStack_2c,auStack_68);
      uVar6 = func_0x01ff9bc4(auStack_20,auStack_2c);
      piVar2 = ((unsigned int)0x02030e2c);
      iVar3 = (int)uVar6;
      iVar4 = iVar3 * -0x1000;
      if (lVar7 != 0) {
        (*(unsigned int *)0x02030e2c) = iVar4;
        piVar2[1] = (-(uint)(iVar3 != 0) - (int)((ulonglong)uVar6 >> 0x20)) * 0x1000 |
                    (uint)-iVar3 >> 0x14;
        *(longlong *)(piVar2 + 2) = lVar7;
        do {
        } while (((uint)*(ushort *)(piVar2 + -4) & (uint)piVar2 >> 0xb) != 0);
        do {
        } while (((uint)(*(unsigned int *)0x02030e30) & (uint)((unsigned int)0x02030e30) >> 0xb) != 0);
        iVar4 = (*(unsigned int *)0x02030e34);
      }
      func_0x01ff9d74(auStack_74,param_3,iVar4);
      func_0x01ff9c94(auStack_38,auStack_74);
      func_0x01ff9cac(auStack_80,param_2,auStack_38);
      func_0x01ff9c94(param_4,auStack_80);
    }
    return 1;
  }
  return 0;
}
