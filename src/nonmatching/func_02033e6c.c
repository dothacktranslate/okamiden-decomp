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

extern int func_02002ac4();
extern int func_02002af4();
extern int func_02002bb0();
extern int func_02002c10();
extern int func_02002e50();
extern int func_02002ea8();
extern int func_02033e40();
extern int func_020359a4();

undefined4
func_02033e6c(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_150;
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [12];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_110 [4];
  undefined4 local_10c;
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [12];
  undefined4 local_d4 [3];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  int local_98;
  int local_94;
  int local_90;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  int local_20;
  int local_1c;
  int local_18;

  func_02002e50(*(undefined4 *)(param_2 + 0x30),param_2 + 0xc,param_2,auStack_110);
  func_02002e50(*(undefined4 *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(-*(int *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_104);
  func_02002e50(*(undefined4 *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_f8);
  func_02002e50(-*(int *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(*(undefined4 *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_ec);
  func_02002e50(-*(int *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_e0);
  local_d4[2] = *(undefined4 *)(param_2 + 0x14);
  local_d4[1] = *(undefined4 *)(param_2 + 0x10);
  local_d4[0] = *(undefined4 *)(param_2 + 0xc);
  func_02002e50(-*(int *)(param_2 + 0x30),param_2 + 0xc,param_2,auStack_110);
  func_02002e50(*(undefined4 *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(*(undefined4 *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_c8);
  func_02002e50(-*(int *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_bc);
  func_02002e50(-*(int *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(-*(int *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_b0);
  func_02002e50(*(undefined4 *)(param_2 + 0x38),param_2 + 0x24,&local_11c,auStack_a4);
  local_90 = -*(int *)(param_2 + 0x14);
  local_98 = -*(int *)(param_2 + 0xc);
  local_94 = -*(int *)(param_2 + 0x10);
  func_02002e50(*(undefined4 *)(param_2 + 0x38),param_2 + 0x24,param_2,auStack_110);
  func_02002e50(*(undefined4 *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(*(undefined4 *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_8c);
  func_02002e50(-*(int *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_80);
  func_02002e50(-*(int *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(-*(int *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_74);
  func_02002e50(*(undefined4 *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_68);
  local_54 = *(undefined4 *)(param_2 + 0x2c);
  local_58 = *(undefined4 *)(param_2 + 0x28);
  local_5c = *(undefined4 *)(param_2 + 0x24);
  func_02002e50(-*(int *)(param_2 + 0x38),param_2 + 0x24,param_2,auStack_110);
  func_02002e50(*(undefined4 *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(-*(int *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_50);
  func_02002e50(*(undefined4 *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_44);
  func_02002e50(-*(int *)(param_2 + 0x34),param_2 + 0x18,auStack_110,&local_11c);
  func_02002e50(*(undefined4 *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_38);
  func_02002e50(-*(int *)(param_2 + 0x30),param_2 + 0xc,&local_11c,auStack_2c);
  local_1c = -*(int *)(param_2 + 0x28);
  local_18 = -*(int *)(param_2 + 0x2c);
  local_20 = -*(int *)(param_2 + 0x24);
  func_02002ac4(*param_1,param_1[1],auStack_110);
  local_10c = 0;
  func_02002c10(auStack_110,auStack_110);
  func_02002e50(param_1[2],auStack_110,*param_1,auStack_128);
  func_02002e50(-param_1[2],auStack_110,param_1[1],auStack_134);
  if (param_5 != '\0') {
    func_020359a4(auStack_110,auStack_110);
    func_02002e50(-param_1[2],auStack_110,param_1[1],auStack_140);
    func_02002e50(param_1[2],auStack_110,param_1[1],auStack_14c);
  }
  local_150 = -1;
  if (param_5 == '\0') {
    iVar3 = 0;
    iVar2 = ((unsigned int)0x020341dc);
    do {
      iVar1 = func_02033e40(auStack_134,auStack_128,auStack_104 + iVar3 * 0x3c,&local_11c);
      if ((iVar1 != 0) && (iVar1 = func_02002ea8(auStack_134,&local_11c), iVar1 < iVar2)) {
        *param_3 = local_11c;
        param_3[1] = local_118;
        param_3[2] = local_114;
        iVar2 = iVar1;
        local_150 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  else {
    iVar3 = 0;
    iVar2 = ((unsigned int)0x020341dc);
    do {
      iVar1 = func_02033e40(auStack_134,auStack_128,auStack_104 + iVar3 * 0x3c,&local_11c);
      if (((iVar1 != 0) ||
          (iVar1 = func_02033e40(auStack_140,auStack_14c,auStack_104 + iVar3 * 0x3c,&local_11c),
          iVar1 != 0)) && (iVar1 = func_02002ea8(auStack_134,&local_11c), iVar1 < iVar2)) {
        *param_3 = local_11c;
        param_3[1] = local_118;
        param_3[2] = local_114;
        iVar2 = iVar1;
        local_150 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  if (local_150 == -1) {
    return 0;
  }
  param_3[6] = param_1[2];
  func_02002ac4(param_3,*param_1,param_4);
  iVar2 = func_02002af4(local_d4 + local_150 * 0xf,param_4);
  if (iVar2 < 0) {
    iVar2 = func_02002bb0(param_4);
    param_3[6] = param_3[6] - iVar2;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  func_02002e50(param_3[6],local_d4 + local_150 * 0xf,param_4,param_4);
  param_3[3] = local_d4[local_150 * 0xf];
  param_3[4] = local_d4[local_150 * 0xf + 1];
  param_3[5] = *(undefined4 *)(auStack_c8 + local_150 * 0x3c + -4);
  return 1;
}
