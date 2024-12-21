
run: compile
	./main

compile: utils.o userlib.o 
	gcc -o main main.c utils.o

utils.o:
	gcc -c libraries/utils.c
userlib.o:
	gcc -c libraries/userlib/userlib.c 
clean:
	rm main.exe utils.o userlib.o
