/*	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret*/

/*hello hoberton*/

global main
	extern printf

	section .text

main:
	mov rdi, format
	mov rax, 0
	call printf
	mov rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0

