#include<stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.421321;

    printf("Size of character is : %lu \n",sizeof(cValue));
    printf("Size of Integer is : %lu \n",sizeof(iValue));
    printf("Size of Float is : %lu \n",sizeof(fValue));
    printf("Size of Double is : %lu \n",sizeof(dValue));

    printf("Address of character is : %lu \n",&cValue);
    printf("Address of Integer is : %lu \n",&iValue);
    printf("Address of Float is : %lu \n",&fValue);
    printf("Address of Double is : %lu \n",&dValue);

    
    return 0;

}