global _ft_strcpy

_ft_strcpy:
	xor		rcx, rcx
	jmp		_begin

_begin:
	cmp 	byte [rsi + rcx], 0x0
	jz		_end
	mov 	cl, [rsi + rcx]
	mov 	[rdi + rcx], cl
	inc 	rcx
	jmp 	_begin

_end:
	xor		cl, cl
	mov 	byte [rdi + rcx], 0x0
	mov 	rax, rdi
	ret
