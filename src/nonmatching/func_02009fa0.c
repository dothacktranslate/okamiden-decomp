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

void func_02009fa0(uint *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;

  uVar8 = *param_1 >> 8;
  bVar4 = false;
  puVar6 = param_1 + 1;
  if ((*param_1 & 0xf) != 0) {
    bVar4 = true;
  }
  do {
    if ((int)uVar8 < 1) {
      return;
    }
    bVar13 = (byte)*puVar6;
    puVar5 = (uint *)((int)puVar6 + 1);
    iVar10 = 8;
    while (puVar6 = puVar5, 0 < iVar10) {
      if ((bVar13 & 0x80) == 0) {
        puVar6 = (uint *)((int)puVar5 + 1);
        *param_2 = (byte)*puVar5;
        param_2 = param_2 + 1;
        iVar3 = -1;
      }
      else {
        bVar2 = (byte)*puVar5;
        uVar11 = (uint)bVar2;
        puVar7 = puVar5;
        if (bVar4) {
          if ((bVar2 & 0xe0) == 0) {
            iVar12 = (uVar11 & 0xf) << 4;
            puVar7 = (uint *)((int)puVar5 + 1);
            if ((bVar2 & 0x10) != 0) {
              puVar7 = (uint *)((int)puVar5 + 2);
              iVar12 = (uVar11 & 0xf) * 0x1000 + (uint)*(byte *)((int)puVar5 + 1) * 0x10 + 0x100;
            }
            iVar12 = iVar12 + 0x11;
            uVar11 = (uint)(byte)*puVar7;
          }
          else {
            iVar12 = 1;
          }
        }
        else {
          iVar12 = 3;
        }
        iVar12 = iVar12 + ((int)uVar11 >> 4);
        puVar6 = (uint *)((int)puVar7 + 2);
        bVar2 = *(byte *)((int)puVar7 + 1);
        iVar3 = -iVar12;
        do {
          *param_2 = param_2[-(((uint)bVar2 | (uVar11 & 0xf) << 8) + 1)];
          param_2 = param_2 + 1;
          iVar9 = iVar12 + -1;
          bVar1 = 0 < iVar12;
          iVar12 = iVar9;
        } while (iVar9 != 0 && bVar1);
      }
      uVar8 = uVar8 + iVar3;
      if ((int)uVar8 < 1) break;
      bVar13 = bVar13 << 1;
      puVar5 = puVar6;
      iVar10 = iVar10 + -1;
    }
  } while( true );
}
