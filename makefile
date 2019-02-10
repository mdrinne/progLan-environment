LOPTS = -Wall -Wextra -std=c99
OBJS = lexer.o lexeme.o types.o scanner.o parser.o recognizer.o environment.o test-env.o

make : environment

run : environment test1

environment:
	gcc $(LOPTS) -c test-env.c lexeme.c types.c environment.c
	gcc $(LOPTS) test-env.c lexeme.o types.o environment.o -o test-env

recognizer:
	gcc $(LOPTS) -c recognizer.c lexer.c lexeme.c types.c parser.c
	gcc $(LOPTS) recognizer.c lexer.o lexeme.o types.o parser.o -o recognizer

scanner :
	gcc $(LOPTS) -c scanner.c lexer.c lexeme.c types.c
	gcc $(LOPTS) scanner.c lexer.o lexeme.o types.o -o scanner

test1 :
	./test-env

clean :
	rm -f $(OBJS) scanner recognizer test-env