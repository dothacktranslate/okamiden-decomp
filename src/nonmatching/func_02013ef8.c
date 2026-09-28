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

extern int func_02009b68();
extern int func_02013d58();
extern int func_02013d8c();
extern int func_02014578();

uint func_02013ef8(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30;

  puVar2 = ((unsigned int)0x0201400c);
  puVar1 = ((unsigned int)0x02014008);
  local_30 = (*(unsigned int *)0x02014004);
  for (uVar8 = param_4; uVar8 != 0; uVar8 = uVar8 - uVar7) {
    uVar6 = param_3 & 0xfffffe00;
    uVar7 = 0x200;
    uVar5 = ((unsigned int)0x02014010);
    if (uVar6 != local_30) {
      if (((uVar6 != param_3) || ((param_2 & 3) != 0)) || (uVar5 = param_2, uVar8 < 0x200)) {
        uVar5 = ((unsigned int)0x02014010);
        local_30 = uVar6;
      }
      func_02013d58(uVar6);
      uVar4 = 0;
      do {
        uVar3 = *puVar2;
        if (((uVar3 & 0x800000) != 0) && (uVar4 < 0x80)) {
          *(undefined4 *)(uVar5 + uVar4 * 4) = *puVar1;
          uVar4 = uVar4 + 1;
        }
      } while ((uVar3 & 0x80000000) != 0);
    }
    if (uVar5 == ((unsigned int)0x02014010)) {
      uVar7 = 0x200 - (param_3 - uVar6);
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      func_02009b68(((unsigned int)0x02014010) + (param_3 - uVar6),param_2,uVar7);
    }
    param_2 = param_2 + uVar7;
    param_3 = param_3 + uVar7;
  }
  func_02013d8c();
  func_02014578();
  (*(unsigned int *)0x02014004) = local_30;
  return param_4;
}
