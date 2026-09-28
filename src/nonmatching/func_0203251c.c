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

extern int func_020217d4();
extern int func_020302a0();
extern int func_02031400();
extern int func_02031ee0();
extern int func_020320fc();
extern int func_02032104();
extern int func_02032490();
extern int func_020324ec();
extern int func_02032aac();
extern int func_02032ad8();

void func_0203251c(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_20;

  (*(unsigned int *)0x020326ec) = 2;
  func_02032490();
  iVar2 = func_020324ec(param_2,((unsigned int)0x020326f0),4);
  if (iVar2 == 0) {
    local_20 = *(int *)(param_2 + 4) + -8;
    iVar2 = param_2 + 8;
    if (0 < local_20) {
      do {
        iVar3 = func_020324ec(iVar2,((unsigned int)0x020326f4),4);
        if (iVar3 == 0) {
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
        }
        else {
          iVar3 = func_020324ec(iVar2,((unsigned int)0x020326f8),4);
          if ((iVar3 == 0) || (iVar3 = func_020324ec(iVar2,((unsigned int)0x020326fc),4), iVar3 == 0)) {
            *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
          }
        }
        piVar1 = (int *)(iVar2 + 4);
        iVar2 = iVar2 + *piVar1;
        local_20 = local_20 - *piVar1;
      } while (0 < local_20);
    }
    uVar4 = func_020217d4(*(undefined4 *)(param_1 + 0xd8),0x20,8,((unsigned int)0x02032704),((unsigned int)0x02032700));
    *(undefined4 *)(param_1 + 0xdc) = uVar4;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    uVar4 = func_02032ad8(*(int *)(param_1 + 0xe0) << 2);
    *(undefined4 *)(param_1 + 0xe4) = uVar4;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    iVar3 = *(int *)(param_2 + 4) + -8;
    iVar2 = param_2 + 8;
    if (0 < iVar3) {
      do {
        iVar5 = func_020324ec(iVar2,((unsigned int)0x02032708),4);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0xd8);
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
          func_020302a0(*(int *)(param_1 + 0xdc) + iVar5 * 0x20,iVar2);
        }
        iVar3 = iVar3 - *(int *)(iVar2 + 4);
        iVar2 = iVar2 + *(int *)(iVar2 + 4);
      } while (0 < iVar3);
    }
    iVar2 = param_2 + 8;
    iVar3 = *(int *)(param_2 + 4) + -8;
    if (0 < iVar3) {
      do {
        iVar5 = func_020324ec(iVar2,((unsigned int)0x0203270c),4);
        if (iVar5 == 0) {
          iVar5 = func_02032aac(0xd8);
          uVar4 = 0;
          if (iVar5 != 0) {
            uVar4 = func_02031ee0(iVar5,iVar2);
          }
LAB_0203268c:
          iVar5 = *(int *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
          *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar5 * 4) = uVar4;
        }
        else {
          iVar5 = func_020324ec(iVar2,((unsigned int)0x02032710),4);
          if (iVar5 == 0) {
            iVar5 = func_02032aac(0x140);
            uVar4 = 0;
            if (iVar5 != 0) {
              uVar4 = func_02031400(iVar5,iVar2,*(undefined4 *)(param_1 + 0xdc),
                                   *(undefined4 *)(param_1 + 0xd8),param_3);
            }
            goto LAB_0203268c;
          }
        }
        iVar3 = iVar3 - *(int *)(iVar2 + 4);
        iVar2 = iVar2 + *(int *)(iVar2 + 4);
      } while (0 < iVar3);
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xe0)) {
      do {
        func_020320fc(*(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar2 * 4),param_1);
        func_02032104(*(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar2 * 4),*(int *)(param_1 + 0xe4),
                     *(undefined4 *)(param_1 + 0xe0));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xe0));
    }
  }
  return;
}
