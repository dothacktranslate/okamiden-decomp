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

extern int func_020098e4();
extern int func_02032bcc();
extern int func_02059dbc();


undefined2 * func_02044144(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;

  iVar1 = func_02059dbc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_3,param_4,
                       param_4);
  puVar2 = (undefined2 *)func_02032bcc(iVar1 * 6 + 0x20,4,((unsigned int)0x020441a8));
  if (puVar2 != (undefined2 *)0x0) {
    func_020098e4(0,puVar2,0x18);
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined2 **)(puVar2 + 2) = puVar2 + 0xc;
    return puVar2;
  }
  return (undefined2 *)0x0;
}
