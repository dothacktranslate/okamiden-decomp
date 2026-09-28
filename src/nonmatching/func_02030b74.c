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

extern int func_0x01ff99b4();
extern int func_0x01ff9bc4();
extern int func_0x01ff9bf0();
extern int func_0x01ff9c94();
extern int func_0x01ff9d2c();

undefined4
func_02030b74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];

  func_0x01ff99b4(auStack_20);
  func_0x01ff99b4(auStack_2c);
  func_0x01ff9d2c(auStack_38,param_2,param_1);
  func_0x01ff9c94(auStack_20,auStack_38);
  func_0x01ff9d2c(auStack_44,param_5,param_2);
  func_0x01ff9c94(auStack_2c,auStack_44);
  func_0x01ff9bf0(auStack_50,auStack_20,auStack_2c);
  func_0x01ff9c94(auStack_20,auStack_50);
  func_0x01ff9bc4(param_4,auStack_20);
  if (extraout_r1 < 0) {
    return 1;
  }
  func_0x01ff9d2c(auStack_5c,param_3,param_2);
  func_0x01ff9c94(auStack_20,auStack_5c);
  func_0x01ff9d2c(auStack_68,param_5,param_3);
  func_0x01ff9c94(auStack_2c,auStack_68);
  func_0x01ff9bf0(auStack_74,auStack_20,auStack_2c);
  func_0x01ff9c94(auStack_20,auStack_74);
  func_0x01ff9bc4(param_4,auStack_20);
  if (extraout_r1_00 < 0) {
    return 2;
  }
  func_0x01ff9d2c(auStack_80,param_1,param_3);
  func_0x01ff9c94(auStack_20,auStack_80);
  func_0x01ff9d2c(auStack_8c,param_5,param_1);
  func_0x01ff9c94(auStack_2c,auStack_8c);
  func_0x01ff9bf0(auStack_98,auStack_20,auStack_2c);
  func_0x01ff9c94(auStack_20,auStack_98);
  func_0x01ff9bc4(param_4,auStack_20);
  if (extraout_r1_01 < 0) {
    return 3;
  }
  return 0;
}
