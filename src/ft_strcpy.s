global ft_strcpy

ft_strcpy:
	push	rbp			; Function Prologue
	mov		rbp, rsp

	mov		rcx, 0		; rcx = 0
	
loop:
	mov		al, [rsi + rcx]		; temp = src[i]
								; use al to save only the least significat byte
	mov		[rdi + rcx], al		; dest[i] = temp
	cmp		al, 0
	je exit					; if (temp == '\0') {exit}
	inc rcx					; rcx++
	jmp loop

exit:
	mov		rsp, rbp	; Function Epilogue
	pop		rbp

	mov		rax, rdi
	ret
