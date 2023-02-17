#include<stdio.h>
int main()
{
    int i;

    printf("Enter your marks ::");
    scanf("%d",&i);

    if(i >= 90)
    {
        printf("Gread A");
    }
    else if (i >=80)
    {
        printf("Gread B");
    }
    else if(i >=70)
    {
        printf("Gread C");
    }
    else if(i >=60)
    {
        printf("Gread D");
    }
    else if( i>=45)
    {
        printf("Gread E");
    }
    else 
    {
        printf("fail");
    }
    
    return 0;
}