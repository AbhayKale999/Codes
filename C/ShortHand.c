#include<stdio.h>

int main()
{
    int i = 10;
    int j = 10;

    int iAns = 0 , jAns = 0;

    iAns = i++;
    jAns = ++j;

    printf("Value of i :%d \n",i);
    printf("Value of iAns : %d\n",iAns);

    printf("Value of j :%d \n",j);
    printf("Value of jAns : %d \n",jAns);

    return 0;
}