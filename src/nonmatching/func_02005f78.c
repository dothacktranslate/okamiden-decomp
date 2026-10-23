/* Hypothesis from reference assembly; prototypes require semantic review. */
extern unsigned short data_020754f0;
extern unsigned int func_02005e6c(const void *);
unsigned int func_02005f78(void) {
    *(volatile unsigned int *)0x04000000u &= ~0x80000000u;
    return func_02005e6c(&data_020754f0);
}
