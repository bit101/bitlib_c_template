CC := clang
WARN := -Wno-unused-command-line-argument
CFLAGS := `pkg-config --cflags gtk+-3.0`
CLIBS := `pkg-config --libs gtk+-3.0`

default: main
	@./main

main: main.c
	@$(CC) $(WARN) $(CFLAGS) main.c -Iinclude libs/bitlib.a -o main -lm $(CLIBS)

clean:
	@rm -f main
