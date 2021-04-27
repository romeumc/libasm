global	ft_write
extern	___error

ft_write:
	push	rbp			; Function Prologue
	mov		rbp, rsp
	
	mov		rax, 0x2000004
	syscall
	jc		error

	mov		rsp, rbp	; Function Epilogue
	pop		rbp
	ret

error:
	mov		r8, rax
	call	___error
	mov		[rax], r8
	mov		rax, -1
	ret
