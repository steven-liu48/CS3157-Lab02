isort: twecho.o
	gcc -g -Wall twecho.o -o twecho

isort.o: twecho.c
	gcc -c -g -Wall twecho.c
	
.PHONY: vtest
vtest: twecho
	valgrind --leak-check=yes ./twecho 123 a bc def ghij klmno pqrstu vwxyz

.PHONY: clean
clean:
	rm -f *.o twecho
