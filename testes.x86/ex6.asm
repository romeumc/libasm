global _start

_start:
	sub esp, 4	;allocate 4 bytes in memory
	mov [esp], byte 'H'
	mov [esp+1], byte 'e'
	mov [esp+2], byte 'y'
	mov [esp+3], byte '!'
	mov eax, 4		; sys_write
	mov ebx, 1		; stdout fd
	mov	ecx, esp	; pointer to the bytes to be written
	mov edx, 4		; number of bytes to write to stdout (ebx=1)
	int 0x80
	mov eax, 1		;sys_exit
	mov ebx, 0		; exit status = 0 (OK)
	int 0x80