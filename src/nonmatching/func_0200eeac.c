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

void func_0200eeac(short *param_1)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;

  iVar3 = ((unsigned int)0x0200ef90);
  if (param_1 != (short *)0x0) {
    func_02008b6c();
    puVar2 = ((unsigned int)0x0200ef94);
    iVar4 = (int)param_1[2];
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
    }
    else {
      (*(unsigned int *)0x0200ef94) = 0;
      puVar2[8] = 0;
      puVar2[9] = 0x1000;
      sVar1 = *param_1;
      *(int *)(puVar2 + 0xc) = iVar4;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(int *)(iVar3 + 0x1c) = (int)sVar1;
      *(int *)(iVar3 + 0x20) = iVar4;
      do {
      } while ((*puVar2 & 0x8000) != 0);
      *(undefined4 *)(iVar3 + 0x24) = (*(unsigned int *)0x0200ef98);
    }
    puVar2 = ((unsigned int)0x0200ef94);
    iVar4 = (int)param_1[3];
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
    }
    else {
      (*(unsigned int *)0x0200ef94) = 0;
      puVar2[8] = 0;
      puVar2[9] = 0x1000;
      sVar1 = param_1[1];
      *(int *)(puVar2 + 0xc) = iVar4;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(int *)(iVar3 + 0x28) = (int)sVar1;
      *(int *)(iVar3 + 0x2c) = iVar4;
      do {
      } while ((*puVar2 & 0x8000) != 0);
      *(undefined4 *)(iVar3 + 0x30) = (*(unsigned int *)0x0200ef98);
    }
    func_02008b80();
    *(undefined2 *)(iVar3 + 0x34) = 1;
    return;
  }
  *(undefined2 *)(((unsigned int)0x0200ef90) + 0x34) = 0;
  return;
}
