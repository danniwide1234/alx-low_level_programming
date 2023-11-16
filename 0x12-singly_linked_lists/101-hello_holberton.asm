section .data
	hello_message db "Hello, Holberton", 0

section .text
	global main

	extern printf

main:
	push rbp                  ; Save the base pointer
	mov rdi, hello_message    ; Set the format string
	call printf               ; Call printf
	pop rbp                   ; Restore the base pointer
	ret
