#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *Arr = NULL;

    Arr = (int *)malloc(5 * sizeof(int));
    
    Arr = (int *)realloc(Arr,3*sizeof(int));

    free(Arr);
    return 0;
}