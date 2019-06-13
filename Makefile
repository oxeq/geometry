all: bin/geometry

bin/geometry: build/src/main.o build/src/check_correct.o
	gcc -Wall -Werror build/src/main.o build/src/check_correct.o -o bin/geometry -lm

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/check_correct.o: src/check_correct.c
	gcc -Wall -Werror -c src/check_correct.c -o build/src/check_correct.o



.PHONY: clean
clean: 
	rm -rf build/src/*.o bin/geometry	