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

extern int func_02046204();
extern int func_02046414();
extern int func_02046b84();
extern int func_02047714();
extern int func_0205341c();
extern int func_02053450();

void func_020534e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;

  local_28 = param_3;
  if (param_3 <= param_2) {
    return;
  }
  do {
    func_02046b84(param_1,1,param_2);
    func_02046b84(param_1,1,local_28);
    iVar1 = func_02053450(param_1,0xffffffff,0xfffffffe);
    if (iVar1 == 0) {
      func_02046204(param_1,0xfffffffd);
    }
    else {
      func_0205341c(param_1,param_2,local_28);
    }
    if (local_28 - param_2 == 1) {
      return;
    }
    iVar1 = (param_2 + local_28) / 2;
    func_02046b84(param_1,1,iVar1);
    func_02046b84(param_1,1,param_2);
    iVar2 = func_02053450(param_1,0xfffffffe,0xffffffff);
    iVar3 = param_2;
    if (iVar2 == 0) {
      func_02046204(param_1,0xfffffffe);
      func_02046b84(param_1,1,local_28);
      iVar2 = func_02053450(param_1,0xffffffff,0xfffffffe);
      iVar3 = local_28;
      if (iVar2 != 0) goto LAB_020535cc;
      func_02046204(param_1,0xfffffffd);
    }
    else {
LAB_020535cc:
      func_0205341c(param_1,iVar1,iVar3);
    }
    if (local_28 - param_2 == 2) {
      return;
    }
    func_02046b84(param_1,1,iVar1);
    func_02046414(param_1,0xffffffff);
    func_02046b84(param_1,1,local_28 + -1);
    func_0205341c(param_1,iVar1,local_28 + -1);
    iVar1 = local_28 + -1;
    iVar3 = param_2;
    while( true ) {
      while( true ) {
        iVar4 = iVar3 + 1;
        func_02046b84(param_1,1,iVar4);
        iVar2 = func_02053450(param_1,0xffffffff,0xfffffffe);
        if (iVar2 == 0) break;
        if (local_28 < iVar4) {
          func_02047714(param_1,((unsigned int)0x02053804));
        }
        func_02046204(param_1,0xfffffffe);
        iVar3 = iVar4;
      }
      iVar1 = iVar1 + -1;
      func_02046b84(param_1,1,iVar1);
      iVar2 = func_02053450(param_1,0xfffffffd,0xffffffff);
      while (iVar2 != 0) {
        if (iVar1 < param_2) {
          func_02047714(param_1,((unsigned int)0x02053808));
        }
        func_02046204(param_1,0xfffffffe);
        iVar1 = iVar1 + -1;
        func_02046b84(param_1,1,iVar1);
        iVar2 = func_02053450(param_1,0xfffffffd,0xffffffff);
      }
      if (iVar1 < iVar4) break;
      func_0205341c(param_1,iVar4,iVar1);
      iVar3 = iVar4;
    }
    func_02046204(param_1,0xfffffffc);
    func_02046b84(param_1,1,local_28 + -1);
    func_02046b84(param_1,1,iVar4);
    func_0205341c(param_1,local_28 + -1,iVar4);
    if (iVar4 - param_2 < local_28 - iVar4) {
      iVar1 = iVar3;
      param_2 = iVar3 + 2;
      iVar2 = param_2;
    }
    else {
      iVar2 = iVar3 + 2;
      iVar1 = local_28;
      local_28 = iVar3;
    }
    func_020534e0(param_1,iVar2,iVar1);
    if (local_28 <= param_2) {
      return;
    }
  } while( true );
}
