/* Unreviewed Ghidra reconstruction for experimental fuzzy matching. */
typedef unsigned int undefined3;
typedef unsigned int uint3;
typedef unsigned int undefined5;
typedef unsigned int uint5;
#define SUB41(a,off) ((unsigned int)(((unsigned long long)(a) >> (8*(off))) & 0xffULL))
#define SUB42(a,off) ((unsigned int)(((unsigned long long)(a) >> (8*(off))) & 0xffffULL))
#define SUB43(a,off) ((unsigned int)(((unsigned long long)(a) >> (8*(off))) & 0xffffffULL))
#define SUB81(a,off) SUB41(a,off)
#define SUB82(a,off) SUB42(a,off)
#define SUB84(a,off) ((unsigned int)((unsigned long long)(a) >> (8*(off))))
#define CONCAT11(a,b) ((((unsigned int)(a) & 0xffU) << 8) | ((unsigned int)(b) & 0xffU))
#define CONCAT12(a,b) ((((unsigned int)(a) & 0xffU) << 16) | ((unsigned int)(b) & 0xffffU))
#define CONCAT13(a,b) ((((unsigned int)(a) & 0xffU) << 24) | ((unsigned int)(b) & 0xffffffU))
#define CONCAT21(a,b) ((((unsigned int)(a) & 0xffffU) << 8) | ((unsigned int)(b) & 0xffU))
#define CONCAT22(a,b) ((((unsigned int)(a) & 0xffffU) << 16) | ((unsigned int)(b) & 0xffffU))
#define CONCAT31(a,b) ((((unsigned int)(a) & 0xffffffU) << 8) | ((unsigned int)(b) & 0xffU))
#define CONCAT44(a,b) ((((unsigned long long)(a) & 0xffffffffULL) << 32) | ((unsigned long long)(b) & 0xffffffffULL))
#define DAT_02051f18 ((volatile unsigned int *)0x02051f18U)
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
extern unsigned int func_02018ba4();
extern unsigned int func_02018d9c();
extern unsigned int func_02019064();
extern unsigned int func_0201e61c();
extern unsigned int func_0201edc4();
extern unsigned int func_0201edf8();
extern unsigned int func_02046414();
extern unsigned int func_02047714();
extern unsigned int func_02047988();
extern unsigned int func_02047a14();
extern unsigned int func_02047ff0();
extern unsigned int func_02048014();
extern unsigned int func_02048094();
extern unsigned int func_020480b8();
extern unsigned int func_0204815c();
extern unsigned int func_02051938();
extern unsigned int func_02051ad4();
extern unsigned int func_02051c24();


undefined4
func_02051c64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *local_1034 [1027];
  undefined1 auStack_1248 [18];
  int local_124c;
  int iVar6;
  undefined4 uVar4;
  char *pcVar2;
  undefined4 uStack_28;
  undefined1 auStack_1236 [514];
  uint local_1250;
  char *pcVar7;
  int iVar5;
  char *pcVar3;

  {
      iVar6 = 1;
  }
  uStack_28 = param_4;
  pcVar2 = (char *)func_02047988(param_1,1,&local_124c);
  func_0204815c(param_1,local_1034);
  if (pcVar2 + local_124c <= pcVar2) {
LAB_02051f00:
    func_02048094(local_1034);
    return 1;
  }
  pcVar3 = pcVar2;
LAB_02051cb0:
  if (*pcVar3 != '%') {
    if ((char *)&uStack_28 <= (char *)local_1034[0]) {
      func_02047ff0(local_1034);
    }
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = local_1034[0];
LAB_02051ce8:
    local_1034[0] = pcVar3 + 1;
    *pcVar3 = cVar1;
    goto LAB_02051ef8;
  }
  if (pcVar3[1] == '%') {
    if ((char *)&uStack_28 <= (char *)local_1034[0]) {
      func_02047ff0(local_1034);
    }
    cVar1 = pcVar3[1];
    pcVar7 = pcVar3 + 2;
    pcVar3 = local_1034[0];
    goto LAB_02051ce8;
  }
  iVar6 = iVar6 + 1;
  pcVar3 = (char *)func_02051ad4(param_1,pcVar3 + 1,auStack_1248);
  iVar5 = (int)*pcVar3;
  pcVar7 = pcVar3 + 1;
  if (iVar5 < 0x59) {
    if (0x57 < iVar5) goto LAB_02051e18;
    if (((0x47 < iVar5) || (iVar5 < 0x45)) || (iVar5 != 0x45 && iVar5 != 0x47))
    goto switchD_02051d8c_default;
    goto LAB_02051e38;
  }
  if (iVar5 < 100) {
    if (iVar5 != 99) goto switchD_02051d8c_default;
    goto LAB_02051de8;
  }
  switch(iVar5) {
  case 100:
    goto LAB_02051e0c;
  case 0x65:
    goto LAB_02051e38;
  case 0x66:
    goto LAB_02051e38;
  case 0x67:
LAB_02051e38:
    func_02047a14(param_1,iVar6);
    uVar4 = func_0201e61c();
LAB_02051e04:
    func_02018ba4(auStack_1236,auStack_1248,uVar4);
    uVar4 = func_02018d9c(auStack_1236);
    func_02048014(local_1034,auStack_1236,uVar4);
LAB_02051ef8:
    pcVar3 = pcVar7;
    if (pcVar2 + local_124c <= pcVar7) goto LAB_02051f00;
    goto LAB_02051cb0;
  case 0x68:
    break;
  case 0x69:
LAB_02051e0c:
    func_02051c24(auStack_1248);
LAB_02051de8:
    func_02047a14(param_1,iVar6);
    uVar4 = func_0201edc4();
    goto LAB_02051e04;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    break;
  case 0x6e:
    break;
  case 0x6f:
    goto LAB_02051e18;
  case 0x70:
    break;
  case 0x71:
    func_02051938(param_1,local_1034,iVar6);
    goto LAB_02051ef8;
  case 0x72:
    break;
  case 0x73:
    uVar4 = func_02047988(param_1,iVar6,&local_1250);
    iVar5 = func_02019064(auStack_1248,0x2e);
    if ((iVar5 == 0) && (99 < local_1250)) {
      func_02046414(param_1,iVar6);
      func_020480b8(local_1034);
      goto LAB_02051ef8;
    }
    goto LAB_02051e04;
  case 0x74:
    break;
  case 0x75:
    goto LAB_02051e18;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
LAB_02051e18:
    func_02051c24(auStack_1248);
    func_02047a14(param_1,iVar6);
    uVar4 = func_0201edf8();
    goto LAB_02051e04;
  }
switchD_02051d8c_default:
  uVar4 = func_02047714(param_1,DAT_02051f18,(int)*pcVar3);
  return uVar4;
}
