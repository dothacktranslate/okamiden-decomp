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

extern int func_020123dc();

bool func_02012518(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int unaff_r8;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  short local_28;
  short local_26;

  iVar10 = 0;
  iVar5 = 0;
  psVar7 = (short *)*param_5;
  iVar8 = param_5[1];
  iVar6 = 0;
  bVar11 = true;
  do {
    if ((iVar8 <= iVar6) || (param_3 <= iVar10)) goto LAB_0201263c;
    uVar1 = (undefined2)iVar6;
    if (*psVar7 == -1) {
      if (!bVar11) {
        if (iVar6 - 1U != (uint)*(ushort *)(param_1 + iVar10 * 2 + -2)) {
          *(short *)(param_1 + iVar10 * 2) = (short)(iVar6 - 1U);
          iVar10 = iVar10 + 1;
          if (param_3 <= iVar10) goto LAB_0201263c;
        }
        iVar5 = iVar5 + 1;
        *(undefined2 *)(param_1 + iVar10 * 2) = uVar1;
        iVar10 = iVar10 + 1;
        bVar11 = true;
        if (param_4 <= iVar5) {
          iVar6 = iVar6 + 1;
LAB_0201263c:
          *param_2 = iVar10;
          if (!bVar11) {
            if (0 < iVar10) {
              uVar3 = (uint)*(ushort *)(param_1 + (iVar10 + -1) * 2);
              uVar4 = iVar6 - 1;
              bVar11 = SBORROW4(uVar4,uVar3);
              iVar5 = uVar4 - uVar3;
              if (uVar4 != uVar3) {
                bVar11 = SBORROW4(iVar10,param_3);
                iVar5 = iVar10 - param_3;
              }
              if (iVar5 < 0 != bVar11) {
                *(short *)(param_1 + iVar10 * 2) = (short)uVar4;
                *param_2 = *param_2 + 1;
              }
            }
            func_020123dc(param_1,param_2,param_3,param_5);
          }
          return 0 < *param_2;
        }
      }
    }
    else {
      if (bVar11) {
        unaff_r8 = 0;
        *(undefined2 *)(param_1 + iVar10 * 2) = uVar1;
        iVar10 = iVar10 + 1;
        bVar11 = false;
      }
      else {
        iVar9 = (int)psVar7[1] - (int)local_26;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        iVar2 = (int)*psVar7 - (int)local_28;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        unaff_r8 = unaff_r8 + iVar2 + iVar9;
        if (param_6 <= unaff_r8) {
          *(undefined2 *)(param_1 + iVar10 * 2) = uVar1;
          iVar10 = iVar10 + 1;
          unaff_r8 = 0;
        }
      }
      local_28 = *psVar7;
      local_26 = psVar7[1];
    }
    iVar6 = iVar6 + 1;
    psVar7 = psVar7 + 2;
  } while( true );
}
