isort: twecho.o
	gcc -g -Wall twecho.o -o twecho

isort.o: twecho.c
	gcc -c -g -Wall twecho.c
	
.PHONY: valgrind
valgrind: twecho
	valgrind --leak-check=yes ./twecho 123 abc

.PHONY: clean
clean:
	rm -f *.o twecho
