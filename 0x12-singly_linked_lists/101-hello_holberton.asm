section		.text
	extern	printf
	global	main

main:
	mov		edi, str
	mov		eax, 0
	call	printf

section		.data
	str db 'Hello, Holberton', 0xa, 0
