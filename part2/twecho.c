/*
 * twecho
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static char **duplicateArgs(int argc, char **argv)
{
	//malloc argc+1 elements for the array
	char **cap = malloc(((argc) + 1) * sizeof(char*));  //??????
	//printf("%ld \n", sizeof(cap)); //??????Why is it always 8
	//printf("%d \n", argc); //# of all elements except for null
	//printf("%ld \n", sizeof(char*));//8 for sure

	//malloc strlen+1 places for each string
	for (int i=0;i<argc;i++){
		//cap[i] = argv[i];
		cap[i] = malloc((strlen(argv[i]) + 1) * sizeof(char));
		for (int j=0;j<strlen(argv[i]);j++){
			cap[i][j] = toupper(argv[i][j]);
		}
		cap[i][strlen(argv[i])] = '\0';
		
	}
	cap[argc] = NULL;
	//printf("DUPLICATE");
	return cap;
	//int *p;
	//for (int i = 0; i < argc; i++){
	//	cap[i]= 0;
	//}	
}

static void freeDuplicatedArgs(char **copy)
{
	int i = 0;
	//printf("freeDuplicatedArgs: size is %ld \n", sizeof(copy));
	//Free each elementi
	while (copy[i] != NULL) {     //????????
  		//printf("%d %s \n", i, copy[i]);
		free(copy[i]);
		i++;
	}
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
