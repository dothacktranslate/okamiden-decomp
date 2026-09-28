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

extern int func_02016ac4();
extern int func_0204b7fc();
extern int func_0204b9e0();
extern int func_02050028();
extern int func_02054180();
extern int func_020546b0();
extern int func_02056174();

void func_02054bd0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  do {
    iVar6 = 2;
    piVar2 = (int *)(*(int *)(param_1 + 0xc) + param_3 * 8);
    if ((piVar2[-1] - 3U < 2) &&
       ((piVar2[1] == 4 || (iVar3 = func_02054180(param_1,piVar2), iVar3 != 0)))) {
      uVar1 = ((unsigned int)0x02054d80);
      iVar3 = *(int *)(*piVar2 + 0xc);
      if (iVar3 == 0) {
        if (piVar2[-1] != 4) {
          func_02054180(param_1,piVar2 + -2);
        }
      }
      else {
        iVar6 = 1;
        while ((iVar6 < param_2 &&
               ((piVar2[iVar6 * -2 + 1] == 4 ||
                (iVar4 = func_02054180(param_1,piVar2 + iVar6 * -2), iVar4 != 0))))) {
          uVar8 = *(uint *)(piVar2[iVar6 * -2] + 0xc);
          if (-iVar3 - 3U <= uVar8) {
            func_0204b9e0(param_1,uVar1);
          }
          iVar3 = iVar3 + uVar8;
          iVar6 = iVar6 + 1;
        }
        iVar5 = func_02056174(param_1,*(int *)(param_1 + 0x10) + 0x34,iVar3);
        iVar3 = 0;
        for (iVar4 = iVar6; 0 < iVar4; iVar4 = iVar4 + -1) {
          iVar7 = *(int *)(piVar2[iVar4 * -2 + 2] + 0xc);
          func_02016ac4(iVar5 + iVar3,piVar2[iVar4 * -2 + 2] + 0x10,iVar7);
          iVar3 = iVar3 + iVar7;
        }
        iVar3 = func_02050028(param_1,iVar5,iVar3);
        piVar2[iVar6 * -2 + 2] = iVar3;
        (piVar2 + iVar6 * -2 + 2)[1] = 4;
      }
    }
    else {
      iVar3 = func_020546b0(param_1,piVar2 + -2,piVar2,piVar2 + -2,0xf,param_3,param_4);
      if (iVar3 == 0) {
        func_0204b7fc(param_1,piVar2 + -2,piVar2);
      }
    }
    param_2 = param_2 - (iVar6 + -1);
    param_3 = param_3 - (iVar6 + -1);
  } while (1 < param_2);
  return;
}
