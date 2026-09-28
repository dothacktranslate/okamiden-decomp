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

extern int func_0x01ff99dc();
extern int func_0x01ff9a30();
extern int func_0x01ff9cf4();
extern int func_0x01ff9d2c();
extern int func_0x01ff9dcc();

void func_0203133c(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_24;
  undefined1 auStack_20 [12];

  if (*(int *)(param_1 + 8) != 0) {
    local_24 = 0;
    iVar5 = *(int *)(param_1 + 4);
    if (0 < param_1[1]) {
      do {
        iVar4 = *(int *)(param_1 + 8) + local_24 * 0x14;
        func_0x01ff99dc(iVar4);
        iVar3 = 0;
        iVar1 = (int)*param_1;
        if (0 < iVar1) {
          do {
            func_0x01ff9cf4(iVar4,param_2 + *(short *)(iVar5 + iVar3 * 2) * 0xc);
            iVar1 = (int)*param_1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        func_0x01ff9dcc(iVar4,iVar1 << 0xc);
        iVar3 = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        iVar1 = (int)*param_1;
        if (0 < iVar1) {
          do {
            func_0x01ff9d2c(auStack_20,param_2 + *(short *)(iVar5 + iVar3 * 2) * 0xc,iVar4);
            uVar7 = func_0x01ff9a30(auStack_20);
            iVar1 = (int)((ulonglong)uVar7 >> 0x20);
            iVar2 = *(int *)(iVar4 + 0x10);
            bVar6 = *(uint *)(iVar4 + 0xc) < (uint)uVar7;
            if ((int)((iVar2 - iVar1) - (uint)bVar6) < 0 !=
                (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)bVar6))) {
              *(undefined8 *)(iVar4 + 0xc) = uVar7;
            }
            iVar1 = (int)*param_1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        iVar5 = iVar5 + (iVar1 + 1) * 2;
        local_24 = local_24 + 1;
      } while (local_24 < param_1[1]);
    }
  }
  return;
}
