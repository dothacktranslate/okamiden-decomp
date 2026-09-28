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

extern int func_0201d518();
extern int func_0201e0e0();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 func_0201d028(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;

  iVar2 = ((unsigned int)0x0201d1e8);
  uVar4 = (((unsigned int)0x0201d1d8) & (int)param_2 >> 0x14) + (0x400 - ((unsigned int)0x0201d1d8));
  if ((int)uVar4 < 0x14) {
    uVar7 = uVar4 == 0;
    uVar6 = 1;
    if ((int)uVar4 < 0) {
      uVar8 = func_0201d518(((unsigned int)0x0201d1dc),((unsigned int)0x0201d1e0),param_1,param_2);
      func_0201e0e0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0);
      if ((bool)uVar6 && !(bool)uVar7) {
        if ((int)param_2 < 0) {
          if ((param_2 & 0x7fffffff) != 0 || param_1 != 0) {
            param_1 = 0;
            param_2 = ((unsigned int)0x0201d1e4);
          }
        }
        else {
          param_1 = 0;
          param_2 = 0;
        }
      }
    }
    else {
      bVar1 = (param_2 & ((unsigned int)0x0201d1e8) >> (uVar4 & 0xff)) == 0;
      uVar7 = param_1 == 0 && bVar1;
      uVar6 = 1;
      if (param_1 == 0 && bVar1) {
        return CONCAT44(param_2,param_1);
      }
      func_0201d518(((unsigned int)0x0201d1dc),((unsigned int)0x0201d1e0),param_1,param_2);
      func_0201e0e0();
      if ((bool)uVar6 && !(bool)uVar7) {
        if ((int)param_2 < 0) {
          param_2 = param_2 + (0x100000 >> (uVar4 & 0xff));
        }
        param_2 = param_2 & ~(iVar2 >> (uVar4 & 0xff));
        param_1 = 0;
      }
    }
  }
  else {
    if (0x33 < (int)uVar4) {
      if (uVar4 != 0x400) {
        return CONCAT44(param_2,param_1);
      }
      uVar8 = func_0201d518(param_1,param_2,param_1,param_2);
      return uVar8;
    }
    uVar3 = ((unsigned int)0x0201d1d8) - 0x800;
    uVar5 = uVar4 - 0x14 & 0xff;
    uVar6 = uVar5 == 0 && 0x32 < uVar4 || uVar5 != 0 && (bool)((byte)(uVar3 >> uVar5 - 1) & 1);
    uVar7 = (param_1 & uVar3 >> uVar5) == 0;
    if ((bool)uVar7) {
      return CONCAT44(param_2,param_1);
    }
    func_0201d518(((unsigned int)0x0201d1dc),((unsigned int)0x0201d1e0),param_1,param_2);
    func_0201e0e0();
    if ((bool)uVar6 && !(bool)uVar7) {
      uVar5 = param_1;
      if ((int)param_2 < 0) {
        if (uVar4 == 0x14) {
          param_2 = param_2 + 1;
        }
        else {
          uVar5 = param_1 + (1 << (0x34 - uVar4 & 0xff));
          if (uVar5 < param_1) {
            param_2 = param_2 + 1;
          }
        }
      }
      param_1 = uVar5 & ~(uVar3 >> (uVar4 - 0x14 & 0xff));
    }
  }
  return CONCAT44(param_2,param_1);
}
