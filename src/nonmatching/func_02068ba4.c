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

extern int func_0203b014();
extern int func_0x02085dd0();
extern int func_0x020ba964();
extern int func_0x020c8e30();
extern int func_0x020d2260();

bool func_02068ba4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  sVar1 = *(short *)(param_1 + 0x14);
  bVar5 = true;
  if (sVar1 == 0) {
    if (4 < *(short *)(param_1 + 0x16)) {
      func_0x020d2260();
      *(undefined2 *)(param_1 + 0x14) = 1;
    }
  }
  else if (sVar1 == 1) {
    if (((*(int *)(param_1 + 0x6c) != 0) &&
        (iVar2 = func_0x02085dd0(param_1 + 0xbe8,param_1 + 0x88,(int)*(short *)(param_1 + 0xbe0),
                                 0x2000,param_1 + 0xf80,0,param_4), iVar2 != 0)) &&
       (-1 < *(int *)(param_1 + 0xbe4))) {
      func_0203b014(*(int *)(param_1 + 0xbe4),param_1 + 0xf80);
    }
    if (*(short *)(param_1 + 0x16) < 300) {
      if (*(short *)(param_1 + 0xf7c) == 0) {
        *(undefined2 *)(param_1 + 0x14) = 2;
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x02068cdc) + 0x5c) + 0x4c);
        if ((iVar2 != 0) && (iVar4 = 0, 0 < *(short *)(param_1 + 0xf7c))) {
          do {
            iVar3 = func_0x020ba964(iVar2,*(undefined4 *)(param_1 + iVar4 * 0x20 + 0xe3c));
            if (iVar3 == 0) {
              func_0x020c8e30(*(undefined4 *)(param_1 + iVar4 * 0x20 + 0xe3c),param_1 + 0xe3c);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(short *)(param_1 + 0xf7c));
        }
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x14) = 2;
    }
  }
  else {
    bVar5 = sVar1 != 2;
  }
  return bVar5;
}
