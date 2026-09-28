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

extern int func_02000c60();
extern int func_02002ea8();
extern int func_0201e9b4();
extern int func_02035834();
extern int func_0203c7b4();
extern int func_0203c9b0();
extern int func_0205adb8();
extern int func_0205b070();
extern int func_0205ebc0();
extern int func_0205ee50();
extern int func_0205ee90();
extern int func_0205eed0();

undefined4 *
func_0203ce44(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_48;
  int local_44;
  undefined1 auStack_34 [20];
  uint local_20;
  uint local_1c;
  uint local_18;

  func_0205ebc0(param_2,1,0x30);
  func_0205ee90(param_2,(*(uint *)(param_1 + 0x1c) & 0x10) != 0);
  iVar4 = 0;
  func_0205eed0(param_2,0);
  func_0205ee50(param_2,0);
  uVar3 = (uint)*(byte *)(param_2 + 0x17);
  local_44 = 0;
  local_48 = 0;
  if (param_3 != 0) {
    iVar4 = param_3 * 0xc;
  }
  if (param_4 != 0) {
    local_44 = uVar3 * 0x58;
  }
  if (param_5 != 0) {
    local_48 = (uint)*(byte *)(param_2 + 0x18) * 0x38;
  }
  iVar4 = uVar3 * 0x48 + 0x108 + iVar4;
  iVar5 = iVar4 + local_44;
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 4) + 8))
                     (*(int **)(param_1 + 4),local_48 + iVar5,4,param_6);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = ((unsigned int)0x0203d1a0);
    func_0203c7b4();
  }
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  func_0205adb8(puVar1 + 4,param_2);
  puVar1[0x2a] = puVar1 + 0x42;
  if (param_3 != 0) {
    puVar1[0x2b] = puVar1 + uVar3 * 0x12 + 0x42;
    puVar1[0x2c] = param_3;
  }
  if (param_4 != 0) {
    puVar1[0x32] = iVar4 + (int)puVar1;
    puVar1[0x11] = puVar1[0x32];
  }
  if (param_5 != 0) {
    puVar1[0x33] = iVar5 + (int)puVar1;
    puVar1[0x12] = puVar1[0x33];
  }
  iVar4 = 0;
  if (*(char *)(param_2 + 0x17) != '\0') {
    do {
      iVar6 = iVar4 * 0x48;
      *(undefined4 *)(puVar1[0x2a] + iVar6) = 0x32;
      iVar5 = puVar1[0x2a] + iVar6;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      iVar5 = puVar1[0x2a] + iVar6;
      *(undefined4 *)(iVar5 + 0x14) = 0x1000;
      *(undefined4 *)(iVar5 + 0x18) = 0x1000;
      *(undefined4 *)(iVar5 + 0x1c) = 0x1000;
      func_02000c60(puVar1[0x2a] + iVar6 + 0x20);
      iVar4 = iVar4 + 1;
      *(short *)(puVar1[0x2a] + iVar6 + 6) = (short)((unsigned int)0x0203d1a4);
      *(undefined2 *)(puVar1[0x2a] + iVar6 + 4) = 0x1f;
      *(undefined4 *)(puVar1[0x2a] + iVar6 + 0x44) = 0;
    } while (iVar4 < (int)(uint)*(byte *)(param_2 + 0x17));
  }
  if (param_3 == 0) {
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
  }
  else {
    puVar1[0x2c] = param_3;
    iVar4 = 0;
    if (0 < param_3) {
      do {
        iVar5 = iVar4 * 0xc;
        *(undefined4 *)(puVar1[0x2b] + iVar5) = 0;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(puVar1[0x2b] + iVar5 + 4) = 0;
        *(undefined4 *)(puVar1[0x2b] + iVar5 + 8) = 0;
      } while (iVar4 < param_3);
    }
  }
  iVar7 = *(int *)(param_2 + 0x38);
  iVar8 = iVar7 >> 0x1f;
  uVar9 = func_0201e9b4((int)*(short *)(param_2 + 0x2c),(int)*(short *)(param_2 + 0x2c) >> 0x1f,iVar7
                       ,iVar8);
  iVar4 = (int)((ulonglong)uVar9 >> 0x20) + ((unsigned int)0x0203d1a8);
  uVar10 = func_0201e9b4((int)*(short *)(param_2 + 0x2e),(int)*(short *)(param_2 + 0x2e) >> 0x1f,
                        iVar7,iVar8);
  iVar5 = (int)((ulonglong)uVar10 >> 0x20) + ((unsigned int)0x0203d1a8);
  uVar11 = func_0201e9b4((int)*(short *)(param_2 + 0x30),(int)*(short *)(param_2 + 0x30) >> 0x1f,
                        iVar7,iVar8);
  iVar6 = (int)((ulonglong)uVar11 >> 0x20) + ((unsigned int)0x0203d1a8);
  uVar12 = func_0201e9b4((int)*(short *)(param_2 + 0x32),(int)*(short *)(param_2 + 0x32) >> 0x1f,
                        iVar7,iVar8);
  local_20 = (uint)uVar12 + 0x800 >> 0xc |
             ((int)((ulonglong)uVar12 >> 0x20) + ((unsigned int)0x0203d1a8) + (uint)(0xfffff7ff < (uint)uVar12)) *
             0x100000;
  uVar12 = func_0201e9b4((int)*(short *)(param_2 + 0x34),(int)*(short *)(param_2 + 0x34) >> 0x1f,
                        iVar7,iVar8);
  local_1c = (uint)uVar12 + 0x800 >> 0xc |
             ((int)((ulonglong)uVar12 >> 0x20) + ((unsigned int)0x0203d1a8) + (uint)(0xfffff7ff < (uint)uVar12)) *
             0x100000;
  uVar12 = func_0201e9b4((int)*(short *)(param_2 + 0x36),(int)*(short *)(param_2 + 0x36) >> 0x1f,
                        iVar7,iVar8);
  local_18 = (uint)uVar12 + 0x800 >> 0xc |
             ((int)((ulonglong)uVar12 >> 0x20) + ((unsigned int)0x0203d1a8) + (uint)(0xfffff7ff < (uint)uVar12)) *
             0x100000;
  puVar1[0x2d] = (int)(((uint)uVar9 + 0x800 >> 0xc |
                       (iVar4 + (uint)(0xfffff7ff < (uint)uVar9)) * 0x100000) + local_20) >> 1;
  puVar1[0x2e] = (int)(((uint)uVar10 + 0x800 >> 0xc |
                       (iVar5 + (uint)(0xfffff7ff < (uint)uVar10)) * 0x100000) + local_1c) >> 1;
  puVar1[0x2f] = (int)(((uint)uVar11 + 0x800 >> 0xc |
                       (iVar6 + (uint)(0xfffff7ff < (uint)uVar11)) * 0x100000) + local_18) >> 1;
  uVar2 = func_02002ea8(puVar1 + 0x2d,&local_20);
  puVar1[0x30] = uVar2;
  local_20 = puVar1[0x2d];
  local_18 = puVar1[0x2f];
  uVar2 = func_02002ea8(puVar1 + 0x2d,&local_20);
  puVar1[0x31] = uVar2;
  if ((local_44 != 0) || (local_48 != 0)) {
    func_0203c9b0(puVar1);
  }
  iVar4 = 0;
  do {
    iVar5 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)((int)puVar1 + iVar5 + 0xe2) = 0xffff;
  } while (iVar4 < 0x10);
  func_0205b070(puVar1 + 4,((unsigned int)0x0203d1ac));
  puVar1[0xf] = puVar1;
  func_02035834(auStack_34,param_1 + 0xc,param_1 + 0x10,puVar1 + 1);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
  return puVar1;
}
