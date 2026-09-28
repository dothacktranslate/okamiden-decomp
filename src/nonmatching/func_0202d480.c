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

extern int func_02018ba4();
extern int func_0201ebe0();
extern int func_0202b26c();
extern int func_0202c5d4();
extern int func_0202c774();
extern int func_0202d58c();
extern int func_02036bd4();
extern int func_0203b220();

void func_0202d480(int param_1,int param_2,int param_3,undefined4 param_4,ushort param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined1 auStack_54 [64];

  iVar1 = func_0202c774(param_1,param_3 + (uint)param_5 * 0x10000);
  if (*(int *)(param_1 + ((unsigned int)0x0202d578)) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + ((unsigned int)0x0202d578)) + param_2 * 0x18;
  }
  if (param_3 == 0) {
    *(uint *)((*(unsigned int *)0x0202d57c) + 0x124) = *(uint *)((*(unsigned int *)0x0202d57c) + 0x124) | 0x80000000;
    func_0202b26c(param_1,0);
    func_0201ebe0(*(undefined4 *)(iVar3 + 0xc),1000);
    func_02018ba4(auStack_54,((unsigned int)0x0202d580),extraout_r1);
    iVar1 = func_0202c774(param_1,0);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + *(int *)(iVar1 + 0x114) * 4 + 0x4c);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) {
        uVar2 = func_02036bd4(iVar3,auStack_54);
        *(undefined4 *)(param_1 + ((unsigned int)0x0202d584)) = uVar2;
      }
      *(undefined4 *)(param_1 + 0xac0) = 0;
      func_0202c5d4(param_1);
    }
  }
  if ((*(uint *)(iVar1 + 0x108) & 0xffff) == ((unsigned int)0x0202d588)) {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x48) + 0xa8);
    *(uint *)(iVar3 + 0x6c0) = *(uint *)(iVar3 + 0x6c0) & 0xfffffffd;
  }
  func_0202d58c(param_1,param_4);
  if (((*(uint *)(iVar1 + 0x108) & 0xffff) != ((unsigned int)0x0202d588)) && (*(int *)(iVar1 + 0x78) != 0)) {
    func_0203b220(*(int *)(iVar1 + 0x78),param_6 << 0xc);
    *(uint *)(*(int *)(iVar1 + 0x78) + 0xc) = *(uint *)(*(int *)(iVar1 + 0x78) + 0xc) & 0xfffffffd;
    *(uint *)(*(int *)(iVar1 + 0x78) + 0xc) = *(uint *)(*(int *)(iVar1 + 0x78) + 0xc) | 1;
  }
  return;
}
