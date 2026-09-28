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

extern int func_02001488();
extern int func_02001f6c();
extern int func_02002bb0();
extern int func_020038e8();
extern int func_020098cc();
extern int func_0205bdf4();
extern int func_0205c0d4();
extern int func_0205c108();
extern int func_0205df8c();
extern int func_0205e0c0();

void func_0205d0ec(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  undefined1 *puVar10;
  uint local_f0;
  uint local_ec;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_28;

  puVar3 = ((unsigned int)0x0205d3b0);
  puVar2 = ((unsigned int)0x0205d3ac);
  iVar8 = 2;
  if ((param_1[2] & 0x200U) != 0) {
    if (param_2 == 0x40 || param_2 == 0x60) {
      iVar8 = 3;
    }
    if (param_2 == 0x20 || param_2 == 0x60) {
      iVar8 = iVar8 + 1;
    }
    *param_1 = *param_1 + iVar8;
    return;
  }
  uStack_28 = param_4;
  if (((param_2 == 0x40) || (param_2 == 0x60)) && (iVar8 = 3, (param_1[2] & 0x100U) == 0)) {
    if (param_2 == 0x40) {
      bVar1 = *(byte *)(*param_1 + 2);
    }
    else {
      bVar1 = *(byte *)(*param_1 + 3);
    }
    local_ec = (uint)bVar1;
    func_0205e0c0(0x14,&local_ec,1);
  }
  if (param_1[10] == 0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = *(char *)((int)param_1 + 0x93);
  }
  if (cVar9 == '\x01') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[10])(param_1);
    if (param_1[10] != 0) {
      cVar9 = *(char *)((int)param_1 + 0x93);
    }
    if (param_1[10] == 0) {
      cVar9 = '\0';
    }
    uVar7 = param_1[2] & 0x40;
  }
  else {
    uVar7 = 0;
  }
  if ((param_1[2] & 0x100U) != 0 || uVar7 != 0) goto LAB_0205d328;
  func_0205df8c();
  puVar4 = ((unsigned int)0x0205d3b8);
  (*(unsigned int *)0x0205d3b8) = ((unsigned int)0x0205d3b4);
  *puVar4 = 0;
  *puVar4 = 0;
  do {
    iVar5 = func_020038e8(auStack_68);
  } while (iVar5 != 0);
  if ((*(uint *)(((unsigned int)0x0205d3bc) + 0xfc) & 1) == 0) {
    if ((*(uint *)(((unsigned int)0x0205d3bc) + 0xfc) & 2) != 0) {
      puVar10 = auStack_e8;
      uVar6 = ((unsigned int)0x0205d3c0);
      goto LAB_0205d240;
    }
  }
  else {
    uVar6 = func_0205c0d4();
    puVar10 = auStack_a8;
LAB_0205d240:
    func_02001488(uVar6,puVar10);
    func_02001f6c(auStack_68,puVar10,auStack_68);
  }
  *puVar2 = local_38;
  puVar2[1] = local_34;
  puVar2[2] = local_30;
  uVar6 = func_02002bb0(auStack_68);
  *puVar3 = uVar6;
  uVar6 = func_02002bb0(auStack_58);
  puVar3[1] = uVar6;
  uVar6 = func_02002bb0(auStack_48);
  iVar5 = ((unsigned int)0x0205d3bc);
  puVar3[2] = uVar6;
  uVar6 = ((unsigned int)0x0205d3c8);
  puVar2 = ((unsigned int)0x0205d3b8);
  if ((*(uint *)(iVar5 + 0xfc) & 1) == 0) {
    if ((*(uint *)(iVar5 + 0xfc) & 2) == 0) {
      func_020098cc(((unsigned int)0x0205d3d4),((unsigned int)0x0205d3b8),0x48);
      goto LAB_0205d328;
    }
    (*(unsigned int *)0x0205d3b8) = ((unsigned int)0x0205d3c4);
    func_020098cc(uVar6,puVar2,8);
    uVar6 = func_0205bdf4();
  }
  else {
    (*(unsigned int *)0x0205d3b8) = ((unsigned int)0x0205d3c4);
    func_020098cc(uVar6,puVar2,8);
    uVar6 = func_0205c108();
  }
  func_020098cc(uVar6,puVar2,0x30);
  uVar6 = ((unsigned int)0x0205d3d0);
  *puVar2 = ((unsigned int)0x0205d3cc);
  func_020098cc(uVar6,puVar2,0x3c);
LAB_0205d328:
  if (cVar9 == '\x03') {
    param_1[2] = param_1[2] & 0xffffffbf;
    (*(code *)param_1[10])(param_1);
    uVar7 = param_1[2] & 0x40;
  }
  else {
    uVar7 = 0;
  }
  if (((param_2 == 0x20) || (param_2 == 0x60)) &&
     ((iVar8 = iVar8 + 1, uVar7 == 0 && ((param_1[2] & 0x100U) == 0)))) {
    local_f0 = (uint)*(byte *)(*param_1 + 2);
    func_0205e0c0(0x13,&local_f0,1);
  }
  *param_1 = *param_1 + iVar8;
  return;
}
