#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the Number of Elements: \n");
    scanf("%d",&length);

    Arr = (int *)calloc(length , sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        "Memory gets Succesfully allocated\n";
    }
    free(Arr);

    return 0;
}