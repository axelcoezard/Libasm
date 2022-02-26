global _ft_strcpy

_ft_strcpy:
	xor rcx, rcx
	jmp _begin

_begin:
	cmp byte [rsi + rcx], 0x0
	je _end
	mov al, [rsi + rcx]
	mov [rdi + rcx], al
	inc rcx
	jmp _begin

_end:
	xor al, al
	mov byte [rdi + rcx], 0x0
	mov rax, rdi
	ret
