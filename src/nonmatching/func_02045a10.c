typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;

typedef int bool;
typedef int code();

extern int LZCOUNT();

extern int func_02035820();
extern int func_02035924();


undefined4 * func_02045a10(undefined4 *param_1)

{
  *param_1 = ((unsigned int)0x02045a38);
  func_02035924(param_1 + 3);
  func_02035820(param_1 + 3);
  return param_1;
}
