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

extern int func_02007804();
extern int func_0200b3bc();
extern int func_0200b3c4();
extern int func_0200b3f8();
extern int func_02065a48();
extern int func_02065d1c();

undefined4 func_020667c8(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar1 = func_0200b3f8();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = func_0200b3bc(param_1);
  uVar2 = iVar1 - 1;
  iVar1 = param_1 + (*(int *)(param_1 + 0x38) + param_2) * 4;
  bVar5 = param_2 < uVar2;
  if (bVar5) {
    uVar2 = *(uint *)(iVar1 + 0x40);
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (!bVar5) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  iVar4 = uVar2 - iVar1;
  if (param_4 == 0) {
    return 0;
  }
  iVar3 = func_02065d1c(param_4,iVar4 + 0x20,((unsigned int)0x0206688c),param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = func_02065a48(param_3,iVar3,iVar4,iVar1);
  if (iVar4 == iVar1) {
    func_02007804(iVar3,iVar4);
    func_0200b3c4(param_1,param_2,iVar3);
    return 1;
  }
  return 0;
}
