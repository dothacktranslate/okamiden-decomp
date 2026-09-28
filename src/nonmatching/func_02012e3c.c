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

extern int func_02006e04();
extern int func_020070b8();
extern int func_02008c24();
extern int func_02009b68();
extern int func_02012f58();
extern int func_020131a4();
extern int func_020131cc();
extern int func_020143e8();
extern int func_0201446c();

void func_02012e3c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = ((unsigned int)0x02012f20);
  if (*(int *)(((unsigned int)0x02012f20) + 4) == 0) {
    *(undefined4 *)(((unsigned int)0x02012f20) + 4) = 1;
    iVar2 = func_02008c24();
    if (iVar2 == 1) {
      func_02009b68(((unsigned int)0x02012f24),((unsigned int)0x02012f24) + -0x380,0x160);
    }
    puVar1 = ((unsigned int)0x02012f28);
    *(undefined4 *)(iVar3 + 0x4fc) = 0;
    *(undefined4 *)(iVar3 + 0x500) = 0;
    *(undefined4 *)(iVar3 + 0x504) = 0;
    *(undefined4 *)(iVar3 + 0x508) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x50c) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0x400;
    *(undefined4 *)(iVar3 + 0x10) = 0x2400;
    *puVar1 = 0;
    *(undefined4 *)(iVar3 + 8) = 4;
    func_020131a4();
    *(undefined4 *)(iVar3 + 0x4ec) = 0;
    *(undefined4 *)(iVar3 + 0x4f0) = 0;
    *(undefined4 *)(iVar3 + 0x4f8) = 0;
    *(undefined4 *)(iVar3 + 0x4f4) = 0;
    func_02006e04(iVar3 + 0x28,((unsigned int)0x02012f2c),0,iVar3 + 0x4e8);
    func_020070b8(iVar3 + 0x28);
    func_020131cc();
    func_020143e8();
    iVar3 = func_02008c24();
    if (iVar3 == 1) {
      func_02012f58(1);
    }
    func_0201446c();
    return;
  }
  return;
}
