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

extern int func_02065930();
extern int func_02065d1c();
extern int func_02067508();

undefined4 func_02066d80(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar1 = ((unsigned int)0x02066e40);
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 0x17c + iVar1;
    pbVar2 = (byte *)func_02065930(iVar6);
    if (pbVar2 != (byte *)0x0) {
      iVar4 = 0;
      *(byte *)(iVar7 + 300) = *pbVar2;
      if (*pbVar2 != 0) {
        do {
          iVar3 = iVar4 + 1;
          iVar5 = iVar7 + iVar4;
          iVar4 = iVar4 + 1;
          *(byte *)(iVar5 + 0x12e) = pbVar2[iVar3];
        } while (iVar4 < (int)(uint)*pbVar2);
      }
      if (param_1 != 0) {
        iVar4 = (uint)*(byte *)(iVar7 + 300) << 0xb;
        iVar3 = func_02065d1c(param_1,iVar4,((unsigned int)0x02066e44),iVar7,0);
        if (iVar3 == 0) {
          return 0;
        }
        func_02067508(iVar7);
        *(int *)(iVar7 + 0x134) = iVar3;
        *(int *)(iVar7 + 0x138) = iVar4;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return 1;
}
