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
extern int func_0200d2cc();
extern int func_0200dbc4();
extern int func_0200e774();

int func_0200dd74(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined1 auStack_a8 [4];
  int local_a4;
  int local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [128];

  *(undefined1 **)(param_2 + 0x30) = auStack_a8;
  *(undefined4 *)(param_2 + 0x34) = 0;
  iVar1 = func_0200dbc4(param_2,3,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x118) = local_98;
    func_02009b68(auStack_94,param_3 + 0x14);
    *(undefined1 *)(param_3 + *(int *)(param_3 + 0x118) + 0x14) = 0;
    if (local_9c == 0) {
      *(undefined4 *)(param_3 + 0x11c) = 0;
      *(int *)(param_3 + 0x16c) = local_a4;
      *(undefined4 *)(param_3 + 0x168) = 0;
      if ((uint)(local_a4 * 8) < *(uint *)(*(int *)(param_1 + 0x20) + 8)) {
        local_b4 = *(int *)(*(int *)(param_1 + 0x20) + 4) + local_a4 * 8;
        local_b8 = param_1;
        iVar2 = func_0200d2cc(&local_b8,&local_b0,8);
        if (iVar2 == 0) {
          *(int *)(param_3 + 0x168) = local_ac - local_b0;
          iVar2 = func_0200e774(param_1,local_b0);
          if (iVar2 != 0) {
            *(uint *)(param_3 + 0x11c) = *(uint *)(param_3 + 0x11c) | 0x400;
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x11c) = 0x100;
      *(int *)(param_3 + 0x16c) = local_a4;
      *(undefined4 *)(param_3 + 0x168) = 0;
    }
    *(undefined4 *)(param_3 + 0x138) = 0;
    *(undefined4 *)(param_3 + 0x13c) = 0;
    *(undefined4 *)(param_3 + 0x140) = 0;
    *(undefined4 *)(param_3 + 0x144) = 0;
    *(undefined4 *)(param_3 + 0x148) = 0;
    *(undefined4 *)(param_3 + 0x14c) = 0;
  }
  return iVar1;
}
