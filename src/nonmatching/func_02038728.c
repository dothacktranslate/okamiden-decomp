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

extern int func_02035834();
extern int func_02038690();

undefined4
func_02038728(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,undefined2 param_5
            ,undefined2 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_30 [20];
  undefined4 uStack_1c;

  uStack_1c = param_4;
  iVar2 = func_02038690();
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),0x18,4,0);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      uVar1 = ((unsigned int)0x020387f0);
      puVar3[2] = 0;
      *puVar3 = uVar1;
      *(undefined2 *)(puVar3 + 3) = param_2;
      *(undefined2 *)((int)puVar3 + 0xe) = param_3;
      *(short *)(puVar3 + 4) = (short)param_4;
      *(undefined2 *)((int)puVar3 + 0x12) = param_5;
      *(undefined2 *)(puVar3 + 5) = param_6;
      *(undefined2 *)((int)puVar3 + 0x16) = param_7;
      func_02035834(auStack_30,param_1 + 0xc,param_1 + 0x10,puVar3 + 1);
      return 1;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),0);
  }
  return 0;
}
