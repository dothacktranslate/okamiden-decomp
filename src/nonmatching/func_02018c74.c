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

extern int func_02007558();
extern int func_020075a8();
extern int func_02007600();
extern int func_02015ea8();

undefined4 func_02018c74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;

  uVar1 = ((unsigned int)0x02018d88);
  if ((param_1 < 1) || (7 < param_1)) {
    return 0xffffffff;
  }
  iVar4 = func_02007600(((unsigned int)0x02018d88));
  iVar3 = ((unsigned int)0x02018d94);
  iVar2 = ((unsigned int)0x02018d90);
  iVar5 = ((unsigned int)0x02018d8c);
  if (iVar4 == 0) {
    *(undefined4 *)(((unsigned int)0x02018d90) + 0x1c) = *(undefined4 *)(*(int *)(((unsigned int)0x02018d8c) + 4) + 0x6c);
    *(undefined4 *)(iVar3 + 0x1c) = 1;
  }
  else if (*(int *)(((unsigned int)0x02018d90) + 0x1c) == *(int *)(*(int *)(((unsigned int)0x02018d8c) + 4) + 0x6c)) {
    *(int *)(((unsigned int)0x02018d94) + 0x1c) = *(int *)(((unsigned int)0x02018d94) + 0x1c) + 1;
  }
  else {
    func_02007558(uVar1);
    iVar3 = ((unsigned int)0x02018d94);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x6c);
    *(undefined4 *)(iVar3 + 0x1c) = 1;
  }
  pcVar6 = *(code **)(((unsigned int)0x02018d98) + (param_1 + -1) * 4);
  if (pcVar6 != (code *)0x1) {
    *(undefined4 *)(((unsigned int)0x02018d98) + (param_1 + -1) * 4) = 0;
  }
  iVar5 = *(int *)(((unsigned int)0x02018d94) + 0x1c) + -1;
  *(int *)(((unsigned int)0x02018d94) + 0x1c) = iVar5;
  if (iVar5 == 0) {
    func_020075a8(((unsigned int)0x02018d88));
  }
  if ((pcVar6 != (code *)0x1) && (pcVar6 != (code *)0x0 || param_1 != 1)) {
    if (pcVar6 == (code *)0x0) {
      func_02015ea8(0);
    }
    (*pcVar6)(param_1);
    return 0;
  }
  return 0;
}
