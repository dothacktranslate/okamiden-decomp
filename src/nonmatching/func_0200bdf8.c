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

extern int func_02007000();
extern int func_02008b6c();
extern int func_02008b80();
extern int func_0200b74c();
extern int func_0200b848();
extern int func_0200bbc8();
extern int func_0200bd74();

void func_0200bdf8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = func_02008b6c();
  while (((*(uint *)(param_1 + 0xc) & 0x40) == 0 && ((*(uint *)(param_1 + 0xc) & 1) != 0))) {
    func_02007000(param_1 + 0x18);
  }
  func_02008b80(uVar1);
  if ((*(uint *)(param_1 + 0xc) & 0x40) == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = func_0200b848(param_1,*(uint *)(param_1 + 0xc) >> 8 & 0xff);
  func_0200b74c(uVar1,param_1,uVar1,uVar1);
  iVar2 = func_0200bbc8(uVar3,1);
  if (iVar2 == 0) {
    return;
  }
  func_0200bd74();
  return;
}
