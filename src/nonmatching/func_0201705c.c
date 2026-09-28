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

extern int func_0201ebe0();

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * func_0201705c(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  uint uVar1;
  bool bVar2;
  int extraout_r1;
  int unaff_r4;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char local_8;
  char local_7;
  byte local_3;

  bVar2 = false;
  iVar5 = 0;
  pcVar3 = (char *)(param_2 + -1);
  *pcVar3 = '\0';
  uVar1 = param_3 >> 0x18;
  local_3 = (byte)((uint)param_4 >> 8);
  local_7 = (char)(param_3 >> 8);
  if ((param_1 == 0 && param_6 == 0) && ((uVar1 == 0 || (local_3 != 0x6f)))) {
    return pcVar3;
  }
  if (local_3 < 0x6a) {
    if (local_3 < 0x69) {
      if (local_3 < 0x59) {
        if (local_3 != 0x58) goto LAB_02017164;
LAB_0201715c:
        unaff_r4 = 0x10;
        goto LAB_02017160;
      }
      if (local_3 != 100) goto LAB_02017164;
    }
    unaff_r4 = 10;
    if (param_1 < 0) {
      if (param_1 >> 0x1f != -0x80000000 || param_1 != 0) {
        param_1 = -param_1;
      }
      bVar2 = true;
    }
  }
  else {
    if (local_3 < 0x70) {
      if (local_3 == 0x6f) {
        unaff_r4 = 8;
        local_7 = '\0';
      }
      goto LAB_02017164;
    }
    if ((0x78 < local_3) || (local_3 < 0x75)) goto LAB_02017164;
    if (local_3 != 0x75) {
      if (local_3 != 0x78) goto LAB_02017164;
      goto LAB_0201715c;
    }
    unaff_r4 = 10;
LAB_02017160:
    local_7 = '\0';
  }
LAB_02017164:
  do {
    iVar6 = iVar5;
    pcVar4 = pcVar3;
    func_0201ebe0(param_1,unaff_r4);
    param_1 = func_0201ebe0(param_1,unaff_r4);
    cVar7 = (char)extraout_r1;
    if (extraout_r1 < 10) {
      cVar7 = cVar7 + '0';
    }
    else if (local_3 == 0x78) {
      cVar7 = cVar7 + 'W';
    }
    else {
      cVar7 = cVar7 + '7';
    }
    pcVar3 = pcVar4 + -1;
    *pcVar3 = cVar7;
    iVar5 = iVar6 + 1;
  } while (param_1 != 0);
  if (unaff_r4 == 8) {
    cVar7 = '\0';
    if (uVar1 != 0) {
      cVar7 = *pcVar3;
    }
    if (uVar1 != 0 && cVar7 != '0') {
      pcVar3 = pcVar4 + -2;
      *pcVar3 = '0';
      iVar5 = iVar6 + 2;
    }
  }
  local_8 = (char)param_3;
  if (local_8 == '\x02') {
    param_6 = param_5;
    if (bVar2 || local_7 != '\0') {
      param_6 = param_5 + -1;
    }
    if ((unaff_r4 == 0x10) && (uVar1 != 0)) {
      param_6 = param_6 + -2;
    }
  }
  if (((unsigned int)0x020172a8) < param_6 + (param_2 - (int)pcVar3)) {
    return (char *)0x0;
  }
  for (; iVar5 < param_6; iVar5 = iVar5 + 1) {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = '0';
  }
  if ((unaff_r4 == 0x10) && (uVar1 != 0)) {
    pcVar3[-1] = local_3;
    pcVar3 = pcVar3 + -2;
    *pcVar3 = '0';
  }
  if (bVar2) {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = '-';
  }
  else if (local_7 == '\x01') {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = '+';
  }
  else if (local_7 == '\x02') {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = ' ';
  }
  return pcVar3;
}
