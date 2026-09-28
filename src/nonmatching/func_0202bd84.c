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

extern int func_0201e9d4();
extern int func_0201ebe0();
extern int func_0202b2b8();
extern int func_02037500();
extern int func_02037590();
extern int func_020376dc();
extern int func_02037800();
extern int func_02037b6c();
extern int func_02037b8c();
extern int func_02037ba4();
extern int func_02037c48();
extern int func_02037ca4();
extern int func_020644fc();
extern int func_02068b50();
extern int func_0x0209d404();

void func_0202bd84(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  int iVar9;
  ushort *puVar10;
  undefined4 uVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int local_38;
  uint local_34;
  int local_30;

  if ((*(uint *)(*(unsigned int *)0x0202c080) & 1) != 0) {
    return;
  }
  iVar13 = (*(unsigned int *)0x0202c084);
  iVar2 = *(int *)(*(int *)(*(int *)(*(unsigned int *)0x0202c088) + 0x5c) + 0x30);
  if (*(int *)(iVar13 + ((unsigned int)0x0202c08c)) != 0) {
    return;
  }
  if (*(short *)(iVar2 + 0x104) != -1) {
    if (*(short *)(param_1 + 300) == 0) goto LAB_0202be42;
    if (*(int *)(param_1 + ((unsigned int)0x0202c090)) == 0) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(*(int *)(param_1 + ((unsigned int)0x0202c090)) + *(short *)(param_1 + 300) * 0x18);
    }
    uVar3 = (uint)puVar10[1];
    iVar9 = uVar3 - *puVar10;
    uVar7 = *(int *)(param_1 + ((unsigned int)0x0202c094)) >> 0xc;
    if ((uVar7 <= uVar3) && (iVar9 != 0)) {
      iVar9 = func_0201ebe0(*(int *)(param_1 + 0x128) * (uVar3 - uVar7) +
                           *(int *)(puVar10 + 8) * (uVar7 - *puVar10),iVar9);
      *(int *)(iVar2 + 0x108) = iVar9 << 0xc;
      func_02068b50(*(int *)(*(unsigned int *)0x0202c088) + 0x4c,(*(int *)(iVar2 + 0x108) << 4) >> 0x10);
      goto LAB_0202be42;
    }
  }
  *(undefined2 *)(param_1 + 300) = 0;
LAB_0202be42:
  iVar6 = ((unsigned int)0x0202c09c);
  iVar9 = ((unsigned int)0x0202c098);
  if (((*(uint *)(param_1 + ((unsigned int)0x0202c098)) & 2) != 0) &&
     ((*(uint *)(param_1 + ((unsigned int)0x0202c098)) & 0x10) == 0)) {
    func_0x0209d404(iVar2,(int)(short)*(undefined4 *)(param_1 + ((unsigned int)0x0202c09c)));
    if ((*(uint *)(param_1 + iVar9) & 4) != 0) {
      func_0202b2b8(param_1,*(undefined4 *)(param_1 + iVar6 + 0x48));
      func_02037b6c(iVar13,4);
    }
    *(uint *)(param_1 + ((unsigned int)0x0202c098)) = *(uint *)(param_1 + ((unsigned int)0x0202c098)) & 0xfffffffd;
  }
  if (((*(uint *)(param_1 + ((unsigned int)0x0202c098)) & 2) == 0) ||
     ((*(uint *)(param_1 + ((unsigned int)0x0202c098)) & 4) == 0)) {
    local_38 = 0;
    piVar4 = (int *)(param_1 + ((unsigned int)0x0202c094));
    piVar5 = (int *)(param_1 + ((unsigned int)0x0202c090));
    do {
      psVar12 = (short *)(param_1 + 0x28 + local_38 * 0x10);
      iVar9 = (int)*(short *)(param_1 + 0x28 + local_38 * 0x10);
      iVar6 = *piVar5;
      if (iVar6 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar6 + iVar9 * 0x18;
      }
      iVar14 = *(int *)(iVar8 + 0x10);
      if (*(int *)(iVar8 + 0x10) == 0) {
        iVar14 = 0x7f;
      }
      if (psVar12[1] != 0) {
        if (iVar6 == 0) {
          puVar10 = (ushort *)0x0;
        }
        else {
          puVar10 = (ushort *)(iVar6 + psVar12[1] * 0x18);
        }
        uVar3 = (uint)puVar10[1];
        iVar6 = uVar3 - *puVar10;
        uVar7 = *(int *)(param_1 + ((unsigned int)0x0202c094)) >> 0xc;
        if ((uVar3 < uVar7) || (iVar6 == 0)) {
          psVar12[1] = 0;
        }
        else {
          iVar6 = func_0201ebe0((uVar3 - uVar7) * *(int *)(psVar12 + 6) +
                               *(int *)(puVar10 + 8) * (uVar7 - *puVar10),iVar6);
          iVar14 = func_0201ebe0(iVar14 * iVar6,0x7f);
          if ((*(uint *)(psVar12 + 4) & ((unsigned int)0x0202c0a0)) == ((unsigned int)0x0202c0a0)) {
            iVar9 = func_02037ca4(iVar13);
          }
          else {
            iVar9 = func_02037c48(iVar13,iVar9 + 1);
          }
          if (iVar9 != 0) {
            *(int *)(iVar9 + 0x18) = iVar14;
          }
        }
      }
      iVar9 = (int)*psVar12;
      if (*(int *)(param_1 + ((unsigned int)0x0202c090)) == 0) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = (ushort *)(*(int *)(param_1 + ((unsigned int)0x0202c090)) + iVar9 * 0x18);
      }
      local_30 = 0;
      if (iVar9 != 0) {
        if (puVar10[1] != 0) {
          local_34 = (int)(*piVar4 + ((uint)(*piVar4 >> 0xb) >> 0x14)) >> 0xc;
          local_30 = local_34 - puVar10[1];
        }
        if ((*(uint *)(param_1 + ((unsigned int)0x0202c098)) & 0x10) == 0) {
          if (*puVar10 < puVar10[1]) {
            if ((*(uint *)(psVar12 + 4) & ((unsigned int)0x0202c0a0)) == ((unsigned int)0x0202c0a0)) {
              iVar9 = func_02037ca4(iVar13);
              if (iVar9 == 0) {
                if ((local_34 == *puVar10) && (local_30 < 0)) {
                  func_02037590(iVar13,*(undefined4 *)(puVar10 + 4),iVar14,0x7f,0,0);
                }
              }
              else if (0 < local_30) {
                if (puVar10[1] != 0) {
                  func_020376dc(iVar13,iVar9,*(undefined4 *)(puVar10 + 10),0);
                }
                goto LAB_0202c10c;
              }
            }
            else if (puVar10[2] == 0) {
              iVar9 = func_02037c48(iVar13,iVar9 + 1);
              if (iVar9 == 0) {
                if (((local_34 == *puVar10) && (local_30 < 0)) &&
                   (iVar9 = func_02037500(iVar13,*(undefined4 *)(puVar10 + 4),
                                         *(undefined4 *)(puVar10 + 6),iVar14,0x7f,0,0), iVar9 != 0))
                {
                  func_020644fc(iVar9 + 0x2c,*psVar12 + 1);
                }
              }
              else if (0 < local_30) {
                if (puVar10[1] != 0) {
                  func_020376dc(iVar13,iVar9,*(undefined4 *)(puVar10 + 10),0);
                }
                goto LAB_0202c10c;
              }
            }
            else {
              sVar1 = psVar12[2];
              psVar12[2] = psVar12[2] + 1;
              func_0201e9d4((int)sVar1,puVar10[2]);
              if (extraout_r1 == 0) {
                iVar9 = *(int *)(puVar10 + 8);
                if (0 < local_30) {
                  iVar6 = func_0201ebe0(iVar9 * local_30,*(undefined4 *)(puVar10 + 10));
                  iVar9 = iVar9 - iVar6;
                }
                if (*(int *)(puVar10 + 10) < local_30) goto LAB_0202c10c;
                func_02037500(iVar13,*(undefined4 *)(puVar10 + 4),*(undefined4 *)(puVar10 + 6),iVar9,
                             0x7f,0,0);
              }
            }
          }
          else {
            if ((*(uint *)(psVar12 + 4) & ((unsigned int)0x0202c0a0)) == ((unsigned int)0x0202c0a0)) {
              func_02037590(iVar13,*(undefined4 *)(puVar10 + 4),iVar14,0x7f,0,0);
            }
            else {
              func_02037500(iVar13,*(undefined4 *)(puVar10 + 4),*(undefined4 *)(puVar10 + 6),iVar14,
                           0x7f,0,0);
            }
LAB_0202c10c:
            *psVar12 = 0;
          }
        }
      }
      local_38 = local_38 + 1;
    } while (local_38 < 0x10);
  }
  if (((*(short *)(param_1 + 0xab0) != 0xb) &&
      (uVar3 = *(uint *)(param_1 + ((unsigned int)0x0202c194)), (uVar3 & 1) != 0)) && ((uVar3 & 0x10) == 0)) {
    if ((uVar3 & 4) == 0) {
      func_02037b8c(iVar13,1);
      sVar1 = *(short *)(iVar2 + 0x100);
      uVar11 = 4;
    }
    else {
      func_02037800(iVar13,1,0);
      func_02037b8c(iVar13,0);
      sVar1 = *(short *)(iVar2 + 0x100);
      uVar11 = 1;
    }
    func_02037ba4(iVar13,(int)sVar1,1,uVar11);
    *(uint *)(param_1 + ((unsigned int)0x0202c194)) = *(uint *)(param_1 + ((unsigned int)0x0202c194)) & 0xfffffffe | 2;
  }
  return;
}
