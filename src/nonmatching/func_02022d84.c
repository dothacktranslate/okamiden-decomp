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

extern int func_0x020a86c4();
extern int func_0x020aea3c();
extern int func_0x020aec70();

void func_02022d84(undefined4 param_1,uint param_2,undefined2 *param_3,ushort *param_4,uint *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  puVar1 = ((unsigned int)0x02022ec0);
  iVar4 = ((unsigned int)0x02022ebc);
  uVar5 = -((unsigned int)0x02022ebc);
  while( true ) {
    if (param_2 < uVar5) {
      if (0xff < param_2) {
        *param_3 = 2;
        *param_4 = (ushort)(param_2 >> 8);
        *param_5 = param_2 + (uint)*param_4 * -0x100;
        return;
      }
      *param_3 = 1;
      *param_4 = 0;
      *param_5 = param_2;
      return;
    }
    func_0x020aea3c(*(undefined4 *)(*(int *)(*(int *)*puVar1 + 0x5c) + 0x44),param_2 + iVar4);
    iVar3 = func_0x020a86c4();
    puVar2 = ((unsigned int)0x02022ec0);
    if (iVar3 == 0) break;
    func_0x020aea3c(*(undefined4 *)(*(int *)(*(int *)*puVar1 + 0x5c) + 0x44),param_2 + iVar4);
    param_2 = func_0x020a86c4();
  }
  iVar4 = func_0x020aec70(*(undefined4 *)(*(int *)(*(int *)(*(unsigned int *)0x02022ec0) + 0x5c) + 0x44),
                          param_2 + iVar4,1);
  if (iVar4 < 0) {
    uVar5 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)*puVar2 + 0x5c) + 0x30);
    uVar5 = (uint)*(ushort *)(iVar3 + 0xea);
    uVar5 = iVar4 + (uint)*(ushort *)(((unsigned int)0x02022ec8) + uVar5 * 2) +
                    (uint)*(byte *)(((unsigned int)0x02022ecc) +
                                   (uint)*(byte *)(((unsigned int)0x02022ec4) + uVar5) +
                                   (uint)*(ushort *)(iVar3 + 0xec) + -1);
  }
  *param_5 = uVar5;
  *param_3 = 5;
  *param_4 = 0;
  return;
}
