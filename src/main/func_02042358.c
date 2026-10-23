#pragma thumb on
/* Reference: two independent MMIO reads at 0x04001000, and 0x2000 flag clear. */
void func_02042358(unsigned int *obj) {
    volatile unsigned short *display = (volatile unsigned short *)0x04000304u;
    volatile unsigned int *window = (volatile unsigned int *)0x04001000u;
    if (obj[73] & 0x2000u) {
        *display = (unsigned short)(*display | 0x8000u);
        unsigned int selected = (*window & 0x1f00u) >> 8;
        unsigned int other = *window & 0xffffe0ffu;
        *window = other | ((selected | 16u) << 8);
        obj[73] &= 0xffffdfffu;
    }
}
