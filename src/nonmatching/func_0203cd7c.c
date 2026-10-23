/* Hypothesis from reference assembly; prototypes require semantic review. */
#pragma thumb on
extern unsigned int func_0203c754(void);
extern unsigned int func_0205b070(void *,void *,unsigned int);
unsigned int func_0203cd7c(char *p, unsigned int x, unsigned int y) {
    return func_0205b070(p+16,(void *)&func_0203c754,y);
}
