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

extern int func_02002e50();
extern int func_02003170();
extern int func_0203337c();

void func_020333ec(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;

  uStack_18 = param_4;
  func_0203337c(param_1[1],param_2,param_3[1],param_5,1,&local_2c);
  func_0203337c(param_1[1],param_2,*param_3,auStack_24,1,&local_28);
  if ((local_2c < 0) && (local_28 < 0)) {
    puVar1 = (undefined4 *)param_1[1];
    *param_5 = *puVar1;
    param_5[1] = puVar1[1];
    param_5[2] = puVar1[2];
    if (local_2c < local_28) {
      param_3 = (undefined4 *)*param_3;
      *param_6 = *param_3;
      param_6[1] = param_3[1];
      param_6[2] = param_3[2];
      return;
    }
    puVar1 = (undefined4 *)param_3[1];
    *param_6 = *puVar1;
    param_6[1] = puVar1[1];
    param_6[2] = puVar1[2];
    return;
  }
  if ((0x1000 < local_2c) && (0x1000 < local_28)) {
    param_1 = (undefined4 *)*param_1;
    *param_5 = *param_1;
    param_5[1] = param_1[1];
    param_5[2] = param_1[2];
    if (local_2c < local_28) {
      puVar1 = (undefined4 *)param_3[1];
      *param_6 = *puVar1;
      param_6[1] = puVar1[1];
      param_6[2] = puVar1[2];
      return;
    }
    param_3 = (undefined4 *)*param_3;
    *param_6 = *param_3;
    param_6[1] = param_3[1];
    param_6[2] = param_3[2];
    return;
  }
  if (0xfff < local_28) {
    local_28 = 0x1000;
  }
  if (local_28 < 1) {
    local_28 = 0;
  }
  if (0xfff < local_2c) {
    local_2c = 0x1000;
  }
  if (local_2c < 1) {
    local_2c = 0;
  }
  local_30 = func_02003170(0x800,local_2c + local_28);
  func_02002e50(local_30,param_2,param_1[1],param_5);
  func_0203337c(param_3[1],param_4,param_5,param_6,0,&local_30);
  return;
}
