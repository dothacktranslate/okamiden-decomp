#pragma thumb on
/* V2 fix: BL func_0201ebe0 returns quotient in r0, REMAINDER in r1.
 * Thus record index is cur % divisor, not the C return of func_0201ebe0.
 */
int func_020429b0(unsigned int *obj, unsigned int alternate) {
    unsigned int *cursor;
    if (alternate) cursor = obj + 4;
    else cursor = obj + 3;
    unsigned int base = alternate ? obj[2] : 0;
    unsigned int cur = *cursor;
    unsigned int end = cur + obj[2];
    if (cur >= end) return -1;
    unsigned char *records = (unsigned char *)obj[1];
    do {
        unsigned int index = cur % obj[2];
        unsigned int *entry = (unsigned int *)(records + ((base + index)) * 188);
        if (entry[2] == 0 && entry[29] == 0) {
            *cursor = (cur + 1) & 0x7fffu;
            return (int)(cur & 0x7fffu);
        }
        cur++;
    } while (cur < end);
    return -1;
}
