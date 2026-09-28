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

extern int func_020201f8();
extern int func_0202027c();
extern int func_0202046c();
extern int func_02020488();
extern int func_020210cc();
extern int func_0202114c();
extern int func_0202158c();
extern int func_020215c4();

int func_020211ac(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [21];

  local_ac = *param_2;
  local_a8 = param_2[1];
  puVar6 = local_78;
  local_a4 = param_2[2];
  local_a0 = param_2[3];
  puVar7 = param_1 + 7;
  local_9c = param_2[4];
  iVar5 = 5;
  local_98 = param_2[5];
  local_94 = *param_1;
  local_90 = param_1[1];
  local_8c = param_1[2];
  local_88 = param_1[3];
  local_84 = param_1[4];
  local_80 = param_1[5];
  local_7c = param_1[6];
  do {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    puVar7 = puVar7 + 4;
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6 = puVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *puVar6 = *puVar7;
  uVar1 = func_0202046c(&local_ac);
  do {
    switch(uVar1) {
    case 0:
      break;
    case 1:
    default:
switchD_0202126c_default:
      func_0202158c();
      return local_a4;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      local_b8 = *(undefined4 *)(local_a4 + 1);
      uVar1 = func_0202027c(local_a4 + 5,auStack_b4);
      func_020201f8(uVar1,auStack_b0);
      iVar5 = func_020215c4(*param_1,local_b8,param_3);
      if (iVar5 != 0) {
        return local_a4;
      }
      break;
    case 0xd:
      break;
    case 0xe:
      goto switchD_0202126c_default;
    case 0xf:
      uVar1 = func_0202027c(local_a4 + 1,auStack_c8);
      uVar1 = func_0202027c(uVar1,auStack_c4);
      local_bc = func_020201f8(uVar1,auStack_c0);
      iVar5 = func_020210cc(*param_1,auStack_c8);
      if (iVar5 == 0) {
        func_0202114c(param_1,param_2,auStack_c8,local_a4);
      }
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
    }
    uVar1 = func_02020488(&local_ac);
  } while( true );
}
