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

void func_020359c0(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar12 = *param_3;
  iVar10 = param_3[1];
  iVar11 = param_3[2];
  lVar1 = (longlong)param_2[9] * (longlong)iVar11 + 0x800;
  lVar2 = (longlong)param_2[1] * (longlong)iVar12 + 0x800;
  lVar3 = (longlong)param_2[5] * (longlong)iVar10 + 0x800;
  lVar4 = (longlong)param_2[10] * (longlong)iVar11 + 0x800;
  lVar6 = (longlong)param_2[2] * (longlong)iVar12 + 0x800;
  lVar8 = (longlong)param_2[6] * (longlong)iVar10 + 0x800;
  lVar5 = (longlong)param_2[8] * (longlong)iVar11 + 0x800;
  lVar7 = (longlong)*param_2 * (longlong)iVar12 + 0x800;
  lVar9 = (longlong)param_2[4] * (longlong)iVar10 + 0x800;
  iVar11 = param_2[0xd];
  iVar10 = param_2[0xe];
  *param_1 = param_2[0xc] +
             ((uint)lVar5 >> 0xc | (int)((ulonglong)lVar5 >> 0x20) * 0x100000) +
             ((uint)lVar7 >> 0xc | (int)((ulonglong)lVar7 >> 0x20) * 0x100000) +
             ((uint)lVar9 >> 0xc | (int)((ulonglong)lVar9 >> 0x20) * 0x100000);
  param_1[1] = iVar11 + ((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) * 0x100000) +
                        ((uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) * 0x100000) +
                        ((uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) * 0x100000);
  param_1[2] = iVar10 + ((uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) * 0x100000) +
                        ((uint)lVar6 >> 0xc | (int)((ulonglong)lVar6 >> 0x20) * 0x100000) +
                        ((uint)lVar8 >> 0xc | (int)((ulonglong)lVar8 >> 0x20) * 0x100000);
  return;
}
