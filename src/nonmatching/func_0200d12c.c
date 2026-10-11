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

void func_0200d12c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;

  while( true ) {
    uVar7 = *(uint *)(param_1 + 4);
    uVar8 = uVar7 + *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc);
    func_02008b6c();
    puVar3 = ((unsigned int)0x0200d218);
    puVar11 = (undefined4 *)(*(unsigned int *)0x0200d218);
    puVar5 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
    puVar9 = puVar11;
    while (puVar2 = puVar9, puVar1 = puVar4, puVar2 != (undefined4 *)0x0) {
      uVar10 = puVar2[2];
      puVar9 = (undefined4 *)*puVar2;
      if ((((uVar10 == 0) && (uVar7 <= (uint)puVar2[1])) && ((uint)puVar2[1] < uVar8)) ||
         ((puVar4 = puVar2, uVar7 <= uVar10 && (uVar10 < uVar8)))) {
        puVar4 = puVar2;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = puVar2;
          puVar4 = puVar5;
        }
        if (puVar11 == puVar2) {
          *puVar3 = puVar9;
          puVar11 = puVar9;
        }
        *puVar2 = 0;
        puVar5 = puVar4;
        puVar6 = puVar2;
        puVar4 = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar9;
        }
      }
    }
    func_02008b80();
    if (puVar5 == (undefined4 *)0x0) break;
    do {
      puVar6 = (undefined4 *)*puVar5;
      if ((code *)puVar5[1] != (code *)0x0) {
        (*(code *)puVar5[1])(puVar5[2]);
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  return;
}
