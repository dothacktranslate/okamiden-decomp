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

extern int func_020028e0();
extern int func_02003ad0();
extern int func_0205c1a4();
extern int func_0205df8c();
extern int func_0205e0c0();

undefined4 func_0205e67c(int *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;

  local_40 = 0;
  local_3c = 0;
  func_0205e0c0(0x71,&local_40,2);
  func_0205df8c();
  do {
    iVar4 = func_02003ad0(&local_24,&local_28);
  } while (iVar4 != 0);
  uVar6 = func_020028e0(local_28);
  iVar4 = (int)(uVar6 >> 0x20);
  lVar2 = (ulonglong)local_24 * (uVar6 & 0xffffffff);
  lVar3 = (ulonglong)local_20 * (uVar6 & 0xffffffff);
  local_24 = (int)(iVar4 * local_24 +
                   (int)uVar6 * ((int)local_24 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20) +
                   (uint)(0x7fffffff < (uint)lVar2) + 0x1000) / 2;
  local_20 = (int)(iVar4 * local_20 +
                   (int)uVar6 * ((int)local_20 >> 0x1f) + (int)((ulonglong)lVar3 >> 0x20) +
                   (uint)(0x7fffffff < (uint)lVar3) + 0x1000) / 2;
  uVar5 = 0;
  if (-1 < (int)local_24 && -1 < (int)local_20) {
    uVar1 = local_24;
    if ((int)local_24 < 0x1001) {
      uVar1 = local_20;
    }
    if ((int)uVar1 < 0x1001) goto LAB_0205e748;
  }
  uVar5 = 0xffffffff;
LAB_0205e748:
  func_0205c1a4(&local_2c,&local_30,&local_34,&local_38);
  *param_1 = local_2c + ((int)(local_24 * (local_34 - local_2c) + 0x800) >> 0xc);
  *param_2 = (0xbf - local_30) - ((int)(local_20 * (local_38 - local_30) + 0x800) >> 0xc);
  return uVar5;
}
