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

extern int func_02007558();
extern int func_020075a8();
extern int func_02007600();
extern int func_0201651c();
extern int func_0201a9d4();

undefined4 func_02016670(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;

  iVar2 = ((unsigned int)0x020167d0);
  uVar10 = 0;
  if (param_2 == ((unsigned int)0x020167c8)) {
    iVar11 = 3;
  }
  else {
    iVar11 = 4;
    if (param_2 != ((unsigned int)0x020167cc)) {
      iVar11 = 5;
    }
  }
  iVar9 = iVar11 * 0x18;
  iVar4 = func_02007600(((unsigned int)0x020167d0) + iVar9);
  iVar5 = ((unsigned int)0x020167dc);
  iVar3 = ((unsigned int)0x020167d8);
  iVar6 = ((unsigned int)0x020167d4);
  if (iVar4 == 0) {
    *(undefined4 *)(((unsigned int)0x020167d8) + iVar11 * 4) = *(undefined4 *)(*(int *)(((unsigned int)0x020167d4) + 4) + 0x6c);
  }
  else {
    if (*(int *)(((unsigned int)0x020167d8) + iVar11 * 4) == *(int *)(*(int *)(((unsigned int)0x020167d4) + 4) + 0x6c)) {
      *(int *)(((unsigned int)0x020167dc) + iVar11 * 4) = *(int *)(((unsigned int)0x020167dc) + iVar11 * 4) + 1;
      goto LAB_02016728;
    }
    func_02007558(iVar2 + iVar9);
    iVar5 = ((unsigned int)0x020167dc);
    *(undefined4 *)(iVar3 + iVar11 * 4) = *(undefined4 *)(*(int *)(iVar6 + 4) + 0x6c);
  }
  *(undefined4 *)(iVar5 + iVar11 * 4) = 1;
LAB_02016728:
  bVar1 = *param_1;
  do {
    uVar7 = (uint)bVar1;
    if (uVar7 == 0) {
LAB_020167a4:
      iVar6 = *(int *)(((unsigned int)0x020167dc) + iVar11 * 4) + -1;
      *(int *)(((unsigned int)0x020167dc) + iVar11 * 4) = iVar6;
      if (iVar6 == 0) {
        func_020075a8(iVar2 + iVar9);
      }
      return uVar10;
    }
    param_1 = param_1 + 1;
    iVar6 = func_0201a9d4(param_2,0xffffffff);
    if (iVar6 < 0) {
      iVar6 = *(int *)(param_2 + 0x28);
      *(int *)(param_2 + 0x28) = iVar6 + -1;
      if (iVar6 == 0) {
        uVar7 = func_0201651c(uVar7,param_2);
      }
      else {
        pbVar8 = *(byte **)(param_2 + 0x24);
        *(byte **)(param_2 + 0x24) = pbVar8 + 1;
        *pbVar8 = bVar1;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar7 == 0xffffffff) {
      uVar10 = 0xffffffff;
      goto LAB_020167a4;
    }
    bVar1 = *param_1;
  } while( true );
}
