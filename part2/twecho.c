/*
 * twecho
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static char **duplicateArgs(int argc, char **argv)
{
	char **cap = malloc(argc * sizeof(char*));
	for (int i=0;i<argc;i++){
		cap[i] = argv[i];
	}
	return cap;
	//int *p;
	//for (int i = 0; i < argc; i++){
	//	cap[i]= 0;
	//}	
}

static void freeDuplicatedArgs(char **copy)
{
	//Free each element
	//for (int i=0; i<10; ++i) {
  	//	free(copy[i]);
	//}
	//Free the whole array
	free(copy);
}

/*
 * DO NOT MODIFY main().
 */
int main(int argc, char **argv)
{
    if (argc <= 1)
        return 1;

    char **copy = duplicateArgs(argc, argv);
    char **p = copy;

    argv++;
    p++;
    while (*argv) {
        printf("%s %s\n", *argv++, *p++);
    }

    freeDuplicatedArgs(copy);

    return 0;
}
