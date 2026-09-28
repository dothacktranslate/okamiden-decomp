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

extern int func_0200a324();
extern int func_0200a364();
extern int func_0200ac20();
extern int func_0200af08();
extern int func_02056370();
extern int func_02064a64();
extern int func_02064b08();
extern int func_020685ec();
extern int func_02068620();
extern int func_02068638();

void func_0206464c(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  uVar5 = func_0200af08();
  iVar6 = func_02056370(((unsigned int)0x020647a4),0);
  iVar4 = ((unsigned int)0x020647a8);
  if (iVar6 == 0) {
    return;
  }
  do {
    iVar7 = func_02056370(((unsigned int)0x020647a4),iVar6);
    if ((*(char *)(iVar6 + 0x2d) == '\0') &&
       (iVar8 = func_0200ac20(*(undefined4 *)(iVar6 + 0x30)), iVar8 != 0)) {
      *(undefined1 *)(iVar6 + 0x2d) = 1;
    }
    if ((*(char *)(iVar6 + 0x2d) == '\0') || ((uVar5 & 1 << (uint)*(byte *)(iVar6 + 0x3c)) != 0)) {
      func_02068620(iVar6 + 0x1c);
      sVar1 = *(short *)(iVar4 + (uint)*(byte *)(*(int *)(iVar6 + 4) + 0x20) * 2);
      sVar2 = *(short *)(iVar4 + (uint)*(byte *)(iVar6 + 0x41) * 2);
      sVar3 = *(short *)(iVar4 + (uint)*(byte *)(iVar6 + 0x40) * 2);
      iVar8 = func_020685ec(iVar6 + 0x1c);
      iVar9 = (int)*(short *)(iVar4 + (iVar8 >> 8) * 2) + (int)sVar1 + (int)sVar3 + (int)sVar2;
      iVar8 = -0x8000;
      if ((-0x8001 < iVar9) && (iVar8 = iVar9, ((unsigned int)0x020647ac) < iVar9)) {
        iVar8 = ((unsigned int)0x020647ac);
      }
      if (iVar8 != *(short *)(iVar6 + 0x3e)) {
        func_0200a364(*(undefined1 *)(iVar6 + 0x3c),iVar8);
        *(short *)(iVar6 + 0x3e) = (short)iVar8;
      }
      if ((*(char *)(iVar6 + 0x2c) == '\x02') && (iVar8 = func_02068638(iVar6 + 0x1c), iVar8 != 0)) {
        func_02064a64(iVar6);
      }
      if (*(char *)(iVar6 + 0x2f) != '\0') {
        func_0200a324(*(undefined1 *)(iVar6 + 0x3c));
        *(undefined1 *)(iVar6 + 0x2f) = 0;
      }
    }
    else {
      func_02064b08(iVar6);
    }
    iVar6 = iVar7;
  } while (iVar7 != 0);
  return;
}
