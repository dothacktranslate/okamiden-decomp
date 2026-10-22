/* Locally recovered Ghidra pseudocode; not behaviorally verified. */
typedef unsigned char byte;
typedef signed char sbyte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int code();
typedef unsigned int size_t;
typedef int bool;
#ifndef true
#define true 1
#define false 0
#endif
extern unsigned int func_0204e410();
extern unsigned int func_02052064();
extern unsigned int func_02052788();
extern unsigned int func_0205291c();
extern unsigned int func_02052c04();
#define DAT_02052a8c ((volatile unsigned int *)0x02052a8cU)


undefined4 * func_02052968(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;

  puVar3 = (undefined4 *)func_02052064(param_2,param_3);
  if ((puVar3[1] != 0) || (puVar4 = puVar3, puVar3 == DAT_02052a8c)) {
    puVar4 = (undefined4 *)func_0205291c(param_2);
    if (puVar4 == (undefined4 *)0x0) {
      func_02052788(param_1,param_2,param_3);
      puVar3 = (undefined4 *)func_02052c04(param_1,param_2,param_3);
      return puVar3;
    }
    puVar5 = (undefined4 *)func_02052064(param_2,puVar3 + 2);
    if (!(puVar5 == puVar3)) {
      puVar2 = (undefined4 *)puVar5[4];
      while (puVar1 = puVar2, puVar1 != puVar3) {
        puVar5 = puVar1;
        puVar2 = (undefined4 *)puVar1[4];
      }
      puVar5[4] = puVar4;
      uVar7 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      uVar7 = puVar3[3];
      uVar9 = puVar3[4];
      puVar4[2] = puVar3[2];
      puVar4[3] = uVar7;
      puVar4[4] = uVar9;
      puVar3[4] = 0;
      puVar3[1] = 0;
      puVar4 = puVar3;
    } else {
      puVar4[4] = puVar3[4];
      puVar3[4] = puVar4;
    }
  }
  iVar8 = *param_3;
  iVar6 = param_3[1];
  puVar4[2] = iVar8;
  puVar4[3] = iVar6;
  if (((3 < iVar6) && ((*(byte *)(iVar8 + 5) & 3) != 0)) && ((*(byte *)(param_2 + 5) & 4) != 0)) {
    func_0204e410(param_1,param_2);
  }
  return puVar4;
}
