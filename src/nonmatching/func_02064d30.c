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

extern int func_02008b6c();
extern int func_02008b80();
extern int func_0200a48c();
extern int func_0200a554();
extern int func_0201ebe0();
extern int func_02056208();
extern int func_020642b4();
extern int func_02064f24();
extern int func_02065090();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
func_02064d30(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;

  if (*(int *)(param_1 + 0x2c) << 0x1f < 0) {
    func_02064f24();
  }
  iVar1 = func_0201ebe0(param_4,*(int *)(param_1 + 0x50) * param_6 * 0x20);
  iVar2 = iVar1 * param_6 * 0x20;
  *(int *)(param_1 + 0x30) = iVar2;
  if (param_2 == 1) {
    iVar2 = (iVar1 * param_6 & 0x7ffffffU) << 4;
  }
  uVar3 = func_0201ebe0(param_5 * iVar2,param_6);
  iVar1 = func_020642b4();
  *(int *)(param_1 + 0x48) = iVar1;
  iVar2 = ((unsigned int)0x02064ec4);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      uVar4 = (uint)*(byte *)(param_1 + iVar1 + 0x54);
      *(int *)(iVar2 + uVar4 * 8) = *(int *)(param_1 + 0x30) * iVar1 + param_3;
      *(undefined4 *)(iVar2 + uVar4 * 8 + 4) = 0;
      func_0200a554(uVar4,param_2,*(undefined4 *)(iVar2 + uVar4 * 8),1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x50));
  }
  func_0200a48c(*(undefined4 *)(param_1 + 0x48),uVar3,uVar3,((unsigned int)0x02064ec8));
  func_02056208(((unsigned int)0x02064ecc),param_1);
  *(int *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x34) = param_6;
  *(undefined4 *)(param_1 + 0x38) = param_7;
  *(undefined4 *)(param_1 + 0x3c) = param_8;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe | 1;
  uVar3 = func_02008b6c();
  *(undefined4 *)(param_1 + 0x34) = 1;
  func_02065090(param_1,0);
  *(int *)(param_1 + 0x34) = param_6;
  func_02008b80(uVar3);
  return 1;
}
