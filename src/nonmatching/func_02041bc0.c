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

extern int func_02003774();
extern int func_020037e0();
extern int func_02003804();
extern int func_02003894();
extern int func_02003948();
extern int func_02003974();
extern int func_020397a0();
extern int func_0203b470();
extern int func_0203d1f0();
extern int func_0203d2e8();
extern int func_020423ac();
extern int func_0205bb5c();
extern int func_0205bc9c();
extern int func_0205bda4();
extern int func_0205bde0();
extern int func_0x01ffcab0();
extern int func_0x01ffd000();

void func_02041bc0(uint *param_1)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if ((param_1[0x49] & 1) != 0) {
    func_02003774();
    func_020037e0();
    func_0205bb5c();
    func_02003804();
    if ((param_1[0x49] & 0x80000000) == 0) {
      func_020397a0(param_1 + 4);
      iVar3 = func_020423ac(param_1);
      if (iVar3 == 0) {
        (*(unsigned int *)0x02041dd0) = (*(unsigned int *)0x02041dd0) & (ushort)((unsigned int)0x02041de4) | 0x10;
        func_02003974((short)param_1[0x60],param_1[0x61],param_1[0x62],param_1[99],param_1[100]);
        *(uint *)(((unsigned int)0x02041de0) + 0x20) =
             param_1[3] * 0x1000000 | *param_1 | param_1[1] << 8 | param_1[2] << 0x10;
        func_02003894((param_1[0x49] & 8) != 0,param_1[0x4c],param_1[0x4d],param_1[0x4e]);
        if ((param_1[0x49] & 8) != 0) {
          (*(unsigned int *)0x02041de8) = (ushort)param_1[0x4a] | 0x1f0000;
          func_02003948(param_1 + 0x4f);
        }
        uVar4 = 0;
        do {
          if ((1 << (uVar4 & 0xff) & param_1[0x57]) == 0) {
            func_0205bde0(uVar4,0);
          }
          else {
            func_0205bde0(uVar4,(short)param_1[uVar4 * 2 + 0x58]);
            func_0205bda4(uVar4,(int)*(short *)((int)param_1 + uVar4 * 8 + 0x162),
                         (int)(short)param_1[uVar4 * 2 + 0x59],
                         (int)*(short *)((int)param_1 + uVar4 * 8 + 0x166));
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 4);
      }
      else {
        func_0203d2e8((*(unsigned int *)0x02041dcc),1);
        puVar2 = ((unsigned int)0x02041dd0);
        (*(unsigned int *)0x02041dd0) = (ushort)((unsigned int)0x02041dd4) & (*(unsigned int *)0x02041dd0);
        func_02003974(((unsigned int)0x02041dd8),0x1f,((unsigned int)0x02041dd8),0x3f,0);
        if ((param_1[0x49] & 0x80) == 0) {
          *(undefined4 *)(puVar2 + 2) = ((unsigned int)0x02041ddc);
          uVar5 = param_1[3] * 0x1000000;
          iVar3 = (param_1[3] + 1) * 3;
          uVar4 = *param_1 | (((int)(iVar3 + ((uint)(iVar3 >> 1) >> 0x1e)) >> 2) + -1) * 0x100 |
                  param_1[2] << 0x10;
        }
        else {
          uVar4 = param_1[3] << 0x18;
          uVar5 = param_1[1] << 8 | *param_1 | param_1[2] << 0x10;
        }
        *(uint *)(((unsigned int)0x02041de0) + 0x20) = uVar5 | uVar4;
        iVar3 = 0;
        func_02003894(1,1,0,0x8000);
        do {
          func_0205bde0(iVar3,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
      }
      func_0205bc9c();
      if ((param_1[0x49] & 0x20) == 0) {
        func_0203b470((*(unsigned int *)0x02041dec));
      }
      piVar1 = ((unsigned int)0x02041dcc);
      if ((param_1[0x49] & 0x8000) == 0) {
        if (param_1[0x77] == 0) {
          *(uint *)((*(unsigned int *)0x02041dcc) + 0x1c) = *(uint *)((*(unsigned int *)0x02041dcc) + 0x1c) | 8;
          func_0203d1f0(*piVar1);
        }
        else {
          func_0x01ffcab0();
        }
      }
      func_0x01ffd000((*(unsigned int *)0x02041df0));
    }
  }
  return;
}
