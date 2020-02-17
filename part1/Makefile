isort: isort.o
	gcc -g -Wall isort.o -o isort

isort.o: isort.c
	gcc -c -g -Wall isort.c
	
.PHONY: valgrind
valgrind: isort
	valgrind --leak-check=yes ./isort

.PHONY: clean
clean:
	rm -f *.o isort
