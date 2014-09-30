all:
	gcc -Wall pells_eq.c -o pells
clean:
	rm -rf pells *.o *~
