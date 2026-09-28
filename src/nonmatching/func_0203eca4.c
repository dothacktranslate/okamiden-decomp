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

extern int func_02041758();

void func_0203eca4(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short local_48 [14];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;

  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_1c = 0;
  local_2c = *(undefined4 *)(param_1 + 0x44);
  local_28 = *(undefined4 *)(param_1 + 0x40);
  if (param_2 != (short *)0x0) {
    *(undefined1 *)(param_1 + 0x9c) = 1;
    local_48[2] = *param_2;
    local_48[0] = local_48[2];
    local_48[6] = local_48[2] + param_2[2];
    local_48[4] = local_48[2] + param_2[2];
    local_48[7] = param_2[1];
    local_48[1] = local_48[7];
    local_48[5] = local_48[7] + param_2[3];
    local_48[3] = local_48[7] + param_2[3];
    local_24 = local_2c;
    local_20 = local_28;
    uStack_18 = param_4;
    do {
      puVar1 = (undefined4 *)
               func_02041758((int)local_48[iVar3 * 2],(int)local_48[iVar3 * 2 + 1],
                            *(undefined4 *)(param_1 + 0x68));
      iVar2 = param_1 + iVar3 * 0xc;
      *(undefined4 *)(iVar2 + 0x6c) = *puVar1;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + 0x70) = puVar1[1];
      *(undefined4 *)(iVar2 + 0x74) = puVar1[2];
    } while (iVar3 < 4);
  }
  return;
}
