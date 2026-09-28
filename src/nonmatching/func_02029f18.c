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

extern int func_02024964();
extern int func_020249c4();
extern int func_02024a50();
extern int func_0202ae04();
extern int func_02035064();
extern int func_020465d8();
extern int func_02046868();
extern int func_0x0208fbc8();
extern int func_0x020983b4();
extern int func_0x0209f318();
extern int func_0x020a0d5c();
extern int func_0x020a0d78();
extern int func_0x020c1840();
extern int func_0x020c1fb8();
extern int func_0x020c22ec();
extern int func_0x020c23b8();
extern int func_0x020c2bcc();
extern int func_0x020c2d38();
extern int func_0x020c3010();
extern int func_0x020c3158();
extern int func_0x020c320c();

undefined4 func_02029f18(undefined4 param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  undefined2 local_3c [2];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  short local_1a;

  piVar10 = (int *)(*(unsigned int *)0x0202a22c);
  piVar12 = piVar10 + 5;
  iVar13 = *(int *)(*piVar10 + 0x5c);
  uVar11 = *(undefined4 *)(iVar13 + 0x48);
  iVar4 = func_020465d8(param_1,2);
  iVar5 = func_020465d8(param_1,1);
  switch(iVar5 - ((unsigned int)0x0202a230)) {
  case 0:
    iVar4 = func_020465d8(param_1,3);
    if (iVar4 < 1) {
      func_0x020a0d78(iVar13 + 0x88,0x200);
    }
    else {
      func_0x020a0d5c(iVar13 + 0x88,0x200);
    }
    goto switchD_0202a20c_default;
  case 1:
    sVar2 = func_020465d8(param_1,3);
    sVar3 = func_020465d8(param_1,4);
    iVar5 = func_020465d8(param_1,5);
    iVar13 = func_0202ae04((int)sVar2);
    if (sVar3 == 0) {
      if (0 < iVar13) goto LAB_02029fd4;
    }
    else if ((sVar3 == 1) && (iVar13 == 0)) {
LAB_02029fd4:
      iVar4 = -1;
    }
    if ((iVar4 < 0) || (iVar5 < 1)) break;
    if (iVar4 == 0) {
      piVar10[0x2c] = iVar5;
      goto LAB_02029ff0;
    }
    if (iVar4 != 1) break;
    iVar5 = 0;
    if ((char)piVar10[0x2d] != '\0') {
      do {
        if (piVar10[0x2c] != 0) {
          piVar10[0x2c] = piVar10[0x2c] + -1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(piVar10 + 0x2d));
    }
    if (piVar10[0x2c] != 0) break;
    goto switchD_0202a20c_default;
  case 2:
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar1 = func_020465d8(param_1,3);
        iVar5 = func_0x020c23b8(uVar11,uVar1);
        if (iVar5 == 0) {
          iVar4 = -1;
        }
      }
      break;
    }
    uVar6 = *(undefined4 *)(iVar13 + 0x54);
    uVar11 = func_020465d8(param_1,3);
    func_0x020983b4(uVar6,uVar11);
LAB_02029ff0:
    iVar4 = 1;
    break;
  case 3:
    uVar1 = func_020465d8(param_1,3);
    uVar6 = func_020465d8(param_1,4);
    iVar4 = func_020465d8(param_1,5);
    uVar7 = func_020465d8(param_1,6);
    puVar8 = (undefined4 *)func_02024964(piVar12,uVar6,uVar7);
    local_38 = *puVar8;
    local_34 = puVar8[1];
    local_30 = puVar8[2];
    local_1a = func_020249c4(piVar12,uVar6,uVar7);
    local_1a = 0x4000 - local_1a;
    local_2c = local_38;
    local_28 = local_34;
    local_24 = local_30;
    local_34 = local_34 + iVar4 * 0x1000;
    local_20 = func_02024a50(piVar12,uVar6,uVar7);
    local_3c[0] = uVar1;
    func_0x020c1fb8(uVar11,local_3c,1,&local_38,2,&local_2c,0);
    iVar4 = -1;
    break;
  case 4:
    uVar1 = func_020465d8(param_1,3);
    func_0x020c3158(uVar11,uVar1);
    goto LAB_0202a116;
  case 5:
    uVar1 = func_020465d8(param_1,3);
    func_0x020c320c(uVar11,uVar1);
    goto LAB_0202a116;
  case 6:
    uVar1 = func_020465d8(param_1,3);
    func_0x020c3010(uVar11,uVar1);
LAB_0202a116:
    iVar4 = -1;
    break;
  case 8:
    if (iVar4 != 0) {
      if (((iVar4 == 1) && (iVar13 != 0)) && (iVar5 = func_0x0209f318(iVar13,0), iVar5 == 0)) {
        iVar4 = -1;
      }
      break;
    }
    iVar5 = func_0x020c22ec(uVar11);
    if (iVar5 != 0) break;
    if ((iVar13 != 0) && (iVar4 = func_0x0209f318(iVar13,0), iVar4 != 0)) {
      iVar4 = 1;
      break;
    }
    goto switchD_0202a20c_default;
  case 9:
    iVar4 = 0;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202a22c) + 0x5c) + 0x54) + 0x6a0);
    uVar9 = func_020465d8(param_1,3);
    switch(uVar9 & 0xffff) {
    case 0xab:
    case 0xac:
    case 0xad:
      iVar4 = (int)*(short *)(iVar5 + ((int)(((uVar9 & 0xffff) - 0xab) * 0x10000) >> 0xf) + 4);
      break;
    case 0xae:
      iVar4 = (int)*(short *)(iVar5 + 0x8a);
    }
    break;
  case 10:
    iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202a22c) + 0x5c) + 0x54) + 0x6a0);
    uVar9 = func_020465d8(param_1,3);
    sVar2 = func_020465d8(param_1,4);
    switch(uVar9 & 0xffff) {
    case 0xab:
    case 0xac:
    case 0xad:
      func_0x0208fbc8(iVar4,(int)(((uVar9 & 0xffff) - 0xab) * 0x10000) >> 0x10,(int)-sVar2,0);
      break;
    case 0xae:
      iVar5 = (int)*(short *)(iVar4 + 0x8a) + (int)-sVar2;
      if (iVar5 < 10) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 9;
      }
      *(short *)(iVar4 + 0x8a) = (short)iVar5;
    }
    goto switchD_0202a20c_default;
  case 0xb:
    sVar2 = func_020465d8(param_1,3);
    sVar3 = func_020465d8(param_1,4);
    if (sVar3 != 0) {
      if (sVar3 == 1) {
        func_0x020c2d38(uVar11,(int)sVar2);
        iVar4 = -1;
      }
      break;
    }
    if (iVar4 == 0) {
      func_0x020c2bcc(uVar11,(int)sVar2);
      iVar4 = 1;
    }
    else if (iVar4 != 1) break;
    iVar5 = func_02035064((*(unsigned int *)0x0202a2c0));
    if (iVar5 == 0) break;
switchD_0202a20c_default:
    iVar4 = -1;
    break;
  case 0xc:
    func_0x020c1840(uVar11);
    iVar4 = -1;
  }
  func_02046868(param_1,iVar4);
  return 1;
}
