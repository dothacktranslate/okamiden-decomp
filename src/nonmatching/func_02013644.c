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

extern int func_02000b64();
extern int func_020077e8();
extern int func_02007820();
extern int func_02007844();
extern int func_02009b68();
extern int func_020134f4();
extern int func_02013c98();

void func_02013644(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  iVar3 = param_1[0x144];
  iVar4 = param_1[0x146];
  iVar7 = param_1[0x145];
  uVar5 = 0x100;
  func_02000b64(((unsigned int)0x020137d0));
  if (iVar3 == 0xb) {
    uVar5 = func_02013c98();
    uVar1 = ((unsigned int)0x020137d8);
  }
  else {
    uVar1 = ((unsigned int)0x020137d8);
    if (iVar3 == 0xf) {
      uVar5 = *(uint *)((*(unsigned int *)0x020137d4) + 0x20);
    }
  }
  do {
    uVar6 = param_1[0x141];
    if (uVar5 < (uint)param_1[0x141]) {
      uVar6 = uVar5;
    }
    *(uint *)(*param_1 + 0x14) = uVar6;
    if ((param_1[1] & 0x40U) != 0) {
      param_1[1] = param_1[1] & 0xffffffbf;
      *(undefined4 *)*param_1 = 7;
      return;
    }
    switch(iVar4) {
    case 0:
      func_020077e8(uVar1,uVar6);
      *(int *)(*param_1 + 0xc) = param_1[0x13f];
      *(undefined4 *)(*param_1 + 0x10) = uVar1;
      break;
    case 1:
      goto LAB_0201370c;
    case 2:
LAB_0201370c:
      func_02009b68(param_1[0x13f],uVar1,uVar6);
      func_02007820(uVar1,uVar6);
      func_02007844();
      *(undefined4 *)(*param_1 + 0xc) = uVar1;
LAB_02013744:
      *(int *)(*param_1 + 0x10) = param_1[0x140];
      break;
    case 3:
      *(int *)(*param_1 + 0xc) = param_1[0x13f];
      goto LAB_02013744;
    }
    iVar2 = func_020134f4(param_1,iVar3,iVar7);
    if (iVar2 == 0) {
      return;
    }
    if (iVar4 == 2) {
      iVar2 = func_020134f4(param_1,9,1);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (iVar4 == 0) {
      func_02009b68(uVar1,param_1[0x140],uVar6);
    }
    iVar2 = param_1[0x141];
    param_1[0x13f] = param_1[0x13f] + uVar6;
    param_1[0x140] = param_1[0x140] + uVar6;
    param_1[0x141] = iVar2 - uVar6;
    if (iVar2 - uVar6 == 0) {
      return;
    }
  } while( true );
}
