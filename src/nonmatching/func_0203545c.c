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

extern int func_0200316c();
extern int func_02003208();
extern int func_02003378();
extern int func_020033c0();
extern int func_02006370();
extern int func_0200653c();
extern int func_02007898();
extern int func_02007a50();
extern int func_02007a64();
extern int func_02007c24();
extern int func_02007c90();
extern int func_02007f00();
extern int func_0200829c();
extern int func_020102d4();
extern int func_020103bc();
extern int func_020109bc();
extern int func_0201ebe0();
extern int func_02032b18();
extern int func_02032c48();
extern int func_02032cec();
extern int func_02032ddc();
extern int func_02034848();
extern int func_020353b8();
extern int func_020362fc();
extern int func_02036478();
extern int func_02036a08();
extern int func_02036c3c();
extern int func_02037280();
extern int func_02038054();
extern int func_02038524();
extern int func_02038f34();
extern int func_0203d564();
extern int func_02040d60();
extern int func_020414cc();
extern int func_020445f0();
extern int func_020450f4();
extern int func_02045c50();
extern int func_0x01ffce48();

uint * func_0203545c(uint *param_1)

{
  undefined2 uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];

  func_02007c90();
  func_02007898();
  func_0200316c();
  puVar2 = ((unsigned int)0x02035680);
  (*(unsigned int *)0x02035680) = (ushort)((unsigned int)0x02035688) | (*(unsigned int *)0x02035680) & (ushort)((unsigned int)0x02035684);
  func_02003208();
  func_0200829c();
  func_020033c0();
  (*(unsigned int *)0x0203568c) = ((unsigned int)0x02035690) & (*(unsigned int *)0x0203568c);
  puVar2[-0x7e] = 1;
  func_02003378(0);
  iVar3 = func_02007a64(0);
  uVar4 = func_02007a50(0);
  iVar3 = (uVar4 & 0xffffffe0) - (iVar3 + 0x1fU & 0xffffffe0);
  uVar5 = func_02007c24(0,iVar3,0x20);
  iVar3 = func_02032b18(uVar5,iVar3);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  puVar6 = (uint *)func_020353b8();
  if (puVar6 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if ((*param_1 & 1) != 0) {
    *puVar6 = *puVar6 | 1;
  }
  iVar3 = func_02038f34(param_1[4],(short)param_1[5],*(undefined2 *)((int)param_1 + 0x16),param_1[6])
  ;
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_02034848(param_1[2],param_1[3]);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_02036a08((short)param_1[1]);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_02038524((short)param_1[1]);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_02038054(*(undefined2 *)((int)param_1 + 6));
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_02036c3c(param_1[7]);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_020450f4(param_1[8],param_1[9]);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_020445f0((short)param_1[0x11],*(undefined2 *)((int)param_1 + 0x46));
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  if ((*param_1 & 0x10) != 0) {
    iVar3 = func_02040d60(param_1[0xd]);
    if (iVar3 == 0) {
      return (uint *)0x0;
    }
    iVar3 = func_020414cc(param_1[10],param_1[0xb],param_1[0xe]);
    if (iVar3 == 0) {
      return (uint *)0x0;
    }
    iVar3 = func_0203d564(param_1[0xf]);
    if (iVar3 == 0) {
      return (uint *)0x0;
    }
    func_0x01ffce48(param_1[0xc]);
  }
  if (((*param_1 & 0x20) != 0) && (iVar3 = func_02045c50(param_1[0x10]), iVar3 == 0)) {
    return (uint *)0x0;
  }
  iVar3 = func_02032ddc((*param_1 & 0x80) != 0,param_1[0x12]);
  if (iVar3 == 0) {
    return (uint *)0x0;
  }
  iVar3 = func_02037280(param_1[0x14],param_1[0x15]);
  if (iVar3 != 0) {
    iVar3 = func_02036478(param_1[0x16]);
    if (iVar3 == 0) {
      return (uint *)0x0;
    }
    func_02032c48();
    func_02032cec((*(unsigned int *)0x02035694),0x7000,0x400);
    func_02007f00();
    func_02006370(1,((unsigned int)0x02035698));
    func_02003378(1);
    func_0200653c(1);
    func_0200653c(0x40000);
    uVar1 = (*(unsigned int *)0x0203569c);
    (*(unsigned int *)0x0203569c) = 1;
    func_020102d4(uVar1);
    func_020103bc(auStack_24,auStack_30);
    uVar5 = func_020109bc(auStack_24,auStack_30);
    func_0201ebe0(uVar5,3);
    func_020362fc();
    return puVar6;
  }
  return (uint *)0x0;
}
