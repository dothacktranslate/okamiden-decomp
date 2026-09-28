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

extern int func_02000dc8();
extern int func_02000de4();
extern int func_02000e00();
extern int func_02001250();
extern int func_020013e4();
extern int func_02002a94();

void func_020396d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [36];
  undefined1 auStack_3c [36];
  undefined4 uStack_18;

  iVar1 = ((unsigned int)0x0203979c);
  iVar2 = (int)(uint)*(ushort *)(param_1 + 0x88) >> 4;
  uStack_18 = param_4;
  func_02000dc8(auStack_3c,(int)*(short *)(((unsigned int)0x0203979c) + iVar2 * 4),
               (int)*(short *)(((unsigned int)0x0203979c) + (iVar2 * 2 + 1) * 2));
  iVar2 = (int)(uint)*(ushort *)(param_1 + 0x8a) >> 4;
  func_02000de4(auStack_60,(int)*(short *)(iVar1 + iVar2 * 4),
               (int)*(short *)(iVar1 + (iVar2 * 2 + 1) * 2));
  func_02001250(auStack_3c,auStack_60,auStack_3c);
  iVar2 = (int)(uint)*(ushort *)(param_1 + 0x8c) >> 4;
  func_02000e00(auStack_60,(int)*(short *)(iVar1 + iVar2 * 4),
               (int)*(short *)(iVar1 + (iVar2 * 2 + 1) * 2));
  func_02001250(auStack_3c,auStack_60,auStack_3c);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x90);
    func_020013e4(param_1 + 0x58,auStack_3c,param_1 + 0x58);
    func_02002a94(param_1 + 0x58,param_1 + 0x4c,param_1 + 0x58);
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x90);
  func_020013e4(param_1 + 0x4c,auStack_3c,param_1 + 0x4c);
  func_02002a94(param_1 + 0x4c,param_1 + 0x58,param_1 + 0x4c);
  return;
}
