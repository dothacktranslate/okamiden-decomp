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

extern int func_0x01ff99b4();
extern int func_0x01ff9c94();

undefined4
func_020327e8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  undefined1 auStack_2c [12];
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  int local_18;

  (*(unsigned int *)0x020328ac) = (short)((unsigned int)0x020328a8);
  if (param_4 != (int *)0x0) {
    *param_4 = ((unsigned int)0x020328b0);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xe0)) {
    do {
      func_0x01ff99b4(auStack_2c);
      piVar1 = *(int **)(*(int *)(param_1 + 0xe4) + iVar4 * 4);
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,&local_30,param_5,param_6);
      if (iVar2 != 0) {
        if (param_4 == (int *)0x0) {
          return 1;
        }
        iVar2 = *param_4;
        if (iVar2 != ((unsigned int)0x020328b0)) {
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          iVar3 = local_30;
          if (local_30 < 0) {
            iVar3 = -local_30;
          }
          if (iVar2 <= iVar3) goto LAB_02032882;
        }
        *param_4 = local_30;
        func_0x01ff9c94(param_4 + 1,auStack_2c);
        *(undefined2 *)(param_4 + 4) = uStack_20;
        *(undefined2 *)((int)param_4 + 0x12) = uStack_1e;
        param_4[5] = local_1c;
        param_4[6] = local_18;
      }
LAB_02032882:
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xe0));
  }
  if ((param_4 != (int *)0x0) && (*param_4 != ((unsigned int)0x020328b0))) {
    return 1;
  }
  return 0;
}
