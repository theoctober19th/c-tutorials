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
	subq	$208, %rsp
	xorl	%eax, %eax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
	movl	$0, -180(%rbp)
	leaq	-64(%rbp), %rcx
	movq	%rcx, %rdi
	movl	%eax, %esi
	movl	$50, %edx
	movl	%eax, -184(%rbp)        ## 4-byte Spill
	callq	_memset
	leaq	-176(%rbp), %rcx
	movq	%rcx, %rdi
	movl	-184(%rbp), %esi        ## 4-byte Reload
	movl	$100, %edx
	callq	_memset
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-64(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -188(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	-176(%rbp), %rdi
	leaq	L_.str.2(%rip), %rsi
	movl	$100, %edx
	movl	%eax, -192(%rbp)        ## 4-byte Spill
	callq	___strcat_chk
	leaq	-64(%rbp), %rsi
	leaq	-176(%rbp), %rdi
	movl	$100, %edx
	movq	%rax, -200(%rbp)        ## 8-byte Spill
	callq	___strcat_chk
	leaq	-176(%rbp), %rsi
	leaq	L_.str.3(%rip), %rdi
	movq	%rax, -208(%rbp)        ## 8-byte Spill
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	jne	LBB0_2
## %bb.1:                               ## %SP_return
	xorl	%eax, %eax
	addq	$208, %rsp
	popq	%rbp
	retq
LBB0_2:                                 ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Enter your username: "

L_.str.1:                               ## @.str.1
	.asciz	"%s"

L_.str.2:                               ## @.str.2
	.asciz	"C:\\Users\\"

L_.str.3:                               ## @.str.3
	.asciz	"Your home directory is: %s\n"

.subsections_via_symbols
