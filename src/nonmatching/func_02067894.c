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

extern int func_02007050();
extern int func_020099f0();
extern int func_02056208();
extern int func_02056310();
extern int func_02056370();
extern int func_0206778c();
extern int func_020677d0();

void func_02067894(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  uVar3 = ((unsigned int)0x020679c4);
  if (1 < *(int *)(param_6 + 0x124)) {
    for (iVar4 = func_02056370(((unsigned int)0x020679c4),0,param_3,param_4,param_4);
        (iVar4 != 0 && (*(int *)(iVar4 + 8) != param_6)); iVar4 = func_02056370(uVar3,iVar4)) {
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar4 + 0x10)) {
      do {
        func_020099f0(*(undefined4 *)(iVar4 + iVar5 * 4 + 0x14),0,*(undefined4 *)(iVar4 + 0x2c));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar4 + 0x10));
    }
    func_02056310(((unsigned int)0x020679c4),iVar4);
    *(int *)(param_6 + 0x124) = *(int *)(param_6 + 0x124) + -1;
    func_020677d0(iVar4);
  }
  iVar4 = func_0206778c();
  *(int *)(iVar4 + 8) = param_6;
  *(int *)(iVar4 + 0xc) = param_1;
  *(int *)(iVar4 + 0x10) = param_2;
  iVar5 = 0;
  if (0 < param_2) {
    do {
      iVar2 = iVar5 * 4;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar4 + iVar1 + 0x14) = *(undefined4 *)(param_3 + iVar2);
    } while (iVar5 < param_2);
  }
  *(undefined4 *)(iVar4 + 0x2c) = param_4;
  iVar4 = ((unsigned int)0x020679c8);
  if ((param_1 == 0) && (*(int *)(((unsigned int)0x020679cc) + 4) != 0)) {
    iVar4 = *(int *)(((unsigned int)0x020679cc) + 4);
  }
  *(int *)(param_6 + 0x124) = *(int *)(param_6 + 0x124) + 1;
  func_02056208(iVar4 + 0x10e0);
  func_02007050(iVar4 + 0x10c0);
  return;
}
