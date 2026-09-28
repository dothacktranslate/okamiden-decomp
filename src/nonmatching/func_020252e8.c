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

extern int func_02037478();
extern int func_02037500();
extern int func_02037590();
extern int func_020376dc();
extern int func_02037800();
extern int func_02037ba4();
extern int func_02037d90();
extern int func_02037dd0();
extern int func_020465d8();
extern int func_02046868();
extern int func_02064188();
extern int func_0x0209a9e0();
extern int func_0x0209d404();
extern int func_0x0209d458();
extern int func_0x0209d488();

undefined4 func_020252e8(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_24;

  piVar8 = (int *)(*(unsigned int *)0x020255f8);
  iVar7 = *(int *)(*piVar8 + 0x5c);
  iVar9 = (*(unsigned int *)0x020255fc);
  iVar4 = func_020465d8(param_1,2);
  local_24 = 1;
  iVar5 = func_020465d8(param_1,1);
  switch(iVar5 - ((unsigned int)0x02025600)) {
  case 0:
    sVar3 = func_020465d8(param_1,3);
    sVar2 = func_020465d8(param_1,4);
    if (sVar2 < 0) {
      func_02037800(iVar9,1,0);
      goto LAB_02025374;
    }
    if (iVar4 == 0) {
      if (*(int *)(iVar9 + ((unsigned int)0x02025604)) == 0) {
        func_02037800(iVar9,1,0);
        if (-1 < sVar3) {
          func_0x0209a9e0(iVar9,(int)sVar3,1);
          iVar4 = *(int *)(iVar7 + 0x30);
          *(undefined2 *)(iVar4 + 0x102) = 0xffff;
          *(short *)(iVar4 + 0x100) = sVar3;
          *(short *)(iVar4 + 0x104) = sVar2;
          *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x800;
          func_0x0209d488(*(undefined4 *)(iVar7 + 0x30));
        }
        iVar4 = 1;
      }
    }
    else if ((iVar4 == 1) && (*(int *)(iVar9 + ((unsigned int)0x02025604)) == 0)) {
      func_0x0209d404(*(undefined4 *)(iVar7 + 0x30),0x7f);
      iVar4 = -1;
    }
    break;
  case 1:
    iVar5 = func_020465d8(param_1,3);
    if (iVar4 == 0) {
      piVar8[0x2f] = piVar8[0x2f] | 0x40;
      func_0x0209d458(*(undefined4 *)(iVar7 + 0x30),1,0);
      piVar8[0x10] = iVar5;
      iVar4 = local_24;
      if (iVar5 < 1) {
        local_24 = -1;
        iVar4 = local_24;
      }
    }
    else if ((iVar4 == 1) && (iVar5 = piVar8[0x10], piVar8[0x10] = iVar5 + -1, iVar5 + -1 < 1)) {
      iVar4 = -1;
    }
    break;
  case 2:
  case 3:
    if (iVar4 == 0) {
      iVar5 = func_020465d8(param_1,1);
      iVar7 = ((unsigned int)0x02025600) + 3;
      uVar6 = func_020465d8(param_1,3);
      func_020465d8(param_1,4);
      func_02037590(iVar9,uVar6,0xffffffff,0x7f,0,piVar8 + 0x13);
      iVar4 = -1;
      if (iVar5 == iVar7) {
        iVar4 = 1;
      }
    }
    else if ((iVar4 == 1) && (iVar5 = func_02037d90(iVar9,piVar8[0x13]), iVar5 == 0)) {
      iVar4 = -1;
    }
    break;
  case 4:
  case 5:
    if (iVar4 == 0) {
      iVar4 = func_020465d8(param_1,1);
      piVar8 = piVar8 + 0x12;
      if (iVar4 != ((unsigned int)0x02025600) + 5) {
        piVar8 = (int *)0x0;
      }
      sVar3 = func_020465d8(param_1,3);
      sVar2 = func_020465d8(param_1,4);
      if (sVar3 < 1) {
        func_02037478(iVar9,(int)sVar2,0xffffffff,0x7f,0,piVar8);
      }
      else {
        func_02037500(iVar9,(int)sVar3,(int)sVar2,0xffffffff,0x7f,0,piVar8);
      }
      if (piVar8 == (int *)0x0) {
        iVar4 = -1;
      }
      else {
        iVar4 = 1;
      }
    }
    else if ((iVar4 == 1) && (iVar5 = func_02037d90(iVar9,piVar8[0x12]), iVar5 == 0)) {
      iVar4 = -1;
    }
    break;
  case 6:
    sVar3 = func_020465d8(param_1,3);
    sVar2 = func_020465d8(param_1,4);
    sVar1 = func_020465d8(param_1,5);
    if (sVar3 < 1) {
      func_02037478(iVar9,(int)sVar2,0xffffffff,(int)sVar1,0,0);
    }
    else {
      func_02037500(iVar9,(int)sVar3,(int)sVar2,0xffffffff,(int)sVar1,0,0);
    }
    goto LAB_02025574;
  case 7:
    func_02064188();
    *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 2;
    goto LAB_0202558e;
  case 8:
    func_0x0209d458(*(undefined4 *)(iVar7 + 0x30),0,0);
    goto LAB_02025374;
  case 9:
    uVar6 = func_020465d8(param_1,3);
    func_02037ba4(iVar9,uVar6,1,0);
    goto LAB_02025374;
  case 10:
    func_020465d8(param_1,3);
    func_020465d8(param_1,4);
    goto LAB_0202558e;
  case 0xb:
    func_020465d8(param_1,3);
LAB_0202558e:
    iVar4 = -1;
    break;
  case 0xc:
    func_020465d8(param_1,3);
    func_020376dc(iVar9,piVar8[0x13],0,0);
LAB_02025374:
    iVar4 = -1;
    break;
  case 0xd:
    if (iVar4 == 0) {
      if (*(int *)(iVar9 + ((unsigned int)0x02025704)) == 0) {
        func_0x0209d488(*(undefined4 *)(iVar7 + 0x30));
        iVar4 = 1;
      }
    }
    else if ((iVar4 == 1) && (*(int *)(iVar9 + ((unsigned int)0x02025704)) == 0)) {
      iVar4 = -1;
    }
    break;
  case 0xe:
    sVar3 = func_020465d8(param_1,3);
    iVar4 = (int)sVar3;
    sVar3 = func_020465d8(param_1,4);
    sVar2 = func_020465d8(param_1,5);
    if ((0 < iVar4) && (iVar4 < 3)) {
      if (sVar3 < 1) {
        func_02037478(iVar9,(int)sVar2,0xffffffff,0x7f,0,piVar8 + iVar4 + 0x13);
      }
      else {
        func_02037500(iVar9,(int)sVar3,(int)sVar2,0xffffffff,0x7f,0,piVar8 + iVar4 + 0x13);
      }
    }
    goto LAB_02025574;
  case 0xf:
    sVar3 = func_020465d8(param_1,3);
    iVar4 = (int)sVar3;
    if ((((0 < iVar4) && (iVar4 < 3)) && (iVar4 = piVar8[iVar4 + 0x13], iVar4 != 0)) &&
       (iVar5 = func_02037d90(iVar9,iVar4), iVar5 != 0)) {
      func_020376dc(iVar9,iVar4,0,0);
    }
LAB_02025574:
    iVar4 = -1;
    break;
  case 0x10:
    iVar5 = func_02037dd0(iVar9);
    iVar4 = local_24;
    if (iVar5 == 0) {
      iVar4 = -1;
    }
    break;
  case 0x11:
    iVar4 = local_24;
    if (*(int *)(iVar9 + ((unsigned int)0x02025704)) != 0) {
      iVar4 = -1;
    }
    break;
  default:
    goto switchD_02025326_default;
  }
  func_02046868(param_1,iVar4);
switchD_02025326_default:
  return 1;
}
