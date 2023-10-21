section		.text
	extern	printf
	global	main

main:
	mov		edi, dat
	mov		eax, 0
	call	printf


section		.data
	dat db 'Hello, Holberton', 0xa, 0
