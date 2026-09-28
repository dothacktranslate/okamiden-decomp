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

extern int func_0201e54c();
extern int func_020542c0();
extern int func_0205471c();

bool func_02054a68(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;

  uVar4 = param_2[1] == 7;
  switch(param_2[1]) {
  case 0:
    return true;
  case 1:
    return *param_2 == *param_3;
  case 2:
    return *param_2 == *param_3;
  case 3:
    func_0201e54c(*param_2,*param_3);
    return (bool)uVar4;
  case 4:
    break;
  case 5:
    iVar3 = *param_3;
    iVar2 = *param_2;
    if (iVar2 == iVar3) {
      return true;
    }
    goto LAB_02054b24;
  case 6:
    break;
  case 7:
    iVar3 = *param_3;
    iVar2 = *param_2;
    if (iVar2 == iVar3) {
      return true;
    }
LAB_02054b24:
    iVar2 = func_0205471c(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar3 + 8),4);
    if (iVar2 != 0) {
      func_020542c0(param_1,*(undefined4 *)(param_1 + 8),iVar2,param_2);
      bVar1 = true;
      iVar2 = (*(int **)(param_1 + 8))[1];
      if (iVar2 != 0) {
        bVar5 = iVar2 == 1;
        if (bVar5) {
          iVar2 = **(int **)(param_1 + 8);
        }
        if (!bVar5 || iVar2 != 0) {
          bVar1 = false;
        }
      }
      return !bVar1;
    }
    return false;
  }
  return *param_2 == *param_3;
}
