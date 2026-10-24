typedef unsigned char u8;
typedef unsigned int u32;
typedef struct RecoveryOutput {
    u32 count;
    u8 *write;
    u8 scratch[4104];
} RecoveryOutput;
/* Fails compilation if compiler's structure size differs from the reference. */
typedef char require_4112_byte_frame[(sizeof(RecoveryOutput)==4112)?1:-1];
extern u8 *func_02047988(void *,u32,u32 *);
extern void func_0204815c(void *,u8 **);
extern void func_02047ff0(u8 **);
extern void func_02048094(u8 **);
u32 func_02050258(void *ctx) {
    RecoveryOutput state;
    u8 *input=func_02047988(ctx,1,&state.count);
    func_0204815c(ctx,&state.write);
    u8 *end=state.scratch+sizeof(state.scratch);
    while (state.count--) {
        if (state.write >= end) func_02047ff0(&state.write);
        *state.write++ = (u8)((signed char *)input)[state.count];
    }
    func_02048094(&state.write);
    return 1;
}
