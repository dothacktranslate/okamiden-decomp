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

extern int func_0205ebc0();

void func_0203cc9c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40000000;
  iVar2 = *(int *)(param_1 + 0x14);
  func_0205ebc0(iVar2,1,0xc0);
  uVar5 = 0;
  if (*(char *)(iVar2 + 0x18) != '\0') {
    do {
      if ((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar2 + *(int *)(iVar2 + 8);
      }
      if (((iVar4 == 0) || (iVar4 + 4 == 0)) || (*(byte *)(iVar4 + 5) <= uVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 4 + (uint)*(ushort *)(iVar4 + 10);
        iVar4 = iVar4 + (uint)*(ushort *)(iVar4 + 2) + uVar5 * 0x10;
      }
      if (iVar4 != 0) {
        bVar1 = true;
        iVar3 = 0;
        while( true ) {
          if ((*(char *)(param_2 + iVar3) == '\0') || (*(char *)(iVar4 + iVar3) == '\0'))
          goto LAB_0203cd18;
          if (*(char *)(param_2 + iVar3) != *(char *)(iVar4 + iVar3)) break;
          iVar3 = iVar3 + 1;
        }
        bVar1 = false;
LAB_0203cd18:
        if (bVar1) {
          iVar4 = 0;
          do {
            iVar3 = param_1 + iVar4 * 2;
            if (*(short *)(iVar3 + 0xe2) == -1) {
              *(short *)(iVar3 + 0xe2) = (short)uVar5;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x10);
        }
      }
      uVar5 = (int)((uVar5 + 1) * 0x10000) >> 0x10;
    } while ((int)uVar5 < (int)(uint)*(byte *)(iVar2 + 0x18));
  }
  return;
}
