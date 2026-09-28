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

extern int func_02018ba4();
extern int func_0202c774();
extern int func_0202f744();

undefined4 func_0202cd5c(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char local_5c [4];
  char local_58 [4];
  undefined1 auStack_54 [64];

  uVar4 = 8000;
  if (param_2 < 8000) {
    if (param_2 < ((unsigned int)0x0202d00c)) {
      if (param_2 < ((unsigned int)0x0202d034)) {
        if (param_2 < ((unsigned int)0x0202d040)) {
          if (param_2 < 4000) {
            if (param_2 < ((unsigned int)0x0202d034) >> 1) {
              if (param_2 < 2000) {
                if (param_2 < 1000) {
                  if (param_2 != 0) goto LAB_0202cfce;
                  uVar2 = ((unsigned int)0x0202d0fc);
                  uVar3 = ((unsigned int)0x0202d0e0);
                  if (*(char *)(param_1 + ((unsigned int)0x0202d0e0)) != '\0') {
                    if (param_4 < 1000) {
                      uVar3 = (uint)*(ushort *)(param_1 + (((unsigned int)0x0202d0e0) - 0x24));
                      uVar2 = ((unsigned int)0x0202d0f4);
                      uVar4 = ((unsigned int)0x0202d0f8);
                    }
                    else {
                      uVar4 = 0;
                      uVar2 = ((unsigned int)0x0202d0e8);
                      uVar3 = ((unsigned int)0x0202d0ec);
                    }
                  }
                }
                else {
                  uVar2 = ((unsigned int)0x0202d0c0);
                  uVar3 = ((unsigned int)0x0202d0c4);
                  if ((1999 < param_4) ||
                     (uVar2 = ((unsigned int)0x0202d0cc), uVar3 = ((unsigned int)0x0202d0d0), 999 < param_4)) {
                    uVar4 = 1000;
                    goto LAB_0202cf72;
                  }
                  uVar2 = ((unsigned int)0x0202d0d8);
                  uVar3 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202d000));
                  uVar4 = ((unsigned int)0x0202d0dc);
                }
              }
              else {
                if (param_3 == 0) {
                  func_02018ba4(local_5c,((unsigned int)0x0202d094),((unsigned int)0x0202d098));
                }
                else {
                  local_5c[0] = (char)param_3 + 'a';
                  local_5c[1] = 0;
                }
                uVar4 = 2000;
                uVar2 = ((unsigned int)0x0202d0a0);
                uVar3 = ((unsigned int)0x0202d0a4);
                if ((1999 < param_4) || (uVar2 = ((unsigned int)0x0202d0ac), uVar3 = ((unsigned int)0x0202d0b0), 999 < param_4))
                goto LAB_0202cf72;
                uVar2 = ((unsigned int)0x0202d0b4);
                uVar3 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202d000));
                uVar4 = ((unsigned int)0x0202d0b8);
              }
            }
            else {
              uVar2 = ((unsigned int)0x0202d074);
              uVar3 = ((unsigned int)0x0202d078);
              if ((1999 < param_4) || (uVar2 = ((unsigned int)0x0202d080), uVar3 = ((unsigned int)0x0202d084), 999 < param_4)) {
                uVar4 = ((unsigned int)0x0202d034) >> 1;
                goto LAB_0202cf72;
              }
              uVar2 = ((unsigned int)0x0202d08c);
              uVar3 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202d000));
              uVar4 = ((unsigned int)0x0202d090);
            }
          }
          else {
            if (param_3 == 0) {
              func_02018ba4(local_58,((unsigned int)0x0202d048),((unsigned int)0x0202d04c));
            }
            else {
              local_58[0] = (char)param_3 + 'a';
              local_58[1] = 0;
            }
            uVar2 = ((unsigned int)0x0202d054);
            uVar3 = ((unsigned int)0x0202d058);
            if ((1999 < param_4) || (uVar2 = ((unsigned int)0x0202d060), uVar3 = ((unsigned int)0x0202d064), 999 < param_4)) {
              uVar4 = 4000;
              goto LAB_0202cf72;
            }
            uVar2 = ((unsigned int)0x0202d068);
            uVar3 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202d000));
            uVar4 = ((unsigned int)0x0202d06c);
          }
        }
        else {
          uVar2 = ((unsigned int)0x0202d044);
          uVar3 = param_2 - ((unsigned int)0x0202d040);
        }
      }
      else {
        uVar4 = *(uint *)(*(int *)(param_1 + ((unsigned int)0x0202d038)) + 0x10);
        uVar2 = ((unsigned int)0x0202d03c);
        uVar3 = *(uint *)(*(int *)(param_1 + ((unsigned int)0x0202d038)) + 0xc);
      }
    }
    else {
      uVar2 = ((unsigned int)0x0202d014);
      uVar3 = ((unsigned int)0x0202d018);
      uVar4 = ((unsigned int)0x0202d00c);
      if ((1999 < param_4) || (uVar2 = ((unsigned int)0x0202d020), uVar3 = ((unsigned int)0x0202d024), 999 < param_4))
      goto LAB_0202cf72;
      uVar2 = ((unsigned int)0x0202d02c);
      uVar3 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202d000));
      uVar4 = ((unsigned int)0x0202d030);
    }
  }
  else {
    uVar2 = ((unsigned int)0x0202cff4);
    uVar3 = ((unsigned int)0x0202cff8);
    if (param_4 < 1000) {
      uVar2 = ((unsigned int)0x0202d004);
      uVar3 = (uint)*(ushort *)(param_1 + ((unsigned int)0x0202d000));
      uVar4 = ((unsigned int)0x0202d008);
    }
    else {
LAB_0202cf72:
      uVar4 = param_2 - uVar4;
    }
  }
  func_02018ba4(auStack_54,uVar2,uVar3,uVar4);
LAB_0202cfce:
  iVar1 = func_0202c774(param_1,param_2 + param_3 * 0x10000);
  if (iVar1 == 0) {
    return 0;
  }
  func_0202f744(iVar1,auStack_54);
  return 1;
}
