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

extern int func_02002a1c();
extern int func_02037c48();
extern int func_02037ce4();
extern int func_02037d90();
extern int func_02037dd0();
extern int func_02068834();
extern int func_02068868();
extern int func_02068880();
extern int func_02068898();
extern int func_020688c4();

void func_02068924(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_20;
  undefined4 uStack_1c;

  uVar10 = (*(unsigned int *)0x02068b48);
  uStack_1c = param_4;
  iVar5 = func_02037dd0(uVar10);
  if (iVar5 != 0) {
    local_20 = 0;
    uVar6 = func_02037ce4(uVar10,&local_20);
    uVar7 = func_02068834(uVar6 & 0xffff);
    if ((uVar7 != 0) &&
       (((sVar4 = *param_1, sVar4 == 0 ||
         (uVar7 = (uint)(ushort)param_1[1], (uVar6 & 0xffff) != uVar7)) ||
        (uVar7 = *(uint *)(param_1 + 6), local_20 != uVar7)))) {
      sVar3 = (short)uVar7;
      if (sVar4 == 0) {
        sVar3 = param_1[4];
      }
      param_1[1] = (short)uVar6;
      param_1[2] = 0;
      if (sVar4 == 0) {
        param_1[3] = sVar3;
      }
      *param_1 = 1;
      *(uint *)(param_1 + 6) = local_20;
    }
  }
  bVar1 = true;
  switch(*param_1) {
  case 0:
    goto LAB_02068b20;
  case 1:
    param_1[2] = param_1[2] + 1;
    iVar5 = func_02068880(param_1[1]);
    iVar8 = func_02068868(param_1[1]);
    if (iVar5 <= param_1[2]) {
      param_1[3] = (short)iVar8;
      *param_1 = *param_1 + 1;
      goto LAB_02068b24;
    }
    sVar4 = func_02002a1c((param_1[4] - iVar8) * ((iVar5 - param_1[2]) + 1),iVar5);
    break;
  case 2:
    param_1[2] = param_1[2] + 1;
    iVar5 = func_02068898(param_1[1]);
    if (iVar5 <= param_1[2]) {
      *param_1 = *param_1 + 1;
    }
    sVar4 = func_02068868(param_1[1]);
    break;
  case 3:
    param_1[2] = param_1[2] + 1;
    iVar5 = func_020688c4(param_1[1]);
    iVar8 = func_02068868(param_1[1]);
    if (iVar5 <= param_1[2]) {
      param_1[3] = param_1[4];
      *param_1 = *param_1 + 1;
      goto LAB_02068b24;
    }
    iVar9 = func_02068834(param_1[1]);
    sVar4 = func_02002a1c((((int)*(short *)(iVar9 + 8) - (iVar5 - param_1[2])) * 0x10000 >> 0x10) *
                         (param_1[4] - iVar8));
    sVar4 = (short)iVar8 + sVar4;
    break;
  default:
    iVar5 = func_02037d90(uVar10,*(undefined4 *)(param_1 + 6));
    uVar2 = ((unsigned int)0x02068b4c);
    if (iVar5 != 1) {
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = (short)uVar2;
      param_1[6] = 0;
      param_1[7] = 0;
    }
LAB_02068b20:
    bVar1 = false;
    goto LAB_02068b24;
  }
  param_1[3] = sVar4;
LAB_02068b24:
  iVar5 = func_02037c48(uVar10,0);
  if (iVar5 != 0 && bVar1) {
    *(int *)(iVar5 + 0x18) = (int)param_1[3];
  }
  return;
}
