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

extern int func_0204d42c();
extern int func_0204d618();
extern int func_0204d744();
extern int func_0204d8a0();

int func_0204d968(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x24);
  *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) | 4;
  switch(*(undefined1 *)(iVar2 + 4)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x18);
    iVar1 = func_0204d42c(param_1,iVar2);
    if (iVar1 != 0) {
      *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) & 0xfb;
    }
    return (1 << *(sbyte *)(iVar2 + 7)) * 0x14 + *(int *)(iVar2 + 0x1c) * 8 + 0x20;
  case 6:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 8);
    func_0204d744(param_1,iVar2);
    iVar1 = *(byte *)(iVar2 + 7) - 1;
    if (*(char *)(iVar2 + 6) == '\0') {
      iVar2 = iVar1 * 4 + 0x18;
    }
    else {
      iVar2 = iVar1 * 8 + 0x1c;
    }
    return iVar2;
  case 7:
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x5c);
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2;
    *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) & 0xfb;
    func_0204d8a0(param_1,iVar2);
    return *(int *)(iVar2 + 0x30) * 0x18 + *(int *)(iVar2 + 0x2c) * 8 + 0x68;
  case 9:
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x44);
    func_0204d618(param_1,iVar2);
    return *(int *)(iVar2 + 0x38) * 0xc +
           *(int *)(iVar2 + 0x2c) * 4 + 0x4c + *(int *)(iVar2 + 0x34) * 4 +
           *(int *)(iVar2 + 0x28) * 8 + *(int *)(iVar2 + 0x30) * 4 + *(int *)(iVar2 + 0x24) * 4;
  }
  return 0;
}
