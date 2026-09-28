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

extern int func_02047988();
extern int func_02047ff0();
extern int func_02048014();

void func_02051938(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  int local_28;

  local_28 = param_4;
  pcVar4 = (char *)func_02047988(param_1,param_3,&local_28);
  if (param_2 + 0x403 <= (undefined4 *)*param_2) {
    func_02047ff0(param_2);
  }
  puVar8 = (undefined1 *)*param_2;
  *param_2 = puVar8 + 1;
  *puVar8 = 0x22;
  uVar3 = ((unsigned int)0x02051ad0);
  uVar2 = ((unsigned int)0x02051acc);
  iVar5 = local_28 + -1;
  bVar11 = local_28 != 0;
  local_28 = iVar5;
  if (bVar11) {
    puVar10 = param_2 + 0x403;
    do {
      cVar1 = *pcVar4;
      if (cVar1 < '\x0e') {
        if (cVar1 < '\n') {
          uVar6 = uVar2;
          uVar9 = 4;
          if (cVar1 != '\0') goto LAB_02051a58;
        }
        else {
          if (cVar1 == '\n') goto LAB_020519f8;
          if (cVar1 != '\r') goto LAB_02051a58;
          uVar6 = uVar3;
          uVar9 = 2;
        }
        func_02048014(param_2,uVar6,uVar9);
      }
      else {
        if (cVar1 < '#') {
          if (cVar1 != '\"') goto LAB_02051a58;
LAB_020519f8:
          if (puVar10 <= (undefined4 *)*param_2) {
            func_02047ff0(param_2);
          }
          puVar8 = (undefined1 *)*param_2;
          *param_2 = puVar8 + 1;
          *puVar8 = 0x5c;
          if (puVar10 <= (undefined4 *)*param_2) {
            func_02047ff0(param_2);
          }
        }
        else {
          if (cVar1 == '\\') goto LAB_020519f8;
LAB_02051a58:
          if (puVar10 <= (undefined4 *)*param_2) {
            func_02047ff0(param_2);
          }
        }
        pcVar7 = (char *)*param_2;
        *param_2 = pcVar7 + 1;
        *pcVar7 = *pcVar4;
      }
      pcVar4 = pcVar4 + 1;
      iVar5 = local_28 + -1;
      bVar11 = local_28 != 0;
      local_28 = iVar5;
    } while (bVar11);
  }
  if (param_2 + 0x403 <= (undefined4 *)*param_2) {
    func_02047ff0(param_2);
  }
  puVar8 = (undefined1 *)*param_2;
  *param_2 = puVar8 + 1;
  *puVar8 = 0x22;
  return;
}
