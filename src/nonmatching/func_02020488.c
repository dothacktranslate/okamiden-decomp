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

extern int func_020201f8();
extern int func_0202027c();
extern int func_02020364();
extern int func_02021a5c();
extern int func_02021ab8();

byte func_02020488(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iStack_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [8];
  int iStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;

  uStack_10 = param_4;
LAB_02020494:
  pbVar5 = *(byte **)(param_1 + 8);
  if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 0x80) != 0)) goto LAB_020204ac;
  switch(*pbVar5 & 0x1f) {
  case 0:
    return 0xff;
  case 1:
    return 0xff;
  case 2:
    puVar3 = auStack_14;
    goto LAB_02020554;
  case 3:
    pbVar5 = (byte *)func_020201f8(pbVar5 + 1,auStack_1c);
    puVar3 = auStack_18;
    break;
  case 4:
    puVar3 = auStack_20;
    goto LAB_02020554;
  case 5:
    uVar2 = func_020201f8(pbVar5 + 1,auStack_2c);
    uVar2 = func_0202027c(uVar2,auStack_28);
    puVar3 = auStack_24;
    goto LAB_02020598;
  case 6:
    pbVar5 = (byte *)func_020201f8(pbVar5 + 1,auStack_34);
    puVar3 = auStack_30;
    break;
  case 7:
    pbVar5 = (byte *)func_020201f8(pbVar5 + 1,auStack_3c);
    puVar3 = auStack_38;
    break;
  case 8:
    uVar2 = func_020201f8(pbVar5 + 1,auStack_48);
    pbVar5 = (byte *)func_020201f8(uVar2,auStack_44);
    puVar3 = auStack_40;
    break;
  case 9:
    uVar2 = func_020201f8(pbVar5 + 1,auStack_58);
    uVar2 = func_020201f8(uVar2,auStack_54);
    uVar2 = func_0202027c(uVar2,auStack_50);
    puVar3 = auStack_4c;
    goto LAB_02020598;
  case 10:
    puVar3 = auStack_5c;
LAB_02020554:
    pbVar5 = pbVar5 + 1;
    break;
  case 0xb:
    pbVar5 = (byte *)func_020201f8(pbVar5 + 1,auStack_64);
    puVar3 = auStack_60;
    break;
  case 0xc:
    uVar2 = func_0202027c(pbVar5 + 5,auStack_6c);
    iVar4 = func_020201f8(uVar2,auStack_68);
    goto LAB_02020648;
  case 0xd:
    puVar3 = auStack_70;
    goto LAB_02020640;
  case 0xe:
    return 0xff;
  case 0xf:
    uVar2 = func_0202027c(pbVar5 + 1,&iStack_7c);
    uVar2 = func_0202027c(uVar2,auStack_78);
    iVar4 = func_020201f8(uVar2,auStack_74);
    iVar4 = iVar4 + iStack_7c * 4;
    goto LAB_02020648;
  case 0x10:
    uVar2 = func_020201f8(pbVar5 + 1,auStack_8c);
    iVar4 = func_020201f8(uVar2,auStack_88);
    puVar3 = auStack_84;
    pbVar5 = (byte *)(iVar4 + 4);
    break;
  case 0x11:
    uVar2 = func_020201f8(pbVar5 + 1,auStack_9c);
    iVar4 = func_020201f8(uVar2,auStack_94);
    pbVar5 = (byte *)func_020201f8(iVar4 + 1,auStack_98);
    puVar3 = auStack_90;
    break;
  case 0x12:
    iVar4 = func_020201f8(pbVar5 + 1,auStack_a8);
    uVar2 = func_020201f8(iVar4 + 1,auStack_a4);
    puVar3 = auStack_a0;
LAB_02020598:
    iVar4 = func_0202027c(uVar2,puVar3);
    goto LAB_0202055c;
  case 0x13:
    puVar3 = auStack_ac;
LAB_02020640:
    iVar4 = func_020201f8(pbVar5 + 1,puVar3);
    goto LAB_02020648;
  default:
    return 0xff;
  }
  iVar4 = func_020201f8(pbVar5,puVar3);
LAB_0202055c:
  iVar4 = iVar4 + 4;
LAB_02020648:
  *(int *)(param_1 + 8) = iVar4;
  goto LAB_020206f4;
LAB_020204ac:
  uVar2 = func_02021a5c(param_1 + 0x18,param_1);
  func_02020364(uVar2,param_1);
  if (*(int *)(param_1 + 4) == 0) {
    return 0xff;
  }
  func_02021ab8(param_1 + 0x18,param_1);
  if (*(int *)(param_1 + 8) != 0) {
LAB_020206f4:
    pbVar5 = *(byte **)(param_1 + 8);
    if ((*pbVar5 & 0x1f) == 1) {
      do {
        func_020201f8(pbVar5 + 1,&iStack_b0);
        iVar4 = *(int *)(param_1 + 8);
        pbVar5 = (byte *)(iVar4 + iStack_b0);
        *(byte **)(param_1 + 8) = pbVar5;
        bVar1 = *(byte *)(iVar4 + iStack_b0) & 0x1f;
      } while (bVar1 == 1);
      return bVar1;
    }
    return *pbVar5 & 0x1f;
  }
  goto LAB_02020494;
}
