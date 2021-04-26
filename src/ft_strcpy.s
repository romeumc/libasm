global ft_strcpy

ft_strcpy:
	push	rbp			; Function Prologue
	mov		rbp, rsp

	mov		rcx, 0		; rcx = 0
	
loop:
	mov		al, [rsi + rcx]
	mov		[rdi + rcx], al
	cmp		al, 0
	je exit					; if (str[i] == '\0') {exit}
	inc rcx					; rcx++
	jmp loop

exit:
	mov		rsp, rbp	; Function Epilogue
	pop		rbp

	mov		rax, rdi
	ret
