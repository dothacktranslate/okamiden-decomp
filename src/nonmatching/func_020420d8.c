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

extern int func_020034c8();
extern int func_02039b04();
extern int func_02039cf0();
extern int func_02039de4();
extern int func_0203a3a0();
extern int func_02041680();
extern int func_02042470();

void func_020420d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = ((unsigned int)0x020421ec);
  if ((((*(uint *)(param_1 + 0x124) & 0x1000) != 0) ||
      (uVar1 = ((unsigned int)0x020421f0), (*(uint *)(param_1 + 0x124) & 0x2000) != 0)) ||
     (uVar1 = ((unsigned int)0x020421f4), *(int *)(param_1 + 0x1cc) == 0xd)) {
    *(undefined4 *)(param_1 + 0x3fc) = uVar1;
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    if (*(int *)(param_1 + 0x1cc) == 0xb) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        if (*(char *)(param_1 + 0x1d0) == '\0') {
          *(undefined4 *)(param_1 + 0xe8) = 0;
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        else {
          *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x2000;
          *(undefined4 *)(param_1 + 0xe8) = 1;
          *(undefined4 *)(param_1 + 0xdc) = 0;
          func_0203a3a0(param_1 + 0x1fc,0x40,0xc0,0x20,0);
        }
        func_02039b04(param_1 + 0xc0);
      }
      else if (*(int *)(param_1 + 0xdc) == 4) {
        func_02039de4(param_1 + 0xc0);
        *(uint *)(param_1 + 0x124) = ((unsigned int)0x020421f8) & *(uint *)(param_1 + 0x124);
        func_02041680();
      }
      else {
        func_02039cf0(param_1 + 0xc0);
      }
    }
    if (*(int *)(param_1 + 0x1cc) == 6) {
      iVar2 = *(int *)(((unsigned int)0x020421fc) + 0x10);
      if (*(int *)(iVar2 + 0x1d4) != -0x80000000) {
        func_020034c8(((unsigned int)0x02042200));
        *(undefined4 *)(iVar2 + 0x1d4) = 0x80000000;
      }
      func_02041680();
    }
    if ((*(int *)(param_1 + 0x1cc) == 10) && ((*(uint *)(param_1 + 0x124) & 0x800) != 0)) {
      func_02041680();
    }
    return;
  }
  func_02042470(param_1);
  return;
}
