project: KY
	./KY

KY: mainKY.o KY.o
	gcc mainKY.o KY.o -o KY -lm

test: testKY
	./testKY

testKY: main.o KY.o unit-test.o
	gcc main.o KY.o unit-test.o -o testKY -lm

mainKY.o: mainKY.c
	gcc -c mainKY.c

main.o: main.c
	gcc -c main.c

KY.o: KY.c
	gcc -c KY.c

unit-test.o: unit-test.c
	gcc -c unit-test.c
