global	_ft_strdup
extern	_malloc, _ft_strlen, _ft_strcpy
default	rel	

_ft_strdup:
	call	_ft_strlen		; Get length of the string pointed by rdi
	inc		rax				; len++, to count the \0 charater

	push	rdi				; Save the pointer of the stirng on the stack
	mov		rdi, rax		; Set the arg for malloc
	call	_malloc			; Get the allocated space in rax

	pop		rsi				; Get back the pointer of the string as the 2nd arg
	mov		rdi, rax		; Store the malloced address as the 1st arg

	call	_ft_strcpy		; Store the string from rsi (src) into rdi (dest)

	ret
