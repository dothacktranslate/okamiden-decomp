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

extern int func_020465d8();
extern int func_02046868();
extern int func_0x020d9f6c();
extern int func_0x020da050();

undefined4 func_02025114(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  iVar6 = (*(unsigned int *)0x02025248);
  iVar2 = func_020465d8(param_1,2);
  iVar3 = func_020465d8(param_1,1);
  iVar5 = ((unsigned int)0x0202524c);
  if (iVar3 == ((unsigned int)0x0202524c)) {
    if (iVar2 == 0) {
      uVar4 = func_020465d8(param_1,3);
      *(undefined4 *)(iVar6 + 0xb0) = uVar4;
      iVar2 = 1;
    }
    else if (iVar2 != 1) goto LAB_0202523a;
    iVar5 = 0;
    if (*(char *)(iVar6 + 0xb4) != '\0') {
      do {
        if (*(int *)(iVar6 + 0xb0) != 0) {
          *(int *)(iVar6 + 0xb0) = *(int *)(iVar6 + 0xb0) + -1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(iVar6 + 0xb4));
    }
    if (*(int *)(iVar6 + 0xb0) == 0) {
      iVar2 = -1;
    }
  }
  else if ((((iVar3 == ((unsigned int)0x0202524c) + 1) &&
            (iVar3 = *(int *)(*(int *)(*(unsigned int *)0x02025248) + 0x5c), iVar3 != 0)) &&
           (*(int *)(iVar3 + 0x7c) != 0)) && (*(int *)(iVar3 + 0x60) != 0)) {
    if (iVar2 == 0) {
      iVar6 = func_0x020da050();
      if (iVar6 == 0) {
        sVar1 = func_020465d8(param_1,3);
        if (sVar1 == 0) {
          iVar2 = -1;
        }
        else {
          iVar5 = func_0x020da050(*(undefined4 *)(iVar3 + 0x7c));
          if (iVar5 == 0) {
            func_0x020d9f6c(*(undefined4 *)(iVar3 + 0x7c),sVar1);
          }
        }
      }
      else if ((*(unsigned int *)0x02025250) == '\0') {
        (*(unsigned int *)0x02025250) = '\x01';
        (*(unsigned int *)0x02025254) = '\x01';
        (*(unsigned int *)0x02025258) = 0x3c;
        (*(unsigned int *)0x0202525c) = 0x28;
      }
      else if ((((*(unsigned int *)0x02025254) == '\0') &&
               ((*(ushort *)(*(int *)(iVar3 + 0x7c) + 0x48) & 0x8000) != 0)) &&
              ((*(uint *)(*(int *)(iVar3 + 0x60) + iVar5 + 0x13) & 0x8000) != 0)) {
        iVar2 = 1;
      }
    }
    else if (((iVar2 == 1) && ((*(ushort *)(*(int *)(iVar3 + 0x7c) + 0x48) & 0x8000) == 0)) &&
            ((*(uint *)(*(int *)(iVar3 + 0x60) + ((unsigned int)0x0202524c) + 0x13) & 0x8000) == 0)) {
      iVar2 = -1;
    }
  }
LAB_0202523a:
  func_02046868(param_1,iVar2);
  return 1;
}
