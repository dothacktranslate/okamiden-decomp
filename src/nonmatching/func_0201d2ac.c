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

extern int func_02016974();
extern int func_0201cfe0();
extern int func_0201d518();
extern int func_0201dbfc();
extern int func_0201e2b8();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 func_0201d2ac(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_10;
  uint local_c;

  uVar8 = CONCAT44(param_2,param_1);
  iVar6 = func_02016974(param_1,param_2);
  bVar7 = iVar6 == 2;
  if ((iVar6 < 3) || (func_0201e2b8(0,0,param_1,param_2), uVar1 = ((unsigned int)0x0201d4e0), bVar7)) {
    return CONCAT44(param_2,param_1);
  }
  iVar6 = (int)(param_2 & ((unsigned int)0x0201d4e0)) >> 0x14;
  if (iVar6 == 0) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    uVar8 = func_0201dbfc(param_1,param_2,0,((unsigned int)0x0201d4e4));
    iVar6 = ((int)((uint)((ulonglong)uVar8 >> 0x20) & uVar1) >> 0x14) + -0x36;
    if (param_3 < ((unsigned int)0x0201d4e8)) {
      uVar8 = func_0201dbfc(((unsigned int)0x0201d4ec),((unsigned int)0x0201d4f0));
      return uVar8;
    }
  }
  uVar5 = ((unsigned int)0x0201d4fc);
  uVar4 = ((unsigned int)0x0201d4f8);
  uVar3 = ((unsigned int)0x0201d4f0);
  uVar2 = ((unsigned int)0x0201d4ec);
  local_c = (uint)((ulonglong)uVar8 >> 0x20);
  local_10 = (undefined4)uVar8;
  if (iVar6 == ((unsigned int)0x0201d4f4)) {
    uVar8 = func_0201d518(local_10,local_c,local_10,local_c);
    return uVar8;
  }
  iVar6 = iVar6 + param_3;
  if (iVar6 <= ((unsigned int)0x0201d4f4) + -1) {
    if (0 < iVar6) {
      return CONCAT44(local_c & ((unsigned int)0x0201d500) | iVar6 * 0x100000,local_10);
    }
    if (-0x36 < iVar6) {
      uVar8 = func_0201dbfc(0,((unsigned int)0x0201d508),local_10);
      return uVar8;
    }
    if (param_3 <= ((unsigned int)0x0201d504)) {
      uVar8 = func_0201cfe0(((unsigned int)0x0201d4ec),((unsigned int)0x0201d4f0),local_10,local_c);
      uVar8 = func_0201dbfc(uVar2,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      return uVar8;
    }
    uVar8 = func_0201cfe0(((unsigned int)0x0201d4f8),((unsigned int)0x0201d4fc),local_10,local_c);
    uVar8 = func_0201dbfc(uVar4,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    return uVar8;
  }
  uVar8 = func_0201cfe0(((unsigned int)0x0201d4f8),((unsigned int)0x0201d4fc),local_10,local_c);
  uVar8 = func_0201dbfc(uVar4,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  return uVar8;
}
