global ft_strlen

ft_strlen:
	push	rbp			; Function Prologue
	mov		rbp, rsp

	mov		rcx, 0
	
loop:
	cmp BYTE[rdi + rcx], 0
	je exit
	inc rcx
	jmp loop

exit:
	mov		rsp, rbp	; Function Epilogue
	pop		rbp

	mov		rax, rcx
	ret
