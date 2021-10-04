CC = gcc
Flags = -Wall -Werror -Wextra

make:
	$(CC) $(Flags) *.c

clean: a.out
	rm a.out