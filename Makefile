testKY: main.o KY.o unit-test.o
	gcc main.o KY.o unit-test.o -o testKY -lm

main.o: main.c
	gcc -c main.c

KY.o: KY.c
	gcc -c KY.c

unit-test.o: unit-test.c
	gcc -c unit-test.c
