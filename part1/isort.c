#include <stdio.h>
#include <limits.h>

int main(int argc, const char* argv[]){
	int size;
	//Ask users for the size of the array
	printf("Please input the size of the arrays: ");
	scanf("%d", &size);

	//Create three arrays with the specified size
	int *array = (int *) malloc(size * sizeof(int));
	int *asc = (int *) malloc(size * sizeof(int));
	int *des = (int *) malloc(size * sizeof(int));
	
    // malloc returns NULL if it cannot allocate the requested memory
    if (array == NULL) {
        perror("malloc failed");
		exit(1); 
	}
	if (asc == NULL) {
        perror("malloc failed");
        exit(1);
    }
	if (des == NULL) {
        perror("malloc failed");
        exit(1);
    }

			
    //Assign random numbers into the array
	srandom();
    for (int i = 0; i < size; i++){
		array[i] = random()%100 + 1;
		printf("%d ", array[i]);
	}

	//Quick sort the two copies 
	for (int i = 0; i < size; i++){
        asc[i] = array[i];
  		des[i] = array[i];
    }
	int ascend( const void* a, const void* b)
	{	
    	int int_a = * ( (int*) a );
    	int int_b = * ( (int*) b );

		if ( int_a == int_b ) return 0;     
		else if ( int_a < int_b ) return -1;
		else return 1;
	}
	int descend( const void* a, const void* b)
    {
        int int_a = * ( (int*) a );
        int int_b = * ( (int*) b );

        if ( int_a == int_b ) return 0;
        else if ( int_a > int_b ) return -1;
        else return 1;
    }
	qsort(asc, size, sizeof(int), ascend);
	qsort(des, size, sizeof(int), descend);

	//Print out
	printf("\n");
	for (int i = 0; i < size; i++){
        printf("%d ", asc[i]);
    }
	printf("\n");
    for (int i = 0; i < size; i++){
        printf("%d ", des[i]);
    }

	//Free
	free(array);
	free(asc);
	free(array);
}

