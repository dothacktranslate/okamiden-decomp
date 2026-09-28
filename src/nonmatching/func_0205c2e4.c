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

extern int func_020028c0();
extern int func_02002b30();
extern int func_02002c10();
extern int func_020098b4();
extern int func_020098e4();
extern int func_0205c274();

undefined4 func_0205c2e4(uint *param_1,int param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  uint uStack_80;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [12];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;

  if (param_2 == 0) {
    return 0;
  }
  uStack_28 = param_4;
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(byte *)(param_2 + 0x19) <= param_3) {
      return 0;
    }
    uVar1 = *(ushort *)(param_2 + param_3 * 2 + 0x1a);
    if ((uVar1 & 0x300) != 0x100) {
      return 0;
    }
    if (*(code **)(param_2 + 0xc) != (code *)0x0) {
      (**(code **)(param_2 + 0xc))(param_1,param_2,uVar1 & 0xff);
      return 1;
    }
    return 0;
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar7 = 0;
  iVar2 = param_2;
  iVar4 = param_2;
  do {
    if ((param_3 < *(byte *)(iVar4 + 0x19)) &&
       ((*(ushort *)(iVar4 + param_3 * 2 + 0x1a) & 0x300) == 0x100)) {
      iVar2 = *(int *)(iVar4 + 4);
      if (iVar2 < 0x1001) {
        if (0 < iVar2) {
          iVar6 = iVar6 + iVar2;
        }
      }
      else {
        iVar6 = iVar6 + 0x1000;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar4;
    }
    iVar4 = *(int *)(iVar4 + 0x10);
  } while (iVar4 != 0);
  if (iVar6 == 0) {
    return 0;
  }
  if (iVar5 != 1) {
    func_020098e4(0,param_1,0x58);
    *param_1 = 0xffffffff;
    do {
      if ((((param_3 < *(byte *)(param_2 + 0x19)) &&
           (uVar1 = *(ushort *)(param_2 + param_3 * 2 + 0x1a), (uVar1 & 0x300) == 0x100)) &&
          (0 < *(int *)(param_2 + 4))) && (*(code **)(param_2 + 0xc) != (code *)0x0)) {
        (**(code **)(param_2 + 0xc))(&uStack_80,param_2,uVar1 & 0xff);
        if (iVar7 == 0) {
          func_020098b4(&iStack_58,auStack_8c,0xc);
          func_020098b4(auStack_40,auStack_98,0xc);
        }
        if (iVar6 == 0x1000) {
          iVar2 = *(int *)(param_2 + 4);
        }
        else {
          iVar2 = func_020028c0(*(undefined4 *)(param_2 + 4),iVar6);
        }
        func_0205c274(param_1 + 1,auStack_7c,iVar2,uStack_80 & 1);
        func_0205c274(param_1 + 4,auStack_70,iVar2,uStack_80 & 8);
        func_0205c274(param_1 + 7,auStack_64,iVar2,uStack_80 & 0x10);
        if ((uStack_80 & 4) == 0) {
          param_1[0x13] =
               param_1[0x13] +
               ((uint)((longlong)iVar2 * (longlong)iStack_34) >> 0xc |
               (int)((ulonglong)((longlong)iVar2 * (longlong)iStack_34) >> 0x20) << 0x14);
          param_1[0x14] =
               param_1[0x14] +
               ((uint)((longlong)iVar2 * (longlong)iStack_30) >> 0xc |
               (int)((ulonglong)((longlong)iVar2 * (longlong)iStack_30) >> 0x20) << 0x14);
          param_1[0x15] =
               param_1[0x15] +
               ((uint)((longlong)iVar2 * (longlong)iStack_2c) >> 0xc |
               (int)((ulonglong)((longlong)iVar2 * (longlong)iStack_2c) >> 0x20) << 0x14);
        }
        if ((uStack_80 & 2) == 0) {
          param_1[10] = param_1[10] + (iVar2 * iStack_58 >> 0xc);
          param_1[0xb] = param_1[0xb] + (iVar2 * iStack_54 >> 0xc);
          param_1[0xc] = param_1[0xc] + (iVar2 * iStack_50 >> 0xc);
          param_1[0xd] = param_1[0xd] + (iVar2 * iStack_4c >> 0xc);
          param_1[0xe] = param_1[0xe] + (iVar2 * iStack_48 >> 0xc);
          param_1[0xf] = param_1[0xf] + (iVar2 * iStack_44 >> 0xc);
        }
        else {
          param_1[10] = param_1[10] + iVar2;
          param_1[0xe] = param_1[0xe] + iVar2;
        }
        *param_1 = *param_1 & uStack_80;
      }
      param_2 = *(int *)(param_2 + 0x10);
      iVar7 = iVar7 + 1;
    } while (param_2 != 0);
    func_02002b30(param_1 + 10,param_1 + 0xd,param_1 + 0x10);
    uVar3 = param_1[10];
    bVar8 = uVar3 == 0;
    if (bVar8) {
      uVar3 = param_1[0xb];
    }
    bVar9 = bVar8 && uVar3 == 0;
    if (bVar8 && uVar3 == 0) {
      bVar9 = param_1[0xc] == 0;
    }
    if (bVar9) {
      func_020098b4(auStack_8c,param_1 + 10,0xc);
    }
    else {
      func_02002c10(param_1 + 10,param_1 + 10);
    }
    uVar3 = param_1[0x10];
    bVar8 = uVar3 == 0;
    if (bVar8) {
      uVar3 = param_1[0x11];
    }
    bVar9 = bVar8 && uVar3 == 0;
    if (bVar8 && uVar3 == 0) {
      bVar9 = param_1[0x12] == 0;
    }
    if (bVar9) {
      func_020098b4(auStack_98,param_1 + 0x10,0xc);
    }
    else {
      func_02002c10(param_1 + 0x10,param_1 + 0x10);
    }
    func_02002b30(param_1 + 0x10,param_1 + 10,param_1 + 0xd);
    return 1;
  }
  if (*(code **)(iVar2 + 0xc) != (code *)0x0) {
    (**(code **)(iVar2 + 0xc))(param_1,iVar2,*(ushort *)(iVar2 + param_3 * 2 + 0x1a) & 0xff);
    return 1;
  }
  return 0;
}
