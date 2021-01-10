	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 0
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movq	L___const.main.c1(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	L___const.main.c1+8(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	L___const.main.c2(%rip), %rax
	movq	%rax, -32(%rbp)
	movq	L___const.main.c2+8(%rip), %rax
	movq	%rax, -24(%rbp)
	movsd	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-8(%rbp), %xmm1         ## xmm1 = mem[0],zero
	movsd	-32(%rbp), %xmm2        ## xmm2 = mem[0],zero
	movsd	-24(%rbp), %xmm3        ## xmm3 = mem[0],zero
	callq	_add
	movsd	%xmm0, -80(%rbp)
	movsd	%xmm1, -72(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-8(%rbp), %xmm1         ## xmm1 = mem[0],zero
	movsd	-32(%rbp), %xmm2        ## xmm2 = mem[0],zero
	movsd	-24(%rbp), %xmm3        ## xmm3 = mem[0],zero
	callq	_multiply
	movsd	%xmm0, -96(%rbp)
	movsd	%xmm1, -88(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-88(%rbp), %rax
	movq	%rax, -56(%rbp)
	movsd	-48(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-40(%rbp), %xmm1        ## xmm1 = mem[0],zero
	callq	_print
	movsd	-64(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-56(%rbp), %xmm1        ## xmm1 = mem[0],zero
	callq	_print
	xorl	%eax, %eax
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal16,16byte_literals
	.p2align	3               ## @__const.main.c1
L___const.main.c1:
	.quad	4607182418800017408     ## double 1
	.quad	4611686018427387904     ## double 2

	.p2align	3               ## @__const.main.c2
L___const.main.c2:
	.quad	4617878467915022336     ## double 5.5
	.quad	4619229547803233485     ## double 6.7000000000000002

.subsections_via_symbols
