global _ft_strlen

_ft_strlen:
	push	rbp			; Function Prologue
	mov		rbp, rsp

	mov		rcx, 0		; rcx = 0
	
loop:
	cmp		BYTE[rdi + rcx], 0
	je		exit				; if (str[i] == '\0') {exit}
	inc		rcx					; rcx++
	jmp		loop

exit:
	mov		rax, rcx
	
	mov		rsp, rbp	; Function Epilogue
	pop		rbp
	ret
