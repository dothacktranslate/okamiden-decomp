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

extern int func_0202bd84();
extern int func_0202d9bc();
extern int func_0202db38();
extern int func_0203aed4();

void func_0202d8f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_18;

  *(uint *)(param_1 + ((unsigned int)0x0202d9a8)) = *(uint *)(param_1 + ((unsigned int)0x0202d9a8)) | 0x10;
  local_18 = param_2 + -0x1000;
  if (local_18 < 0) {
    local_18 = 0;
  }
  if (param_2 < *(int *)(param_1 + ((unsigned int)0x0202d9ac))) {
    func_0202d9bc(param_1,local_18);
  }
  else {
    uVar3 = 1;
    piVar4 = (int *)(param_1 + ((unsigned int)0x0202d9b0));
    while( true ) {
      iVar1 = *piVar4;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
      if (*(uint *)(iVar2 + 0x14) <= uVar3) break;
      iVar2 = iVar1 + uVar3 * 0x18;
      if ((*(short *)(iVar2 + 6) == 8) || (*(short *)(iVar2 + 6) == 10)) {
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        func_0203aed4((int)(((unsigned int)0x0202d9b4) & *(uint *)(iVar2 + 8)) >> 0x10,1);
        iVar2 = *(int *)(param_1 + ((unsigned int)0x0202d9b0)) + uVar3 * 0x18;
        if (*(int *)(param_1 + ((unsigned int)0x0202d9b0)) == 0) {
          iVar2 = 0;
        }
        *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffff;
      }
      uVar3 = uVar3 + 1;
    }
    func_0202db38(param_1,&local_18,1);
  }
  func_0202bd84(param_1);
  *(uint *)(param_1 + ((unsigned int)0x0202d9a8)) = *(uint *)(param_1 + ((unsigned int)0x0202d9a8)) & 0xffffffef;
  *(uint *)((*(unsigned int *)0x0202d9b8) + 0x124) = *(uint *)((*(unsigned int *)0x0202d9b8) + 0x124) | 0x80000000;
  return;
}
