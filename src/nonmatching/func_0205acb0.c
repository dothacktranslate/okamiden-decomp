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

void func_0205acb0(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;

  puVar5 = ((unsigned int)0x0205ad3c);
  uVar4 = 0;
  *param_1 = 0;
  param_1[2] = param_2;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0x7f;
  param_1[1] = 0x1000;
  param_1[5] = param_4;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[3] = 0;
  uVar3 = *puVar5;
  if (uVar3 == 0) {
    return;
  }
  while( true ) {
    puVar1 = (uint *)(uint)*(byte *)(((unsigned int)0x0205ad40) + uVar4 * 8);
    bVar6 = (uint *)(uint)*param_2 == puVar1;
    if (bVar6) {
      puVar5 = (uint *)(uint)*(ushort *)(param_2 + 2);
      puVar1 = (uint *)(uint)*(ushort *)(((unsigned int)0x0205ad40) + uVar4 * 8 + 2);
    }
    if (bVar6 && puVar5 == puVar1) break;
    uVar4 = uVar4 + 1;
    if (uVar3 <= uVar4) {
      return;
    }
  }
  pcVar2 = *(code **)(((unsigned int)0x0205ad44) + uVar4 * 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    return;
  }
  return;
}
