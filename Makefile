
run: compile
	./main

compile: utils.o
	gcc -o main main.c utils.o

utils.o:
	gcc -c libraries/utils.c

clean:
	rm main.exe utils.o
