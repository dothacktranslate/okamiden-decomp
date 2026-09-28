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

extern int func_0205f4d4();
extern int func_0205f568();
extern int func_0205f5f8();
extern int func_0205facc();
extern int func_0205fc1c();
extern int func_0205fd70();
extern int func_0205ff44();
extern int func_020600c4();
extern int func_020604c8();
extern int func_02060800();

void func_0205f778(int param_1,int param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *puStack_28;

  uVar2 = (uint)*(ushort *)(param_1 + param_2 * 2 + 0x14);
  uVar4 = *(uint *)(param_1 + uVar2);
  iVar3 = param_1 + uVar2;
  puStack_28 = param_4;
  if ((uVar4 & 1) == 0) {
    puVar5 = (uint *)(iVar3 + 4);
    if (((param_3 & ((unsigned int)0x0205fac4)) == 0) || ((*(uint *)(param_1 + 8) & 1) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *param_4 = 0;
    if ((uVar4 & 6) == 0) {
      if ((uVar4 & 8) == 0) {
        if (bVar1) {
          func_0205fc1c();
        }
        else {
          func_0205facc(param_4 + 0x13,param_3,puVar5,param_1);
        }
        puVar6 = (uint *)(iVar3 + 0xc);
      }
      else {
        puVar6 = (uint *)(iVar3 + 8);
        param_4[0x13] = *puVar5;
      }
      if ((uVar4 & 0x10) == 0) {
        if (bVar1) {
          func_0205fc1c();
        }
        else {
          func_0205facc(param_4 + 0x14,param_3,puVar6,param_1);
        }
        puVar7 = puVar6 + 2;
      }
      else {
        puVar7 = puVar6 + 1;
        param_4[0x14] = *puVar6;
      }
      if ((uVar4 & 0x20) == 0) {
        if (bVar1) {
          func_0205fc1c();
        }
        else {
          func_0205facc(param_4 + 0x15,param_3,puVar7,param_1);
        }
        puVar5 = puVar7 + 2;
      }
      else {
        puVar5 = puVar7 + 1;
        param_4[0x15] = *puVar7;
      }
    }
    else if ((uVar4 & 2) == 0) {
      func_0205f4d4(param_4);
    }
    else {
      *param_4 = 4;
    }
    if ((uVar4 & 0xc0) == 0) {
      if ((uVar4 & 0x100) == 0) {
        if (bVar1) {
          func_020604c8();
        }
        else {
          func_020600c4(param_4 + 10,param_3,puVar5,param_1);
        }
        puVar5 = puVar5 + 2;
      }
      else {
        iVar3 = func_02060800(param_4 + 10,param_1 + *(int *)(param_1 + 0xc),
                             param_1 + *(int *)(param_1 + 0x10),*puVar5);
        if (iVar3 != 0) {
          param_4[0x10] = (int)(param_4[0xb] * param_4[0xf] - param_4[0xc] * param_4[0xe]) >> 0xc;
          param_4[0x11] = (int)(param_4[0xc] * param_4[0xd] - param_4[10] * param_4[0xf]) >> 0xc;
          param_4[0x12] = (int)(param_4[10] * param_4[0xe] - param_4[0xb] * param_4[0xd]) >> 0xc;
        }
        puVar5 = puVar5 + 1;
      }
    }
    else if ((uVar4 & 0x40) == 0) {
      func_0205f5f8(param_4);
    }
    else {
      *param_4 = *param_4 | 2;
    }
    if ((uVar4 & 0x600) == 0) {
      if ((uVar4 & 0x800) == 0) {
        if (bVar1) {
          func_0205ff44();
        }
        else {
          func_0205fd70(&local_48,param_3,puVar5,param_1);
        }
      }
      else {
        local_48 = *puVar5;
        local_44 = puVar5[1];
      }
      local_40 = local_48;
      local_34 = local_44;
      if ((uVar4 & 0x1000) == 0) {
        if (bVar1) {
          func_0205ff44();
        }
        else {
          func_0205fd70(&local_50,param_3,puVar5 + 2,param_1);
        }
      }
      else {
        local_50 = puVar5[2];
        local_4c = puVar5[3];
      }
      local_3c = local_50;
      local_30 = local_4c;
      if ((uVar4 & 0x2000) == 0) {
        if (bVar1) {
          func_0205ff44();
          local_38 = local_58;
          local_2c = local_54;
        }
        else {
          func_0205fd70(&local_58,param_3,puVar5 + 4,param_1);
          local_38 = local_58;
          local_2c = local_54;
        }
      }
      else {
        local_38 = puVar5[4];
        local_2c = puVar5[5];
      }
    }
    else {
      if ((uVar4 & 0x200) == 0) {
        func_0205f568(param_4);
        return;
      }
      *param_4 = *param_4 | 1;
    }
  }
  else {
    *param_4 = 7;
  }
  (*(code *)((undefined4 *)(*(unsigned int *)0x0205fac8))[0x3a])(param_4,&local_40,*(undefined4 *)(*(unsigned int *)0x0205fac8));
  return;
}
