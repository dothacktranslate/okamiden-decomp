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

extern int func_02019368();
extern int func_0204661c();
extern int func_02046830();
extern int func_02046868();
extern int func_02047988();
extern int func_02047aa8();
extern int func_020501a4();
extern int func_02050d78();
extern int func_02051054();
extern int func_0205117c();

int func_020511f4(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r8;
  bool bVar6;
  int local_13c;
  uint local_138;
  int local_134;
  uint local_130;
  undefined4 local_12c;
  undefined4 local_128;

  iVar1 = func_02047988(param_1,1,&local_138);
  pcVar2 = (char *)func_02047988(param_1,2,&local_13c);
  uVar3 = func_02047aa8(param_1,3,1);
  iVar4 = func_020501a4(uVar3,local_138);
  uVar5 = iVar4 - 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (local_138 < uVar5) {
    uVar5 = local_138;
  }
  if ((param_2 == 0) ||
     ((iVar4 = func_0204661c(param_1,4), iVar4 == 0 &&
      (iVar4 = func_02019368(pcVar2,((unsigned int)0x020513b4)), iVar4 != 0)))) {
    uVar5 = iVar1 + uVar5;
    if (*pcVar2 == '^') {
      unaff_r8 = 1;
    }
    local_130 = iVar1 + local_138;
    if (*pcVar2 == '^') {
      pcVar2 = pcVar2 + 1;
    }
    else {
      unaff_r8 = 0;
    }
    local_134 = iVar1;
    local_12c = param_1;
    do {
      local_128 = 0;
      iVar4 = func_02050d78(&local_134,uVar5,pcVar2);
      if (iVar4 != 0) {
        if (param_2 == 0) {
          iVar1 = func_0205117c(&local_134,uVar5,iVar4);
          return iVar1;
        }
        func_02046868(param_1,(uVar5 - iVar1) + 1);
        func_02046868(param_1,iVar4 - iVar1);
        iVar1 = func_0205117c(&local_134,0,0);
        return iVar1 + 2;
      }
      bVar6 = uVar5 < local_130;
      uVar5 = uVar5 + 1;
    } while ((bVar6) && (unaff_r8 == 0));
  }
  else {
    iVar4 = func_02051054(iVar1 + uVar5,local_138 - uVar5,pcVar2,local_13c);
    if (iVar4 != 0) {
      func_02046868(param_1,(iVar4 - iVar1) + 1);
      func_02046868(param_1,local_13c + (iVar4 - iVar1));
      return 2;
    }
  }
  func_02046830(param_1);
  return 1;
}
