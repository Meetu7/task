/*Swapping using third variables..*/
#include<stdio.h>
int main()
{
    int M1,M2,temp;

    printf("Enter the two numbers...!");
    scanf("%d%d",&M1,&M2);

    printf("\nBefore first numbers M1..=%d\nsecond number M2..=%d",M1,M2);

    temp=M1;
    M1=M2;
    M2=temp;

    printf("\nAfter first numbers M1..=%d\nsecond number M2..=%d",M1,M2);

    return 0;
}