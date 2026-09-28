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

extern int func_02012f30();
extern int func_02012f68();
extern int func_02013020();
extern int func_02013030();
extern int func_02013bc4();
extern int func_02013c70();
extern int func_02013c84();
extern int func_02013cac();

undefined4 func_02032e4c(uint *param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r11;

  if ((((*param_1 & 1) != 0) && ((*param_1 & 2) != 0)) && (iVar2 = func_02012f30(), iVar2 != 0)) {
    iVar2 = func_02013cac();
    uVar4 = ~(iVar2 - 1U) & param_2 + (iVar2 - 1U);
    uVar3 = func_02013c84();
    if (uVar4 + param_4 < uVar3) {
      *param_1 = *param_1 & 0xfffffffd;
      func_02013020((short)param_1[3]);
      if (param_5 != '\x01') {
        cVar1 = func_02013c70();
        if (((cVar1 == '\x01') || (cVar1 = func_02013c70(), cVar1 == '\x02')) ||
           (cVar1 = func_02013c70(), cVar1 == '\x03')) {
          func_02013bc4(uVar4,param_3,param_4,((unsigned int)0x02033024),param_1,1,6,1,0);
        }
        else {
          *param_1 = *param_1 | 2;
        }
        return 1;
      }
      cVar1 = func_02013c70();
      if (((cVar1 == '\x01') || (cVar1 = func_02013c70(), cVar1 == '\x02')) ||
         (cVar1 = func_02013c70(), cVar1 == '\x03')) {
        unaff_r11 = func_02013bc4(uVar4,param_3,param_4,0,0,0,6,1,0);
      }
      uVar3 = func_02012f68();
      param_1[2] = uVar3;
      func_02013030((short)param_1[3]);
      *param_1 = *param_1 | 2;
      return unaff_r11;
    }
  }
  return 0;
}
