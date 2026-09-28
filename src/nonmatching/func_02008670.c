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

extern int func_0200656c();
extern int func_02008384();
extern int func_02008424();
extern int func_020084cc();

void func_02008670(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined8 uVar7;

  (*(unsigned int *)0x02008750) = 0;
  func_0200656c(0x10);
  *(uint *)(((unsigned int)0x02008754) + 0x3ff8) = *(uint *)(((unsigned int)0x02008754) + 0x3ff8) | 0x10;
  uVar7 = func_02008384();
  iVar1 = ((unsigned int)0x02008758);
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
  puVar5 = *(undefined4 **)(((unsigned int)0x02008758) + 4);
  if (puVar5 == (undefined4 *)0x0) {
    return;
  }
  bVar6 = (uint)puVar5[4] <= uVar3;
  if (uVar3 == puVar5[4]) {
    bVar6 = (uint)puVar5[3] <= (uint)uVar7;
  }
  if (bVar6) {
    iVar2 = puVar5[6];
    *(int *)(((unsigned int)0x02008758) + 4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
    pcVar4 = (code *)*puVar5;
    if (puVar5[8] == 0 && puVar5[7] == 0) {
      *puVar5 = 0;
    }
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(puVar5[1]);
    }
    if (puVar5[8] != 0 || puVar5[7] != 0) {
      *puVar5 = pcVar4;
      func_020084cc(puVar5,0,0);
    }
    if (*(int *)(((unsigned int)0x02008758) + 4) != 0) {
      func_02008424();
      return;
    }
    return;
  }
  func_02008424(puVar5);
  return;
}
