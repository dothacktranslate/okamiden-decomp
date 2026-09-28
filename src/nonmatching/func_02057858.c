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

extern int func_020077e8();
extern int func_02008fe4();
extern int func_020098a0();

void func_02057858(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;

  if (param_1[5] == 0) {
    puVar5 = (undefined2 *)
             (*param_1 * 0x540 + ((unsigned int)0x02057990) + 0x100 + (uint)*(ushort *)(param_1 + 1) * 8);
    uVar4 = ((uint)*(ushort *)((int)param_1 + 6) - (uint)*(ushort *)(param_1 + 1)) + 1 & 0xffff;
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar2 + 1;
        *puVar5 = 0xc0;
        uVar2 = uVar3 & 0xffff;
        puVar5 = puVar5 + 4;
      } while ((uVar3 & 0xffff) < uVar4);
    }
  }
  else {
    uVar4 = (uint)*(ushort *)((int)param_1 + 6);
    bVar1 = false;
    if (((uint)*(ushort *)(param_1 + 2) <= uVar4 + 1) && (*(ushort *)(param_1 + 1) <= uVar4)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar6 = ((uVar4 - *(ushort *)(param_1 + 1)) + 1 & 0xffff) << 3;
    }
    else {
      iVar6 = 0;
    }
    iVar7 = *param_1 * 0x540 + ((unsigned int)0x02057990) + 0x100 + (uint)*(ushort *)(param_1 + 1) * 8;
    func_020077e8(iVar7,iVar6);
    uVar4 = (*(unsigned int *)0x02057994);
    if (3 < uVar4) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 == 0xffffffff) {
      func_020098a0(0xc0,iVar7,iVar6);
    }
    else {
      func_02008fe4(uVar4,iVar7,0xc0,iVar6,1,param_4);
    }
  }
  *(short *)(param_1 + 2) = (short)param_1[1];
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_1 + 10);
  return;
}
