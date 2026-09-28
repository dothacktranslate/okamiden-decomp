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

extern int func_02018ba4();
extern int func_02019064();
extern int func_0201e6a0();
extern int func_0204bdc4();
extern int func_0204f64c();
extern int func_02050028();
extern int func_02054bd0();

int func_0204f6b0(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 auStack_43 [27];
  undefined4 uStack_28;

  iVar7 = 1;
  uStack_28 = param_4;
  func_0204f64c(param_1,((unsigned int)0x0204f8e4));
  do {
    iVar2 = func_02019064(param_2,0x25);
    if (iVar2 == 0) {
      func_0204f64c(param_1,param_2);
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
      func_02054bd0(param_1,iVar7 + 1,((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) + -1);
      iVar7 = *(int *)(param_1 + 8) + iVar7 * -8;
      *(int *)(param_1 + 8) = iVar7;
      return *(int *)(iVar7 + -8) + 0x10;
    }
    puVar8 = *(undefined4 **)(param_1 + 8);
    uVar3 = func_02050028(param_1,param_2,iVar2 - param_2);
    *puVar8 = uVar3;
    puVar8[1] = 4;
    if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 9) {
      func_0204bdc4(param_1,1);
    }
    iVar4 = *(int *)(param_1 + 8);
    piVar9 = (int *)(iVar4 + 8);
    *(int **)(param_1 + 8) = piVar9;
    cVar1 = *(char *)(iVar2 + 1);
    if (cVar1 < 'g') {
      if (cVar1 < 'c') {
        puVar6 = ((unsigned int)0x0204f8f0);
        if (cVar1 != '%') goto LAB_0204f864;
        goto LAB_0204f884;
      }
      if (cVar1 == 'c') {
        local_48 = (undefined1)*param_3;
        local_47 = 0;
        puVar6 = &local_48;
        param_3 = param_3 + 1;
        goto LAB_0204f884;
      }
      if (cVar1 == 'd') {
        iVar5 = func_0201e6a0(*param_3);
        *piVar9 = iVar5;
        *(undefined4 *)(iVar4 + 0xc) = 3;
        if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 9) {
          func_0204bdc4(param_1,1);
        }
      }
      else {
        if (cVar1 != 'f') goto LAB_0204f864;
        *piVar9 = *param_3;
        *(undefined4 *)(iVar4 + 0xc) = 3;
        if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 9) {
          func_0204bdc4(param_1,1);
        }
      }
      param_3 = param_3 + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    }
    else {
      if (cVar1 < 'q') {
        if (cVar1 == 'p') {
          func_02018ba4(auStack_43,((unsigned int)0x0204f8ec),*param_3);
          puVar6 = auStack_43;
          param_3 = param_3 + 1;
        }
        else {
LAB_0204f864:
          local_46 = 0x25;
          local_45 = *(undefined1 *)(iVar2 + 1);
          local_44 = 0;
          puVar6 = &local_46;
        }
      }
      else {
        if (cVar1 != 's') goto LAB_0204f864;
        piVar9 = param_3 + 1;
        puVar6 = (undefined1 *)*param_3;
        param_3 = piVar9;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = ((unsigned int)0x0204f8e8);
        }
      }
LAB_0204f884:
      func_0204f64c(param_1,puVar6);
    }
    param_2 = iVar2 + 2;
    iVar7 = iVar7 + 2;
  } while( true );
}
