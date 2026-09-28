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

extern int func_020077b4();
extern int func_02034e24();
extern int func_020356a0();
extern int func_020356f0();
extern int func_02036a70();
extern int func_020378f4();
extern int func_02038218();
extern int func_02038898();
extern int func_02038900();
extern int func_020390f8();
extern int func_0203c3fc();
extern int func_0203da18();
extern int func_02041bc0();
extern int func_02041df4();
extern int func_0204205c();
extern int func_02045748();
extern int func_02045e34();

undefined4 func_0203575c(undefined4 param_1)

{
  undefined4 *puVar1;

  func_020356a0();
  func_020356f0(param_1);
  puVar1 = ((unsigned int)0x020357dc);
  func_02038898((*(unsigned int *)0x020357dc));
  func_02036a70((*(unsigned int *)0x020357e0));
  func_02038900(*puVar1);
  func_0203da18((*(unsigned int *)0x020357e4));
  func_0203c3fc((*(unsigned int *)0x020357e8));
  func_02038218((*(unsigned int *)0x020357ec));
  func_02034e24((*(unsigned int *)0x020357f0));
  func_020077b4();
  func_02045e34((*(unsigned int *)0x020357f4));
  func_020390f8((*(unsigned int *)0x020357f8));
  puVar1 = ((unsigned int)0x020357fc);
  func_02041bc0((*(unsigned int *)0x020357fc));
  func_02045748((*(unsigned int *)0x02035800));
  func_020378f4((*(unsigned int *)0x02035804));
  func_02041df4(*puVar1);
  func_0204205c(*puVar1);
  return 1;
}
