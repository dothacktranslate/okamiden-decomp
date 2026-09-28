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

extern int func_02006484();
extern int func_020093b8();
extern int func_0x01ff92c0();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void func_020091b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 code *param_5,undefined4 param_6,int param_7)

{
  uint uVar1;

  if (param_4 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_6);
      return;
    }
    return;
  }
  uVar1 = param_4;
  func_020093b8();
  if (param_5 != (code *)0x0) {
    func_02006484(param_1,param_5,param_6);
    if (param_7 == 0) {
      func_0x01ff92c0(param_1,param_3,param_2,param_4 >> 2 | 0x45000000,0x14,uVar1);
      return;
    }
    func_0x01ff92c0(param_1,param_3,param_2,param_4 >> 2 | 0xc5000000,0x10,uVar1);
    return;
  }
  if (param_7 == 0) {
    func_0x01ff92c0(param_1,param_3,param_2,param_4 >> 2 | 0x5000000,0x14,uVar1);
    return;
  }
  func_0x01ff92c0(param_1,param_3,param_2,param_4 >> 2 | 0x85000000,0x10,uVar1);
  return;
}
