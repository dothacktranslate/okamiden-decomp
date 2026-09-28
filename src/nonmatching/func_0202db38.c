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

extern int func_0200653c();
extern int func_0200656c();
extern int func_02008c04();
extern int func_0202c774();
extern int func_0202ca98();
extern int func_0202cba8();
extern int func_0202cd5c();
extern int func_0202e220();
extern int func_0202f144();
extern int func_02045748();
extern int func_0x020e1510();

void func_0202db38(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_50;
  int local_4c;
  int local_38;
  int local_34;
  short *local_2c;
  int local_24;
  int local_20;

  func_0200656c(1);
  func_0x020e1510(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x0202de28) + 0x5c) + 0x60));
  *(uint *)(*(unsigned int *)0x0202de2c) = *(uint *)(*(unsigned int *)0x0202de2c) | 0x10;
  func_02045748((*(unsigned int *)0x0202de30));
  *(uint *)((*(unsigned int *)0x0202de34) + 0x124) = *(uint *)((*(unsigned int *)0x0202de34) + 0x124) | 0x80000000;
  func_0200653c(1);
  func_02008c04();
  uVar2 = *(uint *)(*(int *)(param_1 + ((unsigned int)0x0202de38)) + 0x14) & 0xffff;
  iVar3 = *(int *)(param_1 + ((unsigned int)0x0202de3c));
  local_20 = *(int *)(param_1 + ((unsigned int)0x0202de3c) + 0xc);
  if (param_2 != (int *)0x0) {
    local_20 = *param_2;
  }
  iVar11 = 0;
  iVar10 = *(int *)((*(unsigned int *)0x0202de34) + 0x1c4);
  local_2c = (short *)(iVar10 + 0x3000);
  local_24 = 1;
  uVar14 = 0;
  if (1 < uVar2) {
    do {
      iVar7 = 0;
      bVar1 = false;
      if (0 < (int)uVar14) {
        do {
          if (*(int *)(param_1 + ((unsigned int)0x0202de38)) == 0) {
            psVar12 = (short *)0x0;
          }
          else {
            psVar12 = (short *)(*(int *)(param_1 + ((unsigned int)0x0202de38)) + local_24 * 0x18);
          }
          if (local_2c[iVar7] == *psVar12) {
            bVar1 = true;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar14);
      }
      uVar15 = uVar14;
      if (!bVar1) {
        if (*(int *)(param_1 + ((unsigned int)0x0202de38)) == 0) {
          psVar12 = (short *)0x0;
        }
        else {
          psVar12 = (short *)(*(int *)(param_1 + ((unsigned int)0x0202de38)) + local_24 * 0x18);
        }
        uVar15 = uVar14 + 1;
        local_2c[uVar14] = *psVar12;
      }
      iVar7 = 0;
      bVar1 = false;
      if (0 < (int)uVar15) {
        do {
          if (*(int *)(param_1 + ((unsigned int)0x0202de38)) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(param_1 + ((unsigned int)0x0202de38)) + local_24 * 0x18;
          }
          if (local_2c[iVar7] == *(short *)(iVar13 + 2)) {
            bVar1 = true;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar15);
      }
      uVar14 = uVar15;
      if (!bVar1) {
        if (*(int *)(param_1 + ((unsigned int)0x0202de38)) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_1 + ((unsigned int)0x0202de38)) + local_24 * 0x18;
        }
        uVar14 = uVar15 + 1;
        local_2c[uVar15] = *(short *)(iVar7 + 2);
      }
      local_24 = local_24 + 1;
    } while (local_24 < (int)uVar2);
  }
  iVar7 = (local_20 + -0x1000) * 0x10;
  bVar1 = false;
  uVar15 = 0;
  if (uVar14 != 0) {
    do {
      if (iVar7 >> 0x10 == (int)local_2c[uVar15]) {
        bVar1 = true;
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar14);
  }
  uVar15 = uVar14;
  if (!bVar1) {
    uVar15 = uVar14 + 1;
    local_2c[uVar14] = (short)((uint)iVar7 >> 0x10);
  }
  local_50 = 0;
  if (0 < (int)uVar15) {
    do {
      iVar7 = local_50 + 1;
      if (iVar7 < (int)uVar15) {
        puVar8 = (ushort *)(local_2c + local_50);
        do {
          puVar5 = (ushort *)(local_2c + iVar7);
          if (local_2c[iVar7] < (short)*puVar8) {
            *puVar8 = local_2c[iVar7] ^ *puVar8;
            *puVar5 = *puVar5 ^ *puVar8;
            *puVar8 = *puVar5 ^ *puVar8;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar15);
      }
      local_50 = local_50 + 1;
    } while (local_50 < (int)uVar15);
  }
  while( true ) {
    iVar13 = (int)*local_2c;
    local_4c = 0;
    *(int *)(param_1 + ((unsigned int)0x0202de3c)) = iVar13 << 0xc;
    iVar7 = ((unsigned int)0x0202de38);
    if ((short)(iVar3 >> 0xc) <= iVar13) break;
    iVar6 = 1;
    if (1 < uVar2) {
      do {
        iVar9 = *(int *)(param_1 + iVar7);
        if (iVar9 == 0) {
          psVar12 = (short *)0x0;
        }
        else {
          psVar12 = (short *)(iVar9 + iVar6 * 0x18);
        }
        if (iVar13 == *psVar12) {
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + iVar6 * 0x18;
          }
          iVar4 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          *(int *)(iVar10 + iVar4) = iVar9;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar2);
    }
    iVar7 = 0;
    if (0 < iVar11) {
      do {
        if (iVar13 < *(short *)(*(int *)(iVar10 + iVar7 * 4) + 2)) {
          iVar7 = iVar7 + 1;
        }
        else {
          for (iVar6 = iVar7; iVar6 < iVar11 + -1; iVar6 = iVar6 + 1) {
            *(undefined4 *)(iVar10 + iVar6 * 4) = *(undefined4 *)(iVar10 + iVar6 * 4 + 4);
          }
          iVar11 = iVar11 + -1;
        }
      } while (iVar7 < iVar11);
    }
    local_2c = local_2c + 1;
  }
  if (0 < iVar11) {
    do {
      iVar7 = local_4c + 1;
      if (iVar7 < iVar11) {
        do {
          uVar14 = *(uint *)(iVar10 + iVar7 * 4);
          uVar15 = *(uint *)(iVar10 + local_4c * 4);
          if (uVar14 < uVar15) {
            *(uint *)(iVar10 + local_4c * 4) = uVar14;
            *(uint *)(iVar10 + iVar7 * 4) = uVar15;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar11);
      }
      local_4c = local_4c + 1;
    } while (local_4c < iVar11);
  }
  iVar7 = ((unsigned int)0x0202de3c);
  *(int *)(param_1 + ((unsigned int)0x0202de3c)) = iVar3;
  *(undefined2 *)(param_1 + iVar7 + -0x14) = 8;
  while( true ) {
    iVar3 = *(int *)(param_1 + ((unsigned int)0x0202de3c));
    iVar7 = (int)*local_2c;
    *(int *)(param_1 + ((unsigned int)0x0202de3c)) = iVar7 << 0xc;
    local_34 = 1;
    if (1 < uVar2) break;
LAB_0202ded8:
    iVar13 = ((unsigned int)0x0202e0f0);
    iVar6 = *(int *)(param_1 + ((unsigned int)0x0202e0f0));
    if (iVar3 != iVar6) {
      *(int *)(param_1 + ((unsigned int)0x0202e0f0)) = iVar3;
      func_0202cba8(param_1,iVar6 - iVar3);
      *(int *)(param_1 + iVar13) = iVar6;
    }
    if (local_20 + -0x1000 <= *(int *)(param_1 + ((unsigned int)0x0202e0f0))) {
      local_38 = 0;
      if (*(short *)(param_1 + ((unsigned int)0x0202e0f4)) != 0) {
        do {
          iVar3 = ((unsigned int)0x0202e0f8);
          iVar10 = param_1 + local_38 * 4;
          if (*(int *)(iVar10 + 0xd30) != 0) {
            iVar7 = param_1 + local_38 * 2;
            uVar2 = (uint)*(ushort *)(iVar7 + 0xdb0);
            iVar11 = func_0202c774(param_1,(uint)*(ushort *)(iVar7 + ((unsigned int)0x0202e0f8)) +
                                          (uint)*(ushort *)(iVar7 + ((unsigned int)0x0202e0f8) + 0x40) * 0x10000);
            if (iVar11 != 0) {
              if (uVar2 != 0) {
                func_0202ca98(param_1,iVar11);
                iVar13 = 1;
                *(uint *)(iVar11 + 0x114) = *(uint *)(iVar11 + 0x114) ^ 1;
                func_0202cd5c(param_1,*(undefined2 *)(iVar7 + iVar3),
                             *(undefined2 *)(iVar7 + iVar3 + 0x40),
                             *(undefined2 *)(*(int *)(iVar10 + 0xd30) + uVar2 * 2 + -2));
                if ((*(uint *)(iVar11 + 0xfc) & 0x10) != 0) {
                  do {
                    iVar6 = iVar11 + iVar13 * 4;
                    iVar3 = *(int *)(iVar6 + 0x6c);
                    if (iVar3 != 0) {
                      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xfffffffd;
                      iVar3 = *(int *)(iVar6 + 0x6c);
                      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < 3);
                }
                *(uint *)(iVar11 + 0x114) = *(uint *)(iVar11 + 0x114) ^ 1;
              }
              iVar3 = ((unsigned int)0x0202e0fc);
              if (uVar2 < *(ushort *)(iVar7 + ((unsigned int)0x0202e0fc))) {
                iVar13 = 1;
                *(uint *)(iVar11 + 0x114) = *(uint *)(iVar11 + 0x114) ^ 1;
                func_0202ca98(param_1,iVar11);
                *(uint *)(iVar11 + 0x114) = *(uint *)(iVar11 + 0x114) ^ 1;
                func_0202cd5c(param_1,*(undefined2 *)(iVar7 + ((unsigned int)0x0202e0f8)),
                             *(undefined2 *)(iVar7 + ((unsigned int)0x0202e0f8) + 0x40),
                             *(undefined2 *)(*(int *)(iVar10 + iVar3 + 0x42) + uVar2 * 2));
                if ((*(uint *)(iVar11 + 0xfc) & 0x10) != 0) {
                  do {
                    iVar10 = iVar11 + iVar13 * 4;
                    iVar3 = *(int *)(iVar10 + 0x6c);
                    if (iVar3 != 0) {
                      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xfffffffd;
                      iVar3 = *(int *)(iVar10 + 0x6c);
                      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < 3);
                }
              }
            }
          }
          local_38 = local_38 + 1;
        } while (local_38 < (int)(uint)*(ushort *)(param_1 + ((unsigned int)0x0202e0f4)));
      }
      *(undefined2 *)(param_1 + 0xab2) = *(undefined2 *)(param_1 + 0xab0);
      *(undefined2 *)(param_1 + 0xab0) = 6;
      *(undefined1 *)(param_1 + ((unsigned int)0x0202e100)) = 0;
      return;
    }
    iVar3 = 0;
    if (0 < iVar11) {
      do {
        psVar12 = *(short **)(iVar10 + iVar3 * 4);
        if (iVar7 == *psVar12) {
          func_0202e220(param_1,psVar12,0,param_3);
        }
        iVar13 = *(int *)(iVar10 + iVar3 * 4);
        if (iVar7 == *(short *)(iVar13 + 2)) {
          func_0202f144(param_1,iVar13,0,param_3);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar11);
    }
    iVar3 = 0;
    if (0 < iVar11) {
      do {
        if (iVar7 < *(short *)(*(int *)(iVar10 + iVar3 * 4) + 2)) {
          iVar3 = iVar3 + 1;
        }
        else {
          for (iVar13 = iVar3; iVar13 < iVar11 + -1; iVar13 = iVar13 + 1) {
            *(undefined4 *)(iVar10 + iVar13 * 4) = *(undefined4 *)(iVar10 + iVar13 * 4 + 4);
          }
          iVar11 = iVar11 + -1;
        }
      } while (iVar3 < iVar11);
    }
    local_2c = local_2c + 1;
  }
LAB_0202de14:
  if (*(int *)(param_1 + ((unsigned int)0x0202de38)) == 0) {
    psVar12 = (short *)0x0;
  }
  else {
    psVar12 = (short *)(*(int *)(param_1 + ((unsigned int)0x0202de38)) + local_34 * 0x18);
  }
  if (iVar7 == *psVar12) {
    *(undefined4 *)(iVar10 + iVar11 * 4) = 0;
    iVar13 = 0;
    if (0 < iVar11) {
      do {
        uVar14 = *(int *)(param_1 + ((unsigned int)0x0202e0ec)) + local_34 * 0x18;
        if (*(int *)(param_1 + ((unsigned int)0x0202e0ec)) == 0) {
          uVar14 = 0;
        }
        iVar6 = iVar11;
        if (uVar14 < *(uint *)(iVar10 + iVar13 * 4)) goto joined_r0x0202de7a;
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar11);
    }
    goto LAB_0202dea8;
  }
  goto LAB_0202decc;
joined_r0x0202de7a:
  for (; iVar13 < iVar6; iVar6 = iVar6 + -1) {
    *(undefined4 *)(iVar10 + iVar6 * 4) = *(undefined4 *)(iVar10 + iVar6 * 4 + -4);
  }
  if (*(int *)(param_1 + ((unsigned int)0x0202e0ec)) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + ((unsigned int)0x0202e0ec)) + local_34 * 0x18;
  }
  *(int *)(iVar10 + iVar13 * 4) = iVar6;
  iVar11 = iVar11 + 1;
LAB_0202dea8:
  if (*(int *)(iVar10 + iVar11 * 4) == 0) {
    if (*(int *)(param_1 + ((unsigned int)0x0202e0ec)) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(param_1 + ((unsigned int)0x0202e0ec)) + local_34 * 0x18;
    }
    iVar6 = iVar11 * 4;
    iVar11 = iVar11 + 1;
    *(int *)(iVar10 + iVar6) = iVar13;
  }
LAB_0202decc:
  local_34 = local_34 + 1;
  if ((int)uVar2 <= local_34) goto LAB_0202ded8;
  goto LAB_0202de14;
}
