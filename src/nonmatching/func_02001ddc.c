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

void func_02001ddc(uint *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;

  *param_2 = (uint)((longlong)param_3 * (longlong)(int)*param_1) >> 0xc |
             (int)((ulonglong)((longlong)param_3 * (longlong)(int)*param_1) >> 0x20) << 0x14;
  param_2[1] = (uint)((longlong)param_3 * (longlong)(int)param_1[1]) >> 0xc |
               (int)((ulonglong)((longlong)param_3 * (longlong)(int)param_1[1]) >> 0x20) << 0x14;
  param_2[2] = (uint)((longlong)param_3 * (longlong)(int)param_1[2]) >> 0xc |
               (int)((ulonglong)((longlong)param_3 * (longlong)(int)param_1[2]) >> 0x20) << 0x14;
  param_2[3] = (uint)((longlong)param_3 * (longlong)(int)param_1[3]) >> 0xc |
               (int)((ulonglong)((longlong)param_3 * (longlong)(int)param_1[3]) >> 0x20) << 0x14;
  param_2[4] = (uint)((longlong)param_4 * (longlong)(int)param_1[4]) >> 0xc |
               (int)((ulonglong)((longlong)param_4 * (longlong)(int)param_1[4]) >> 0x20) << 0x14;
  param_2[5] = (uint)((longlong)param_4 * (longlong)(int)param_1[5]) >> 0xc |
               (int)((ulonglong)((longlong)param_4 * (longlong)(int)param_1[5]) >> 0x20) << 0x14;
  param_2[6] = (uint)((longlong)param_4 * (longlong)(int)param_1[6]) >> 0xc |
               (int)((ulonglong)((longlong)param_4 * (longlong)(int)param_1[6]) >> 0x20) << 0x14;
  param_2[7] = (uint)((longlong)param_4 * (longlong)(int)param_1[7]) >> 0xc |
               (int)((ulonglong)((longlong)param_4 * (longlong)(int)param_1[7]) >> 0x20) << 0x14;
  param_2[8] = (uint)((longlong)param_5 * (longlong)(int)param_1[8]) >> 0xc |
               (int)((ulonglong)((longlong)param_5 * (longlong)(int)param_1[8]) >> 0x20) << 0x14;
  param_2[9] = (uint)((longlong)param_5 * (longlong)(int)param_1[9]) >> 0xc |
               (int)((ulonglong)((longlong)param_5 * (longlong)(int)param_1[9]) >> 0x20) << 0x14;
  param_2[10] = (uint)((longlong)param_5 * (longlong)(int)param_1[10]) >> 0xc |
                (int)((ulonglong)((longlong)param_5 * (longlong)(int)param_1[10]) >> 0x20) << 0x14;
  param_2[0xb] = (uint)((longlong)param_5 * (longlong)(int)param_1[0xb]) >> 0xc |
                 (int)((ulonglong)((longlong)param_5 * (longlong)(int)param_1[0xb]) >> 0x20) << 0x14
  ;
  if (param_1 == param_2) {
    return;
  }
  uVar1 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  uVar1 = param_1[0xf];
  param_2[0xe] = param_1[0xe];
  param_2[0xf] = uVar1;
  return;
}
