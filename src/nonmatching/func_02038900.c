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

extern int func_02008384();
extern int func_0201e96c();
extern int func_02038468();
extern int func_020384b0();

void func_02038900(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;

  uVar5 = func_02008384();
  uVar3 = ((unsigned int)0x020389a4);
  uVar2 = ((unsigned int)0x020389a0);
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    do {
      uVar6 = func_02008384();
      lVar1 = (ulonglong)((uint)uVar6 - (uint)uVar5) * 64000;
      uVar4 = func_0201e96c((int)lVar1,
                           ((int)((ulonglong)uVar6 >> 0x20) -
                           ((int)((ulonglong)uVar5 >> 0x20) + (uint)((uint)uVar6 < (uint)uVar5))) *
                           64000 + (int)((ulonglong)lVar1 >> 0x20),uVar2,0,param_4);
      if (uVar3 < uVar4) {
        func_02038468(*(undefined4 *)(param_1 + 0x20));
        param_4 = (int)*(short *)(param_1 + 0x1e);
        func_020384b0(*(undefined4 *)(param_1 + 0x20),0,param_1 + 0x1a,
                     (int)*(short *)(param_1 + 0x1c));
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
      }
    } while ((*(uint *)(param_1 + 8) & 1) != 0);
    return;
  }
  return;
}
