global _ft_strcmp

_ft_strcmp:
	push	rbp			; Function Prologue
	mov		rbp, rsp

	mov		rcx, 0		; counter = 0
	mov		rdx, 0		; temp = 0
	mov		r8, 0		; s1 = 0
	mov		r9, 0		; s2 = 0

loop:
	mov r8b, BYTE[rdi + rcx]
	mov r9b, BYTE[rsi + rcx]

	mov rdx, r8			; temp = s1
	sub	rdx, r9			; temp = temp - s2
	cmp rdx, 0			; if (temp.rdx == s2)
	jnz		exit

	cmp		r8b, 0		; if (s1 == '\0')
	jz		exit
	
	cmp		r9b, 0		; if (s2 == '\0')
	jz		exit

	inc		rcx			; counter++;
	jmp		loop		; Loop

exit:
	mov		rax, rdx	; return value of diference (temp)
	
	mov		rsp, rbp	; Function Epilogue
	pop		rbp
	ret