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

extern int func_0201e9d4();
extern int func_02023f04();
extern int func_02023fec();
extern int func_0202404c();
extern int func_020240e8();
extern int func_020465d8();
extern int func_02046868();

undefined4 func_02025708(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  puVar1 = (undefined4 *)(*(unsigned int *)0x02025824);
  uVar2 = *puVar1;
  iVar3 = func_020240e8(uVar2,0);
  uVar5 = 1;
  iVar4 = func_020465d8(param_1,1);
  switch(iVar4 - ((unsigned int)0x02025828)) {
  case 0:
    if (iVar3 == 0) {
      uVar5 = func_020465d8(param_1,3);
      uVar5 = func_0201e9d4(uVar5,*(undefined1 *)(puVar1 + 0x2d));
      func_02023f04(uVar2,0,1,uVar5);
      uVar5 = 0xffffffff;
    }
    else {
LAB_020257de:
      uVar5 = 0;
    }
    break;
  case 1:
    if (iVar3 != 0) goto LAB_020257de;
    iVar3 = func_020465d8(param_1,3);
    if (iVar3 < 1) {
      func_02023fec(uVar2,0,0xfffffff0);
    }
    else {
      uVar5 = func_0201e9d4(iVar3,*(undefined1 *)(puVar1 + 0x2d));
      func_02023f04(uVar2,0,3,uVar5);
    }
    uVar5 = 0xffffffff;
    break;
  case 2:
    if (iVar3 != 0) goto LAB_020257de;
    uVar5 = func_020465d8(param_1,3);
    uVar5 = func_0201e9d4(uVar5,*(undefined1 *)(puVar1 + 0x2d));
    func_02023f04(uVar2,0,2,uVar5);
    uVar5 = 0xffffffff;
    break;
  case 3:
    if (iVar3 != 0) goto LAB_020257de;
    uVar5 = func_020465d8(param_1,3);
    uVar5 = func_0201e9d4(uVar5,*(undefined1 *)(puVar1 + 0x2d));
    func_02023f04(uVar2,0,4,uVar5);
    uVar5 = 0xffffffff;
    break;
  case 4:
    iVar3 = func_0202404c(uVar2,0);
    if (iVar3 != 0) {
      uVar5 = 0xffffffff;
    }
    break;
  default:
    goto switchD_0202573c_default;
  }
  func_02046868(param_1,uVar5);
switchD_0202573c_default:
  return 1;
}
