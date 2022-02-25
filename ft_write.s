; /Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/sys/syscall.h

global _ft_write

_ft_write:
	mov rax, 0x2000004
	syscall
	ret
