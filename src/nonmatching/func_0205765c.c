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

extern int func_0200418c();
extern int func_020041f0();
extern int func_02007820();

void func_0205765c(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;

  if (param_1[5] == 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 1);
    iVar8 = *param_1 * 0x540 + ((unsigned int)0x02057850) + 0x100 + uVar6 * 8;
    uVar4 = (*(ushort *)((int)param_1 + 6) - uVar6) + 1 & 0xffff;
    uVar6 = (uVar6 & 0x1fff) << 3;
    pcVar9 = *(code **)(((unsigned int)0x02057854) + *param_1 * 4);
    uVar10 = 0;
    if (uVar4 != 0) {
      do {
        (*pcVar9)(iVar8,uVar6,6);
        uVar3 = uVar10 + 1;
        uVar6 = uVar6 + 8 & 0xffff;
        iVar8 = iVar8 + 8;
        uVar10 = uVar3 & 0xffff;
      } while ((uVar3 & 0xffff) < uVar4);
    }
    bVar2 = false;
    if (((uint)*(ushort *)((int)param_1 + 0xe) <= *(ushort *)(param_1 + 3) + 1) &&
       ((uint)*(ushort *)((int)param_1 + 10) <= (uint)*(ushort *)(param_1 + 3))) {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = (uint)*(ushort *)((int)param_1 + 10);
      iVar8 = *param_1 * 0x540 + ((unsigned int)0x02057850) + 0x100 + uVar6 * 0x20;
      pcVar9 = *(code **)(((unsigned int)0x02057854) + *param_1 * 4);
      uVar4 = (*(ushort *)(param_1 + 3) - uVar6) + 1 & 0xffff;
      uVar6 = (uVar6 & 0x7ff) << 5;
      uVar10 = 0;
      if (uVar4 != 0) {
        do {
          (*pcVar9)(iVar8 + 6,uVar6 + 6,2);
          (*pcVar9)(iVar8 + 0xe,uVar6 + 0xe,2);
          (*pcVar9)(iVar8 + 0x16,uVar6 + 0x16,2);
          (*pcVar9)(iVar8 + 0x1e,uVar6 + 0x1e,2);
          uVar6 = uVar6 + 0x20 & 0xffff;
          iVar8 = iVar8 + 0x20;
          uVar3 = uVar10 + 1;
          uVar10 = uVar3 & 0xffff;
        } while ((uVar3 & 0xffff) < uVar4);
        return;
      }
      return;
    }
    return;
  }
  iVar7 = *param_1;
  uVar4 = (uint)*(ushort *)(param_1 + 1);
  iVar5 = iVar7 * 0x540 + ((unsigned int)0x02057850) + 0x100;
  iVar8 = ((*(ushort *)((int)param_1 + 6) - uVar4) + 1 & 0x1fff) << 3;
  iVar1 = (uVar4 & 0x1fff) << 3;
  func_02007820(iVar5 + uVar4 * 8,iVar8);
  if (iVar7 == 0) {
    func_0200418c(iVar5 + uVar4 * 8,iVar1,iVar8);
    return;
  }
  if (iVar7 == 1) {
    func_020041f0(iVar5 + uVar4 * 8,iVar1,iVar8);
    return;
  }
  return;
}
