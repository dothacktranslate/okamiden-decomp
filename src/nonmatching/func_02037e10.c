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

extern int func_02006e04();
extern int func_020070b8();
extern int func_02008ea4();
extern int func_02035924();
extern int func_02065458();
extern int func_02065d84();
extern int func_02066950();
extern int func_02066c7c();

undefined4 *
func_02037e10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar5 = 0;
  *param_1 = ((unsigned int)0x02037ef0);
  param_1[1] = param_2;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  func_02035924();
  *param_1 = ((unsigned int)0x02037ef4);
  param_1[6] = param_3;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  func_02065458(param_1 + 7,param_4,param_3,0);
  func_02066950(param_1[6]);
  func_02066c7c(0x12,param_1[6]);
  param_1[0x62] = param_5;
  param_1[99] = param_6;
  uVar2 = 0;
  do {
    param_1[uVar5 + 0x165] = 0xffffffff;
    iVar4 = uVar5 * 2;
    uVar5 = uVar5 + 1;
    *(undefined2 *)((int)param_1 + iVar4 + 0x5d4) = 0;
    iVar4 = ((unsigned int)0x02037ef8);
  } while (uVar5 < 0x10);
  *(undefined4 *)((int)param_1 + ((unsigned int)0x02037ef8)) = 0;
  do {
    iVar3 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)((int)param_1 + iVar4 + 4 + iVar3) = 0;
  } while (uVar2 < 6);
  uVar1 = func_02065d84(param_1[6]);
  iVar4 = ((unsigned int)0x02037efc);
  *(undefined4 *)((int)param_1 + ((unsigned int)0x02037efc)) = uVar1;
  func_02008ea4(param_1 + 0x5f);
  func_02006e04(param_1 + 0x2f,((unsigned int)0x02037f00),param_1,(int)param_1 + iVar4 + -100,0x400,0x13);
  func_020070b8(param_1 + 0x2f);
  return param_1;
}
