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

extern int func_02009b68();
extern int func_02014e50();
extern int func_02014f70();

void func_02015004(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  undefined4 uStack_18;

  uVar3 = param_1[0x15] * 8 + param_1[0x16] * 0x200;
  local_1c = param_1[0x15] << 0x1b | uVar3 * 0x100 & 0xff0000 | uVar3 >> 0x18 | uVar3 >> 8 & 0xff00;
  uVar3 = param_1[0x16] >> 0x17;
  uVar2 = uVar3 + param_1[0x17] * 0x200;
  local_20 = uVar3 << 0x18 | uVar2 * 0x100 & 0xff0000 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00;
  uStack_18 = param_4;
  func_02014f70(param_1,((unsigned int)0x020151f4),1);
  if (0x40 - param_1[0x15] < 8) {
    func_02014f70(param_1,((unsigned int)0x020151f8));
  }
  func_02014e50(param_1,0,0x38 - param_1[0x15]);
  func_02014f70(param_1,&local_20,8);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18 | uVar3 >> 8 & 0xff00;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  param_1[1] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 0x18 | uVar4 >> 8 & 0xff00;
  uVar3 = param_1[4];
  param_1[2] = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  param_1[3] = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00;
  param_1[4] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18 | uVar3 >> 8 & 0xff00;
  func_02009b68(param_1,param_2,0x14);
  return;
}
