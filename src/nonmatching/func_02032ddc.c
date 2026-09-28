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

extern int func_02006980();
extern int func_02012e3c();
extern int func_02012f68();
extern int func_02013020();
extern int func_02013030();
extern int func_02013c30();
extern int func_02013c70();
extern int func_02032bcc();
extern int func_02033228();

int func_02032ddc(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;

  if ((*(unsigned int *)0x02032e44) == 0) {
    func_02012e3c();
    iVar2 = func_02032bcc(0x10,4,((unsigned int)0x02032e48));
    if (iVar2 != 0) {
      puVar3 = (uint *)0x0;
      if (iVar2 != 0) {
        puVar3 = (uint *)func_02033228();
      }
      (*(unsigned int *)0x02032e44) = (int)puVar3;
      if (param_1 != 0) {
        *puVar3 = *puVar3 | 3;
        uVar1 = func_02006980();
        *(undefined2 *)(puVar3 + 3) = uVar1;
        func_02013020((short)puVar3[3]);
        func_02013c30(param_2);
        uVar4 = func_02013c70();
        puVar3[1] = uVar4;
        uVar4 = func_02012f68();
        puVar3[2] = uVar4;
        func_02013030((short)puVar3[3]);
      }
      return (*(unsigned int *)0x02032e44);
    }
  }
  return 0;
}
