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
extern int func_02002b30();
extern int func_02002bb0();
extern int func_02002c10();
extern int func_02002e50();
extern int func_02002ea8();
extern int func_02033e40();
extern int func_020359a4();

/* WARNING: Type propagation algorithm not settling */

undefined4
func_020342f4(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            int param_6,char param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_178;
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [12];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [12];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int aiStack_104 [60];

  iVar6 = 0;
  do {
    uVar8 = iVar6 + 1U & 3;
    if (param_6 == 1) {
      iVar1 = uVar8 * 0xc;
      iVar2 = param_2 + iVar1;
      iVar4 = *(int *)(iVar2 + 8);
      iVar3 = *(int *)(iVar2 + 4);
      aiStack_104[iVar6 * 0xf] = *(int *)(param_2 + iVar1);
      aiStack_104[iVar6 * 0xf + 1] = param_3 + iVar3;
      iVar3 = iVar6 * 0xc;
      aiStack_104[iVar6 * 0xf + 2] = iVar4;
      iVar4 = param_2 + iVar3;
      iVar5 = *(int *)(iVar4 + 8);
      iVar7 = *(int *)(iVar4 + 4);
      aiStack_104[iVar6 * 0xf + 3] = *(int *)(param_2 + iVar3);
      aiStack_104[iVar6 * 0xf + 4] = param_3 + iVar7;
      aiStack_104[iVar6 * 0xf + 5] = iVar5;
      aiStack_104[iVar6 * 0xf + 6] = *(int *)(param_2 + iVar3);
      aiStack_104[iVar6 * 0xf + 7] = *(int *)(iVar4 + 4);
      aiStack_104[iVar6 * 0xf + 8] = *(int *)(iVar4 + 8);
      aiStack_104[iVar6 * 0xf + 9] = *(int *)(param_2 + iVar1);
      aiStack_104[iVar6 * 0xf + 10] = *(int *)(iVar2 + 4);
      aiStack_104[iVar6 * 0xf + 0xb] = *(int *)(iVar2 + 8);
    }
    else {
      iVar1 = iVar6 * 0xc;
      iVar7 = param_2 + iVar1;
      iVar2 = *(int *)(iVar7 + 8);
      iVar3 = *(int *)(iVar7 + 4);
      aiStack_104[iVar6 * 0xf] = *(int *)(param_2 + iVar1);
      aiStack_104[iVar6 * 0xf + 1] = param_3 + iVar3;
      aiStack_104[iVar6 * 0xf + 2] = iVar2;
      iVar2 = uVar8 * 0xc;
      iVar3 = param_2 + iVar2;
      iVar4 = *(int *)(iVar3 + 8);
      iVar5 = *(int *)(iVar3 + 4);
      aiStack_104[iVar6 * 0xf + 3] = *(int *)(param_2 + iVar2);
      aiStack_104[iVar6 * 0xf + 4] = param_3 + iVar5;
      aiStack_104[iVar6 * 0xf + 5] = iVar4;
      aiStack_104[iVar6 * 0xf + 6] = *(int *)(param_2 + iVar2);
      aiStack_104[iVar6 * 0xf + 7] = *(int *)(iVar3 + 4);
      aiStack_104[iVar6 * 0xf + 8] = *(int *)(iVar3 + 8);
      aiStack_104[iVar6 * 0xf + 9] = *(int *)(param_2 + iVar1);
      aiStack_104[iVar6 * 0xf + 10] = *(int *)(iVar7 + 4);
      aiStack_104[iVar6 * 0xf + 0xb] = *(int *)(iVar7 + 8);
    }
    func_02002ac4(aiStack_104 + iVar6 * 0xf + 6,aiStack_104 + iVar6 * 0xf + 9,&local_110);
    func_02002c10(&local_110,&local_110);
    func_02002b30(&local_110,param_2 + 0x30,aiStack_104 + iVar6 * 0xf + 0xc);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  func_02002ac4(*param_1,param_1[1],&local_110);
  local_10c = 0;
  func_02002c10(&local_110,&local_110);
  func_02002e50(param_1[2],&local_110,*param_1,auStack_11c);
  func_02002e50(-param_1[2],&local_110,param_1[1],auStack_128);
  if (param_7 != '\0') {
    func_020359a4(&local_110,&local_110);
    func_02002e50(-param_1[2],&local_110,param_1[1],auStack_134);
    func_02002e50(param_1[2],&local_110,param_1[1],auStack_140);
  }
  local_178 = -1;
  if (param_7 == '\0') {
    iVar1 = 0;
    iVar6 = ((unsigned int)0x020345bc);
    do {
      iVar2 = func_02033e40(auStack_128,auStack_11c,aiStack_104 + iVar1 * 0xf,&local_110);
      if ((iVar2 != 0) && (iVar2 = func_02002ea8(auStack_128,&local_110), iVar2 < iVar6)) {
        *param_4 = local_110;
        param_4[1] = local_10c;
        param_4[2] = local_108;
        iVar6 = iVar2;
        local_178 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  else {
    iVar1 = 0;
    iVar6 = ((unsigned int)0x020345bc);
    do {
      iVar2 = func_02033e40(auStack_128,auStack_11c,aiStack_104 + iVar1 * 0xf,&local_110);
      if (((iVar2 != 0) ||
          (iVar2 = func_02033e40(auStack_134,auStack_140,aiStack_104 + iVar1 * 0xf,&local_110),
          iVar2 != 0)) && (iVar2 = func_02002ea8(auStack_128,&local_110), iVar2 < iVar6)) {
        *param_4 = local_110;
        param_4[1] = local_10c;
        param_4[2] = local_108;
        iVar6 = iVar2;
        local_178 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  if (local_178 == -1) {
    return 0;
  }
  param_4[6] = param_1[2];
  func_02002ac4(param_4,*param_1,param_5);
  iVar6 = func_02002af4(aiStack_104 + local_178 * 0xf + 0xc,param_5);
  if (iVar6 < 0) {
    iVar6 = func_02002bb0(param_5);
    param_4[6] = param_4[6] - iVar6;
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  func_02002e50(param_4[6],aiStack_104 + local_178 * 0xf + 0xc,param_5,param_5);
  param_4[3] = aiStack_104[local_178 * 0xf + 0xc];
  param_4[4] = aiStack_104[local_178 * 0xf + 0xd];
  param_4[5] = aiStack_104[local_178 * 0xf + 0xe];
  return 1;
}
