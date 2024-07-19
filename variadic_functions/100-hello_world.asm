; 100-hello_world.asm
; This program prints "Hello, World" to the standard output and exits.

section .data
	hello db 'Hello, World', 0x0A  ; The string to print with a newline character at the end
	hello_len equ $ - hello        ; The length of the string

section .text
	global _start

_start:
	; Write "Hello, World" to stdout
	mov rax, 1          ; syscall number for sys_write
	mov rdi, 1          ; file descriptor 1 is stdout
	mov rsi, hello      ; pointer to the hello message
	mov rdx, hello_len  ; length of the message
	syscall             ; invoke operating system to do the write

	; Exit the program
	mov rax, 60         ; syscall number for sys_exit
	xor rdi, rdi        ; exit code 0
	syscall             ; invoke operating system to exit
