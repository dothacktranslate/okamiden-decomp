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

extern int func_02005ba0();
extern int func_020060a4();
extern int func_0203962c();
extern int func_02039a2c();
extern int func_02039a58();
extern int func_02039ad8();
extern int func_02039c48();
extern int func_02045920();

void func_02039b04(int param_1)

{
  undefined2 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  func_02039a2c();
  uVar4 = func_020060a4();
  puVar1 = ((unsigned int)0x02039c38);
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined2 *)(param_1 + 0x24) = *puVar1;
  *(undefined2 **)(param_1 + 0x20) = puVar1 + 0x1000000;
  func_02005ba0(8);
  *puVar1 = 0;
  puVar2 = ((unsigned int)0x02039c3c);
  if (*(char *)(param_1 + 0x30) != '\0') {
    (*(unsigned int *)0x02039c3c) = (*(unsigned int *)0x02039c3c) & 0xffffe0ff;
  }
  puVar5 = ((unsigned int)0x02039c40);
  *puVar2 = *puVar2 & 0xffffff9f | 0x20;
  puVar5 = (undefined4 *)*puVar5;
  *(undefined4 *)(param_1 + 0xc) = *puVar5;
  *(undefined4 *)(param_1 + 0x10) = puVar5[1];
  *(undefined4 *)(param_1 + 0x14) = puVar5[2];
  *(undefined4 *)(param_1 + 0x18) = puVar5[3];
  func_0203962c(puVar5 + 4,puVar5 + 4);
  *(undefined4 *)(param_1 + 0x4c) = puVar5[9];
  *(undefined4 *)(param_1 + 0x50) = puVar5[10];
  *(undefined4 *)(param_1 + 0x54) = puVar5[0xb];
  *(undefined4 *)(param_1 + 0x58) = puVar5[0xc];
  *(undefined4 *)(param_1 + 0x5c) = puVar5[0xd];
  *(undefined4 *)(param_1 + 0x60) = puVar5[0xe];
  puVar5[0x15] = puVar5[0x15] | 1;
  func_02039ad8(param_1);
  func_02039a58(param_1);
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0xbf;
    func_02039c48(param_1);
  }
  piVar3 = ((unsigned int)0x02039c44);
  func_02045920((*(unsigned int *)0x02039c44),1);
  *(uint *)(*piVar3 + 8) = *(uint *)(*piVar3 + 8) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  return;
}
