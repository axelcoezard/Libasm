NAME	:= libasm

ASM		:= nasm
CC		:= clang

all: ${NAME}

${NAME}:
	${ASM} -f macho64 ft_strlen.s
	${ASM} -f macho64 ft_write.s
	${CC} main.c ft_strlen.o ft_write.o -o ${NAME}

clean:
	rm ft_strlen.o libasm

re: clean all

.PHONY: all re clean
