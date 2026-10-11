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

extern int func_02022ffc();
extern int func_02023f04();
extern int func_0202404c();
extern int func_0202d844();
extern int func_020389a8();

undefined4 func_0202d6dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_18;

  piVar1 = ((unsigned int)0x0202d834);
  local_18 = param_4;
  iVar3 = func_02022ffc((*(unsigned int *)0x0202d834) + 0xf0,0xfc);
  iVar5 = ((unsigned int)0x0202d838);
  if (iVar3 != 0) {
    return 0;
  }
  if (((*(uint *)(param_1 + ((unsigned int)0x0202d838)) & 1) == 0) &&
     ((*(uint *)(param_1 + ((unsigned int)0x0202d838)) & 2) == 0)) {
    uVar4 = *(undefined4 *)*piVar1;
    if (*(char *)(*piVar1 + 0x14f) == '\0') {
      iVar3 = func_0202404c(uVar4,0);
      if ((((iVar3 != 0) && (*(char *)(param_1 + iVar5 + -10) != '\0')) &&
          (*(short *)(param_1 + 0xab0) != 0xe)) &&
         ((*(ushort *)(*(int *)((*(unsigned int *)0x0202d83c) + 0xc) + 2) & 4) != 0)) {
        if (*(int *)(param_1 + 0xad0) == *(int *)(param_1 + 0xac8) + 0x1000) {
          func_0202d844(param_1);
          uVar2 = 0xb;
        }
        else {
          *(uint *)(param_1 + ((unsigned int)0x0202d838)) = *(uint *)(param_1 + ((unsigned int)0x0202d838)) | 0x30;
          func_02023f04(*(undefined4 *)(*(unsigned int *)0x0202d834),0,4,4);
          uVar2 = 7;
        }
        *(undefined2 *)(param_1 + 0xab0) = uVar2;
        *(undefined1 *)((*(unsigned int *)0x0202d834) + 0x90) = 1;
        return 1;
      }
    }
    else {
      iVar3 = func_0202404c(uVar4,0);
      if (((iVar3 != 0) && (*(char *)(param_1 + iVar5 + -10) != '\0')) &&
         (*(short *)(param_1 + 0xab0) != 0xe)) {
        local_18 = 0;
        bVar6 = ((uint)*(ushort *)(*(int *)((*(unsigned int *)0x0202d83c) + 0xc) + 2) & iVar5 + 0x27U) != 0;
        iVar5 = func_020389a8((*(unsigned int *)0x0202d840),0,(int)&local_18 + 2,&local_18);
        if (iVar5 == 0) {
          *(uint *)(param_1 + ((unsigned int)0x0202d838)) = *(uint *)(param_1 + ((unsigned int)0x0202d838)) | 0x100;
        }
        else if ((*(uint *)(param_1 + ((unsigned int)0x0202d838)) & 0x100) != 0) {
          bVar6 = true;
        }
        piVar1 = ((unsigned int)0x0202d834);
        if (bVar6) {
          func_02023f04(*(undefined4 *)(*(unsigned int *)0x0202d834),0,3,0x1e);
          func_02023f04(*(undefined4 *)*piVar1,1,3,0x1e);
          *(undefined2 *)(param_1 + 0xab0) = 0xb;
          *(undefined1 *)(*piVar1 + 0x90) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}
