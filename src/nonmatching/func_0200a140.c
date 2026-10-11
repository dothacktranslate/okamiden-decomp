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

int func_0200a140(undefined4 *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;

  pbVar6 = (byte *)*param_1;
  iVar7 = param_1[1];
  bVar8 = *(byte *)((int)param_1 + 0xf);
  uVar9 = (uint)*(byte *)(param_1 + 4);
  uVar10 = param_1[2];
  uVar12 = (uint)*(byte *)((int)param_1 + 0x11);
  cVar2 = *(char *)((int)param_1 + 0x12);
  while (pbVar5 = param_2, 0 < iVar7) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (param_3 == 0) goto LAB_0200a29c;
      if ((bVar8 & 0x80) == 0) {
        pbVar4 = pbVar5 + 1;
        iVar7 = iVar7 + -1;
        param_3 = param_3 + -1;
        *pbVar6 = *pbVar5;
        pbVar6 = pbVar6 + 1;
      }
      else {
        while (uVar12 != 0) {
          if (cVar2 != '\x01') {
            uVar10 = *pbVar5 + 0x30;
            uVar12 = 0;
LAB_0200a22c:
            pbVar5 = pbVar5 + 1;
            param_3 = param_3 + -1;
            if (param_3 == 0) goto LAB_0200a29c;
            break;
          }
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            uVar10 = uVar10 + *pbVar5;
            goto LAB_0200a22c;
          }
          if (uVar12 == 1) {
            uVar10 = uVar10 + (uint)*pbVar5 * 0x100;
          }
          else {
            bVar3 = *pbVar5;
            uVar10 = (uint)bVar3;
            if ((bVar3 & 0xe0) != 0) {
              uVar10 = uVar10 + 0x10;
              uVar12 = 0;
              goto LAB_0200a22c;
            }
            if ((bVar3 & 0x10) == 0) {
              uVar10 = (uVar10 & 0xf) * 0x100 + 0x110;
              uVar12 = 1;
            }
            else {
              uVar10 = (uVar10 & 0xf) * 0x10000 + 0x1110;
            }
          }
          pbVar5 = pbVar5 + 1;
          param_3 = param_3 + -1;
          if (param_3 == 0) goto LAB_0200a29c;
        }
        uVar13 = uVar10 & 0xf;
        pbVar4 = pbVar5 + 1;
        bVar3 = *pbVar5;
        uVar12 = 3;
        param_3 = param_3 + -1;
        uVar11 = (int)uVar10 >> 4;
        uVar10 = 0;
        if (uVar11 != 0) {
          do {
            iVar7 = iVar7 + -1;
            *pbVar6 = pbVar6[-(((uint)bVar3 | uVar13 << 8) + 1)];
            pbVar6 = pbVar6 + 1;
            uVar10 = uVar11 - 1;
            bVar1 = 0 < (int)uVar11;
            uVar11 = uVar10;
          } while (uVar10 != 0 && bVar1);
        }
      }
      if (iVar7 == 0) goto LAB_0200a29c;
      bVar8 = bVar8 << 1;
      pbVar5 = pbVar4;
    }
    if (param_3 == 0) break;
    param_2 = pbVar5 + 1;
    bVar8 = *pbVar5;
    uVar9 = 8;
    param_3 = param_3 + -1;
  }
LAB_0200a29c:
  *param_1 = pbVar6;
  param_1[1] = iVar7;
  *(byte *)((int)param_1 + 0xf) = bVar8;
  *(char *)(param_1 + 4) = (char)uVar9;
  param_1[2] = uVar10;
  *(char *)((int)param_1 + 0x11) = (char)uVar12;
  *(char *)((int)param_1 + 0x12) = cVar2;
  return iVar7;
}
