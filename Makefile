CC=gcc
CFLAGS=-Wall -Wextra -Werror -g
DEBUGFLAGS = -g
RELEASEFLAGS = -O2 -DNDEBUG
all: hello sumatoria operaciones
hello: hello.c
	$(CC) $(CFLAGS) -o $@ $<
sumatoria: sumatoria.c
	$(CC) $(CFLAGS) -o $@ $<
operaciones: operaciones.c
	$(CC) $(CFLAGS) -o $@ $<
release: 
	$(CC) $(CFLAGS) $(RELEASEFLAGS) hello.c -o hello
	$(CC) $(CFLAGS) $(RELEASEFLAGS) sumatoria.c -o sumatoria
	$(CC) $(CFLAGS) $(RELEASEFLAGS) operaciones.c -o operaciones
clean:
	rm -f hello sumatoria operaciones
format:
	clang-format -i *.c *.h
