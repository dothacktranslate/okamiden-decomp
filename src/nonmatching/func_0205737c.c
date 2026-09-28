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

extern int func_0200986c();

undefined4 func_0205737c(int *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;

  iVar7 = param_4 * 0x540 + ((unsigned int)0x020574c8);
  uVar5 = param_2 + (param_3 - 1);
  uVar1 = uVar5 & 0xffff;
  for (puVar8 = (ushort *)(iVar7 + param_2 * 2); puVar8 <= (ushort *)(iVar7 + uVar1 * 2);
      puVar8 = puVar8 + 1) {
    if (*puVar8 != ((unsigned int)0x020574cc)) {
      bVar4 = false;
      goto LAB_020573e0;
    }
  }
  bVar4 = true;
LAB_020573e0:
  if (!bVar4) {
    return 0;
  }
  sVar2 = (*(unsigned int *)0x020574d0);
  (*(unsigned int *)0x020574d0) = sVar2 + 1;
  *(short *)(param_1 + 4) = sVar2;
  *(short *)(param_1 + 1) = (short)param_2;
  *(short *)((int)param_1 + 6) = (short)(uVar5 * 0x10000 >> 0x10);
  *(short *)(param_1 + 2) = (short)param_2;
  func_0200986c(sVar2,iVar7 + param_2 * 2,((uVar1 - param_2) + 1) * 2);
  uVar6 = (((param_3 & 0x3ffff) >> 2) - 1) + ((param_2 & 0x3ffff) >> 2);
  uVar1 = (param_2 & 0x3ffff) >> 2;
  iVar7 = iVar7 + 0x500;
  uVar5 = uVar6 & 0xffff;
  puVar8 = (ushort *)(iVar7 + uVar1 * 2);
  do {
    if ((ushort *)(iVar7 + uVar5 * 2) < puVar8) {
      bVar4 = true;
LAB_02057480:
      if (!bVar4) {
        return 0;
      }
      uVar3 = (undefined2)((param_2 << 0xe) >> 0x10);
      *(undefined2 *)((int)param_1 + 10) = uVar3;
      *(short *)(param_1 + 3) = (short)(uVar6 * 0x10000 >> 0x10);
      *(undefined2 *)((int)param_1 + 0xe) = uVar3;
      func_0200986c((short)param_1[4],iVar7 + uVar1 * 2,((uVar5 - uVar1) + 1) * 2);
      param_1[5] = 1;
      *param_1 = param_4;
      return 1;
    }
    if (*puVar8 != ((unsigned int)0x020574cc)) {
      bVar4 = false;
      goto LAB_02057480;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}
