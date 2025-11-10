// cpu.h
#ifndef CPU_H
#define CPU_H

#include <stdint.h>

// CPU register definitions
#define CR0_PE  0x00000001 // Protected Mode Enable

// Function prototypes for CPU operations
void enable_protected_mode();

#endif