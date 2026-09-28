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

extern int func_02035924();
extern int func_02037fb4();
extern int func_0x020a0e04();

undefined4 *
func_0202e164(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  *param_1 = ((unsigned int)0x0202e204);
  param_1[1] = 0;
  param_1[2] = 0;
  func_02037fb4(param_1 + 3,0,0,0,param_4);
  uVar1 = ((unsigned int)0x0202e208);
  param_1[5] = 0;
  *param_1 = uVar1;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  func_02035924();
  *param_1 = ((unsigned int)0x0202e20c);
  puVar4 = param_1 + 0x4c;
  do {
    func_0x020a0e04(puVar4);
    iVar2 = ((unsigned int)0x0202e210);
    puVar4 = puVar4 + 0x13;
  } while (puVar4 < param_1 + 0x2ac);
  *(undefined2 *)((int)param_1 + ((unsigned int)0x0202e210)) = param_2;
  *(undefined4 *)((int)param_1 + iVar2 + 4) = 0;
  *(undefined1 *)((int)param_1 + iVar2 + 8) = 0;
  *(undefined4 *)((int)param_1 + iVar2 + 0x10) = 0;
  iVar3 = ((unsigned int)0x0202e214);
  *(undefined4 *)((int)param_1 + iVar2 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + iVar3) = 0;
  *(undefined1 *)((int)param_1 + iVar3 + 1) = 1;
  *(undefined2 *)((int)param_1 + iVar3 + 3) = 0;
  *(undefined1 *)((int)param_1 + iVar3 + 5) = 1;
  *(undefined1 *)((int)param_1 + iVar3 + 6) = 0;
  *(undefined4 *)((int)param_1 + ((unsigned int)0x0202e218)) = 0;
  *(uint *)((*(unsigned int *)0x0202e21c) + 0x124) = *(uint *)((*(unsigned int *)0x0202e21c) + 0x124) | 0x80000000;
  return param_1;
}
