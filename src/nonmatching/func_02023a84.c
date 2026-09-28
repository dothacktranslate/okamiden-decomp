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

extern int func_02023a3c();
extern int func_02023dd0();
extern int func_02032ac4();
extern int func_02036508();
extern int func_0x0207f5a4();
extern int func_0x0207fa54();
extern int func_0x0207fcc0();
extern int func_0x020810ec();
extern int func_0x020839d8();
extern int func_0x02083f1c();
extern int func_0x020a0b50();

void func_02023a84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;

  puVar4 = ((unsigned int)0x02023c64);
  iVar3 = ((unsigned int)0x02023c60);
  uVar2 = ((unsigned int)0x02023c5c);
  uVar1 = ((unsigned int)0x02023c58);
  uVar7 = 0;
  do {
    iVar5 = param_1 + uVar7 * 2;
    if (*(short *)(iVar5 + 0x18) != *(short *)(iVar5 + 0x26)) {
      if (uVar7 == 0) {
        func_02023a3c(param_1);
      }
      func_02036508(*puVar4,uVar7,*(undefined2 *)(param_1 + uVar7 * 2 + 0x26));
      if (uVar7 == 0) {
        switch(*(undefined2 *)(param_1 + 0x26)) {
        case 0:
          iVar5 = func_02032ac4(0x38c,uVar1,uVar2,0x1e,param_4);
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x0207fcc0();
          }
          break;
        case 1:
          iVar5 = func_02032ac4(iVar3,((unsigned int)0x02023c68),((unsigned int)0x02023c6c),0x1e,param_4)
          ;
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x02083f1c();
          }
          break;
        case 2:
          iVar5 = func_02032ac4(iVar3 + 0x590,((unsigned int)0x02023c70),((unsigned int)0x02023c74),0x1e,
                               param_4);
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x020a0b50();
          }
          break;
        case 3:
          iVar5 = func_02032ac4(iVar3 + 0x2f4,((unsigned int)0x02023c78),((unsigned int)0x02023c7c),
                               0x1e,param_4);
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x020839d8();
          }
          break;
        case 4:
          iVar5 = func_02032ac4(0x1c,((unsigned int)0x02023c80),((unsigned int)0x02023c84),0x1e,
                               param_4);
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x0207fa54();
          }
          break;
        case 5:
          iVar5 = func_02032ac4(0x14,((unsigned int)0x02023c88),((unsigned int)0x02023c8c),0x1e,param_4
                              );
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x020810ec();
          }
          break;
        case 6:
          iVar5 = func_02032ac4(0x174,((unsigned int)0x02023c90),((unsigned int)0x02023c94),0x1e
                               ,param_4);
          uVar6 = 0;
          if (iVar5 != 0) {
            uVar6 = func_0x0207f5a4();
          }
          break;
        default:
          goto switchD_02023af4_default;
        }
        func_02023dd0(param_1,uVar6);
      }
switchD_02023af4_default:
      iVar5 = param_1 + uVar7 * 2;
      *(undefined2 *)(iVar5 + 0x18) = *(undefined2 *)(iVar5 + 0x26);
    }
    uVar7 = uVar7 + 1 & 0xffff;
    if (6 < uVar7) {
      return;
    }
  } while( true );
}
