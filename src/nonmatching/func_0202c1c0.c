#pragma thumb on

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

extern int func_02009b68();
extern int func_0202c198();
extern int func_02032bcc();
extern int func_02034d04();
extern int func_02035064();
extern int func_0203c024();
extern int func_0203c114();
extern int func_0x020ae848();

undefined4 func_0202c1c0(int param_1)

{
  int iVar16;
  uint uVar15;
  uint uVar14;
  int iVar13;
  int iVar12;
  int iVar11;
  uint uVar10;
  uint uVar9;
  int iVar8;
  undefined4 uVar7;
  uint uVar6;
  int iVar5;
  int iVar4;
  undefined4 *puVar3;
  short sVar2;
  ushort uVar1;

  iVar4 = func_02035064((*(unsigned int *)0x0202c430));
  if (iVar4 == 0) {
    return 0;
  }
  iVar13 = 0;
  func_0x020ae848(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202c434) + 0x5c) + 0x44),0);
  iVar8 = 0x00000ceeU;
  uVar6 = 0x0000ffffU;
  iVar4 = 0x00000beeU;
  iVar5 = 0x00000beeU + 0x40;
  do {
    iVar16 = param_1 + iVar13 * 2;
    *(short *)(iVar16 + iVar4) = (short)uVar6;
    *(undefined2 *)(iVar16 + iVar5) = 0;
    iVar13 = iVar13 + 1;
    *(undefined2 *)(iVar16 + iVar8) = 0;
    iVar11 = 0x00000becU;
    iVar16 = 0x00000ad8U;
  } while (iVar13 < 0x20);
  *(undefined1 *)(param_1 + 0x00000ad8U) = 0;
  *(undefined2 *)(param_1 + iVar11) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + iVar11 + -8) + 0x10);
  uVar6 = *(uint *)(iVar4 + 0x14);
  uVar7 = func_02032bcc(uVar6 * 0x18,4,0x02071cecU);
  *(undefined4 *)(param_1 + 0x00000e54U) = uVar7;
  func_02009b68(iVar4,uVar7,uVar6 * 0x18);
  iVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x00000e54U) + 2) * 0x1000;
  *(int *)(param_1 + iVar16 + -0x10) = iVar8;
  *(int *)(param_1 + iVar16 + -0xc) = iVar8 + 1;
  if (*(int *)(param_1 + iVar16 + -8) == 0) {
    *(int *)(param_1 + iVar16 + -8) = iVar8 + 0x1000;
  }
  func_02034d04((*(unsigned int *)0x0202c430),*(undefined4 *)(param_1 + 0x00000be4U));
  uVar14 = 1;
  func_0202c198(param_1,1);
  puVar3 = 0x02078f1cU;
  if (1 < uVar6) {
    do {
      iVar8 = *(int *)(param_1 + 0x00000e54U) + uVar14 * 0x18;
      uVar1 = *(ushort *)(iVar8 + 6);
      if (uVar1 < 0xb) {
        if ((7 < uVar1) && (((uVar1 == 8 || (uVar1 == 9)) || (uVar1 == 10)))) {
LAB_0202c2a6:
          iVar8 = func_0203c114(*puVar3,*(undefined4 *)(iVar8 + 8));
          if ((iVar8 != 0) && (*(int *)(iVar8 + 0x24) == 0)) {
            func_0203c024();
          }
        }
      }
      else if (uVar1 == 0x22) goto LAB_0202c2a6;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar6);
  }
  uVar14 = 1;
  if (1 < uVar6) {
    do {
      iVar8 = uVar14 * 0x18;
      sVar2 = *(short *)(*(int *)(param_1 + 0x00000e54U) + iVar8 + 6);
      if (sVar2 == 1) {
        if (*(uint *)(iVar4 + iVar8 + 0xc) < 0x00002710U) goto LAB_0202c2f6;
      }
      else if ((sVar2 == 2) || (sVar2 == 3)) {
LAB_0202c2f6:
        iVar8 = iVar4 + iVar8;
        uVar9 = *(uint *)(iVar8 + 8);
        iVar5 = 0;
        uVar10 = uVar9 & 0xffff;
        do {
          iVar13 = param_1 + iVar5 * 2;
          uVar15 = (uint)*(ushort *)(iVar13 + 0x00000c2eU + -0x40);
          if (uVar15 == 0x0000ffffU) {
            if (uVar10 == 0) {
              *(undefined1 *)(param_1 + 0x00000ad8U) = 1;
            }
            iVar13 = 0x00000beeU;
            iVar5 = param_1 + iVar5 * 2;
            *(short *)(iVar5 + 0x00000beeU) = (short)uVar9;
            *(short *)(iVar5 + iVar13 + 0x40) = (short)*(undefined4 *)(iVar8 + 0x14);
            *(short *)(param_1 + iVar13 + -2) = *(short *)(param_1 + iVar13 + -2) + 1;
            *(short *)(iVar5 + 0x00000ceeU) = *(short *)(iVar5 + 0x00000ceeU) + 1;
            break;
          }
          if ((uVar10 == uVar15) &&
             (*(uint *)(iVar8 + 0x14) == (uint)*(ushort *)(iVar13 + 0x00000c2eU))) {
            *(short *)(iVar13 + 0x00000ceeU) = *(short *)(iVar13 + 0x00000ceeU) + 1;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x20);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar6);
  }
  iVar8 = 0x00000becU;
  if (*(char *)(param_1 + 0x00000ad8U) == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x00000becU);
    *(ushort *)(param_1 + 0x00000becU) = uVar1 + 1;
    *(undefined2 *)(param_1 + (uint)uVar1 * 2 + iVar8 + 2) = 0;
  }
  iVar8 = 0;
  do {
    iVar5 = param_1 + iVar8 * 2;
    if ((*(ushort *)(iVar5 + 0x00000beeU) == 0x0000ffffU) || (0x1f < iVar8)) {
      return 1;
    }
    iVar13 = 0;
    iVar16 = param_1 + iVar8 * 4;
    *(undefined4 *)(iVar16 + 0xd30) = 0;
    if (*(ushort *)(iVar5 + 0xcee) != 0) {
      uVar7 = func_02032bcc((uint)*(ushort *)(iVar5 + 0xcee) << 1,4,0x02071cf4U);
      *(undefined4 *)(iVar16 + 0xd30) = uVar7;
      uVar14 = 0;
      if (uVar6 != 0) {
        iVar16 = 0x00000c2eU + -0x40;
        do {
          iVar11 = iVar4 + uVar14 * 0x18;
          sVar2 = *(short *)(iVar11 + 6);
          if (sVar2 == 1) {
            if (*(uint *)(iVar11 + 0xc) < 0x00002710U) goto LAB_0202c3e4;
          }
          else if ((sVar2 == 2) || (sVar2 == 3)) {
LAB_0202c3e4:
            if ((*(uint *)(iVar11 + 8) == (uint)*(ushort *)(iVar5 + iVar16)) &&
               (*(uint *)(iVar11 + 0x14) == (uint)*(ushort *)(iVar5 + 0x00000c2eU))) {
              iVar12 = iVar13 * 2;
              iVar13 = iVar13 + 1;
              *(short *)(*(int *)(param_1 + iVar8 * 4 + 0xd30) + iVar12) =
                   (short)*(undefined4 *)(iVar11 + 0xc);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar6);
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}
