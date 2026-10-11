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

void func_02018db8(uint *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  uVar3 = (uint)param_2 & 3;
  if (((uint)param_1 & 3) == uVar3) {
    if (uVar3 != 0) {
      uVar5 = *param_2;
      *(char *)param_1 = (char)uVar5;
      if ((char)uVar5 == '\0') {
        return;
      }
      for (iVar4 = 3 - uVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        param_1 = (uint *)((int)param_1 + 1);
        *(char *)param_1 = cVar1;
        if (cVar1 == '\0') {
          return;
        }
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
    }
    uVar3 = ((unsigned int)0x02018e7c);
    iVar4 = ((unsigned int)0x02018e78);
    uVar5 = *param_2;
    if ((uVar5 + ((unsigned int)0x02018e78) & ~uVar5 & ((unsigned int)0x02018e7c)) == 0) {
      puVar2 = param_1 + -1;
      do {
        param_1 = puVar2;
        puVar2 = param_1 + 1;
        *puVar2 = uVar5;
        param_2 = param_2 + 1;
        uVar5 = *param_2;
      } while ((uVar5 + iVar4 & ~uVar5 & uVar3) == 0);
      param_1 = param_1 + 2;
    }
  }
  uVar3 = *param_2;
  *(char *)param_1 = (char)uVar3;
  if ((char)uVar3 != '\0') {
    do {
      param_2 = (uint *)((int)param_2 + 1);
      cVar1 = *(char *)param_2;
      param_1 = (uint *)((int)param_1 + 1);
      *(char *)param_1 = cVar1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}
