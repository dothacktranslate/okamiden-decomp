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
extern int func_0201622c();
extern int func_0201a9d4();

undefined1 * func_02016344(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;

  iVar1 = ((unsigned int)0x02016510);
  iVar4 = ((unsigned int)0x02016504);
  if (param_3 == ((unsigned int)0x02016500)) {
    iVar10 = 2;
  }
  else if (param_3 == ((unsigned int)0x02016508)) {
    iVar10 = 3;
  }
  else {
    iVar10 = 4;
    if (param_3 != ((unsigned int)0x0201650c)) {
      iVar10 = 5;
    }
  }
  param_2 = param_2 + -1;
  if (param_2 < 0) {
    return (undefined1 *)0x0;
  }
  iVar7 = iVar10 * 0x18;
  iVar3 = func_02007600(((unsigned int)0x02016510) + iVar7);
  iVar2 = ((unsigned int)0x02016518);
  if (iVar3 == 0) {
    *(undefined4 *)(((unsigned int)0x02016518) + iVar10 * 4) = *(undefined4 *)(*(int *)(((unsigned int)0x02016514) + 4) + 0x6c);
    *(undefined4 *)(iVar4 + iVar10 * 4) = 1;
  }
  else if (*(int *)(((unsigned int)0x02016518) + iVar10 * 4) == *(int *)(*(int *)(((unsigned int)0x02016514) + 4) + 0x6c)) {
    *(int *)(((unsigned int)0x02016504) + iVar10 * 4) = *(int *)(((unsigned int)0x02016504) + iVar10 * 4) + 1;
  }
  else {
    func_02007558(iVar1 + iVar7);
    iVar4 = ((unsigned int)0x02016504);
    *(undefined4 *)(iVar2 + iVar10 * 4) = *(undefined4 *)(*(int *)(((unsigned int)0x02016514) + 4) + 0x6c);
    *(undefined4 *)(iVar4 + iVar10 * 4) = 1;
  }
  puVar9 = param_1;
  puVar8 = param_1;
  if (param_2 != 0) {
    while( true ) {
      iVar4 = func_0201a9d4(param_3,0xffffffff);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_3 + 0x28);
        *(int *)(param_3 + 0x28) = iVar4 + -1;
        if (iVar4 == 0) {
          uVar5 = func_0201622c(param_3);
        }
        else {
          pbVar6 = *(byte **)(param_3 + 0x24);
          *(byte **)(param_3 + 0x24) = pbVar6 + 1;
          uVar5 = (uint)*pbVar6;
        }
      }
      else {
        uVar5 = 0xffffffff;
      }
      if (uVar5 == 0xffffffff) break;
      puVar9 = puVar8 + 1;
      *puVar8 = (char)uVar5;
      if ((uVar5 == 10) || (param_2 = param_2 + -1, puVar8 = puVar9, param_2 == 0))
      goto LAB_020164d0;
    }
    if ((*(char *)(param_3 + 0xc) == '\0') || (puVar9 = puVar8, puVar8 == param_1)) {
      iVar4 = *(int *)(((unsigned int)0x02016504) + iVar10 * 4) + -1;
      *(int *)(((unsigned int)0x02016504) + iVar10 * 4) = iVar4;
      if (iVar4 == 0) {
        func_020075a8(iVar1 + iVar7);
      }
      return (undefined1 *)0x0;
    }
  }
LAB_020164d0:
  iVar4 = *(int *)(((unsigned int)0x02016504) + iVar10 * 4) + -1;
  *(int *)(((unsigned int)0x02016504) + iVar10 * 4) = iVar4;
  if (iVar4 == 0) {
    func_020075a8(iVar1 + iVar7);
  }
  *puVar9 = 0;
  return param_1;
}
