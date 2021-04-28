global	_ft_write
extern	___error

_ft_write:
	; push		rbp			; Function Prologue
	; mov		rbp, rsp
	
	mov		rax, 0x2000004
	syscall
	jc		error			; jump if flag carry

	; mov		rsp, rbp	; Function Epilogue
	; pop		rbp
	ret

error:
	mov		rdx, rax
	call	___error
	mov		[rax], rdx
	mov		rax, -1
	ret
