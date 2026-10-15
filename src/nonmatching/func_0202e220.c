#pragma thumb on

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;

typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined6;
typedef unsigned long long undefined7;
typedef unsigned long long undefined8;

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef signed char sbyte;
typedef unsigned char byte;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef int bool;
typedef int code();

#ifndef true
#define true 1
#endif
#ifndef false
#define false 0
#endif
#ifndef NULL
#define NULL ((void *)0)
#endif

#define CONCAT11(a,b) ((((unsigned int)(a)&0xffU)<<8)|((unsigned int)(b)&0xffU))
#define CONCAT12(a,b) ((((unsigned int)(a)&0xffU)<<16)|((unsigned int)(b)&0xffffU))
#define CONCAT13(a,b) ((((unsigned int)(a)&0xffU)<<24)|((unsigned int)(b)&0xffffffU))
#define CONCAT14(a,b) ((((unsigned long long)(a)&0xffULL)<<32)|((unsigned long long)(b)&0xffffffffULL))
#define CONCAT15(a,b) ((((unsigned long long)(a)&0xffULL)<<40)|((unsigned long long)(b)&0xffffffffffULL))
#define CONCAT16(a,b) ((((unsigned long long)(a)&0xffULL)<<48)|((unsigned long long)(b)&0xffffffffffffULL))
#define CONCAT17(a,b) ((((unsigned long long)(a)&0xffULL)<<56)|((unsigned long long)(b)&0xffffffffffffffULL))
#define CONCAT21(a,b) ((((unsigned int)(a)&0xffffU)<<8)|((unsigned int)(b)&0xffU))
#define CONCAT22(a,b) ((((unsigned int)(a)&0xffffU)<<16)|((unsigned int)(b)&0xffffU))
#define CONCAT23(a,b) ((((unsigned long long)(a)&0xffffULL)<<24)|((unsigned long long)(b)&0xffffffULL))
#define CONCAT24(a,b) ((((unsigned long long)(a)&0xffffULL)<<32)|((unsigned long long)(b)&0xffffffffULL))
#define CONCAT31(a,b) ((((unsigned int)(a)&0xffffffU)<<8)|((unsigned int)(b)&0xffU))
#define CONCAT32(a,b) ((((unsigned long long)(a)&0xffffffULL)<<16)|((unsigned long long)(b)&0xffffULL))
#define CONCAT33(a,b) ((((unsigned long long)(a)&0xffffffULL)<<24)|((unsigned long long)(b)&0xffffffULL))
#define CONCAT34(a,b) ((((unsigned long long)(a)&0xffffffULL)<<32)|((unsigned long long)(b)&0xffffffffULL))
#define CONCAT41(a,b) ((((unsigned long long)(a)&0xffffffffULL)<<8)|((unsigned long long)(b)&0xffULL))
#define CONCAT42(a,b) ((((unsigned long long)(a)&0xffffffffULL)<<16)|((unsigned long long)(b)&0xffffULL))
#define CONCAT43(a,b) ((((unsigned long long)(a)&0xffffffffULL)<<24)|((unsigned long long)(b)&0xffffffULL))
#define CONCAT44(a,b) ((((unsigned long long)(a))<<32)|((unsigned int)(b)))
#define SUB21(a,b) ((undefined1)(((uint)(a) >> ((b)*8)) & 0xffU))
#define SUB22(a,b) ((undefined2)(((uint)(a) >> ((b)*8)) & 0xffffU))
#define SUB41(a,b) ((undefined1)(((uint)(a) >> ((b)*8)) & 0xffU))
#define SUB42(a,b) ((undefined2)(((uint)(a) >> ((b)*8)) & 0xffffU))
#define SUB81(a,b) ((undefined1)(((ulonglong)(a) >> ((b)*8)) & 0xffULL))
#define SUB82(a,b) ((undefined2)(((ulonglong)(a) >> ((b)*8)) & 0xffffULL))
#define SUB84(a,b) ((undefined4)(((ulonglong)(a) >> ((b)*8)) & 0xffffffffULL))
#define ZEXT14(a) ((undefined4)(undefined1)(a))
#define ZEXT24(a) ((undefined4)(undefined2)(a))
#define ZEXT18(a) ((undefined8)(undefined1)(a))
#define ZEXT28(a) ((undefined8)(undefined2)(a))
#define ZEXT48(a) ((undefined8)(undefined4)(a))
#define SEXT14(a) ((int)(signed char)(a))
#define SEXT24(a) ((int)(short)(a))
#define SEXT18(a) ((longlong)(signed char)(a))
#define SEXT28(a) ((longlong)(short)(a))
#define SEXT48(a) ((longlong)(int)(a))
#define CARRY1(a,b) ((unsigned char)(a) > (unsigned char)(0xffU-(unsigned char)(b)))
#define CARRY2(a,b) ((unsigned short)(a) > (unsigned short)(0xffffU-(unsigned short)(b)))
#define CARRY4(a,b) ((uint)(a) > (uint)(0xffffffffU-(uint)(b)))
#define SCARRY4(a,b) ((((int)(a)<0)==((int)(b)<0))&&(((int)((uint)(a)+(uint)(b))<0)!=((int)(a)<0)))
#define SBORROW4(a,b) ((((int)(a)<0)!=((int)(b)<0))&&(((int)((uint)(a)-(uint)(b))<0)!=((int)(a)<0)))
extern int LZCOUNT();

extern int func_02001c28();
extern int func_0201e9d4();
extern int func_0201ebe0();
extern int func_02023f04();
extern int func_0202c19c();
extern int func_0202c76c();
extern int func_0202c774();
extern int func_0202ca4c();
extern int func_0202cc4c();
extern int func_0202cd5c();
extern int func_0202d18c();
extern int func_0202d258();
extern int func_0202d2f4();
extern int func_0202d440();
extern int func_0202d480();
extern int func_0202d668();
extern int func_0202e134();
extern int func_0202fa4c();
extern int func_0202fb44();
extern int func_0202fc04();
extern int func_020376dc();
extern int func_0203773c();
extern int func_02037800();
extern int func_02037c48();
extern int func_020395bc();
extern int func_020395cc();
extern int func_0203a824();
extern int func_0203a87c();
extern int func_0203aa04();
extern int func_0203af8c();
extern int func_0203b06c();
extern int func_0203b220();
extern int func_0203c89c();
extern int func_0203ca80();
extern int func_02068b50();
extern int func_020ae404();
extern int func_020ae470();
extern int func_020dfdfc();
extern int func_020e15ec();

/* recovered PC-relative literal-pool values */
#define _DAT_0202e550 0x00000ac4U
#define _DAT_0202e554 0x00000e54U
#define _DAT_0202e558 0x00007530U
#define _DAT_0202e55c 0x00000caeU
#define _DAT_0202e560 0x00002710U
#define _DAT_0202e564 ((undefined4 *)0x02078d0cU)
#define _DAT_0202e568 0x00000bdcU
#define _DAT_0202e56c 0x00000bd8U
#define _DAT_0202e570 0x00000becU
#define _DAT_0202e574 0x00000e58U
#define _DAT_0202e578 ((undefined4 *)0x02078d78U)
#define _DAT_0202ec14 0xffff0000U
#define _DAT_0202ec18 0x00000becU
#define _DAT_0202ec1c ((undefined4 *)0x02078d0cU)
#define _DAT_0202ec20 ((undefined4 *)0x02078f7cU)
#define _DAT_0202f0f4 ((undefined4 *)0x02078d0cU)
#define _DAT_0202f0f8 0x00000bccU
#define _DAT_0202f0fc 0x0000014fU
#define _DAT_0202f100 0xfbffffffU
#define _DAT_0202f104 0x00000102U
#define _DAT_0202f108 ((undefined4 *)0x02078f20U)
#define _DAT_0202f10c 0x00000be8U
#define _DAT_0202f110 0x0000ffffU
#define _LAB_0202e880 ((undefined4 *)0x02078d0cU)
#define _LAB_0202e884 0x00000e0cU
#define _LAB_0202e888 0x00000be8U
#define _LAB_0202e88c 0x00000102U
#define _LAB_0202e890 0xffff0000U
#define _LAB_0202e894 0x0000018fU

extern undefined4 extraout_r1;
extern undefined4 extraout_r1_00;
extern undefined4 extraout_r1_01;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0202e220(int param_1,ushort *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  short sVar5;
  undefined2 uVar6;
  ushort *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  undefined4 uVar24;
  int iVar25;
  undefined4 uVar26;
  int iStack_268;
  int iStack_22c;
  byte abStack_204 [64];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 auStack_114 [64];

  iVar19 = _DAT_0202f0f8;
  piVar4 = _DAT_0202f0f4;
  puVar9 = _LAB_0202e880;
  iVar21 = _DAT_0202e56c;
  iVar17 = _DAT_0202e554;
  iVar11 = _DAT_0202e550;
  iVar13 = *(int *)(param_1 + _DAT_0202e550);
  uVar14 = *(uint *)(*(int *)(param_1 + _DAT_0202e554) + 0x14);
  sVar12 = (short)param_3;
  switch(param_2[3]) {
  case 1:
    uVar10 = *(uint *)(param_2 + 4) & 0xffff;
    uVar15 = *(uint *)(param_2 + 10);
    uVar16 = uVar15 & 0xffff;
    uVar20 = func_0202d440(param_1,uVar10,uVar16);
    iVar11 = (uint)param_2[1] - (uint)*param_2;
    iStack_22c = *(int *)(param_2 + 8);
    if (iVar11 < *(int *)(param_2 + 8)) {
      iStack_22c = iVar11;
    }
    iVar17 = func_0202c774(param_1,uVar10 + uVar15 * 0x10000);
    if ((iVar17 == 0) || (iVar21 = *(int *)(iVar17 + 0x78), iVar21 == 0)) {
      if (param_4 == 0) {
        func_0202d18c(param_1,uVar10,*(uint *)(param_2 + 10) & 0xffff,
                        *(uint *)(param_2 + 6) & 0xffff,iStack_22c,iVar11);
        iVar17 = _DAT_0202e55c;
        iVar21 = param_1 + uVar20 * 2;
        *(ushort *)(iVar21 + _DAT_0202e55c) = param_2[2];
        *(undefined2 *)(iVar21 + iVar17 + -0x40) = 1;
        func_0202d480(param_1,param_3,uVar10,uVar20 & 0xffff,uVar16,iStack_22c,iVar11);
      }
      else {
        func_0202d258(param_1,iVar17,*(uint *)(param_2 + 6) & 0xffff);
        iVar11 = _DAT_0202e55c;
        iVar17 = param_1 + uVar20 * 2;
        *(ushort *)(iVar17 + _DAT_0202e55c) = param_2[2];
        *(undefined2 *)(iVar17 + iVar11 + -0x40) = 1;
      }
      iStack_268 = uVar20 * 2;
      sVar12 = 0;
      uVar15 = 1;
      if (1 < uVar14) {
        sVar12 = 0;
        do {
          if (*(int *)(param_1 + _DAT_0202e554) == 0) {
            puVar7 = (ushort *)0x0;
          }
          else {
            puVar7 = (ushort *)(*(int *)(param_1 + _DAT_0202e554) + uVar15 * 0x18);
          }
          if ((((puVar7[3] == 1) && (*(uint *)(puVar7 + 6) < _DAT_0202e560)) &&
              (uVar10 == *(uint *)(puVar7 + 4))) &&
             ((uVar16 == *(uint *)(puVar7 + 10) && ((int)(uint)*puVar7 < (iVar13 << 4) >> 0x10)))) {
            sVar12 = sVar12 + 1;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar14);
      }
      iVar11 = param_1 + 0xdb0;
      *(short *)(iVar11 + iStack_268) = sVar12;
      *(short *)(iVar11 + iStack_268) = *(short *)(iVar11 + iStack_268) + 1;
      if ((uint)*(ushort *)(param_1 + iStack_268 + 0xcee) <= (uint)*(ushort *)(iVar11 + iStack_268))
      {
        return 0;
      }
      func_0202cd5c(param_1,uVar10,*(uint *)(param_2 + 10) & 0xffff,
                      *(undefined2 *)
                       (*(int *)(param_1 + uVar20 * 4 + 0xd30) +
                       (uint)*(ushort *)(iVar11 + iStack_268) * 2));
      return 0;
    }
    if (*(uint *)(param_2 + 6) < _DAT_0202e558) {
      if (iVar17 == 0) {
        return 0;
      }
      if (iVar21 == 0) {
        return 0;
      }
      *(uint *)(iVar21 + 0xc) = *(uint *)(iVar21 + 0xc) & 0xfffffffd;
    }
    else {
      func_0203b220(iVar21,iStack_22c << 0xc);
      *(uint *)(*(int *)(iVar17 + 0x78) + 0xc) =
           *(uint *)(*(int *)(iVar17 + 0x78) + 0xc) & 0xfffffffd;
    }
    iVar11 = *(int *)(iVar17 + 0x78);
    uVar14 = 1;
    uVar20 = *(uint *)(iVar11 + 0xc);
LAB_0202e310:
    uVar14 = uVar14 | uVar20;
    goto LAB_0202e312;
  case 2:
    uVar14 = *(uint *)(param_2 + 10);
    uVar20 = *(uint *)(param_2 + 4) & 0xffff;
    iVar17 = (uint)param_2[1] - (uint)*param_2;
    iVar11 = *(int *)(param_2 + 8);
    if (iVar17 < *(int *)(param_2 + 8)) {
      iVar11 = iVar17;
    }
    func_0202d18c(param_1,*(uint *)(param_2 + 4) & 0xffff,uVar14 & 0xffff,
                    *(uint *)(param_2 + 6) & 0xffff,iVar11,iVar17);
    iVar17 = 0;
    if (*(ushort *)(param_1 + _DAT_0202ec18) != 0) {
      do {
        if (uVar20 == *(ushort *)(param_1 + iVar17 * 2 + _DAT_0202ec18 + 2)) break;
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)(uint)*(ushort *)(param_1 + _DAT_0202ec18));
    }
    iVar17 = func_0202c774(param_1,uVar20 + uVar14 * 0x10000);
    if (iVar17 != 0) {
      *(uint *)(iVar17 + 0xfc) = *(uint *)(iVar17 + 0xfc) | 0x10;
      iVar21 = 1;
      do {
        iVar19 = iVar17 + iVar21 * 4;
        if (*(int *)(iVar19 + 0x6c) != 0) {
          func_0203b220(*(int *)(iVar19 + 0x6c),iVar11 << 0xc);
          *(uint *)(*(int *)(iVar19 + 0x6c) + 0xc) =
               *(uint *)(*(int *)(iVar19 + 0x6c) + 0xc) & 0xfffffffd;
          *(uint *)(*(int *)(iVar19 + 0x6c) + 0xc) = *(uint *)(*(int *)(iVar19 + 0x6c) + 0xc) | 1;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < 3);
    }
    break;
  case 3:
    func_0202d2f4(param_1,*(uint *)(param_2 + 4) & 0xffff,*(uint *)(param_2 + 10) & 0xffff,
                    *(uint *)(param_2 + 6) & 0xffff,*(uint *)(param_2 + 8) & 0xffff);
    func_0202d18c(param_1,*(uint *)(param_2 + 4) & 0xffff,*(uint *)(param_2 + 10) & 0xffff,
                    *(uint *)(param_2 + 4) & 0xffff,*(undefined4 *)(param_2 + 8),
                    (uint)param_2[1] - (uint)*param_2);
    break;
  case 4:
    sVar12 = *(short *)(param_1 + _DAT_0202e550 + -0x14);
    if ((sVar12 != 0xb) && (sVar12 != 10)) {
      if ((param_4 == 0) && (**(char **)(param_1 + _DAT_0202e554 + -0x60) != '\0')) {
        iVar11 = *(int *)(*_DAT_0202e564 + 0xa4);
        func_020e15ec(iVar11,*(uint *)(param_2 + 4) & 0xffff);
        func_020dfdfc(iVar11,*(undefined4 *)(param_1 + iVar17 + -0x60),1);
        *(undefined1 *)(iVar11 + 0x288) = 0;
        *(undefined1 *)(iVar11 + 0x289) = 0;
        func_0202d668(param_1);
        iVar11 = _DAT_0202e568;
        *(undefined2 *)(param_1 + iVar17 + -0x54) = 0;
        *(undefined1 *)(param_1 + iVar11) = 1;
        *(uint *)(param_1 + iVar17 + -0x50) = (uint)param_2[1];
        iVar11 = *(int *)(param_2 + 6);
        *(int *)(param_1 + iVar17 + -0x4c) = iVar11;
        if (iVar11 == 0) {
          *(undefined4 *)(param_1 + iVar17 + -0x4c) = 0x4b;
        }
      }
      else {
        func_0202d668(param_1);
      }
    }
    break;
  case 5:
    uVar18 = *_DAT_0202e578;
    iVar11 = *(int *)(*(int *)(*(int *)*_LAB_0202e880 + 0x5c) + 0x30);
    sVar12 = (short)*(undefined4 *)(param_2 + 6);
    sVar5 = (short)*(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + _DAT_0202e554 + -0x48) = *(undefined4 *)(param_2 + 8);
    *(int *)(iVar11 + 0x108) = (int)*(short *)(*(int *)*puVar9 + 0x54) << 0xc;
    if (*(int *)(param_1 + iVar17 + -0x48) == 0) {
      *(undefined4 *)(param_1 + iVar17 + -0x48) = 0x7f;
    }
    *(undefined4 *)(param_1 + 0xe10) = *(undefined4 *)(param_2 + 10);
    iVar11 = _LAB_0202e888;
    if (param_4 != 0) {
      if ((*(uint *)(param_1 + _LAB_0202e888) & 0x20) == 0) {
        return 0;
      }
      iVar17 = *(int *)(*(int *)(*(int *)*_LAB_0202e880 + 0x5c) + 0x30);
      if (sVar5 == *(short *)(iVar17 + 0x100)) {
        return 0;
      }
      *(undefined2 *)(iVar17 + 0x102) = 0xffff;
      *(short *)(iVar17 + 0x100) = sVar5;
      *(short *)(iVar17 + 0x104) = sVar12;
      iVar17 = *(int *)(*(int *)(*(int *)*_LAB_0202e880 + 0x5c) + 0x30);
      *(int *)(iVar17 + 0x108) = *(int *)(param_1 + 0xe0c) << 0xc;
      func_02068b50(*(int *)*_LAB_0202e880 + 0x4c,(*(int *)(iVar17 + 0x108) << 4) >> 0x10);
      *(uint *)(param_1 + iVar11) = *(uint *)(param_1 + iVar11) | 1;
      return 0;
    }
    if (sVar12 < 0) {
      func_02037800(uVar18,1,0);
      return 0;
    }
    iVar11 = *(int *)(*(int *)(*(int *)*_LAB_0202e880 + 0x5c) + 0x30);
    sVar2 = *(short *)(iVar11 + 0x100);
    iVar17 = *(int *)(param_1 + _LAB_0202e884);
    *(int *)(iVar11 + 0x108) = iVar17 << 0xc;
    func_02068b50(*(int *)*_LAB_0202e880 + 0x4c,(int)(short)iVar17);
    if (sVar5 == sVar2) {
      return 0;
    }
    if ((*(uint *)(param_1 + _LAB_0202e888) & 4) == 0) {
      iVar11 = func_02037c48(uVar18,0);
      if (iVar11 != 0) {
        func_020376dc(uVar18,iVar11,0,0);
      }
    }
    else {
      func_0203773c(uVar18,1,0,1);
    }
    iVar11 = _LAB_0202e88c;
    iVar17 = *(int *)(*(int *)(*(int *)*_LAB_0202e880 + 0x5c) + 0x30);
    *(undefined2 *)(iVar17 + _LAB_0202e88c) = 0xffff;
    *(short *)(iVar17 + iVar11 + -2) = sVar5;
    *(short *)(iVar17 + iVar11 + 2) = sVar12;
    uVar14 = *(uint *)(param_1 + _LAB_0202e888) | 1;
    iVar11 = _LAB_0202e888;
    goto LAB_0202e672;
  case 6:
    if (param_4 != 0) {
      return 0;
    }
    iVar11 = func_0202c19c(param_1,param_3 & 0xffff);
    if (iVar11 != 0) {
      return 0;
    }
    psVar8 = (short *)func_0202c19c(param_1,0);
    if (psVar8 == (short *)0x0) {
      return 0;
    }
    *psVar8 = sVar12;
    psVar8[2] = 0;
    sVar12 = (short)*(undefined4 *)(param_2 + 6);
    uVar14 = *(int *)(param_2 + 4) << 0x10;
    goto LAB_0202e71a;
  case 7:
    if (param_4 != 0) {
      return 0;
    }
    iVar11 = func_0202c19c(param_1,param_3 & 0xffff);
    if (iVar11 != 0) {
      return 0;
    }
    psVar8 = (short *)func_0202c19c(param_1,0);
    if (psVar8 == (short *)0x0) {
      return 0;
    }
    *psVar8 = sVar12;
    psVar8[2] = 0;
    sVar12 = (short)*(undefined4 *)(param_2 + 4);
    uVar14 = _LAB_0202e890;
LAB_0202e71a:
    *(uint *)(psVar8 + 4) = uVar14 | (int)sVar12;
    *(int *)(psVar8 + 6) = *(int *)(param_2 + 8) << 0xc;
    break;
  case 8:
    if (param_4 != 0) {
      return 0;
    }
    uStack_118 = *(undefined4 *)(param_2 + 10);
    uStack_11c = *(undefined4 *)(param_2 + 8);
    uStack_120 = *(undefined4 *)(param_2 + 6);
    uVar14 = *(uint *)(param_2 + 4);
    puVar9 = &uStack_120;
    goto LAB_0202e772;
  case 9:
    if (param_4 != 0) {
      return 0;
    }
    puVar9 = (undefined4 *)
             func_0202cc4c(param_1,(*(uint *)(param_2 + 6) & 0xffff) +
                                     *(int *)(param_2 + 10) * 0x10000,
                             *(uint *)(param_2 + 8) & 0xffff);
    if (puVar9 == (undefined4 *)0x0) {
      return 0;
    }
    uVar14 = *(uint *)(param_2 + 4);
LAB_0202e772:
    iVar11 = func_0203a87c(uVar14 & 0xffff,0,puVar9,0);
    *(uint *)(param_2 + 4) = iVar11 << 0x10 | *(uint *)(param_2 + 4);
    break;
  case 10:
    if (param_4 != 0) {
      return 0;
    }
    uVar14 = *(uint *)(param_2 + 8);
    uVar20 = *(uint *)(param_2 + 6);
    iVar17 = *(int *)(param_2 + 10);
    iVar11 = func_0202c774(param_1,(uVar20 & 0xffff) + iVar17 * 0x10000);
    if (iVar11 == 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 4) & 0xffff) == _LAB_0202e894) {
      uVar14 = 0x13;
    }
    else {
      if ((*(uint *)(param_2 + 4) & 0xffff) != _LAB_0202e894 + 1) {
        uVar18 = func_0202cc4c(param_1,(uVar20 & 0xffff) + iVar17 * 0x10000,uVar14 & 0xffff);
        iVar11 = func_0203aa04(*(uint *)(param_2 + 4) & 0xffff,0,uVar18);
        uVar14 = _LAB_0202e890;
        uVar20 = iVar11 << 0x10 | *(uint *)(param_2 + 4);
        *(uint *)(param_2 + 4) = uVar20;
        uVar20 = (uVar20 & uVar14) >> 0x10;
        if (uVar20 == uVar14 >> 0x10) {
          return 0;
        }
        func_0203b06c(uVar20,uVar18);
        return 0;
      }
      uVar14 = 0xe;
    }
    iVar17 = *(int *)(*(int *)(iVar11 + 0x48) + 0xa8);
    *(uint *)(iVar17 + uVar14 * 0x48) = *(uint *)(iVar17 + uVar14 * 0x48) | 0x80;
    func_02001c28(auStack_160);
    iVar17 = func_0203a824(*(uint *)(param_2 + 4) & 0xffff,0,auStack_160,0);
    uVar20 = _LAB_0202e890;
    uVar10 = iVar17 << 0x10 | *(uint *)(param_2 + 4);
    *(uint *)(param_2 + 4) = uVar10;
    uVar10 = (uVar10 & uVar20) >> 0x10;
    if (uVar10 == uVar20 >> 0x10) {
      return 0;
    }
    uVar18 = *(undefined4 *)(iVar11 + 0x48);
    goto LAB_0202e876;
  case 0xb:
    uVar14 = *(uint *)(param_2 + 8) & 0xffff;
    uVar18 = *(undefined4 *)(*(int *)(*(int *)*_DAT_0202ec1c + 0x5c) + 0x44);
    if ((*(uint *)(param_2 + 10) & 0xffff) != 0) {
      iVar11 = func_020ae470(uVar18,*(uint *)(param_2 + 6) & 0xffff,auStack_114,0x40);
      if (iVar11 == 0) {
        return 0;
      }
      iVar17 = 0;
      if (iVar11 < 1) {
        return 0;
      }
      do {
        puVar9 = auStack_114 + iVar17;
        uVar20 = *(uint *)*puVar9;
        if (uVar14 == 0) {
          uVar20 = uVar20 & 0xfffffffd | 1;
        }
        else {
          uVar20 = uVar20 | 3;
        }
        iVar17 = iVar17 + 1;
        *(uint *)*puVar9 = uVar20;
      } while (iVar17 < iVar11);
      return 0;
    }
    puVar22 = (uint *)func_020ae404(uVar18,*(uint *)(param_2 + 6) & 0xffff);
    if (puVar22 == (uint *)0x0) {
      return 0;
    }
    uVar20 = *puVar22;
    goto joined_r0x0202efa6;
  case 0xc:
    if (*(int *)(param_2 + 4) == 0) {
      uVar6 = 0;
      *(undefined2 *)(param_1 + _DAT_0202e56c) = 0;
    }
    else {
      if (*(int *)(param_2 + 4) != 1) goto LAB_0202e4dc;
      *(undefined2 *)(param_1 + _DAT_0202e56c) = 1;
      uVar6 = (undefined2)*(undefined4 *)(param_2 + 6);
    }
    *(undefined2 *)(param_1 + iVar21 + 2) = uVar6;
LAB_0202e4dc:
    iVar11 = 0;
    func_0202ca4c(param_1,0);
    if (*(short *)(param_1 + _DAT_0202e570) != 0) {
      iVar17 = _DAT_0202e570 + 0xc2;
      iVar21 = _DAT_0202e570 + 2;
      puVar7 = (ushort *)(param_1 + _DAT_0202e570);
      iVar19 = _DAT_0202e570 + 0x82;
      do {
        iVar13 = param_1 + iVar11 * 2;
        if (*(short *)(iVar13 + iVar19) == 1) {
          sVar5 = *(short *)(iVar13 + iVar17);
          uVar18 = func_0202c76c(param_1,*(undefined2 *)(iVar13 + iVar21));
          if (((sVar5 != 0) && (sVar5 != 1)) && (sVar5 == 2)) {
            func_0202fa4c(uVar18,4);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)*puVar7);
    }
    *(short *)(param_1 + _DAT_0202e574) = sVar12 + 1;
    *(undefined2 *)(param_1 + 0xab0) = 0x15;
    return 1;
  case 0xd:
    iVar11 = *_DAT_0202ec20;
    iVar17 = *(int *)(*(int *)(*(int *)*_DAT_0202ec1c + 0x5c) + 0x50);
    *(uint *)(iVar17 + 0x14) = *(uint *)(iVar17 + 0x14) | 0x80000000;
    uStack_1ac = *(undefined4 *)(param_2 + 6);
    uStack_1a8 = *(undefined4 *)(param_2 + 8);
    uStack_1a4 = *(undefined4 *)(param_2 + 10);
    func_020395cc(iVar11 + 0x10,&uStack_1ac);
    break;
  case 0xe:
    iVar11 = *_DAT_0202ec20;
    iVar17 = *(int *)(*(int *)(*(int *)*_DAT_0202ec1c + 0x5c) + 0x50);
    *(uint *)(iVar17 + 0x14) = *(uint *)(iVar17 + 0x14) | 0x80000000;
    uStack_1b8 = *(undefined4 *)(param_2 + 6);
    uStack_1b4 = *(undefined4 *)(param_2 + 8);
    uStack_1b0 = *(undefined4 *)(param_2 + 10);
    func_020395bc(iVar11 + 0x10,&uStack_1b8);
    break;
  case 0xf:
    iVar11 = func_0202c774(param_1,*(undefined4 *)(param_2 + 4));
    if (iVar11 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar11 + 200) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(iVar11 + 0xcc) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 0xd0) = *(undefined4 *)(param_2 + 10);
    if (param_2[2] < 1000) {
      uVar14 = *(uint *)(iVar11 + 0xf8) | 0x100;
    }
    else {
      iVar17 = *_DAT_0202ec20;
      iVar23 = *(int *)(iVar11 + 0xcc);
      iVar19 = *(int *)(iVar17 + 0x6c);
      iVar21 = *(int *)(iVar17 + 0x70);
      iVar13 = *(int *)(iVar11 + 0xd0);
      iVar25 = (uint)param_2[1] - (uint)*param_2;
      uVar18 = func_0201e9d4(*(int *)(iVar11 + 200) - *(int *)(iVar17 + 0x68),iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xec) = uVar18;
      uVar18 = func_0201e9d4(iVar23 - iVar19,iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xf0) = uVar18;
      uVar18 = func_0201e9d4(iVar13 - iVar21,iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xf4) = uVar18;
      uVar14 = *(uint *)(iVar11 + 0xf8) | 0x400;
    }
    *(uint *)(iVar11 + 0xf8) = uVar14;
    uVar20 = *(uint *)(iVar11 + 0xf8);
    uVar14 = 4;
    goto LAB_0202eb60;
  case 0x10:
    iVar11 = func_0202c774(param_1,*(undefined4 *)(param_2 + 4));
    if (iVar11 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar11 + 0xbc) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(iVar11 + 0xc0) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 0xc4) = *(undefined4 *)(param_2 + 10);
    if (param_2[2] < 1000) {
      uVar14 = *(uint *)(iVar11 + 0xf8) | 0x100;
    }
    else {
      iVar17 = *_DAT_0202ec20;
      iVar23 = *(int *)(iVar11 + 0xc0);
      iVar19 = *(int *)(iVar17 + 0x60);
      iVar21 = *(int *)(iVar17 + 100);
      iVar13 = *(int *)(iVar11 + 0xc4);
      iVar25 = (uint)param_2[1] - (uint)*param_2;
      uVar18 = func_0201e9d4(*(int *)(iVar11 + 0xbc) - *(int *)(iVar17 + 0x5c),iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xe0) = uVar18;
      uVar18 = func_0201e9d4(iVar23 - iVar19,iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xe4) = uVar18;
      uVar18 = func_0201e9d4(iVar13 - iVar21,iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xe8) = uVar18;
      uVar14 = *(uint *)(iVar11 + 0xf8) | 0x400;
    }
    *(uint *)(iVar11 + 0xf8) = uVar14;
    uVar20 = *(uint *)(iVar11 + 0xf8);
    uVar14 = 8;
    goto LAB_0202eb60;
  case 0x11:
    uVar18 = *(undefined4 *)(param_2 + 6);
    uVar26 = *(undefined4 *)(param_2 + 8);
    uVar24 = *(undefined4 *)(param_2 + 10);
    func_0201e9d4(param_2[2],1000);
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) + extraout_r1 * 0x10000);
    if (iVar11 != 0) {
      *(undefined4 *)(*(int *)(iVar11 + 0x48) + 100) = uVar18;
      *(undefined4 *)(*(int *)(iVar11 + 0x48) + 0x68) = uVar26;
      *(undefined4 *)(*(int *)(iVar11 + 0x48) + 0x6c) = uVar24;
    }
    break;
  case 0x12:
    func_0201e9d4(param_2[2],1000);
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) + extraout_r1_00 * 0x10000);
    if (iVar11 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar11 + 0xa4) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(iVar11 + 0xa8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 0xac) = *(undefined4 *)(param_2 + 10);
    if (param_2[2] < 1000) {
      uVar14 = *(uint *)(iVar11 + 0xf8) | 0x100;
    }
    else {
      iVar17 = *(int *)(iVar11 + 0x48);
      iVar13 = *(int *)(iVar11 + 0xa8);
      iVar21 = *(int *)(iVar17 + 0x68);
      iVar23 = *(int *)(iVar11 + 0xac);
      iVar19 = *(int *)(iVar17 + 0x6c);
      iVar25 = (uint)param_2[1] - (uint)*param_2;
      uVar18 = func_0201e9d4(*(int *)(iVar11 + 0xa4) - *(int *)(iVar17 + 100),iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xd4) = uVar18;
      uVar18 = func_0201e9d4(iVar13 - iVar21,iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xd8) = uVar18;
      uVar18 = func_0201e9d4(iVar23 - iVar19,iVar25 + 1);
      *(undefined4 *)(iVar11 + 0xdc) = uVar18;
      uVar14 = *(uint *)(iVar11 + 0xf8) | 0x400;
    }
    *(uint *)(iVar11 + 0xf8) = uVar14;
    if (*(int *)(param_2 + 4) == 0) {
      uVar20 = *(uint *)(iVar11 + 0xf8);
      uVar14 = 2;
    }
    else {
      uVar20 = *(uint *)(iVar11 + 0xf8);
      uVar14 = 1;
    }
    goto LAB_0202eb60;
  case 0x13:
    func_0201e9d4(param_2[2],1000);
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) + extraout_r1_01 * 0x10000);
    if (iVar11 == 0) {
      return 0;
    }
    iVar17 = ((uint)param_2[1] - (uint)*param_2) + 1;
    uVar6 = func_0201ebe0(*(int *)(param_2 + 6) << 0x10,0x168);
    *(undefined2 *)(iVar11 + 0xb0) = uVar6;
    uVar6 = func_0201ebe0(*(int *)(param_2 + 8) << 0x10,0x168);
    *(undefined2 *)(iVar11 + 0xb2) = uVar6;
    uVar6 = func_0201ebe0(*(int *)(param_2 + 10) << 0x10,0x168);
    *(undefined2 *)(iVar11 + 0xb4) = uVar6;
    if (iVar17 < 3) {
      iVar17 = *(int *)(iVar11 + 0x48);
      *(undefined2 *)(iVar17 + 0x7c) = *(undefined2 *)(iVar11 + 0xb0);
      *(undefined2 *)(iVar17 + 0x7e) = *(undefined2 *)(iVar11 + 0xb2);
      *(undefined2 *)(iVar17 + 0x80) = *(undefined2 *)(iVar11 + 0xb4);
      *(undefined2 *)(iVar11 + 0xb0) = 0;
      *(undefined2 *)(iVar11 + 0xb2) = 0;
      *(undefined2 *)(iVar11 + 0xb4) = 0;
      return 0;
    }
    sVar12 = *(short *)(iVar11 + 0xb2);
    iVar21 = *(int *)(iVar11 + 0x48);
    sVar5 = *(short *)(iVar21 + 0x7e);
    sVar2 = *(short *)(iVar11 + 0xb4);
    sVar3 = *(short *)(iVar21 + 0x80);
    uVar6 = func_0201e9d4(((int)*(short *)(iVar11 + 0xb0) - (int)*(short *)(iVar21 + 0x7c)) *
                            0x10000 >> 0x10,iVar17);
    *(undefined2 *)(iVar11 + 0xb6) = uVar6;
    uVar6 = func_0201e9d4(((int)sVar12 - (int)sVar5) * 0x10000 >> 0x10,iVar17);
    *(undefined2 *)(iVar11 + 0xb8) = uVar6;
    uVar6 = func_0201e9d4(((int)sVar2 - (int)sVar3) * 0x10000 >> 0x10,iVar17);
    *(undefined2 *)(iVar11 + 0xba) = uVar6;
    uVar20 = *(uint *)(iVar11 + 0xf8);
    uVar14 = 0x10;
LAB_0202eb60:
    *(uint *)(iVar11 + 0xf8) = uVar14 | uVar20;
    break;
  case 0x14:
    if (param_4 != 0) {
      return 0;
    }
    func_02023f04(*(undefined4 *)*_DAT_0202f0f4,0,1,*(undefined4 *)(param_2 + 4));
    iVar17 = *(int *)(param_2 + 6);
    goto joined_r0x0202ee9a;
  case 0x15:
    if (param_4 != 0) {
      return 0;
    }
    func_02023f04(*(undefined4 *)*_DAT_0202f0f4,0,3,*(undefined4 *)(param_2 + 4));
    if (*(int *)(param_2 + 6) != 0) {
      return 0;
    }
    goto LAB_0202ee34;
  case 0x16:
    if (param_4 != 0) {
      return 0;
    }
    func_02023f04(*(undefined4 *)*_DAT_0202f0f4,0,2,*(undefined4 *)(param_2 + 4));
    iVar17 = *(int *)(param_2 + 6);
    goto joined_r0x0202ee9a;
  case 0x17:
    if (param_4 != 0) {
      return 0;
    }
    func_02023f04(*(undefined4 *)*_DAT_0202f0f4,0,4,*(undefined4 *)(param_2 + 4));
    iVar17 = *(int *)(param_2 + 6);
joined_r0x0202ee9a:
    if (iVar17 == 0) {
LAB_0202ee34:
      *(undefined2 *)(param_1 + iVar11 + -0x12) = *(undefined2 *)(param_1 + iVar11 + -0x14);
      *(undefined2 *)(param_1 + iVar11 + -0x14) = 0x16;
    }
    break;
  case 0x18:
    if (*(char *)(*_DAT_0202f0f4 + _DAT_0202f0fc) == '\0') {
      *(int *)(param_1 + _DAT_0202e550 + 0xc) = *(int *)(param_2 + 4) << 0xc;
      *(undefined1 *)(*piVar4 + 0x90) = 0;
    }
    break;
  case 0x19:
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) + (uint)param_2[2] * 0x10000)
    ;
    if (iVar11 != 0) {
      uVar14 = *(uint *)(param_2 + 8);
      if (uVar14 == 0) {
        uStack_1c4 = *(undefined4 *)(param_2 + 6);
        uStack_1c0 = uStack_1c4;
        uStack_1bc = uStack_1c4;
        func_0203c89c(*(undefined4 *)(iVar11 + 0x48),&uStack_1c4);
      }
      else if (*(int *)(*(int *)(iVar11 + 0x48) + 0xa8) + (uVar14 & 0xffff) * 0x48 != 0) {
        iVar17 = (uint)param_2[1] - (uint)*param_2;
        if (*(int *)(param_2 + 10) == 0) {
          iVar17 = 0;
        }
        func_0202fb44(iVar11,*(undefined4 *)(param_2 + 6),iVar17,uVar14 & 0xffff);
      }
    }
    break;
  case 0x1a:
    *(undefined4 *)(param_1 + _DAT_0202f0f8) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + iVar19 + 4) = *(undefined4 *)(param_2 + 8);
    uVar14 = *(uint *)(param_2 + 10);
    iVar11 = iVar19 + 8;
LAB_0202e672:
    *(uint *)(param_1 + iVar11) = uVar14;
    break;
  case 0x1d:
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) + (uint)param_2[2] * 0x10000)
    ;
    if (iVar11 == 0) {
      return 0;
    }
    uVar14 = *(uint *)(param_2 + 8) & 0xffff;
    if ((*(uint *)(param_2 + 10) & 0xffff) != 0) {
      iVar17 = func_0203ca80(*(int *)(iVar11 + 0x48),*(uint *)(param_2 + 6) & 0xffff,abStack_204,
                               0x40);
      if (iVar17 == 0) {
        return 0;
      }
      iVar21 = 0;
      if (iVar17 < 1) {
        return 0;
      }
      do {
        iVar19 = *(int *)(*(int *)(iVar11 + 0x48) + 0xa8);
        pbVar1 = abStack_204 + iVar21;
        uVar20 = *(uint *)(iVar19 + (uint)*pbVar1 * 0x48);
        if (uVar14 == 0) {
          uVar20 = uVar20 & 0xfffffffd | 1;
        }
        else {
          uVar20 = uVar20 | 3;
        }
        iVar21 = iVar21 + 1;
        *(uint *)(iVar19 + (uint)*pbVar1 * 0x48) = uVar20;
      } while (iVar21 < iVar17);
      return 0;
    }
    puVar22 = (uint *)(*(int *)(*(int *)(iVar11 + 0x48) + 0xa8) +
                      (*(uint *)(param_2 + 6) & 0xffff) * 0x48);
    if (puVar22 == (uint *)0x0) {
      return 0;
    }
    uVar20 = *puVar22;
joined_r0x0202efa6:
    if (uVar14 == 0) {
      *puVar22 = uVar20 & 0xfffffffd | 1;
    }
    else {
      *puVar22 = uVar20 | 3;
    }
    break;
  case 0x1e:
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) +
                                     *(int *)(param_2 + 10) * 0x10000);
    if (iVar11 == 0) {
      return 0;
    }
    iVar11 = *(int *)(iVar11 + 0x48);
    if (*(int *)(param_2 + 6) != 0) {
      uVar20 = *(uint *)(iVar11 + 0xc);
      uVar14 = 0x4000000;
      goto LAB_0202e310;
    }
    uVar14 = _DAT_0202f100 & *(uint *)(iVar11 + 0xc);
LAB_0202e312:
    *(uint *)(iVar11 + 0xc) = uVar14;
    break;
  case 0x1f:
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 6) & 0xffff) + (uint)param_2[2] * 0x10000)
    ;
    if ((iVar11 != 0) &&
       (iVar17 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) +
                                         *(int *)(param_2 + 10) * 0x10000), iVar17 != 0)) {
      iVar21 = *_DAT_0202f108;
      *(short *)(*(int *)(iVar17 + 0x48) + _DAT_0202f104) =
           *(short *)(*(int *)(iVar11 + 0x48) + _DAT_0202f104) + 1;
      *(uint *)(iVar21 + 0x1c) = *(uint *)(iVar21 + 0x1c) | 4;
      puVar22 = (uint *)(*(int *)(*(int *)(iVar11 + 0x48) + 0xa8) +
                        (*(uint *)(param_2 + 8) & 0xffff) * 0x48);
      if (puVar22 != (uint *)0x0) {
        *(uint **)(*(int *)(*(int *)(iVar17 + 0x48) + 0xa8) + 0x8c) = puVar22;
        iVar11 = *(int *)(*(int *)(iVar17 + 0x48) + 0xa8);
        *(uint *)(iVar11 + 0x48) = *(uint *)(iVar11 + 0x48) | 0x4000;
        iVar11 = *(int *)(*(int *)(iVar17 + 0x48) + 0xa8);
        *(uint *)(iVar11 + 0x48) = *(uint *)(iVar11 + 0x48) | 0x280;
        *puVar22 = *puVar22 | 0x80;
      }
    }
    break;
  case 0x20:
    iVar11 = *(int *)(*(int *)(*(int *)*_DAT_0202f0f4 + 0x5c) + 0x30);
    if ((*(uint *)(param_1 + _DAT_0202f10c) & 0x10) != 0) {
      return 0;
    }
    if (param_4 != 0) {
      *(int *)(iVar11 + 0x108) = *(int *)(param_2 + 8) << 0xc;
      func_02068b50(*(int *)*piVar4 + 0x4c,(int)(short)*(undefined4 *)(param_2 + 8));
      return 0;
    }
    if (*(short *)(iVar11 + 0x104) == -1) {
      return 0;
    }
    *(short *)(param_1 + 300) = sVar12;
    *(int *)(param_1 + 0x128) = *(int *)(iVar11 + 0x108) >> 0xc;
    goto LAB_0202f0d6;
  case 0x22:
    if (param_4 != 0) {
      return 0;
    }
    uVar14 = *(uint *)(param_2 + 8) & 0xffff;
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 6) & 0xffff) +
                                     *(int *)(param_2 + 10) * 0x10000);
    if (iVar11 == 0) {
      return 0;
    }
    iVar17 = *(int *)(*(int *)(iVar11 + 0x48) + 0xa8);
    *(uint *)(iVar17 + uVar14 * 0x48) = *(uint *)(iVar17 + uVar14 * 0x48) | 0x80;
    func_02001c28(auStack_1a0);
    iVar17 = func_0203a824(*(uint *)(param_2 + 4) & 0xffff,0,auStack_1a0,0);
    uVar20 = _DAT_0202ec14;
    uVar10 = iVar17 << 0x10 | *(uint *)(param_2 + 4);
    *(uint *)(param_2 + 4) = uVar10;
    uVar10 = (uVar10 & uVar20) >> 0x10;
    if (uVar10 == uVar20 >> 0x10) {
      return 0;
    }
    uVar18 = *(undefined4 *)(iVar11 + 0x48);
LAB_0202e876:
    func_0203af8c(uVar10,uVar18,uVar14);
    break;
  case 0x24:
    iVar11 = func_0202e134(param_1,*(undefined4 *)(param_2 + 4),
                             (int)(short)*(undefined4 *)(param_2 + 6));
    goto joined_r0x0202f0ee;
  case 0x25:
    iVar11 = func_0202e134(param_1,_DAT_0202f110,(int)(short)*(undefined4 *)(param_2 + 6));
joined_r0x0202f0ee:
    if (iVar11 != 0) {
      *(short *)(iVar11 + 2) = sVar12;
LAB_0202f0d6:
      param_2[1] = *param_2 + (short)*(undefined4 *)(param_2 + 10);
    }
    break;
  case 0x26:
    iVar11 = func_0202c774(param_1,(*(uint *)(param_2 + 4) & 0xffff) +
                                     *(int *)(param_2 + 10) * 0x10000);
    if (iVar11 != 0) {
      func_0202fc04(iVar11,*(undefined4 *)(param_2 + 6),param_2[1] - *param_2);
    }
  }
  return 0;
}
