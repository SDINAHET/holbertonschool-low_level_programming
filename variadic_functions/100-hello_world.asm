; 100-hello_world.asm
; This program prints "Hello, World" followed by a newline and exits.
;
; Assembling:
;   nasm -f elf64 100-hello_world.asm -o 100-hello_world.o
;
; Linking:
;   ld -o hello 100-hello_world.o
; or
;   gcc -no-pie -std=gnu89 100-hello_world.o -o hello
;
; Running:
;   ./hello for gcc and ./100-hello_world for ld

section .data
	hello db 'Hello, World', 0x0A	; Define the string with a newline character
	hello_len equ $ - hello		; Calculate the length of the string

section .text
	global _start			; Define the entry point for the program

_start:
	; Write "Hello, World" to stdout
	mov rax, 1			; Syscall number for sys_write (1)
	mov rdi, 1			; File descriptor 1 is stdout
	mov rsi, hello			; Address of the string to output
	mov rdx, hello_len		; Length of the string
	syscall				; Invoke the syscall to write the string

	; Exit the program
	mov rax, 60			; Syscall number for sys_exit (60)
	xor rdi, rdi			; Exit code 0 (no error)
	syscall				; Invoke the syscall to exit
