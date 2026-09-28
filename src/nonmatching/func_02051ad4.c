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

extern int func_02018e80();
extern int func_02019064();
extern int func_02047714();

byte * func_02051ad4(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;

  puVar2 = ((unsigned int)0x02051c18);
  puVar1 = ((unsigned int)0x02051c14);
  pbVar7 = param_2;
  while ((*pbVar7 != 0 && (iVar5 = func_02019064(puVar2), iVar5 != 0))) {
    pbVar7 = pbVar7 + 1;
  }
  if (5 < (uint)((int)pbVar7 - (int)param_2)) {
    func_02047714(param_1,((unsigned int)0x02051c1c));
  }
  if (*pbVar7 < 0x80) {
    uVar4 = *(ushort *)(puVar1 + (uint)*pbVar7 * 2) & 8;
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    pbVar7 = pbVar7 + 1;
  }
  if (*pbVar7 < 0x80) {
    uVar4 = *(ushort *)(puVar1 + (uint)*pbVar7 * 2) & 8;
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    pbVar7 = pbVar7 + 1;
  }
  if (*pbVar7 == 0x2e) {
    uVar6 = (uint)pbVar7[1];
    if (uVar6 < 0x80) {
      uVar4 = *(ushort *)(puVar1 + uVar6 * 2) & 8;
    }
    else {
      uVar4 = 0;
    }
    pbVar3 = pbVar7 + 1;
    if (uVar4 != 0) {
      pbVar3 = pbVar7 + 2;
    }
    pbVar7 = pbVar3;
    if (*pbVar7 < 0x80) {
      uVar4 = *(ushort *)(puVar1 + (uint)*pbVar7 * 2) & 8;
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      pbVar7 = pbVar7 + 1;
    }
  }
  if (*pbVar7 < 0x80) {
    uVar4 = *(ushort *)(puVar1 + (uint)*pbVar7 * 2) & 8;
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    func_02047714(param_1,((unsigned int)0x02051c20));
  }
  *param_3 = 0x25;
  func_02018e80(param_3 + 1,param_2,pbVar7 + (1 - (int)param_2));
  (param_3 + 1)[(int)(pbVar7 + (1 - (int)param_2))] = 0;
  return pbVar7;
}
