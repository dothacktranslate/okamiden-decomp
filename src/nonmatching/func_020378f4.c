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

extern int func_02037420();
extern int func_0206414c();
extern int func_02064478();
extern int func_020644dc();
extern int func_02064570();
extern int func_02066f44();
extern int func_02066f6c();
extern int func_02067028();
extern int func_0206705c();

void func_020378f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int local_48 [2];
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [5];
  undefined4 uStack_28;

  uStack_28 = param_4;
  for (piVar2 = *(int **)(param_1 + 0x10); piVar2 != (int *)(param_1 + 0x10);
      piVar2 = (int *)*piVar2) {
    if (-1 < piVar2[5]) {
      if ((piVar2[2] & 1U) == 0) {
        func_02064478(piVar2 + 10);
      }
      else if ((piVar2[2] & 0x100U) == 0) {
        func_02067028(piVar2 + 10,piVar2[5],4);
      }
    }
    if ((piVar2[6] != 0xff) && ((piVar2[2] & 1U) == 0)) {
      func_020644dc(piVar2 + 10,((unsigned int)0x02037b64));
    }
    if ((piVar2[7] != 0) && ((piVar2[2] & 1U) == 0)) {
      uVar3 = 1;
      iVar5 = 0;
      do {
        if (((uVar3 & piVar2[7]) != 0) &&
           (iVar1 = func_02064570(piVar2 + 10,iVar5,(int)*(short *)((int)piVar2 + iVar5 * 2 + 0x20)),
           iVar1 != 0)) {
          piVar2[7] = piVar2[7] ^ uVar3;
        }
        iVar5 = iVar5 + 1;
        uVar3 = uVar3 << 1;
      } while (iVar5 < 2);
    }
  }
  func_0206414c();
  if ((*(uint *)(param_1 + 8) & 2) != 0) {
    if (*(int *)(param_1 + 0x10) != param_1 + 0x10) {
      iVar5 = *(int *)(param_1 + 0x10);
      do {
        func_02037420(local_48,param_1,iVar5 + -4);
        iVar5 = local_48[0];
      } while (local_48[0] != param_1 + 0x10);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 == (undefined4 *)(param_1 + 0x10)) {
    return;
  }
  do {
    if ((puVar4[2] & 1) == 0) {
      if (puVar4[10] != 0) goto LAB_02037b0c;
      func_02037420(&puStack_40,param_1,puVar4 + -1);
      puVar4 = puStack_40;
    }
    else {
      if ((puVar4[2] & 0x100) == 0) {
        if (puVar4[10] == 0) {
          func_02037420(apuStack_3c,param_1,puVar4 + -1);
          puVar4 = apuStack_3c[0];
          goto LAB_02037b10;
        }
      }
      else if (*(int *)(param_1 + 0x5f4) == 0) {
        uVar6 = puVar4[10];
        func_0206705c(puVar4 + 10);
        if ((puVar4[2] & 0x10) == 0) {
          func_02066f44(puVar4 + 10,uVar6,0);
        }
        else {
          func_02066f6c(puVar4 + 10,0xffffffff,0xffffffff,uVar6);
        }
        if (-1 < (int)puVar4[5]) {
          func_02067028(puVar4 + 10,puVar4[5],4);
        }
        puVar4[2] = puVar4[2] & 0xfffffeff;
      }
LAB_02037b0c:
      puVar4 = (undefined4 *)*puVar4;
    }
LAB_02037b10:
    if (puVar4 == (undefined4 *)(param_1 + 0x10)) {
      return;
    }
  } while( true );
}
