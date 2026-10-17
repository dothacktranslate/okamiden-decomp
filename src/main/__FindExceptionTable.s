/* GAP0013: 0x02021B58..0x02021B78 (32 ARM bytes).
 * Two separate exception-table linker symbols, even if currently colocated.
 */
.syntax unified
.cpu arm946e-s
.arm
.section .text,"ax",%progbits
.balign 4
.global __FindExceptionTable
.type __FindExceptionTable,%function
__FindExceptionTable:
    ldr r2, .Ltable_start
    ldr r1, .Ltable_end
    str r2, [r0, #12]
    str r1, [r0, #16]
    mov r0, #1
    bx lr
.Ltable_start:
    .word __exception_table_start__
.Ltable_end:
    .word __exception_table_end__
.size __FindExceptionTable, .-__FindExceptionTable
