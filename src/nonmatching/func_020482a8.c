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

extern int func_02016670();
extern int func_020461e8();
extern int func_02046204();
extern int func_02046414();
extern int func_02046654();
extern int func_02046ae8();
extern int func_02047028();
extern int func_02047714();

undefined4 func_020482a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  iVar3 = func_020461e8();
  iVar2 = ((unsigned int)0xffffd8ee);
  func_02046ae8(param_1,((unsigned int)0xffffd8ee),((unsigned int)0x02048368));
  iVar6 = 1;
  if (1 <= iVar3) {
    iVar1 = iVar2 >> 0xe;
    do {
      func_02046414(param_1,iVar1);
      func_02046414(param_1,iVar6);
      func_02047028(param_1,1,1);
      iVar4 = func_02046654(param_1,iVar1,0);
      if (iVar4 == 0) {
        uVar5 = func_02047714(param_1,((unsigned int)0x0204836c));
        return uVar5;
      }
      func_02046204(param_1,iVar2 >> 0xd);
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar3);
  }
  func_02016670(((unsigned int)0x02048370),((unsigned int)0x02048374));
  return 0;
}
