lab3: iterativeFibonacci.o recursiveFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o main.o
	gcc -Wall -std=c99 iterativeFibonacci.o recursiveFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o main.o -o lab3
iterativeFibonacci.o: iterativeFibonacci.c header.h
	gcc -Wall -std=c99 -c iterativeFibonacci.c
recursiveFibonacci.o: recursiveFibonacci.c header.h
	gcc -Wall -std=c99 -c recursiveFibonacci.c
iterativeSumNOdd.o: iterativeSumNOdd.c header.h 
	gcc -Wall -std=c99 -c iterativeSumNOdd.c 
recursiveSumNOdd.o: recursiveSumNOdd.c header.h 
	gcc -Wall -std=c99 -c recursiveSumNOdd.c
clean:
	rm *.o lab3