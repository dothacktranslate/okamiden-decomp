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

extern int func_02039a58();
extern int func_02039ad8();
extern int func_02039c48();
extern int func_02041650();

void func_02039cf0(int param_1)

{
  int *piVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      (*(unsigned int *)0x02039de0) = (*(unsigned int *)0x02039de0) & 0xffffe0ff | 0x1000;
    }
    func_02039a58(param_1);
    iVar2 = *(int *)(param_1 + 0x2c) + 0x14;
    *(int *)(param_1 + 0x2c) = iVar2;
    if (0xbf < iVar2) {
      *(undefined4 *)(param_1 + 0x1c) = 4;
      *(undefined4 *)(param_1 + 0x2c) = 0xc0;
    }
    func_02039c48(param_1);
    return;
  }
  if ((int)((*(unsigned int *)0x02039dd8) & 0x8000) >> 0xf == 1) {
    func_02039a58();
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -0x1e;
    func_02039c48(param_1);
    piVar1 = ((unsigned int)0x02039ddc);
    if (*(int *)(param_1 + 0x2c) < 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      func_02041650(*piVar1,0);
      *(undefined4 *)(param_1 + 0x1c) = 4;
      iVar2 = *piVar1;
      func_02041650(iVar2,0);
      *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xfffffffc;
      func_02039ad8(param_1);
      return;
    }
    return;
  }
  return;
}
