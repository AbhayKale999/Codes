#include<stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 20;

    //Below lines generates errors
    
    iNo1++;
    iNo2++;

    iNo2 = 20;



    return 0;
}