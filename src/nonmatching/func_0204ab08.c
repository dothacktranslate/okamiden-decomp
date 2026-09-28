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

extern int func_0204a704();
extern int func_0204a964();
extern int func_0204a9ec();
extern int func_0204b664();

undefined4 func_0204ab08(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  uVar2 = ((unsigned int)0x0204ac28);
  uVar5 = 1;
  if (param_4 == 0) {
    func_0204a9ec(param_3);
    return 1;
  }
  cVar1 = *param_2;
  do {
    if (cVar1 == '\0') {
      return uVar5;
    }
    if ('f' < cVar1) {
      if (cVar1 < 'o') {
        if ('k' < cVar1) {
          if (cVar1 == 'l') {
            if (param_5 == 0) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = func_0204a704(param_1,param_5);
            }
            *(undefined4 *)(param_3 + 0x14) = uVar3;
          }
          else {
            if (cVar1 != 'n') goto LAB_0204ac10;
            if (param_5 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = func_0204b664(param_1,param_5,param_3 + 4);
            }
            *(int *)(param_3 + 8) = iVar4;
            if (iVar4 == 0) {
              *(undefined4 *)(param_3 + 8) = uVar2;
              *(undefined4 *)(param_3 + 4) = 0;
            }
          }
          goto LAB_0204ac14;
        }
      }
      else if (cVar1 == 'u') {
        *(uint *)(param_3 + 0x18) = (uint)*(byte *)(param_4 + 7);
        goto LAB_0204ac14;
      }
      goto LAB_0204ac10;
    }
    if (cVar1 < 'f') {
      if (cVar1 < 'M') {
        if (cVar1 != 'L') {
LAB_0204ac10:
          uVar5 = 0;
        }
      }
      else {
        if (cVar1 != 'S') goto LAB_0204ac10;
        func_0204a964(param_3,param_4);
      }
    }
LAB_0204ac14:
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  } while( true );
}
