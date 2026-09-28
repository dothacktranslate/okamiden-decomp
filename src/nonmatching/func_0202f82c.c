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

extern int func_02018ba4();
extern int func_02036bbc();
extern int func_02036bd4();
extern int func_0203b220();
extern int func_0203b358();
extern int func_0203b44c();
extern int func_0203c8ac();
extern int func_0203c8c4();
extern int func_0205f240();
extern int func_0x0209113c();

void func_0202f82c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;

  uVar1 = (*(unsigned int *)0x0202f9c4);
  uStack_18 = param_4;
  func_02018ba4(auStack_28,((unsigned int)0x0202f9c8),param_2);
  iVar5 = 0;
  do {
    if ((iVar5 == 3) && ((*(uint *)(param_1 + 0x108) & 0xffff) == ((unsigned int)0x0202f9cc))) {
      uVar2 = func_0x0209113c(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202f9d0) + 0x5c) + 0x34));
      func_02018ba4(auStack_28,((unsigned int)0x0202f9d4),uVar2);
    }
    iVar6 = param_1 + iVar5 * 8;
    iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 0x114) * 4 + 0x4c);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 0)) {
      iVar3 = param_1 + iVar5 * 4;
      if (*(int *)(iVar3 + 0x6c) != 0) {
        func_0203c8c4(*(undefined4 *)(param_1 + 0x48));
        func_0203b44c(uVar1,*(undefined4 *)(iVar3 + 0x6c));
        *(undefined4 *)(iVar3 + 0x6c) = 0;
      }
      if ((iVar5 == 0) || (iVar5 == 3)) {
        iVar3 = func_02036bd4(*(undefined4 *)(iVar6 + *(int *)(param_1 + 0x114) * 4 + 0x4c),
                             auStack_28);
      }
      else {
        iVar3 = func_02036bbc(*(undefined4 *)(iVar6 + *(int *)(param_1 + 0x114) * 4 + 0x4c),0);
      }
      if (iVar3 != 0) {
        if (iVar5 == 3) {
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x14);
          uVar4 = func_0205f240(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 8) + 0x10));
          uVar2 = func_0203b358(uVar1,iVar3,uVar2,uVar4,((unsigned int)0x0202f9d8));
          *(undefined4 *)(param_1 + 0x78) = uVar2;
          func_0203c8ac(*(undefined4 *)(param_1 + 0x48));
          func_0203b220(*(undefined4 *)(param_1 + 0x78),0);
          *(uint *)(*(int *)(param_1 + 0x78) + 0xc) =
               *(uint *)(*(int *)(param_1 + 0x78) + 0xc) & 0xfffffffd;
          iVar3 = *(int *)(param_1 + 0x78);
        }
        else {
          if (iVar5 != 0) {
            uVar2 = func_0203b358(uVar1,iVar3,*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x14),0,
                                 ((unsigned int)0x0202f9dc));
            iVar3 = param_1 + iVar5 * 4;
            *(undefined4 *)(iVar3 + 0x6c) = uVar2;
            func_0203c8ac(*(undefined4 *)(param_1 + 0x48));
            *(uint *)(*(int *)(iVar3 + 0x6c) + 0xc) = *(uint *)(*(int *)(iVar3 + 0x6c) + 0xc) | 2;
            func_0203b220(*(undefined4 *)(iVar3 + 0x6c),0);
            goto LAB_0202f9b0;
          }
          uVar2 = func_0203b358(uVar1,iVar3,*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x14),0,
                               ((unsigned int)0x0202f9e0));
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
          func_0203c8ac(*(undefined4 *)(param_1 + 0x48));
          *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10) = 0x1000;
          iVar3 = *(int *)(param_1 + 0x6c);
        }
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
      }
    }
LAB_0202f9b0:
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      return;
    }
  } while( true );
}
