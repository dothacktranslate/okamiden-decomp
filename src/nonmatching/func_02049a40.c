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

extern int func_02019064();
extern int func_02046130();
extern int func_02046414();
extern int func_02046444();
extern int func_020464b0();
extern int func_020465d8();
extern int func_02046654();
extern int func_02046830();
extern int func_02046960();
extern int func_02046bc4();
extern int func_02047550();
extern int func_020479b8();
extern int func_0204995c();
extern int func_02049984();
extern int func_020499ac();
extern int func_020499ec();
extern int func_0204a77c();
extern int func_0204ac2c();

undefined4 func_02049a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_80;
  undefined1 auStack_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [64];
  undefined4 uStack_18;

  uStack_18 = param_4;
  uVar1 = func_020499ac(param_1,&local_80);
  uVar2 = func_020479b8(param_1,local_80 + 2,((unsigned int)0x02049cc0),0);
  iVar3 = func_020464b0(param_1,local_80 + 1);
  if (iVar3 == 0) {
    iVar3 = func_02046444(param_1,local_80 + 1);
    if (iVar3 != 6) {
      uVar1 = func_02047550(param_1,local_80 + 1,((unsigned int)0x02049cc8));
      return uVar1;
    }
    func_02046960(param_1,((unsigned int)0x02049cc4),uVar2);
    uVar2 = func_02046654(param_1,0xffffffff,0);
    func_02046414(param_1,local_80 + 1);
    func_02046130(param_1,uVar1,1);
  }
  else {
    uVar4 = func_020465d8(param_1,local_80 + 1);
    iVar3 = func_0204a77c(uVar1,uVar4,auStack_7c);
    if (iVar3 == 0) {
      func_02046830(param_1);
      return 1;
    }
  }
  iVar3 = func_0204ac2c(uVar1,uVar2,auStack_7c);
  if (iVar3 == 0) {
    uVar1 = func_02047550(param_1,local_80 + 2,((unsigned int)0x02049ccc));
    return uVar1;
  }
  func_02046bc4(param_1,0,2);
  iVar3 = func_02019064(uVar2,0x53);
  if (iVar3 != 0) {
    func_0204995c(param_1,((unsigned int)0x02049cd0),local_6c);
    func_0204995c(param_1,((unsigned int)0x02049cd4),auStack_58);
    func_02049984(param_1,((unsigned int)0x02049cd8),local_60);
    func_02049984(param_1,((unsigned int)0x02049cdc),local_5c);
    func_0204995c(param_1,((unsigned int)0x02049ce0),local_70);
  }
  iVar3 = func_02019064(uVar2,0x6c);
  if (iVar3 != 0) {
    func_02049984(param_1,((unsigned int)0x02049ce4),local_68);
  }
  iVar3 = func_02019064(uVar2,0x75);
  if (iVar3 != 0) {
    func_02049984(param_1,((unsigned int)0x02049ce8),local_64);
  }
  iVar3 = func_02019064(uVar2,0x6e);
  if (iVar3 != 0) {
    func_0204995c(param_1,((unsigned int)0x02049cec),local_78);
    func_0204995c(param_1,((unsigned int)0x02049cf0),local_74);
  }
  iVar3 = func_02019064(uVar2,0x4c);
  if (iVar3 != 0) {
    func_020499ec(param_1,uVar1,((unsigned int)0x02049cf4));
  }
  iVar3 = func_02019064(uVar2,0x66);
  if (iVar3 != 0) {
    func_020499ec(param_1,uVar1,((unsigned int)0x02049cf8));
  }
  return 1;
}
