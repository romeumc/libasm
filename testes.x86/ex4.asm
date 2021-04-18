; loop que duplica o numero 1 por 6 vexes

global _start

section .text
_start:
	mov	ebx, 1	; ebx = 1
	mov ecx, 6	;number of iterations

label:
	add ebx, ebx	; ebx += ebx (dobling ebx diferente de ebx++)
	dec	ecx			; ecx -= 1 (decrement, more efficent than SUB)
					; inc (increment)
	cmp	ecx, 0		; compare ecx with 0
	jg	label		; jump to label if greater
	mov	eax, 1		; sys_exit system call
	int 0x80