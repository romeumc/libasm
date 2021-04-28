global	_ft_read
extern	___error

_ft_read:
	; push		rbp			; Function Prologue
	; mov		rbp, rsp
	
	mov		rax, 0x2000003
	syscall
	jc		error

	; mov		rsp, rbp	; Function Epilogue
	; pop		rbp
	ret

error:
	mov		rdx, rax
	call	___error
	mov		[rax], rdx
	mov		rax, -1
	ret



; extern ___error
; section .data
; section .bss
; section .text
; 		global _ft_read
; _ft_read:
; 		push rbp
; 		mov rbp,rsp

; 		mov rax, 0x02000003
; 		syscall
		
; 		jc _error
; 		jmp _return
; _error:
; 		mov r8, rax
; 		call ___error		
; 		mov [rax], r8
; 		mov rax, -1
; 		jmp _return
; _return:
; 		mov rsp,rbp
; 		pop rbp

; 		ret
