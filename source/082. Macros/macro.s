	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 4
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2               ## -- Begin function main
LCPI0_0:
	.long	1078523331              ## float 3.1400001
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3
LCPI0_1:
	.quad	4614253070451212288     ## double 3.1400001049041748
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$512, %rsp              ## imm = 0x200
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -452(%rbp)
	movq	l___const.main.nums(%rip), %rax
	movq	%rax, -448(%rbp)
	movq	l___const.main.nums+8(%rip), %rax
	movq	%rax, -440(%rbp)
	movq	l___const.main.nums+16(%rip), %rax
	movq	%rax, -432(%rbp)
	leaq	L_.str(%rip), %rdi
	movl	$6, %esi
	movb	$0, %al
	callq	_printf
	movsd	LCPI0_1(%rip), %xmm0    ## xmm0 = mem[0],zero
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -468(%rbp)        ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -472(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -476(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -480(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movss	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	movss	%xmm0, -456(%rbp)
	movl	$20, -460(%rbp)
	movl	$30, -464(%rbp)
	movl	-460(%rbp), %ecx
	cmpl	-464(%rbp), %ecx
	jle	LBB0_2
## %bb.1:
	movl	-460(%rbp), %eax
	movl	%eax, -484(%rbp)        ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	movl	-464(%rbp), %eax
	movl	%eax, -484(%rbp)        ## 4-byte Spill
LBB0_3:
	movl	-484(%rbp), %eax        ## 4-byte Reload
	leaq	L_.str.4(%rip), %rdi
	movl	%eax, %esi
	movb	$0, %al
	callq	_printf
	movl	-464(%rbp), %ecx
	addl	$1, %ecx
	shll	$1, %ecx
	leaq	L_.str.5(%rip), %rdi
	movl	%ecx, %esi
	movl	%eax, -488(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	leaq	L_.str.7(%rip), %rsi
	movl	%eax, -492(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.8(%rip), %rdi
	leaq	L_.str.9(%rip), %rsi
	movl	%eax, -496(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.10(%rip), %rdi
	leaq	L_.str.11(%rip), %rsi
	movl	%eax, -500(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	movq	-8(%rbp), %rsi
	cmpq	%rsi, %rdx
	jne	LBB0_5
## %bb.4:                               ## %SP_return
	xorl	%eax, %eax
	addq	$512, %rsp              ## imm = 0x200
	popq	%rbp
	retq
LBB0_5:                                 ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__const
	.p2align	4               ## @__const.main.nums
l___const.main.nums:
	.long	1                       ## 0x1
	.long	3                       ## 0x3
	.long	5                       ## 0x5
	.long	6                       ## 0x6
	.long	8                       ## 0x8
	.long	9                       ## 0x9

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"The size of nums is: %d\n"

L_.str.1:                               ## @.str.1
	.asciz	"The value of pi is %f\n"

L_.str.2:                               ## @.str.2
	.asciz	"\n"

L_.str.3:                               ## @.str.3
	.asciz	"My name is Bikalpa"

L_.str.4:                               ## @.str.4
	.asciz	"The maximum is: %d\n"

L_.str.5:                               ## @.str.5
	.asciz	"Double of n + 1 = %d\n"

L_.str.6:                               ## @.str.6
	.asciz	"The current file name is: %s\n"

L_.str.7:                               ## @.str.7
	.asciz	"macro.c"

L_.str.8:                               ## @.str.8
	.asciz	"Right now the date is: %s\n"

L_.str.9:                               ## @.str.9
	.asciz	"Jul  8 2020"

L_.str.10:                              ## @.str.10
	.asciz	"Right now the time is: %s\n"

L_.str.11:                              ## @.str.11
	.asciz	"18:40:09"


.subsections_via_symbols
