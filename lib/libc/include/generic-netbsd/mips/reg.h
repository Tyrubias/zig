/*	$NetBSD: reg.h,v 1.19 2020/07/26 08:08:41 simonb Exp $	*/

/*
 * Copyright (c) 1988 University of Utah.
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * the Systems Programming Group of the University of Utah Computer
 * Science Department and Ralph Campbell.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * from: Utah Hdr: reg.h 1.1 90/07/09
 *
 *	@(#)reg.h	8.2 (Berkeley) 1/11/94
 */

#ifndef _MIPS_REG_H_
#define	_MIPS_REG_H_


struct reg {
	__register_t	r_regs[38];
};

struct reg32 {
	__register32_t	r_regs[38];
};

struct reg64 {
	__register64_t	r_regs[38];
};

struct fpreg {
	__fpregister_t	r_regs[33];
};

struct fpreg32 {
	__fpregister32_t	r_regs[33];
};

struct fpreg64 {
	__fpregister64_t	r_regs[33];
};

struct dspreg {
	__register_t	r_regs[8];
};

struct dspreg32 {
	__register32_t	r_regs[8];
};

struct dspreg64 {
	__register64_t	r_regs[8];
};

struct fpreg_oabi {
	int32_t		r_regs[33];
};

#endif /*_MIPS_REG_H_*/