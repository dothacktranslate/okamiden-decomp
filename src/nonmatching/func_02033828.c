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

extern int func_0203237c();
extern int func_020332c4();
extern int func_0x01ff99b4();
extern int func_0x01ff9a0c();

int func_02033828(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_178;
  undefined1 auStack_170 [12];
  undefined1 auStack_164 [12];
  undefined4 local_158;
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [24];
  undefined4 local_130;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [24];
  undefined4 local_108;
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [24];
  undefined4 local_e0;
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [24];
  undefined4 local_90;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [24];
  undefined4 local_68;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [24];
  undefined4 local_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [24];
  int iStack_18;

  uVar2 = (*(unsigned int *)0x02033944);
  iStack_18 = param_4;
  func_0x01ff99b4(auStack_164);
  func_0x01ff99b4(auStack_170);
  func_0x01ff99b4(auStack_154);
  func_0x01ff99b4(auStack_148);
  uVar1 = ((unsigned int)0x02033948);
  local_158 = ((unsigned int)0x02033948);
  func_0x01ff99b4(auStack_12c);
  func_0x01ff99b4(auStack_120);
  local_130 = uVar1;
  func_0x01ff99b4(auStack_104);
  func_0x01ff99b4(auStack_f8);
  local_108 = uVar1;
  func_0x01ff99b4(auStack_dc);
  func_0x01ff99b4(auStack_d0);
  local_e0 = uVar1;
  func_0x01ff99b4(auStack_b4);
  func_0x01ff99b4(auStack_a8);
  local_b8 = uVar1;
  func_0x01ff99b4(auStack_8c);
  func_0x01ff99b4(auStack_80);
  local_90 = uVar1;
  func_0x01ff99b4(auStack_64);
  func_0x01ff99b4(auStack_58);
  local_68 = uVar1;
  func_0x01ff99b4(auStack_3c);
  func_0x01ff99b4(auStack_30);
  local_40 = uVar1;
  iVar5 = 0;
  func_0x01ff9a0c(auStack_164,*param_1,param_1[1],param_1[2]);
  func_0x01ff9a0c(auStack_170,*param_2,param_2[1],param_2[2]);
  local_178 = 0;
  if (0 < param_6) {
    do {
      iVar3 = func_0203237c(uVar2,auStack_164,auStack_170,param_3,&local_158,8,((unsigned int)0x0203394c),
                           *(undefined4 *)(param_5 + local_178 * 4));
      if ((iVar3 != 0) && (iVar4 = 0, 0 < iVar3)) {
        do {
          func_020332c4(param_4,auStack_154 + iVar4 * 0x28 + -4);
          iVar4 = iVar4 + 1;
          param_4 = param_4 + 0x2c;
          iVar5 = iVar5 + 1;
        } while (iVar4 < iVar3);
      }
      local_178 = local_178 + 1;
    } while (local_178 < param_6);
  }
  return iVar5;
}
