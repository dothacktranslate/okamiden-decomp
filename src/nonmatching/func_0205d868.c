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

extern int func_0205e0c0();
extern int func_0205e19c();

/* WARNING: Type propagation algorithm not settling */

void func_0205d868(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54 [3];
  int local_48;
  undefined4 local_44;
  undefined1 auStack_40 [36];
  undefined4 uStack_1c;

  if (((param_1[2] & 0x200U) != 0) || ((param_1[2] & 1U) == 0)) goto LAB_0205db90;
  uVar2 = *(uint *)(param_1[0x2c] + 0x10);
  uStack_1c = param_4;
  if ((uVar2 & 0xc0000000) != 0x80000000) {
    *(uint *)(param_1[0x2c] + 0x10) = uVar2 & 0x3fffffff;
    uVar4 = ((unsigned int)0x0205dba8);
    iVar6 = ((unsigned int)0x0205dba4);
    *(uint *)(param_1[0x2c] + 0x10) = *(uint *)(param_1[0x2c] + 0x10) | 0x80000000;
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_1[0x2c] + 0x10);
    func_0205e0c0(*(undefined4 *)(iVar6 + 8),uVar4,1);
  }
  local_54[1] = 3;
  func_0205e0c0(0x10,local_54 + 1,1);
  if (param_1[0xf] == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (char)param_1[0x26];
  }
  if (cVar8 == '\x01') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0xf])(param_1);
    if (param_1[0xf] != 0) {
      cVar8 = (char)param_1[0x26];
    }
    if (param_1[0xf] == 0) {
      cVar8 = '\0';
    }
    uVar2 = param_1[2] & 0x40;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    uVar7 = (uint)*(ushort *)(param_1[0x2c] + 0x2e);
    uVar2 = (uint)*(ushort *)(param_1[0x2c] + 0x2c);
    local_48 = uVar7 * -0x8000;
    local_54[2] = uVar2 << 0xf;
    local_44 = 0x10000;
    func_0205e0c0(0x1b,local_54 + 2,3);
    local_54[0] = ((int)(uVar7 << 0x13) >> 0x10) << 0x10 | (int)(uVar2 << 0x13) >> 0x10 & 0xffffU;
    func_0205e0c0(0x22,local_54,1);
  }
  if (cVar8 == '\x02') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0xf])(param_1);
    if (param_1[0xf] != 0) {
      cVar8 = (char)param_1[0x26];
    }
    if (param_1[0xf] == 0) {
      cVar8 = '\0';
    }
    uVar2 = param_1[2] & 0x40;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    iVar6 = param_1[0x36];
    if (iVar6 == 0) {
LAB_0205da54:
      iVar6 = 0;
    }
    else {
      iVar5 = iVar6 + 4;
      if ((iVar5 == 0) || ((uint)*(byte *)(iVar6 + 5) <= (uint)*(byte *)(*param_1 + 1))) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)((uint)*(ushort *)(iVar5 + (uint)*(ushort *)(iVar6 + 10)) *
                         (uint)*(byte *)(*param_1 + 1) + iVar5 + (uint)*(ushort *)(iVar6 + 10) + 4);
      }
      if (piVar3 == (int *)0x0) goto LAB_0205da54;
      iVar6 = iVar6 + *piVar3;
    }
    uVar1 = *(ushort *)(iVar6 + 0x1e);
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = iVar6 + 0x2c;
      if ((uVar1 & 2) == 0) {
        iVar5 = iVar6 + 0x34;
      }
      if ((uVar1 & 4) == 0) {
        iVar5 = iVar5 + 4;
      }
      if ((uVar1 & 8) == 0) {
        iVar5 = iVar5 + 8;
      }
      func_0205e0c0(0x18,iVar5,0x10);
    }
  }
  if (cVar8 == '\x03') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[0xf])(param_1);
    uVar2 = param_1[2] & 0x40;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    local_58 = 2;
    func_0205e0c0(0x10,&local_58,1);
    func_0205e19c(0,auStack_40);
    local_5c = 3;
    func_0205e0c0(0x10,&local_5c,1);
    if ((*(uint *)(((unsigned int)0x0205dbac) + 0xfc) & 1) == 0) {
      uVar4 = ((unsigned int)0x0205dbb0);
      if ((*(uint *)(((unsigned int)0x0205dbac) + 0xfc) & 2) == 0) {
        func_0205e0c0(0x1a,auStack_40,9);
        goto LAB_0205db78;
      }
    }
    else {
      func_0205e0c0(0x1a,((unsigned int)0x0205dbb0),9);
      uVar4 = ((unsigned int)0x0205dbb4);
    }
    func_0205e0c0(0x1a,uVar4,9);
    func_0205e0c0(0x1a,auStack_40,9);
  }
LAB_0205db78:
  local_60 = 2;
  func_0205e0c0(0x10,&local_60,1);
LAB_0205db90:
  *param_1 = *param_1 + 3;
  return;
}
