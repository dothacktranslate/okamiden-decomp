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

extern int func_02018d9c();
extern int func_02019064();
extern int func_02046204();
extern int func_0204626c();
extern int func_02046414();
extern int func_02046444();
extern int func_02046898();
extern int func_02046b4c();
extern int func_02046bc4();
extern int func_02046d10();

char * func_02047e18(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;

  func_02046414();
  do {
    pcVar1 = (char *)func_02019064(param_3,0x2e);
    if (pcVar1 == (char *)0x0) {
      iVar2 = func_02018d9c(param_3);
      pcVar1 = param_3 + iVar2;
    }
    func_02046898(param_1,param_3,(int)pcVar1 - (int)param_3);
    func_02046b4c(param_1,0xfffffffe);
    iVar2 = func_02046444(param_1,0xffffffff);
    if (iVar2 == 0) {
      func_02046204(param_1,0xfffffffe);
      uVar3 = 1;
      if (*pcVar1 != '.') {
        uVar3 = param_4;
      }
      func_02046bc4(param_1,0,uVar3);
      func_02046898(param_1,param_3,(int)pcVar1 - (int)param_3);
      func_02046414(param_1,0xfffffffe);
      func_02046d10(param_1,0xfffffffc);
    }
    else {
      iVar2 = func_02046444(param_1,0xffffffff);
      if (iVar2 != 5) {
        func_02046204(param_1,0xfffffffd);
        return param_3;
      }
    }
    func_0204626c(param_1,0xfffffffe);
    param_3 = pcVar1 + 1;
  } while (*pcVar1 == '.');
  return (char *)0x0;
}
