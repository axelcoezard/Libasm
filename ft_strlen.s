global _ft_strlen

_ft_strlen:
	mov rax, 0x0
	jmp _begin

_begin:
	cmp BYTE [rdi + rax], 0x0
	je _end
	inc rax
	jmp _begin

_end:
	ret
