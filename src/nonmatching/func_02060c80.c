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

extern int func_02060968();
extern int func_02060ac8();

void func_02060c80(int param_1,int *param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;

  iVar4 = param_2[2];
  iVar2 = *param_2;
  if (iVar2 < (int)((uint)*(ushort *)(iVar4 + 4) * 0x1000)) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (uint)*(ushort *)(iVar4 + 4) * 0x1000 + -1;
  }
  iVar2 = iVar2 >> 0xc;
  iVar3 = iVar4 + 8;
  if ((iVar3 == 0) || (*(byte *)(iVar4 + 9) <= param_3)) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)
             ((uint)*(ushort *)(iVar3 + (uint)*(ushort *)(iVar4 + 0xe)) * (uint)param_3 +
             iVar3 + (uint)*(ushort *)(iVar4 + 0xe) + 4);
  }
  uVar1 = func_02060968(iVar4,*puVar5,iVar2);
  iVar3 = func_02060968(iVar4,puVar5[1],iVar2);
  *(uint *)(param_1 + 4) =
       uVar1 | iVar3 << 0x10 | (uint)((*(uint *)(param_1 + 4) & 0x8000) != 0) << 0xf;
  iVar3 = func_02060968(iVar4,puVar5[3],iVar2);
  uVar1 = func_02060968(iVar4,puVar5[2],iVar2);
  *(uint *)(param_1 + 8) =
       uVar1 | iVar3 << 0x10 | (uint)((*(uint *)(param_1 + 8) & 0x8000) != 0) << 0xf;
  iVar2 = func_02060ac8(iVar4,puVar5[4],iVar2);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffe0ffff | iVar2 << 0x10;
  return;
}
