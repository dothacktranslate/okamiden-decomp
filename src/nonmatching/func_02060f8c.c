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

extern int func_02060d8c();
extern int func_02060e80();

void func_02060f8c(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;

  iVar3 = param_1 + 8;
  if ((iVar3 == 0) || (*(byte *)(param_1 + 9) <= param_2)) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)
             (*(ushort *)(iVar3 + (uint)*(ushort *)(param_1 + 0xe)) * param_2 +
             iVar3 + (uint)*(ushort *)(param_1 + 0xe) + 4);
  }
  uVar5 = *param_4;
  puVar6 = param_4;
  uVar1 = func_02060d8c(param_1,puVar4[6],puVar4[7],param_3,param_4);
  uVar2 = func_02060d8c(param_1,puVar4[8],puVar4[9],param_3);
  if (uVar1 != 0 || uVar2 != 0) {
    param_4[10] = uVar2;
    param_4[9] = uVar1;
  }
  else {
    uVar5 = uVar5 | 4;
  }
  if (uVar1 != 0 || uVar2 != 0) {
    uVar5 = uVar5 & 0xfffffffb;
  }
  iVar3 = func_02060e80(param_1,puVar4[4],puVar4[5],param_3);
  if (iVar3 == 0x10000000) {
    uVar5 = uVar5 | 2;
  }
  else {
    *(short *)(param_4 + 8) = (short)iVar3;
    *(short *)((int)param_4 + 0x22) = (short)((uint)iVar3 >> 0x10);
    uVar5 = uVar5 & 0xfffffffd;
  }
  uVar1 = func_02060d8c(param_1,*puVar4,puVar4[1],param_3,puVar6);
  uVar2 = func_02060d8c(param_1,puVar4[2],puVar4[3],param_3);
  if (uVar1 == 0x1000 && uVar2 == 0x1000) {
    uVar5 = uVar5 | 1;
  }
  else {
    uVar5 = uVar5 & 0xfffffffe;
    param_4[6] = uVar1;
    param_4[7] = uVar2;
  }
  *param_4 = uVar5;
  return;
}
