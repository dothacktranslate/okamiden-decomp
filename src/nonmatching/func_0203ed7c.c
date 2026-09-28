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

extern int func_02009930();
extern int func_02041758();
extern int func_0205bc9c();
extern int func_0205e0c0();

void func_0203ed7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  short local_58 [8];
  int local_48 [9];
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 uStack_18;

  if (((((*(uint *)(*(unsigned int *)0x0203ef58) & 1) == 0) || ((*(uint *)(param_1 + 0xc) & 0x20000000) != 0)) &&
      ((*(uint *)((*(unsigned int *)0x0203ef5c) + 0x124) & 0x40000) == 0)) &&
     (uStack_18 = param_4, func_0205bc9c(), 0 < *(short *)(param_1 + 0x10))) {
    iVar3 = 0;
    func_0205e0c0(0x11,0,0);
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_48[7] = 0;
    local_48[3] = *(int *)(param_1 + 0x44);
    local_48[4] = *(int *)(param_1 + 0x40);
    local_58[0] = *(short *)(param_1 + 100);
    local_58[1] = *(short *)(param_1 + 0x66);
    local_58[3] = (short)(local_48[3] >> 0xc) + local_58[1];
    local_58[4] = (short)(local_48[4] >> 0xc) + local_58[0];
    local_68 = 3;
    local_58[2] = local_58[0];
    local_58[5] = local_58[3];
    local_58[6] = local_58[4];
    local_58[7] = local_58[1];
    local_48[5] = local_48[3];
    local_48[6] = local_48[4];
    func_0205e0c0(0x10,&local_68,1);
    func_0205e0c0(0x15,0,0);
    local_6c = 2;
    func_0205e0c0(0x10,&local_6c,1);
    func_02009930(param_1 + 0x58,local_48 + 8,0xc);
    func_0205e0c0(local_48[8],&local_24,2);
    local_48[8] = ((unsigned int)0x0203ef60);
    local_20 = 0;
    local_24 = ((unsigned int)0x0203ef68);
    iVar2 = (int)*(short *)(param_1 + 0x10) >> 0x1f;
    local_1c = ((unsigned int)0x0203ef64) |
               (((uint)(*(short *)(param_1 + 0x10) * 0x8000000 + iVar2) >> 0x1b | iVar2 << 5) -
               iVar2) * 0x10000 | 0x3d000000;
    func_0205e0c0(((unsigned int)0x0203ef60),&local_24,3);
    local_24 = 0;
    local_70 = 1;
    func_0205e0c0(0x40,&local_70,1);
    func_0205e0c0(0x15,0,0);
    do {
      if (*(char *)(param_1 + 0x9c) == '\0') {
        puVar1 = (undefined4 *)
                 func_02041758((int)local_58[iVar3 * 2],
                              (int)*(short *)((int)local_48 + iVar3 * 4 + -0xe),
                              *(undefined4 *)(param_1 + 0x68));
        local_64 = *puVar1;
        local_60 = puVar1[1];
        local_5c = puVar1[2];
      }
      else {
        iVar2 = param_1 + iVar3 * 0xc;
        local_64 = *(undefined4 *)(iVar2 + 0x6c);
        local_60 = *(undefined4 *)(iVar2 + 0x70);
        local_5c = *(undefined4 *)(iVar2 + 0x74);
      }
      local_48[8] = (local_48[iVar3 * 2] << 8) >> 0x10 & 0xffffU |
                    ((local_48[iVar3 * 2 + 1] << 8) >> 0x10) << 0x10;
      func_0205e0c0(0x11,0,0);
      func_0205e0c0(0x1c,&local_64,3);
      func_0205e0c0(((unsigned int)0x0203ef6c),local_48 + 8,2);
      local_74 = 1;
      func_0205e0c0(0x12,&local_74,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    func_0205e0c0(0x41,0,0);
    local_78 = 1;
    func_0205e0c0(0x12,&local_78,1);
  }
  return;
}
