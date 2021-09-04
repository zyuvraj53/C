	.file	"program-1.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	;------------------------------------------------
	movl	$5, 12(%esp)   ;  a = 5, &a = 12
	movl	$6, 8(%esp)    ;  b = 6, &b = 8
	;-----------------------------------------------
	movl	8(%esp), %eax  ; move b to eax
	addl	%eax, 12(%esp) ; add  b to a
	;-----------------------------------------------
	addl	$1, 12(%esp)  ;add 1 to &a(12)
	movl	$0, %eax			;move 0 to eax
	;----------------------------------------------
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
