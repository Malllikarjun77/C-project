ABC.exe: big2.o main.o fact.o main.o 
	gcc -o ABC.exe main.o big2.o fact.o
#mathuten.o: mathuten.c
#	gcc -c mathuten.c
main.o: main.c
	gcc -c main.c
big2.o: big2.c
	gcc -c big2.c
fact.o: fact.c
	gcc -c fact.c
clean:
	rm -rf *.o ABC.exe
