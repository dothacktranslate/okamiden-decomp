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

extern int func_0201ebe0();
extern int func_02036bbc();
extern int func_02036bec();
extern int func_0203ba20();
extern int func_0203cc14();
extern int func_0203ce44();
extern int func_0203d930();

/* WARNING: Removing unreachable block (ram,0x0202f648) */

void func_0202f604(int param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  undefined4 uVar4;

  if (param_2 != (uint *)0x0) {
    uVar4 = (*(unsigned int *)0x0202f6d0);
    uVar1 = func_02036bec(param_2[2]);
    if (uVar1 <= param_3) {
      uVar2 = func_02036bec(param_2[2]);
      func_0201ebe0(param_3,uVar2);
      param_3 = extraout_r1;
    }
    uVar2 = func_02036bbc(param_2[2],param_3);
    iVar3 = func_0203ce44(uVar4,uVar2,0,0,0,((unsigned int)0x0202f6d4),param_4);
    *(int *)(param_1 + 0x48) = iVar3;
    *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x40000;
    *(uint *)(*(int *)(param_1 + 0x48) + 0xc) =
         ((unsigned int)0x0202f6d8) & *(uint *)(*(int *)(param_1 + 0x48) + 0xc);
    *(uint *)(*(int *)(param_1 + 0x48) + 0xc) =
         *(uint *)(*(int *)(param_1 + 0x48) + 0xc) & 0xfffffffe;
    if ((*param_2 & 0x10) == 0) {
      if ((*(uint *)(param_1 + 0xfc) & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 4;
      }
      func_0203ba20(param_2[2],uVar4);
      *param_2 = *param_2 | 0x10;
    }
    if ((*(uint *)(param_1 + 0xfc) & 1) != 0) {
      func_0203d930((*(unsigned int *)0x0202f6dc),*(undefined4 *)(param_1 + 0x48),param_2[2]);
    }
    func_0203cc14(*(undefined4 *)(param_1 + 0x48),((unsigned int)0x0202f6e0));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  return;
}
