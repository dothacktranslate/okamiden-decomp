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

undefined4 func_0200b210(int param_1,undefined2 *param_2,uint *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;

  uVar8 = *param_3;
  if (*(uint *)(param_1 + 0x38) <= uVar8) {
    return 0;
  }
LAB_0200b228:
  uVar8 = *(uint *)(param_1 + uVar8 * 4 + 0x3c);
  uVar7 = uVar8 & 0xff;
  *(char *)param_2 = (char)uVar8;
  uVar8 = uVar8 >> 8;
  if (0x10 < uVar7) {
    if (uVar7 == 0x11) {
      uVar7 = param_3[1];
      if ((uVar7 < 8) && (*(char *)(param_1 + uVar8 + uVar7) != '\0')) {
        iVar6 = uVar7 * 0xc + param_1 + uVar8;
        uVar1 = *(undefined2 *)(iVar6 + 10);
        uVar2 = *(undefined2 *)(iVar6 + 0xc);
        uVar3 = *(undefined2 *)(iVar6 + 0xe);
        uVar4 = *(undefined2 *)(iVar6 + 0x10);
        uVar5 = *(undefined2 *)(iVar6 + 0x12);
        *param_2 = *(undefined2 *)(iVar6 + 8);
        param_2[1] = uVar1;
        param_2[5] = uVar5;
        param_2[2] = uVar2;
        param_2[3] = uVar3;
        param_2[4] = uVar4;
        param_3[1] = param_3[1] + 1;
        return 1;
      }
    }
    goto switchD_0200b250_default;
  }
  if (0xf < uVar7) {
    pbVar9 = (byte *)(param_1 + uVar8);
    uVar8 = param_3[1];
    if (uVar8 < ((uint)pbVar9[1] - (uint)*pbVar9) + 1) {
      uVar1 = *(undefined2 *)(pbVar9 + uVar8 * 0xc + 4);
      uVar2 = *(undefined2 *)(pbVar9 + uVar8 * 0xc + 6);
      uVar3 = *(undefined2 *)(pbVar9 + uVar8 * 0xc + 8);
      uVar4 = *(undefined2 *)(pbVar9 + uVar8 * 0xc + 10);
      uVar5 = *(undefined2 *)(pbVar9 + uVar8 * 0xc + 0xc);
      *param_2 = *(undefined2 *)(pbVar9 + uVar8 * 0xc + 2);
      param_2[1] = uVar1;
      param_2[5] = uVar5;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      param_2[4] = uVar4;
      param_3[1] = param_3[1] + 1;
      return 1;
    }
    goto switchD_0200b250_default;
  }
  switch(uVar7) {
  case 0:
    goto switchD_0200b250_default;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    goto switchD_0200b250_default;
  }
  iVar6 = param_1 + uVar8;
  uVar1 = *(undefined2 *)(iVar6 + 2);
  uVar2 = *(undefined2 *)(iVar6 + 4);
  uVar3 = *(undefined2 *)(iVar6 + 6);
  uVar4 = *(undefined2 *)(iVar6 + 8);
  param_2[1] = *(undefined2 *)(param_1 + uVar8);
  param_2[2] = uVar1;
  param_2[5] = uVar4;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  *param_3 = *param_3 + 1;
  return 1;
switchD_0200b250_default:
  uVar7 = *(uint *)(param_1 + 0x38);
  uVar8 = *param_3 + 1;
  *param_3 = uVar8;
  param_3[1] = 0;
  if (uVar7 <= uVar8) {
    return 0;
  }
  goto LAB_0200b228;
}
