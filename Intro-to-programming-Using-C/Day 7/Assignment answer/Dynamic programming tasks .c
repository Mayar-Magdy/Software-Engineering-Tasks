#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* // demo
    malloc: This function allocates a block of memory of the specified size and returns a pointer to it. The memory is not initialized and may containgarbage values.
    how to use ? malloc(n * sizeof( ur-datatypy))
    calloc: This function allocates memory for an array of elements, each of them with a specified size, and initializes all bits to zero
    how to use ?  calloc(n, sizeof(ur-datatypy))
    realloc: This function changes the size of the memory block pointed to by a given pointer. It can expand or reduce the size
    how to use ?   realloc(ptr-name, new-sz * (ur-datatypy))
    free: This function deallocates the memory previously allocated by malloc, calloc, or realloc. This frees up the memory for other uses and prevents memory leaks.
     how to use ?  free(ptr-name)

*/
    int *ptr;  // make (int)pointer
    int sz = 10;
    ptr = (int*) malloc(sz * sizeof(int)); // ||calloc(sz, sizeof(int)); // ro7 e7gaz el sz da fe memory
    if (ptr == NULL) { // low msh byshaor 3 7aga
        printf("Memory not allocated\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated\n");
       for (int i = 0; i < sz; i++) // loop on them
             ptr[i] = i + 1;  // hassign val
    printf("The values of the array elements are:\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    //  realloc
    ptr = (int*) realloc(ptr, 2 * sz * sizeof(int)); //changes the size
    if (ptr == NULL) {
        printf("Memory not reallocated\n");
        exit(0);
    }
    else
        printf("Memory successfully reallocated \n");



    for (int i = sz; i < 2 * sz; i++) { // loop on new sz
        ptr[i] = i + 1;
    }
    printf("The values of the array elements are:\n");
    for (int i = 0; i < 2 * sz; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // free
    free(ptr); //deallocates
    printf("Memory successfully freed using free.\n");
    }
}
