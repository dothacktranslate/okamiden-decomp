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

extern int func_02002fdc();
extern int func_020123dc();

bool func_020126b4(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int unaff_r9;
  bool bVar12;
  int local_38;
  int local_34;
  short local_2c;
  short local_2a;

  iVar8 = 0;
  iVar10 = param_5[1];
  psVar11 = (short *)*param_5;
  local_34 = 0;
  iVar9 = 0;
  bVar12 = true;
  iVar7 = param_4;
  do {
    if ((iVar10 <= iVar9) || (param_3 <= iVar8)) goto LAB_02012918;
    uVar1 = (undefined2)iVar9;
    if (*psVar11 == -1) {
      if (!bVar12) {
        if (iVar9 - 1U != (uint)*(ushort *)(param_1 + iVar8 * 2 + -2)) {
          *(short *)(param_1 + iVar8 * 2) = (short)(iVar9 - 1U);
          iVar8 = iVar8 + 1;
          if (param_3 <= iVar8) goto LAB_02012918;
        }
        *(undefined2 *)(param_1 + iVar8 * 2) = uVar1;
        iVar8 = iVar8 + 1;
        local_34 = local_34 + 1;
        bVar12 = true;
        if (param_4 <= local_34) {
          iVar9 = iVar9 + 1;
LAB_02012918:
          *param_2 = iVar8;
          if (!bVar12) {
            if (0 < iVar8) {
              uVar4 = (uint)*(ushort *)(param_1 + (iVar8 + -1) * 2);
              uVar5 = iVar9 - 1;
              bVar12 = SBORROW4(uVar5,uVar4);
              iVar7 = uVar5 - uVar4;
              if (uVar5 != uVar4) {
                bVar12 = SBORROW4(iVar8,param_3);
                iVar7 = iVar8 - param_3;
              }
              if (iVar7 < 0 != bVar12) {
                *(short *)(param_1 + iVar8 * 2) = (short)uVar5;
                *param_2 = *param_2 + 1;
              }
            }
            func_020123dc(param_1,param_2,param_3,param_5);
          }
          return 0 < *param_2;
        }
      }
    }
    else if (bVar12) {
      *(undefined2 *)(param_1 + iVar8 * 2) = uVar1;
      iVar8 = iVar8 + 1;
      local_2c = *psVar11;
      local_2a = psVar11[1];
      if (iVar9 + 1 < iVar10) {
        iVar7 = (int)psVar11[3];
        unaff_r9 = func_02002fdc((iVar7 - psVar11[1]) * 0x1000,
                                ((int)psVar11[2] - (int)*psVar11) * 0x1000);
        bVar12 = false;
        local_38 = 1;
      }
    }
    else {
      iVar2 = (int)psVar11[1] - (int)local_2a;
      if (-1 < iVar2) {
        iVar7 = iVar2;
      }
      if (-1 >= iVar2) {
        iVar7 = -iVar2;
      }
      iVar6 = (int)*psVar11 - (int)local_2c;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = -iVar6;
      }
      iVar7 = iVar3 + iVar7;
      if (5 < iVar7) {
        iVar7 = local_38;
        if (local_38 == 0) {
          iVar3 = func_02002fdc(iVar2 * 0x1000,iVar6 * 0x1000);
          iVar2 = (unaff_r9 - iVar3) * 0x10000 >> 0x10;
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (param_6 <= iVar2) {
            *(undefined2 *)(param_1 + iVar8 * 2) = uVar1;
            iVar8 = iVar8 + 1;
            unaff_r9 = iVar3;
          }
        }
        else if ((iVar9 + 1 < iVar10) && (psVar11[2] != -1)) {
          iVar2 = func_02002fdc(((int)psVar11[3] - (int)psVar11[1]) * 0x1000,
                               ((int)psVar11[2] - (int)*psVar11) * 0x1000);
          iVar2 = (unaff_r9 - iVar2) * 0x10000 >> 0x10;
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (param_6 <= iVar2) {
            unaff_r9 = func_02002fdc(((int)psVar11[1] - (int)local_2a) * 0x1000,
                                    ((int)*psVar11 - (int)local_2c) * 0x1000);
            *(undefined2 *)(param_1 + iVar8 * 2) = uVar1;
            iVar8 = iVar8 + 1;
            local_38 = 0;
          }
        }
        local_2c = *psVar11;
        local_2a = psVar11[1];
      }
    }
    iVar9 = iVar9 + 1;
    psVar11 = psVar11 + 2;
  } while( true );
}
