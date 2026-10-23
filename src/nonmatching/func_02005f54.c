/* Hypothesis from reference assembly; prototypes require semantic review. */
extern unsigned short data_020754ee;
extern unsigned int func_02005e6c(const void *);
unsigned int func_02005f54(void) {
    *(volatile unsigned int *)0x04000000u &= ~0x40000000u;
    return func_02005e6c(&data_020754ee);
}
