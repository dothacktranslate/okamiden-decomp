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

uint func_02000a78(void)

{
  uint uVar1;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;

  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & ~((unsigned int)0x02000b30));
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_Entire_Data_cache(0);
  coproc_moveto_Data_Synchronization(0);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b34),in_cr6,in_cr0);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b38),in_cr6,in_cr1);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b3c),in_cr6,in_cr2);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b40),in_cr6,in_cr3);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b44) | 0x1b,in_cr6,in_cr4);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b48),in_cr6,in_cr5);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b4c),in_cr6,in_cr6);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b50),in_cr6,in_cr7);
  coprocessor_moveto(0xf,0,1,0x20,in_cr9,in_cr1);
  coprocessor_moveto(0xf,0,0,((unsigned int)0x02000b44) | 10,in_cr9,in_cr1);
  coproc_moveto_Translation_table_base_1(0x4a);
  coproc_moveto_Translation_table_base_0(0x4a);
  coproc_moveto_Domain_Access_Control(10);
  coprocessor_moveto(0xf,0,3,((unsigned int)0x02000b54),in_cr5,in_cr0);
  coprocessor_moveto(0xf,0,2,((unsigned int)0x02000b58),in_cr5,in_cr0);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | ((unsigned int)0x02000b5c));
  return uVar1 | ((unsigned int)0x02000b5c);
}
