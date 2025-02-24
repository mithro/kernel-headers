/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2012 Regents of the University of California
 */

#ifndef _ASM_RISCV_SIGCONTEXT_H
#define _ASM_RISCV_SIGCONTEXT_H

#include <asm/ptrace.h>

/*
 * Signal context structure
 *
 * This contains the context saved before a signal handler is invoked;
 * it is restored by sys_sigreturn / sys_rt_sigreturn.
 */
struct sigcontext {
	struct user_regs_struct sc_regs;
	union __riscv_fp_state sc_fpregs;
};

#endif /* _ASM_RISCV_SIGCONTEXT_H */
