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

extern int func_0205e0c0();

void func_0205ca54(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  uint uVar13;
  bool bVar14;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  if (*(int *)(param_1 + 0x1c) == 0) {
    cVar12 = '\0';
  }
  else {
    cVar12 = *(char *)(param_1 + 0x90);
  }
  *(char *)(param_1 + 0xad) = (char)param_4;
  *(int *)(param_1 + 0xb0) = param_1 + 0xf4;
  if (cVar12 == '\x01') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffbf;
    (**(code **)(param_1 + 0x1c))(param_1);
    bVar14 = *(int *)(param_1 + 0x1c) != 0;
    if (bVar14) {
      cVar12 = *(char *)(param_1 + 0x90);
    }
    if (!bVar14) {
      cVar12 = '\0';
    }
    uVar4 = *(uint *)(param_1 + 8) & 0x40;
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 != 0) goto LAB_0205cda0;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x38);
  if ((iVar5 == 0) || ((*(uint *)(param_1 + 8) & 0x80) != 0)) {
    if (((param_2 == 0x20) || (param_2 == 0x40)) &&
       ((*(uint *)(param_1 + (param_4 >> 5) * 4 + 0xbc) & 1 << (param_4 & 0x1f)) != 0)) {
      if (iVar5 == 0) {
        puVar11 = (uint *)(param_4 * 0x38 + ((unsigned int)0x0205ceb4));
      }
      else {
        puVar11 = (uint *)(param_4 * 0x38 + iVar5);
      }
    }
    else {
      if (iVar5 == 0) {
        if (param_2 == 0x40) {
          puVar11 = (uint *)(param_4 * 0x38 + ((unsigned int)0x0205ceb4));
          *(uint *)(param_1 + 0xbc + (param_4 >> 5) * 4) =
               *(uint *)(param_1 + 0xbc + (param_4 >> 5) * 4) | 1 << (param_4 & 0x1f);
        }
        else {
          puVar11 = (uint *)(param_1 + 0xf4);
        }
      }
      else {
        *(uint *)(param_1 + 0xbc + (param_4 >> 5) * 4) =
             *(uint *)(param_1 + 0xbc + (param_4 >> 5) * 4) | 1 << (param_4 & 0x1f);
        puVar11 = (uint *)(param_4 * 0x38 + *(int *)(*(int *)(param_1 + 4) + 0x38));
      }
      *puVar11 = 0;
      iVar5 = ((unsigned int)0x0205ceb8);
      iVar10 = *(int *)(param_1 + 0xd8);
      if (iVar10 == 0) {
LAB_0205cc00:
        iVar10 = 0;
      }
      else {
        iVar8 = iVar10 + 4;
        if ((iVar8 == 0) || (*(byte *)(iVar10 + 5) <= param_4)) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)(*(ushort *)(iVar8 + (uint)*(ushort *)(iVar10 + 10)) * param_4 +
                          iVar8 + (uint)*(ushort *)(iVar10 + 10) + 4);
        }
        if (piVar7 == (int *)0x0) goto LAB_0205cc00;
        iVar10 = iVar10 + *piVar7;
      }
      uVar4 = (uint)*(ushort *)(iVar10 + 0x1e);
      uVar1 = *(ushort *)(param_3 + 0x1e);
      bVar14 = (*(ushort *)(iVar10 + 0x1e) & 0x20) != 0;
      if (bVar14) {
        uVar4 = *puVar11;
      }
      if (bVar14) {
        *puVar11 = uVar4 | 0x20;
      }
      iVar10 = ((unsigned int)0x0205cebc);
      uVar13 = *(uint *)(iVar5 + ((int)(uint)uVar1 >> 6 & 7U) * 4);
      uVar9 = *(uint *)(iVar5 + ((int)(uint)uVar1 >> 9 & 7U) * 4);
      uVar4 = *(uint *)(param_3 + 8);
      puVar11[1] = *(uint *)(((unsigned int)0x0205cebc) + 0x94) & ~uVar13 | *(uint *)(param_3 + 4) & uVar13;
      puVar11[2] = *(uint *)(iVar10 + 0x98) & ~uVar9 | uVar4 & uVar9;
      puVar11[3] = *(uint *)(iVar10 + 0x9c) & ~*(uint *)(param_3 + 0x10) |
                   *(uint *)(param_3 + 0xc) & *(uint *)(param_3 + 0x10);
      uVar2 = *(ushort *)(param_3 + 0x1c);
      puVar11[4] = *(uint *)(param_3 + 0x14);
      puVar11[5] = (uint)uVar2;
      if ((uVar1 & 1) != 0) {
        puVar6 = (uint *)(param_3 + 0x2c);
        if ((uVar1 & 2) == 0) {
          uVar4 = *(uint *)(param_3 + 0x30);
          puVar11[6] = *(uint *)(param_3 + 0x2c);
          puVar11[7] = uVar4;
          puVar6 = (uint *)(param_3 + 0x34);
        }
        else {
          *puVar11 = *puVar11 | 1;
        }
        if ((*(ushort *)(param_3 + 0x1e) & 4) == 0) {
          uVar4 = *puVar6;
          uVar3 = *(undefined2 *)((int)puVar6 + 2);
          puVar6 = puVar6 + 1;
          *(short *)(puVar11 + 8) = (short)uVar4;
          *(undefined2 *)((int)puVar11 + 0x22) = uVar3;
        }
        else {
          *puVar11 = *puVar11 | 2;
        }
        if ((*(ushort *)(param_3 + 0x1e) & 8) == 0) {
          uVar4 = puVar6[1];
          puVar11[9] = *puVar6;
          puVar11[10] = uVar4;
        }
        else {
          *puVar11 = *puVar11 | 4;
        }
        *puVar11 = *puVar11 | 8;
      }
      iVar5 = *(int *)(param_1 + 4);
      if ((*(int *)(iVar5 + 8) != 0) &&
         ((*(uint *)(iVar5 + (param_4 >> 5) * 4 + 0x3c) & 1 << (param_4 & 0x1f)) != 0)) {
        (**(code **)(iVar5 + 0xc))(puVar11,*(int *)(iVar5 + 8),param_4);
      }
      if ((*puVar11 & 0x18) != 0) {
        uVar3 = *(undefined2 *)(param_3 + 0x22);
        uVar9 = *(uint *)(param_3 + 0x24);
        *(undefined2 *)(puVar11 + 0xb) = *(undefined2 *)(param_3 + 0x20);
        *(undefined2 *)((int)puVar11 + 0x2e) = uVar3;
        uVar4 = *(uint *)(param_3 + 0x28);
        puVar11[0xc] = uVar9;
        puVar11[0xd] = uVar4;
      }
    }
  }
  else {
    puVar11 = (uint *)(param_4 * 0x38 + iVar5);
  }
  *(uint **)(param_1 + 0xb0) = puVar11;
LAB_0205cda0:
  if (cVar12 == '\x02') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffbf;
    (**(code **)(param_1 + 0x1c))(param_1);
    bVar14 = *(int *)(param_1 + 0x1c) != 0;
    if (bVar14) {
      cVar12 = *(char *)(param_1 + 0x90);
    }
    if (!bVar14) {
      cVar12 = '\0';
    }
    uVar4 = *(uint *)(param_1 + 8) & 0x40;
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    puVar11 = *(uint **)(param_1 + 0xb0);
    if ((puVar11[3] & 0x1f0000) == 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    }
    else {
      if ((*puVar11 & 0x20) != 0) {
        puVar11[3] = puVar11[3] & 0xffe0ffff;
      }
      uVar4 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar4 & 0xfffffffd;
      if ((uVar4 & 0x100) == 0) {
        local_3c = puVar11[1];
        local_38 = puVar11[2];
        local_34 = puVar11[3];
        local_30 = ((unsigned int)0x0205cec4);
        local_2c = puVar11[4];
        local_28 = puVar11[5];
        func_0205e0c0(((unsigned int)0x0205cec0),&local_3c,6,local_28,((unsigned int)0x0205cec0));
        if ((*puVar11 & 0x18) != 0) {
          (**(code **)(param_1 + 0xf0))(puVar11);
        }
      }
    }
  }
  if (cVar12 != '\x03') {
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffbf;
  (**(code **)(param_1 + 0x1c))(param_1);
  return;
}
