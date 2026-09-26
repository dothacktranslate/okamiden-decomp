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


void func_0204474c(int param_1,int param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0204475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ((code *)(*(unsigned int *)0x02044760))(*(int *)(param_1 + 0x18) + param_2 * 8,param_3);
  return;
}
