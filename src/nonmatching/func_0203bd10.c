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

extern int func_02015ce0();
extern int func_02018ba4();
extern int func_02018db8();
extern int func_02035038();
extern int func_02036db8();
extern int func_0203c468();

void func_0203bd10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 local_60 [64];
  undefined4 uStack_20;

  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uStack_20 = param_4;
  func_0203c468(param_2);
  uVar1 = ((unsigned int)0x0203be74);
  iVar6 = param_2 + *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x10) = iVar6;
  uVar7 = 0;
  uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x10);
  uVar1 = (uint)((ulonglong)uVar1 * (ulonglong)uVar5 >> 0x25);
  *(uint *)(param_1 + 0x20) = uVar1;
  if (uVar1 != 0) {
    do {
      iVar8 = 0;
      local_60[0] = 0;
      iVar9 = *(int *)(iVar6 + 0x20);
      pcVar3 = *(char **)(iVar9 + 0x54);
      if (pcVar3 != (char *)0x0) {
        uVar5 = (uint)*pcVar3;
      }
      if (pcVar3 != (char *)0x0 && uVar5 != 0) {
        iVar4 = func_02015ce0(pcVar3,((unsigned int)0x0203be78));
        if (iVar4 == 0) {
          func_02018ba4(local_60,((unsigned int)0x0203be84));
        }
        else {
          pcVar3 = *(char **)(iVar9 + 0x54);
          iVar4 = 0;
          cVar2 = *pcVar3;
          while (cVar2 != '\0') {
            if (pcVar3[iVar4] == '\\') {
              iVar8 = iVar4 + 1;
            }
            if (pcVar3[iVar4] == '/') {
              iVar8 = iVar4 + 1;
            }
            iVar4 = iVar4 + 1;
            cVar2 = pcVar3[iVar4];
          }
          func_02018ba4(local_60,((unsigned int)0x0203be7c),((unsigned int)0x0203be80),pcVar3 + iVar8);
          func_02018db8(*(undefined4 *)(iVar9 + 0x54),local_60);
        }
        uVar10 = func_02035038((*(unsigned int *)0x0203be88),local_60);
        uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
        if ((int)uVar10 == 0) {
          *(undefined4 *)(iVar6 + 0x24) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 5;
        }
        else {
          uVar10 = func_02036db8((*(unsigned int *)0x0203be8c),local_60,4);
          uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
          *(int *)(iVar6 + 0x24) = (int)uVar10;
          *(undefined4 *)(param_1 + 0x1c) = 3;
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (uVar7 < *(uint *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    *(undefined4 *)(param_1 + 0x1c) = 5;
  }
  return;
}
