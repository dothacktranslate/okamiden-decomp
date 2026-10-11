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

extern int func_02008b6c();
extern int func_02008b80();
extern int func_02008e58();
extern int func_0200bfb4();
extern int func_02015ad0();

undefined4 func_0200c480(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;

  uVar4 = 0;
  uVar1 = func_02008b6c();
  iVar2 = func_0200bfb4(param_2,param_3);
  if (iVar2 != 0) goto LAB_0200c564;
  puVar3 = ((unsigned int)0x0200c578);
  for (iVar2 = (*(unsigned int *)0x0200c574); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    puVar3 = (undefined4 *)(iVar2 + 4);
  }
  *puVar3 = param_1;
  iVar2 = ((unsigned int)0x0200c57c);
  if (param_3 < 4) {
    *param_1 = 0;
    func_02015ad0(param_1,param_2,param_3 + 1,0,param_4);
  }
  else {
    if (param_3 < 0x10) {
      iVar5 = 0;
      do {
        if (iVar5 < 0x10) {
          if (*(char *)(iVar2 + iVar5 * 0x10) == '\0') goto code_r0x0200c52c;
        }
        else {
          func_02008e58();
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    func_02008e58();
  }
  goto LAB_0200c554;
code_r0x0200c52c:
  iVar2 = iVar2 + iVar5 * 0x10;
  func_02015ad0(iVar2,param_2,param_3 + 1);
  *param_1 = iVar2;
LAB_0200c554:
  uVar4 = 1;
  param_1[5] = param_1[5] | 1;
LAB_0200c564:
  func_02008b80(uVar1);
  return uVar4;
}
